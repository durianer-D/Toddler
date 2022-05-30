# DP

```
Author: Snickeen (指收集整理)
Time  : 202205135
```

整理一些关于动态规划(DP)的相关题目。

倒着看，前面的是专题，后面是未分类的和刷题建议，以及一些参考题单。

## 线性DP

1.txt

P1020	[NOIP1999 普及组] 导弹拦截	
P1439	【模板】最长公共子序列	
P1280	尼克的任务	
P2758	编辑距离	
P1040	[NOIP2003 提高组] 加分二叉树	
P4933	大师	
P1077	[NOIP2012 普及组] 摆花	
P1233	木棍加工	
P1091	[NOIP2004 提高组] 合唱队形	
P5858	「SWTR-03」Golden Sword


## 背包DP

以下内容是从(专题类2)直接拷贝过来的。

特点：**码量较少**（目前只有一题超过1KB）且**难度较低**（实际难度橙黄绿左右），让新手也可以享受切题的快乐。

没学过背包问题的可以去看看洛谷日报中的[背包问题](https://www.luogu.com.cn/blog/RPdreamer/bei-bao-wen-ti)或者[背包九讲](https://www.kancloud.cn/kancloud/pack/70124)。

**题目：**

| 题目 | 题目解法 | 题目难度 | 实际难度 |
| :----------: | :----------: | :----------: | :----------: |
| [P1048 采药](https://www.luogu.com.cn/problem/P1048) | **01背包** | $\color{#FF8C00}{普及-}$ | $\color{#FF8C00}{普及-}$ |
| [P2871 [USACO07DEC]Charm Bracelet S](https://www.luogu.com.cn/problem/P2871) | **01背包** | $\color{#FF8C00}{普及-}$ | $\color{#FF8C00}{普及-}$ |
| [P1049 装箱问题](https://www.luogu.com.cn/problem/P1049) | **01背包**稍微变形 | $\color{#FF8C00}{普及-}$ | $\color{#FF8C00}{普及-}$ |
| [P1060 开心的金明](https://www.luogu.com.cn/problem/P1060) | **01背包**稍微变形 | $\color{#FF8C00}{普及-}$ | $\color{#FF8C00}{普及-}$ |
| [P1164 小A点菜](https://www.luogu.com.cn/problem/P1164) | **01背包**稍微变形 | $\color{#FF8C00}{普及-}$ | $\color{#FF8C00}{普及-}$ |
| [P1510 精卫填海](https://www.luogu.com.cn/problem/P1510) | **01背包**稍微变形 | $\color{#FF8C00}{普及-}$ | $\color{#FF8C00}{普及-}$ |
| [P2639 [USACO09OCT]Bessie's Weight Problem G](https://www.luogu.com.cn/problem/P2639) | **01背包**稍微变形 | $\color{#FF8C00}{普及-}$ | $\color{#FF8C00}{普及-}$ |
| [P2925 [USACO08DEC]Hay For Sale S](https://www.luogu.com.cn/problem/P2925) | **01背包**稍微变形 | $\color{#FF8C00}{普及-}$ | $\color{#FF8C00}{普及-}$ |
| [P1926 小书童——刷题大军](https://www.luogu.com.cn/problem/P1926) | **01背包**变形 | $\color{#FF8C00}{普及-}$ | $\color{#FF8C00}{普及-}$ |
| [P1802 5倍经验日](https://www.luogu.com.cn/problem/P1802) | **01背包**变形 |$\color{#FF8C00}{普及-}$  | $\color{#FF8C00}{普及-}$ |
| [P1734 最大约数和](https://www.luogu.com.cn/problem/P1734) | **01背包**变形 | $\color{#FF8C00}{普及-}$ | $\color{#FF8C00}{普及-}$ |
| [P2392 kkksc03考前临时抱佛脚](https://www.luogu.com.cn/problem/P2392) | **01背包**变形 | $\color{#FF8C00}{普及-}$  | $\color{#FF8C00}{普及-}$ |
| [P1466 [USACO2.2]集合 Subset Sums](https://www.luogu.com.cn/problem/P1466) | **01背包**变形 | $\color{#FFD700}{普及/提高-}$ | $\color{#FF8C00}{普及-}$ |
| [P2370 yyy2015c01 的 U 盘](https://www.luogu.com.cn/problem/P2370) | **01背包**变形 | $\color{#FFD700}{普及/提高-}$ | $\color{#FFD700}{普及/提高-}$ |
| [CF294B Shaass and Bookshelf](https://www.luogu.com.cn/problem/CF294B) | **01背包**变形 | $\color{#32CD32}{普及+/提高}$ | $\color{#FFD700}{普及/提高-}$ |
| [CF19B Checkout Assistant](https://www.luogu.com.cn/problem/CF19B) | **01背包**变形 | $\color{#0000FF}{提高+/省选-}$ | $\color{#FFD700}{普及/提高-}$ |
| [P4141 消失之物](https://www.luogu.com.cn/problem/P4141) | **01背包**变形 | $\color{#0000FF}{提高+/省选-}$ | $\color{#FFD700}{普及/提高-}$ |
| [P1507 NASA的食物计划](https://www.luogu.com.cn/problem/P1507) | 二维**01背包** | $\color{#FF8C00}{普及-}$ | $\color{#FF8C00}{普及-}$ |
| [P1910 L国的战斗之间谍](https://www.luogu.com.cn/problem/P1910) | 二维**01背包** | $\color{#FF8C00}{普及-}$ | $\color{#FF8C00}{普及-}$ |
| [P1855 榨取kkksc03](https://www.luogu.com.cn/problem/P1855) | 二维**01背包**稍微变形 | $\color{#FF8C00}{普及-}$ | $\color{#FF8C00}{普及-}$ | $\color{#FFD700}{普及/提高-}$|
|[P1877 [HAOI2012]音量调节](https://www.luogu.com.cn/problem/P1877) | 二维**01背包**变形 | $\color{#FF8C00}{普及-}$ | $\color{#FF8C00}{普及-}$ |
| [P1509 找啊找啊找GF](https://www.luogu.com.cn/problem/P1509) | 二维**01背包**变形 | $\color{#FFD700}{普及/提高-}$ | $\color{#FFD700}{普及/提高-}$ |
| [P3985 不开心的金明](https://www.luogu.com.cn/problem/P3985) | 二维**01背包**变形 | $\color{#32CD32}{普及+/提高}$ | $\color{#FFD700}{普及/提高-}$ |
| [P1455 搭配购买](https://www.luogu.com.cn/problem/P1455) | **01背包**+并查集 | $\color{#FFD700}{普及/提高-}$ | $\color{#FFD700}{普及/提高-}$ |
| [P1941 飞扬的小鸟](https://www.luogu.com.cn/problem/P1941) | **01背包**变形+**完全背包**变形 | $\color{#32CD32}{普及+/提高}$  | $\color{#32CD32}{普及+/提高}$ |
| [P2170 选学霸](https://www.luogu.com.cn/problem/P2170) | **01背包**变形+并查集 | $\color{#32CD32}{普及+/提高}$  | $\color{#32CD32}{普及+/提高}$ |
| [P1858 多人背包](https://www.luogu.com.cn/problem/P1858) | **01背包**第k优解变形 | $\color{#0000FF}{提高+/省选-}$ | $\color{#32CD32}{普及+/提高}$ |
| [P1616 疯狂的采药](https://www.luogu.com.cn/problem/P1616) | **完全背包** | $\color{#FF8C00}{普及-}$ | $\color{#FF8C00}{普及-}$ |
| [P2722 [USACO3.1]总分 Score Inflation](https://www.luogu.com.cn/problem/P2722) | **完全背包** | $\color{#FF8C00}{普及-}$ | $\color{#FF8C00}{普及-}$ |
| [P1679 神奇的四次方数](https://www.luogu.com.cn/problem/P1679) | **完全背包**变形 | $\color{#FF8C00}{普及-}$ | $\color{#FF8C00}{普及-}$ |
| [P1832 A+B Problem（再升级）](https://www.luogu.com.cn/problem/P1832) | **完全背包**变形 | $\color{#FF8C00}{普及-}$ | $\color{#FF8C00}{普及-}$ |
| [P1853 投资的最大效益](https://www.luogu.com.cn/problem/P1853) | **完全背包**变形 | $\color{#FFD700}{普及/提高-}$ | $\color{#FF8C00}{普及-}$ |
| [CF189A Cut Ribbon](https://www.luogu.com.cn/problem/CF189A) | **完全背包**变形 | $\color{#FFD700}{普及/提高-}$ | $\color{#FF8C00}{普及-}$ |
| [CF417A Elimination](https://www.luogu.com.cn/problem/CF417A) | **完全背包**变形 | $\color{#FFD700}{普及/提高-}$ | $\color{#FF8C00}{普及-}$ |
| [P2918 [USACO08NOV]Buying Hay S](https://www.luogu.com.cn/problem/P2918) | **完全背包**变形 | $\color{#FFD700}{普及/提高-}$ | $\color{#FFD700}{普及/提高-}$ |
| [P5662 纪念品](https://www.luogu.com.cn/problem/P5662) | **完全背包**变形 | $\color{#FFD700}{普及/提高-}$ | $\color{#FFD700}{普及/提高-}$ |
| [P5020 [NOIP2018 提高组] 货币系统](https://www.luogu.com.cn/problem/P5020)| **完全背包**变形 | $\color{#32CD32}{普及+/提高}$ | $\color{#32CD32}{普及+/提高}$ |
| [P2347 砝码称重](https://www.luogu.com.cn/problem/P2347) | **多重背包**变形 | $\color{#FF8C00}{普及-}$  | $\color{#FF8C00}{普及-}$ |
| [P6771 [USACO05MAR]Space Elevator 太空电梯](https://www.luogu.com.cn/problem/P6771) | **多重背包**变形 | $\color{#FFD700}{普及/提高-}$ | $\color{#FFD700}{普及/提高-}$ |
| [P5365 [SNOI2017]英雄联盟](https://www.luogu.com.cn/problem/P5365) | **多重背包**变形 | $\color{#32CD32}{普及+/提高}$ | $\color{#FFD700}{普及/提高-}$ |
| [P1776 宝物筛选](https://www.luogu.com.cn/problem/P1776) | **多重背包**二进制优化 | $\color{#0000FF}{提高+/省选-}$ | $\color{#FFD700}{普及/提高-}$ |
| [P2851 [USACO06DEC]The Fewest Coins G](https://www.luogu.com.cn/problem/P2851) | **多重背包**+**完全背包** | $\color{#0000FF}{提高+/省选-}$ | $\color{#FFD700}{普及/提高-}$ |
| [P1833 樱花](https://www.luogu.com.cn/problem/P1833) | **混合背包** | $\color{#32CD32}{普及+/提高}$ | $\color{#FFD700}{普及/提高-}$ | 
| [P1782 旅行商的背包](https://www.luogu.com.cn/problem/P1782) | **混合背包**二进制优化+完全背包+快读+~~O2优化~~ | $\color{#0000FF}{提高+/省选-}$ | $\color{#32CD32}{普及+/提高}$ |
| [P1757 通天之分组背包](https://www.luogu.com.cn/problem/P1757) | **分组背包** | $\color{#FF8C00}{普及-}$ | $\color{#FFD700}{普及/提高-}$ | $\color{#32CD32}{普及+/提高}$ |
| [P5322 [BJOI2019]排兵布阵](https://www.luogu.com.cn/problem/P5322) | **分组背包**变形 | $\color{#0000FF}{提高+/省选-}$ | $\color{#FFD700}{普及/提高-}$ |
| [P1064 金明的预算方案](https://www.luogu.com.cn/problem/P1064) | **有依赖的背包** | $\color{#32CD32}{普及+/提高}$ | $\color{#FFD700}{普及/提高-}$ | $\color{#FFD700}{普及/提高-}$ |
| [P2904 [USACO08MAR]River Crossing S](https://www.luogu.com.cn/problem/P2904) | 背包思想 | $\color{#FFD700}{普及/提高-}$ | $\color{#FFD700}{普及/提高-}$ |

最后：

1.如题目难度不符合实际，补充的题目或修改建议欢迎私信。

2.这个题单的题应该算比较简单，以后再写一个难一点的。

3.写题单不易，能不能帮忙收藏一下啊。


以下内容是从(专题类3)参考过来的。

补充：


**多维背包**

[P1541 乌龟棋](https://www.luogu.com.cn/problem/P1541)

[P2732 USACO3.3 商店购物 Shopping Offers](https://www.luogu.com.cn/problem/P2732)


**有依赖的背包**

[P1273 有线电视网](https://www.luogu.com.cn/problem/P1273)






## 区间DP(或环形DP)

P1220	关路灯	
P3205	[HNOI2010]合唱队	
P1880	[NOI1995] 石子合并	
P1063	[NOIP2006 提高组] 能量项链	
P1005	[NOIP2007 提高组] 矩阵取数游戏	
P3146	[USACO16OPEN]248 G	
P4170	[CQOI2007]涂色	
CF607B	Zuma


## 数位DP

以下内容是从(专题类5)直接拷贝过来的。

- [P4999 烦人的数学作业](https://www.luogu.com.cn/problem/P4999)
- [P6218 [USACO06NOV] Round Numbers S](https://www.luogu.com.cn/problem/P6218)
- [P2657 [SCOI2009] windy 数](https://www.luogu.com.cn/problem/P2657)
- [P2602 [ZJOI2010]数字计数](https://www.luogu.com.cn/problem/P2602)
- [P4317 花神的数论题](https://www.luogu.com.cn/problem/P4317)
- [P4124 [CQOI2016]手机号码](https://www.luogu.com.cn/problem/P4124)
- [CF855E Salazar Slytherin's Locket](https://www.luogu.com.cn/problem/CF855E)
- [CF1036C Classy Numbers](https://www.luogu.com.cn/problem/CF1036C)
- [CF1073E Segment Sum](https://www.luogu.com.cn/problem/CF1073E)
- [CF55D Beautiful numbers](https://www.luogu.com.cn/problem/CF55D)
- [SP3928 MDIGITS - Counting Digits](https://www.luogu.com.cn/problem/SP3928)
- [SP10606 BALNUM - Balanced Numbers](https://www.luogu.com.cn/problem/SP10606)
- [P4127 [AHOI2009]同类分布](https://www.luogu.com.cn/problem/P4127)
- [SP1433 KPSUM - The Sum](https://www.luogu.com.cn/problem/SP1433)
- [P6754 [BalticOI 2013 Day1] Palindrome-Free Numbers](https://www.luogu.com.cn/problem/P6754)
- [P3413 SAC#1 - 萌数](https://www.luogu.com.cn/problem/P3413)
- [SP8177 JZPEXT - Beautiful numbers EXTREME](https://www.luogu.com.cn/problem/SP8177)
- [CF908G New Year and Original Order](https://www.luogu.com.cn/problem/CF908G)
- [CF628D Magic Numbers](https://www.luogu.com.cn/problem/CF628D)
- [CF401D Roman and Numbers](https://www.luogu.com.cn/problem/CF401D)
- [UVA12046 Great Numbers](https://www.luogu.com.cn/problem/UVA12046)
- [P3281 [SCOI2013]数数](https://www.luogu.com.cn/problem/P3281)
- [P3311 [SDOI2014] 数数](https://www.luogu.com.cn/problem/P3311)
- [P3303 [SDOI2013] 淘金](https://www.luogu.com.cn/problem/P3303)
- [P2481 [SDOI2010]代码拍卖会](https://www.luogu.com.cn/problem/P2481)
- [P2518 [HAOI2010]计数](https://www.luogu.com.cn/problem/P2518)
- [UVA1640 统计问题 The Counting Problem](https://www.luogu.com.cn/problem/UVA1640)
- [P1836 数页码](https://www.luogu.com.cn/problem/P1836)
- [SP17247 PR003004 - Digit Sum](https://www.luogu.com.cn/problem/SP17247)
- [SP10649 MYQ10 - Mirror Number](https://www.luogu.com.cn/problem/SP10649)
- [P4798 [CEOI2015 Day1]卡尔文球锦标赛](https://www.luogu.com.cn/problem/P4798)
- [P3286 [SCOI2014]方伯伯的商场之旅](https://www.luogu.com.cn/problem/P3286)
- [P3791 普通数学题](https://www.luogu.com.cn/problem/P3791)


## 树形DP

从(专题类6)直接搬运过来的



都看了看，应该都是树形dp（包括换根dp，基环树dp）

注意：粗体为较为经典的题目

- [P1122 最大子树和](https://www.luogu.com.cn/problem/P1122)
- [**P1352 没有上司的舞会**](https://www.luogu.com.cn/problem/P1352)：树形dp入门题
- [P2015 二叉苹果树](https://www.luogu.com.cn/problem/P2015)：一道较为经典的树形dp
- [P2014 [CTSC1997]选课](https://www.luogu.com.cn/problem/P2014)
- [**P2016 战略游戏**](https://www.luogu.com.cn/problem/P2016)：经典树形dp题
- [**P3478 [POI2008]STA-Station**](https://www.luogu.com.cn/problem/P3478)：换根dp入门题
- [P1040 加分二叉树](https://www.luogu.com.cn/problem/P1040)
- [CF219D Choosing Capital for Treeland](https://www.luogu.com.cn/problem/CF219D)
- [P1270 “访问”美术馆](https://www.luogu.com.cn/problem/P1270)
- [**P1131 [ZJOI2007]时态同步**](https://www.luogu.com.cn/problem/P1131)：经典树形dp题
- [**P2279 [HNOI2003]消防局的设立**](https://www.luogu.com.cn/problem/P2279)：经典树形dp题，可以用来学习设dp状态
- [**P1273 有线电视网**](https://www.luogu.com.cn/problem/P1273)：树形背包入门题
- [P2899 [USACO08JAN]Cell Phone Network G](https://www.luogu.com.cn/problem/P2899)
- [P4084 [USACO17DEC]Barn Painting G](https://www.luogu.com.cn/problem/P4084)
- [**P2986 [USACO10MAR]Great Cow Gathering G**](https://www.luogu.com.cn/problem/P2986)：换根dp入门题
- [P4438 [HNOI/AHOI2018]道路](https://www.luogu.com.cn/problem/P4438)：题面杀（
- [**P3047 [USACO12FEB]Nearby Cows G**](https://www.luogu.com.cn/problem/P3047)：换根dp经典题
- [**P2585 [ZJOI2006]三色二叉树**](https://www.luogu.com.cn/problem/P2585)：经典树形dp
- [P2458 [SDOI2006]保安站岗](https://www.luogu.com.cn/problem/P2458)
- [UVA1218 完美的服务 Perfect Service](https://www.luogu.com.cn/problem/UVA1218)
- [P1272 重建道路](https://www.luogu.com.cn/problem/P1272)
- [P3177 [HAOI2015]树上染色](https://www.luogu.com.cn/problem/P3177)
- [P3174 [HAOI2009]毛毛虫](https://www.luogu.com.cn/problem/P3174)
- [P6554 Promises I Can't Keep](https://www.luogu.com.cn/problem/P6554)
- [CF461B Appleman and Tree](https://www.luogu.com.cn/problem/CF461B)
- [**CF1187E Tree Painting**](https://www.luogu.com.cn/problem/CF1187E)：换根dp经典题
- [**CF708C Centroids**](https://www.luogu.com.cn/problem/CF708C)：换根dp经典题
- [**P1453 城市环路**](https://www.luogu.com.cn/problem/P1453)：基环树dp经典题
- [**P4381 [IOI2008]Island**](https://www.luogu.com.cn/problem/P4381)：较难的基环树dp
- [P3647 [APIO2014]连珠线](https://www.luogu.com.cn/problem/P3647)
- [P3523 [POI2011]DYN-Dynamite](https://www.luogu.com.cn/problem/P3523)
- [P3554 [POI2013]LUK-Triumphal arch](https://www.luogu.com.cn/problem/P3554)
- [**P2607 [ZJOI2008]骑士**](https://www.luogu.com.cn/problem/P2607)：基环树dp
- [P3565 [POI2014]HOT-Hotels](https://www.luogu.com.cn/problem/P3565)
- [P3574 [POI2014]FAR-FarmCraft](https://www.luogu.com.cn/problem/P3574)
- [P3576 [POI2014]MRO-Ant colony](https://www.luogu.com.cn/problem/P3576)
- [P4099 [HEOI2013]SAO ](https://www.luogu.com.cn/problem/P4099)
- [P3757 [CQOI2017]老C的键盘](https://www.luogu.com.cn/problem/P3757)
- [P4253 [SCOI2015]小凸玩密室](https://www.luogu.com.cn/problem/P4253)
- [P6213 「SWTR-04」Collecting Coins](https://www.luogu.com.cn/problem/P6213)
- [**P6419 [COCI2014-2015#1] Kamp**](https://www.luogu.com.cn/problem/P6419)：换根dp经典题
- [P3267 [JLOI2016/SHOI2016]侦察守卫](https://www.luogu.com.cn/problem/P3267)
- [P3354 [IOI2005]Riv 河流](https://www.luogu.com.cn/problem/P3354)
- [P3237 [HNOI2014]米特运输](https://www.luogu.com.cn/problem/P3237)：树形dp结合哈希
- [P2491 [SDOI2011]消防](https://www.luogu.com.cn/problem/P2491)
- [CF1120D Power Tree](https://www.luogu.com.cn/problem/CF1120D)
- [CF23E Tree](https://www.luogu.com.cn/problem/CF23E)
- [CF767C Garland](https://www.luogu.com.cn/problem/CF767C)
- [CF581F Zublicanes and Mumocrates](https://www.luogu.com.cn/problem/CF581F)
- [CF337D Book of Evil](https://www.luogu.com.cn/problem/CF337D)
- [CF1153D Serval and Rooted Tree](https://www.luogu.com.cn/problem/CF1153D)
- [P4629 [SHOI2015]聚变反应炉](https://www.luogu.com.cn/problem/P4629)
- [P4516 [JSOI2018]潜入行动](https://www.luogu.com.cn/problem/P4516)：较难的树形背包
- [P3408 恋爱](https://www.luogu.com.cn/problem/P3408)=[UVA12186 工人的请愿书 Another Crisis](https://www.luogu.com.cn/problem/UVA12186)
- [UVA1220 Hali-Bula的晚会 Party at Hali-Bula](https://www.luogu.com.cn/problem/UVA1220)
- [CF1276D Tree Elimination](https://www.luogu.com.cn/problem/CF1276D)
- [CF762F Tree nesting](https://www.luogu.com.cn/problem/CF762F)
- [CF1082F Speed Dial](https://www.luogu.com.cn/problem/CF1082F)


从(专题类7和8中做几个补充)：

- P2767 树的数量
+ P1613 跑路
+ P2656 采蘑菇



## 状压DP和轮廓线DP

直接从(专题类9)复制过来的

### 普通状压

- [P2704 [NOI2001] 炮兵阵地](https://www.luogu.com.cn/problem/P2704)

- [P1896 [SCOI2005]互不侵犯](https://www.luogu.com.cn/problem/P1896)

- [P1879 [USACO06NOV]Corn Fields G](https://www.luogu.com.cn/problem/P1879)

- [P3052 [USACO12MAR]Cows in a Skyscraper G](https://www.luogu.com.cn/problem/P3052)

- [P2396 yyy loves Maths VII](https://www.luogu.com.cn/problem/P2396)

- [P2831 [NOIP2016 提高组] 愤怒的小鸟](https://www.luogu.com.cn/problem/P2831)

- [P2622 关灯问题II](https://www.luogu.com.cn/problem/P2622)

- [P7098 [yLOI2020] 凉凉](https://www.luogu.com.cn/problem/P7098)

- [P3959 [NOIP2017 提高组] 宝藏](https://www.luogu.com.cn/problem/P3959)

- [P2473 [SCOI2008] 奖励关](https://www.luogu.com.cn/problem/P2473)

- [P2150 [NOI2015] 寿司晚宴](https://www.luogu.com.cn/problem/P2150)

- [P3343 [ZJOI2015]地震后的幻想乡](https://www.luogu.com.cn/problem/P3343)

### 轮廓线 dp

- [P5056 【模板】插头dp](https://www.luogu.com.cn/problem/P5056)

- [P5074 Eat the Trees](https://www.luogu.com.cn/problem/P5074)

- [P3886 [JLOI2009]神秘的生物](https://www.luogu.com.cn/problem/P3886)

- [P4262 [Code+#3]白金元首与莫斯科](https://www.luogu.com.cn/problem/P4262)

- [P3190 [HNOI2007]神奇游乐园](https://www.luogu.com.cn/problem/P3190)

- [P4294 [WC2008]游览计划](https://www.luogu.com.cn/problem/P4294)

- [P3272 [SCOI2011]地板](https://www.luogu.com.cn/problem/P3272)

- [P3170 [CQOI2015]标识设计](https://www.luogu.com.cn/problem/P3170)

- [P2289 [HNOI2004]邮递员](https://www.luogu.com.cn/problem/P2289)

- [P3290 [SCOI2016]围棋](https://www.luogu.com.cn/problem/P3290)


从(专题类10)补充：


P3694	邦邦的大合唱站队
P1441	砝码称重	
P3092	[USACO13NOV]No Change G


## 斜率优化DP 

P2365	任务安排	
P5017	[NOIP2018 普及组] 摆渡车	
CF311B	Cats Transport	
P5785	[SDOI2012]任务安排	
P3195	[HNOI2008]玩具装箱	
P2120	[ZJOI2007]仓库建设	
P3628	[APIO2010]特别行动队	
P4360	[CEOI2004]锯木厂选址	
P3571	[POI2014]SUP-Supercomputer



## 其他未分类

### 基础

P1002	[NOIP2002 普及组] 过河卒	
P1216	[USACO1.5][IOI1994]数字三角形 Number Triangles	
P1434	[SHOI2002]滑雪	
P2196	[NOIP1996 提高组] 挖地雷	
P4017	最大食物链计数
P1006	[NOIP2008 提高组] 传纸条	
P1854	花店橱窗布置	
P5569	[SDOI2008] 石子合并

(综合类5,6,7)

### 提高

(综合类1,2,3)

### 进阶

(综合类4)


------------------------------------------------------------------------------------------------------

------------------------------------------------------------------------------------------------------

------------------------------------------------------------------------------------------------------


## 刷题建议

初步规划(草稿): 
以`能力全面提升综合题单`中的dp部分为主要参考，
以`综合类1/2/3`和`专题类`为补充，一般以题型为补充，对于不熟悉的再作为题量的补充。
如果不过瘾，可以屠一下lightoj上的dp部分和分治部分。


------------------------------------------------------------------------------------------------------

------------------------------------------------------------------------------------------------------


## 参考题单

1. [能力全面提升综合题单](https://www.luogu.com.cn/training/9391)  这是个非常全面的题单(出处[blog](https://studyingfather.com/archives/841)和[github](https://github.com/SFOI-Team/luogu-problem-list))，非常不错。本文档暂时没有参考这一份的，但挺推荐按照这一份来刷一遍。
2. lightoj上有100稍多一点的DP题目

下面不同的题单中会有题目重复。

### 综合类

这里列出来综合类或者不便于划分专题的或者未分类的题单

1. [【动态规划】普及~省选的dp题](https://www.luogu.com.cn/training/1435)
2. [面向tg选手的DP练习题](https://www.luogu.com.cn/training/1323)
3. [【动态规划】提高组的DP问候](https://www.luogu.com.cn/training/12927) 
4. [动态规划练习](https://www.luogu.com.cn/training/4133) 标榜难度为`省选- → NOI`
5. [新手动态规划合集](https://www.luogu.com.cn/training/1060) 3.txt
6. [疯狂A题训练——DP基础篇](https://www.luogu.com.cn/training/5011) 4.txt
7. [【要 有 前 缀】动态规划水集-配套题单](https://www.luogu.com.cn/training/2390) 5.txt  提单简介给了个[入门连接](https://www.luogu.com.cn/blog/XTZORZ/cometo-water-DP)
8. []()
9. []()
10. []()
11. []()

### 专题类

1. [【动态规划2】线性状态动态规划](https://www.luogu.com.cn/training/212)
2. star [背包问题（简单）](https://www.luogu.com.cn/training/8917)  推荐，上面的内容是直接拷贝过来的。
3. ~~[背包问题](https://www.luogu.com.cn/training/5197)~~ 只有3道题是对于上面的补充，其余的题目上一题单都有了。
4. star [【动态规划3】区间与环形动态规划](https://www.luogu.com.cn/training/213) 
5. star [（提高）『数位DP』从入门到入土](https://www.luogu.com.cn/training/82023) 
6. star [xzy的树形dp题单](https://www.luogu.com.cn/training/11363) 
7. ~~[小黑の树形DP](https://www.luogu.com.cn/training/4840)~~ 补充了1题
8. ~~[【动态规划4】树与图上的动态规划](https://www.luogu.com.cn/training/214)~~ 补充了2题
9. star [状态压缩 dp](https://www.luogu.com.cn/training/3121)
10. ~~[【动态规划5】状态压缩动态规划](https://www.luogu.com.cn/training/215)~~ 补充了4题
11. star [斜率优化DP](https://www.luogu.com.cn/training/5352)
12. [好玩的 DP 一](https://www.luogu.com.cn/training/9714) 综合类3中提到的树形dp题单，没细看，没有复制题目到本文档
13. [kuangbin斜率dp]()
14. []()
15. []()
16. []()
17. []()
18. []()
19. []()
20. []()















