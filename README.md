# MiniProto

## 1、需求说明

  google的protobuf大家都知道，本人在使用的过程中，遇到一些protobuf不能满足本人实际开发需求的情况：

（1）、希望枚举能支持常量表达式。

  比如，对于一些状态类的枚举，经常会需要这样写：

```c
enum XXX  
{  
    免疫物理攻击 = 1;  
    免疫魔法攻击 = 免疫物理攻击 << 1;  
  
    免疫buff = 免疫魔法攻击 << 1;  
    免疫debuff = 免疫buff << 1;  
  
    免疫攻击 = 免疫物理攻击 | 免疫魔法攻击  
    无敌 = 免疫物理攻击 | 免疫魔法攻击 | 免疫debuff;  
} 
```
protobuf中这种枚举只能手算，而且一但需要改变某一个枚举项的值的时候，与其关联的其他枚举项全部得重算。

更蛋疼的是由于protobuf中枚举项后面跟的都是值，所以你很可能已经看不出来，已经不记得 哪些枚举项是有关联的了。

尤其是当写枚举的人辞职了，由其他人接手的时候，满满的都是坑。

（2）、希望message中内存分配能自主管理。

这个仅限c++语言。c++程序员的通病，就是喜欢我的内存我做主。

（3）、希望message的成员字段支持常用容器。

希望支持vector，set，map。这应该算是所有程序员的通病：懒。。。什么都希望提供好，直接调调就好。

## 2、支持的语言

支持生成c++，c#，java，这3种语言的代码。

本人主要是做游戏开发的。游戏服务器一般是c++，客户端一般是U3D，是c#，游戏平台/官网/运维工具/GM工具/接第三方渠道等这一系列的服务一般是java。因此仅支持了这3种语言。

## 3、未支持反射

protobuf里面的反射，个人觉得比较有用处的地方在于，设计网络传输协议的时候，可以不用单独设计协议号，可以用message的名字作为协议号，接收端先接受一个字符串，然后根据这个字符串，反射创建对应的message结构。

单独设计协议号的缺点在于，协议号我们一般是用枚举表示，那么当你增加枚举项（协议号）的时候，就会出现：

（1）要么新枚举加在最后，这样不同功能模块的协议号混杂，不利于维护。

（2）要么，枚举中间增加了一项。导致其后的其他项的值会发生变动，导致相应的逻辑功能与协议号就对不上，不得不发新版本。

但是这个缺点是有其他解决办法的：也就是一开始做好规划，对不同模块的协议号分配了不同的数值区间段，同一个功能模块的协议放在一起，加协议就加在该区间段的最后。

但是，对于网游的的网络协议设计，尤其是移动端的网游，还要考虑流量的问题的，传一个数字，显然要比传一个字符串节省很多。

逻辑中做一个map，将每个数字（即协议号）和对应的协议的处理函数做映射，也不是很费劲的事。

所以反射对于我们游戏开发来说，是一个锦上添花，但不是一个必不可少的功能。而且反射毕竟还是需要一点效率上的开销的。至少匹配一个字符串，远没有匹配一个数字快。

## 4、proto文件

对于消息结构/枚举，同样也是写proto文件。

文件名应为xxx.xxx.proto。不支持稀奇古怪的文件名，文件名不支持除0-9，a-z，A-Z，_（下划线），.（点）之外的其他特殊字符

.proto其实就是一个文本文件，文件中的语法参考protobuf的语法来。

## 5、支持的proto语法

（1）、package关键字

同protobuf。

对于c++/c#，package关键字指明生成的结构的namespace。

对于java，package关键字指明生成的文件的package。

（2）、import关键字

同protobuf。

用于指明该proto文件中引用了其他哪些proto文件中的message/enum。用于生成c++代码时对应include头文件

不过这里的import逻辑实现的比较简单，只支持文件名，不可以带路径。也就是说只识别import “xx.xx.proto”，不支持 import "../xxx.proto"，或者import “X:/xx/xx/xxx.proto”。

当然生成好的c++代码文件，你可以按你想要的路径放，只要你项目附加正确的包含目录就可以。c#，和java没有c++的include这个概念，只要using/import相应的namespace/package就好，所以没影响。

（3）、enum。

枚举的定义有区别于protobuf。

protobuf2.0要求，每个枚举值必须定义一个常量，枚举如果有重复的值，需要写明option allow_alias = true。而3.0又要求，枚举第一项必须为0。实在无力吐槽这些规定。

miniproto解放了这些规定，本人因为更习惯于c++的语法，因此支持你就按照c++的习惯去写（因此同时也就不再支持option allow_alias = true这样的写法了）：

枚举项后面可以不用写 "= XXX"，对于未定义值的枚举项，就按c++规则来：如果是第一项，默认为0，否则为上一项的值+1。

枚举项后面可以写一个常量表达式。也就是说你可以写 XXX = 1 + 2 - 3 * 4等等，支持的运算符包括：()，+，-，*，/，%，<<，>>，|，&。 运算符优先级按c标准来。常量表达式中同样支持在此之前已经定义过的本枚举中的其他枚举项，或另一个枚举的枚举项。

ps：

表达式每一步的计算结果均按uint32计算，即对于 3 / 2 * 2 这样的表达式，计算结果为2，不是3。

如果计算出来除数为0的情况，该步除法计算结果按0算（同时会给出提示），即 4 / 0这样的表达式，计算结果为0。

如果该常量表达式不合法，比如括号不匹配，出现了不支持的运算符，不识别的枚举项，则视为未定义值，按上一项的值+1计算，首项不合法则按0算（同时会给出提示）。

（4）、message

自定义结构的定义有区别于protobuf。

protobuf中message是可以定义 内部message/内部enum 的，比如 message A { message B { enum C {}}}。miniproto未支持该语法。

protobuf中message成员字段是可以定义默认值的，比如 optional int32 result = 3 [default = 1]。miniproto未支持该语法（貌似protobuf3.0同样取消该特性）。

protobuf中message成员字段是可以定义为废弃的，比如 optional int32 old = 6 [deprecated=true]。miniproto未支持该语法。

protobuf中的组：group。miniproto未支持该语法（protobuf2.0即已废弃该特性）。

protobuf中的扩展：extensions。miniproto未支持该语法。

protobuf中的保留标识：reserved。miniproto未支持该语法。

protobuf中的自定义选项：option。miniproto未支持该语法。

（5）、其他

其他的比如：

Service，protobuf中的RPC服务接口，miniproto未支持该语法。

Options，protobuf中的各种选项，miniproto未支持该语法。

其他杂七杂八的特性，以上未提到的，不支持。

`下面看miniproto支持哪些：`

（1）、字段类型：<br>
required，optional，repeated，array，hashset，set，hashmap，map，可以不填（不填默认为optional）。<br>
你可以写<br>
```c++
array<int32> xxx = 1;
hashset<int32> xxx = 2;
set<int32> xxx = 3;
hashmap<int32, int32> xxx = 4;
map<int32, int32> xxx = 5;
```
其中array就是repeated的另一种写法，相当于c++的vector，只是为了和set，map的写法统一。<br>
这些类型的编码规则同protobuf（array，hashset，set和repeated是同样规则）。

（2）、数据类型：<br>
bool，int32，sint32，uint32，sfixed32，fixed32，int64，sint64，uint64，sfixed64，fixed64，enum，float，double，string，message。

（3）、对于repeated，array，hashset，set，hashmap，map数据类型，均支持[packed = true]。<br>
编码方式同样支持protobuf2.0 和 protobuf3.0 两种不同的编码方式。<br>
protobuf2.0的话，容器类字段就按是否[packed = true]来。<br>
protobuf3.0的话，则默认全部为[packed=true]。<br>
`PS：对于string，bytes，message这3种类型的数据，即按LengthDelimited方式编码的字段，同样支持packed = true的。（这里protobuf2.0貌似是不支持的，3.0有没有支持没再研究)`

（4）、对于hashset，set，hashmap，map的key。<br>
仅支持 int32，sint32，uint32，int64，sint64，uint64，sfixed32，fixed32，sfixed64，fixed64，string 这几种类型。<br>
bool只有两种值，做key没有意义。<br>
枚举的值不确定，甚至有可能只有1个值，做key也没有意义。<br>
浮点数的比较，存在精度的问题，1.0000000和1.0000001，可能是相等的，做key使用的话，逻辑上说不通。<br>
自定义message，需要上层逻辑提供operator<，也就没再支持。

（5）、每种数据类型对应c++，c#，java类型对照表
<table>
	<tr>
		<td>
			字段类型
		</td>
		<td>
			对应c++数据类型
		</td>
		<td>
			对应c#数据类型
		</td>
		<td>
			对应java数据类型
		</td>
	</tr>
	<tr>
		<td>
			bool
		</td>
		<td>
			bool
		</td>
		<td>
			bool
		</td>
		<td>
			普通字段：bool，容器元素：Boolean
		</td>
	</tr>
	<tr>
		<td>
			int32
		</td>
		<td>
			int
		</td>
		<td>
			int
		</td>
		<td>
			普通字段：int，容器元素：Integer
		</td>
	</tr>
	<tr>
		<td>
			int64
		</td>
		<td>
			long long
		</td>
		<td>
			long
		</td>
		<td>
			普通字段：long，容器元素：Long
		</td>
	</tr>
	<tr>
		<td>
			sint32
		</td>
		<td>
			int
		</td>
		<td>
			int
		</td>
		<td>
			普通字段：int，容器元素：Integer
		</td>
	</tr>
	<tr>
		<td>
			sint64
		</td>
		<td>
			long long
		</td>
		<td>
			long
		</td>
		<td>
			普通字段：long，容器元素：Long
		</td>
	</tr>
	<tr>
		<td>
			uint32
		</td>
		<td>
			unsigned int
		</td>
		<td>
			uint
		</td>
		<td>
			普通字段：int，容器元素：Integer
		</td>
	</tr>
	<tr>
		<td>
			uint64
		</td>
		<td>
			unsigned long long
		</td>
		<td>
			ulong
		</td>
		<td>
			普通字段：long，容器元素：Long
		</td>
	</tr>
	<tr>
		<td>
			enum
		</td>
		<td>
			enum
		</td>
		<td>
			enum
		</td>
		<td>
			普通字段：int，容器元素：Integer
		</td>
	</tr>
	<tr>
		<td>
			float
		</td>
		<td>
			float
		</td>
		<td>
			float
		</td>
		<td>
			普通字段：float，容器元素：Float
		</td>
	</tr>
	<tr>
		<td>
			double
		</td>
		<td>
			double
		</td>
		<td>
			double
		</td>
		<td>
			普通字段：double，容器元素：Double
		</td>
	</tr>
	<tr>
		<td>
			string/bytes
		</td>
		<td>
			std::basic_string
		</td>
		<td>
			string
		</td>
		<td>
      String
		</td>
	</tr>
	<tr>
		<td>
			message
		</td>
		<td>
			ProtoBase子类
		</td>
		<td>
			ProtoBase子类
		</td>
		<td>
			ProtoBase子类
		</td>
	</tr>
	<tr>
		<td>
			repeated
		</td>
		<td>
			std::vector
		</td>
		<td>
			System.Collections.Generic.IList
		</td>
		<td>
			java.util.List
		</td>
	</tr>
	<tr>
		<td>
			set
		</td>
		<td>
			std::set
		</td>
		<td>
			System.Collections.Generic.ISet
		</td>
		<td>
			java.util.Set
		</td>
	</tr>
	<tr>
		<td>
			map
		</td>
		<td>
			std::map
		</td>
		<td>
			System.Collections.Generic.IDictionary
		</td>
		<td>
			java.util.Map
		</td>
	</tr>
</table>

（6）、miniproto是支持自己管理内存的：<br>
首先对于单一字段（required，optional），就是成员字段，不需要额外分配内存。<br>
对于容器字段（repeated，array，hashset，set，hashmap，map）的实现，分别对应c++里面的vector，hashset，set，hashmap，map。<br>
他们都有一个叫alloc的东西。<br>
那么message生成的c++代码的时候，就按照模板类来生成，将alloc暴露出来，作为模板参数。<br>
其实string也是有alloc的，string的内存分配同样通过alloc暴露出来作为参数。<br>
当你需要管理内存的时候，你只需要自己写一个MyAlloc。<br>
创建message对象的时候，XXX<MyAlloc> *xxx= new XXX<MyAlloc>()，不指定的话，则默认为std::allocator。

## 6、编码规则

基本参照protobuf的规则，列张表做下对比：

其中map的键值对相当于一个message：
```c
    message pair  
    {  
        K key = 1;  
        V value = 2;  
    }  
```
<table>
	<tr>
		<td>
			字段类型
		</td>
		<td>
			字段WireType
		</td>
		<td>
			protobuf2.0方式编码
			即运行参数proto_version=2
		</td>
		<td>
			protobuf3.0方式编码
			即运行参数proto_version=3
		</td>
	</tr>	
	<tr>
		<td>		
			bool<br>
			int32<br>
			int64<br>
			sint32<br>
			sint64<br>
			uint32<br>
			uint64<br>
			enum
		</td>
		<td>
			Varint
		</td>
		<td>
			varint(字段tag<<3+字段WireType)+<br>
			varint(字段值)
		</td>
		<td>
			varint(字段tag<<3+字段WireType)+<br>
			varint(字段值)
		</td>
	</tr>
	<tr>
		<td>		
			float<br>
			sfixed32<br>
			fixed32
		</td>
		<td>
			32bit
		</td>
		<td>
			varint(字段tag<<3+字段WireType)+<br>
			fixed32(字段值)
		</td>
		<td>
			varint(字段tag<<3+字段WireType)+<br>
			fixed32(字段值)
		</td>
	</tr>	
	<tr>
		<td>		
			double<br>
			sfixed64<br>
			fixed64
		</td>
		<td>
			64bit
		</td>
		<td>
			varint(字段tag<<3+字段WireType)+<br>
			fixed64(字段值)
		</td>
		<td>
			varint(字段tag<<3+字段WireType)+<br>
			fixed64(字段值)
		</td>
	</tr>	
	<tr>
		<td>		
			string<br>
      bytes
		</td>
		<td>
			LengthDelimited
		</td>
		<td>
			varint(字段tag<<3+字段WireType)+<br>
			varint(字符串长度) +<br>
			字符串内容
		</td>
		<td>
			varint(字段tag<<3+字段WireType)+<br>
			varint(字符串长度) +<br>
			字符串内容
		</td>
	</tr>	
	<tr>
		<td>		
			message
		</td>
		<td>
			LengthDelimited
		</td>
		<td>
			varint(字段tag<<3+字段WireType)+<br>
			varint(所有成员编码后的总长度) +<br>
			{<br>
				varint(成员tag<<3+成员WireType)+<br>
				成员内容编码<br>
			}
		</td>
		<td>
			varint(字段tag<<3+字段WireType)+<br>
			varint(所有成员编码后的总长度) +<br>
			{<br>
				varint(成员tag<<3+成员WireType)+<br>
				成员内容编码<br>
			}
		</td>
	</tr>	
	<tr>
		<td>		
			repeated<br>
			array<br>
			hashset<br>
			set
		</td>
		<td>
			LengthDelimited
		</td>
		<td>
			{<br>
				varint(字段tag<<3+元素WireType)+<br>
				元素内容编码<br>
			}
		</td>
		<td>
			varint(字段tag<<3+字段WireType)+<br>
			varint(所有元素编码后的总长度) + <br>
			{<br>
				元素内容编码<br>
			}
		</td>
	</tr>
	<tr>
		<td>		
			hashmap<br>
			map
		</td>
		<td>
			LengthDelimited
		</td>
		<td>
			{<br>
				varint(字段tag<<3+LengthDelimited)+<br>
				varint(键值对编码后的长度) +<br>
				varint(1 << 3 + 键WireType) +<br>
				键内容编码 +<br>
				varint(2 << 3 + 值WireType) +<br>
				值内容编码<br>
			}
		</td>
		<td>
			varint(字段tag<<3+字段WireType) + <br>
			varint(所有键值对编码后的总长度) + <br>
			{<br>
				varint(键值对编码后的长度) +<br>
				varint(1 << 3 + 键WireType) +<br>
				键内容编码 +<br>
				varint(2 << 3 + 值WireType) +<br>
				值内容编码<br>
			}
		</td>
	</tr>	
</table>

## 7、本工具的运行参数说明

（1）、proto_version

如：proto_version=2 或 proto_version=3。‘=’两边没有空格。参数之间空格隔开。

用于指明生成的代码的编解码部分，是按照protobuf2.0的规则来，还是按照protobuf3.0的规则来。

（2）、proto_file

如：proto_file=xxx.xxx.proto。‘=’两边没有空格。参数之间空格隔开。支持相对路径和绝对路径都可以。

用于指明需要处理的proto文件。

有多个文件，就写多个参数，比如:proto_file=p1.proto proto_file=p2.proto proto_file=p3.proto，参数之间空格隔开。

有import关系的两个文件，则被引用的proto文件写在前面。

（3）、cpp_path，csharp_path，java_path

如：cpp_path=./code/cpp。‘=’两边没有空格。参数之间空格隔开。支持相对路径和绝对路径都可以。

cpp_path是生成cpp代码的文件夹路径。如果不设置，则不生成cpp代码。

csharp_path是生成csharp代码的文件夹路径。如果不设置，则不生成csharp代码。

java_path是生成java代码的文件夹路径。如果不设置，则不生成java代码。
