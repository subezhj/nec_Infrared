# nec_Infrared
红外线收发系统（利用 NEC 协议）

$项目描述：
	了解红外线发射管原理，红外线编码规则，使用逻辑分析仪，解码美的、格力红外线编码协议，模拟发射红外线控制美的、格力空调。
$项目实现：
1.	网络查找官方手册，了解美的、格力红外线编码规则；
2.	以美的空调的 NEC 协议为例，其中 NEC 编码规则为：引导码+用户码+用户反码+按键码+按键反码；
3.	使用逻辑分析仪捕获遥控器发出的红外线信号；
4.	参考美的、格力官方红外线编码手册，解码逻辑分析仪捕获到的信号（并组合为32位，进行发送）；
5.	参考编码手册，用红外线发射管，模拟美的、格力遥控器发射红外线信号，控制空调开关，制冷制热。
