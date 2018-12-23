---
date: 2018-11-25
updated: 2018-11-25
---


多元函数微分学：4 + 10

二重积分：4 + 10

微分方程：10

<br>

# 一、概念

<br>

## ㊀、连续性

若 $\lim\limits_{x \to x_0 \atop y\to y_0} f(x, y) = f(x_0, \, y_0)$，则称 $f(x, y)$ 在 $(x_0, \, y_0)$ 处连续。

【注】若 "$\not=$"，叫“间断”，但不讨论间断类型。

<br>

## ㊁、偏导数

<br>

### 1、定义法

$z=f(x, y)$ 

$\begin{array}{l} f'_x(x_0, \, y_0) &= z'_x(x_0, \, y_0) = \dfrac{ \partial f(x_0, \, y_0) }{ \partial x } = \dfrac{ \partial z(x_0, \, y_0) }{ \partial x } \\\\ &= \lim\limits_{\Delta x \to 0} \dfrac{ f(x_0 + \Delta x, \, y_0) - f(x_0, \, y_0) }{ \Delta x } \end{array}$ 

$\begin{array}{l} f'_y(x_0, \, y_0) &= \lim\limits_{\Delta y \to 0} \dfrac{ f(x_0, \, y_0 + \Delta y) - f(x_0, \, y_0) }{ \Delta y } \end{array}$ 

<br>

### 2、公式法

使用求导公式

<br>

## ㊂、⭐️ 可微性

$z = f(x, \, y)$ 

（1）全增量：$\Delta z = f(x + x_0, \, y + y_0) - f(x_0, \, y_0)$ 

（2）线性增量：$A \Delta x + B \Delta y = \begin{cases} A = f'_x(x_0, \, y_0) \\\\ B = f'_y(x_0, \, y_0) \end{cases}$ 

（3）$\lim\limits_{x \to x_0 \atop y\to y_0} \dfrac{ \Delta z - (A \Delta x + B \Delta y) }{ \sqrt{ (\Delta x)^2 + (\Delta y)^2 } } = 0$ $\implies$ $f(x)$ 在 $(x_0, \, y_0)$ 处可微。
- $\sqrt{ (\Delta x)^2 + (\Delta y)^2 }$ 是 $(x_0, \, y_0)$ 和 $(x_0 + \Delta x, \, y_0 + \Delta y)$ 之间的距离。

$\Delta z = (A \Delta x + B \Delta y) + o( \sqrt{ (\Delta x)^2 + (\Delta y)^2 } )$ 

<br>

### ⭐️ 全微分

$\left. {\rm d}z \right|_{ (x_0, \, y_0) } = f'_x(x_0, \, y_0){\rm d}x + f'_y(x_0, \, y_0){\rm d}y$ 

<br>

## ㊃、链式求导法则

1. 链式求导法则

2. 高阶导数保持复合结构

3. 注意书写规范

一阶偏导数连续：函数可微

二阶偏导数连续：$\dfrac{ \partial^2 z }{ \partial u \partial v } = \dfrac{ \partial^2 z }{ \partial v \partial u }$ 

<br>

## ㊄、极最值

<a href="https://waterh2p.cn/2018/08/04/maths%204%20%E5%A4%9A%E5%85%83%E5%87%BD%E6%95%B0%E5%BE%AE%E5%88%86%E5%AD%A6/#3.%20%E5%A4%9A%E5%85%83%E5%87%BD%E6%95%B0%E7%9A%84%E6%9E%81%E6%9C%80%E5%80%BC" target="_blank">极最值</a>

<br>

### 1、无条件极值

<br>

### 2、条件极（最）值与拉格朗日乘数法

<br>

# 二、练习题

<br>

## ㊀、公式法求偏导

设函数 $z=z(x, \, y)$ 由方程 $\ln z + e^{z-1} = xy$ 确定，则 $\left. \dfrac{ \partial z }{ \partial x } \right|_{ (2, \; 1/2) } =$ ________。

<br>

## ㊁、全微分

设连续函数 $z = f(x, \, y)$ 满足

$$
\lim\limits_{x \to 0 \atop y \to 1} \dfrac{ f(x, \, y) - 2x + y -2 }{ \sqrt{ x^2 + (y-1)^2 } } = 0
$$

则 ${\rm d}z |_{ (0, \, 1) } =$ ________。

<br>

## ㊂、链式求导法则

设 $u = f(x, \, y, \, z)$ 有连续偏导数，$y=y(x)$ 和 $z=z(x)$ 分别由方程 $e^{xy} - y = 0$ 和 $e^z - xz = 0$ 所确定，求 $\dfrac{ {\rm d}u }{ {\rm d}x }$。

<br>

## ㊃、

设函数 $f(x, \, y)$ 可微，又 $f(0, \, 0) = 0, \, f'_x(0, \, 0) = a, \, f'_y(0, \, 0) = b$，且 $\varphi(t) = f \left[ t, \, f(t, \, t^2) \right]$，求 $\varphi'(0)$。

<br>

## ㊄、

已知 $z=z(u, \, v)$ 对 $u, \, v$ 有二阶连续偏导数，设变换 $\begin{cases} u = x - 2y \\\\ v = x + ay \end{cases}$，可把方程 $6 \dfrac{ \partial^2 z }{ \partial x^2 } + \dfrac{ \partial^2 z }{ \partial x \partial y } - \dfrac{ \partial^2 z }{ \partial y^2 } = 0$ 简化为 $\dfrac{ \partial^2 z }{ \partial u \partial v } = 0$，求 $a$。

<br>

## ㊅、

设函数 $f(x, \, y)$ 的一节偏导数连续，在 $(1, \, 0)$ 的某邻域内有

$$
f(x, \, y) = 1 - x - 2y + o( \sqrt{ (x-1)^2 + y^2 } )
$$

成立，记 $z(x, \, y) = f(e^y, \, x+y)$，则 ${\rm d}z(x, \, y) |_{ (0, \, 0) } =$ ________ 。

<br>

## ㊆、⭐️⭐️⭐️⭐

设 $f(x)$ 具有一阶连续导数，$f(0) = 0$，且表达式

$$
\left[ \, xy(1+y) - f(x)y \, \right] \, {\rm d}x + \left[ \, f(x) + x^2y \, \right] \, {\rm d}y
$$

为某二元函数 $u(x, \, y)$ 的全微分。1⃣️ 求 $f(x)$；2⃣️ 求 $u(x, \, y)$ 的一般表达式。

<br>

# 三、参考答案

<br>

## ㊀、公式法求偏导

$\left. \begin{array}{l} \ln z + e^{z-1} = xy \\\\ x = 2, \, y = \dfrac{1}{2} \end{array} \right\} \implies z=1$ 

$\begin{array}{l} \\ & \ln z + e^{z-1} = xy \\\\ \implies & \dfrac{1}{z} \cdot z'_x + e^{z-1} \cdot z'_x = y \\\\ \implies & z'_x = \dfrac{y}{ 1/z + e^{z-1} } = \dfrac{1}{4} \end{array}$ 

<br>

## ㊁、全微分

$\begin{array}{l} & \lim\limits_{x \to 0 \atop y \to 1} \dfrac{ f(x, \, y) - 2x + y -2 }{ \sqrt{ x^2 + (y-1)^2 } } = 0 \\\\ \implies & \lim\limits_{x \to 0 \atop y \to 1} f(x, \, y) - 2x + y -2 = 0 \\\\ \implies & \lim\limits_{x \to 0 \atop y \to 1} f(x, \, y) = 1 \end{array}$ 

由于 $f(x, \, y)$ 是连续函数，所以 $f(0, \, 1) = \lim\limits_{x \to 0 \atop y \to 1} f(x, \, y) = 1$。

$\begin{array}{l} & \lim\limits_{x \to 0 \atop y \to 1} \dfrac{ f(x, \, y) - 2x + y -2 }{ \sqrt{ x^2 + (y-1)^2 } } = 0 \\\\ \implies & f(x, \, y) - 2x + y -2 = o( \sqrt{ x^2 + (y-1)^2 } ) \\\\ \implies & f(x, \, y) - f(0, \, 1) = 2(x - 0) + (-1)(y - 1) + \sqrt{ x^2 + (y-1)^2 } \end{array}$ 

$\left. \begin{array}{l} f(x, \, y) - f(0, \, 1) = 2x - (y - 1) + \sqrt{ x^2 + (y-1)^2 } \\\\ \Delta z = A \Delta x + B \Delta y + o( \sqrt{ (\Delta x)^2 + (\Delta y)^2 } ) \end{array} \right\}$ $\implies$ $\begin{cases} f'_x(0, \, 1) = A = 2 \\\\ f'_y(0, \, 1) = B = -1 \end{cases}$ 

$\therefore \; {\rm d}z |_{ (0, \, 1) } = 2 \, {\rm d}x - {\rm d}y$ 

<br>

## ㊂、链式求导法则

$\dfrac{ {\rm d}u }{ {\rm d}x } = f'_1 + f'_2 \cdot \dfrac{ {\rm d}y }{ {\rm d}x } + f'_3 \cdot \dfrac{ {\rm d}z }{ {\rm d}x }$ 

$\begin{array}{l} & e^{xy} - y = 0 \\\\ \implies & e^{xy} (y + xy') - y' = 0 \\\\ \implies & y' = \dfrac{ y e^{xy} }{ 1 - xe^{xy} } \\\\ \implies & y' = \dfrac{ y^2 }{1 - xy} \end{array}$ $\quad and \quad$ $\begin{array}{l} & e^z - xz = 0 \\\\ \implies & e^z \cdot z' - z - xz' = 0 \\\\ \implies & z' = \dfrac{z}{e^z - x} \\\\ \implies & z' = \dfrac{z}{xz - x} \end{array}$ 

$\therefore \; \dfrac{ {\rm d}u }{ {\rm d}x } = f'_1 + \dfrac{ y^2 }{1 - xy} \cdot f'_2 + \dfrac{z}{xz - x} \cdot f'_3$

<br>

## ㊃、

$\begin{array}{l} & \varphi'(t) = f'_1 \left[ t, \, f(t, \, t^2) \right] + f'_2 \left[ t, \, f(t, \, t^2) \right] \cdot \left[ f'_1 ( t, \, t^2 ) + f'_2 ( t, \, t^2 ) \cdot 2t \right] \\\\ \implies & \varphi'(0) = f'_1 \left[ 0, \, f(0, \, 0) \right] + f'_2 \left[ 0, \, f(0, \, 0) \right] \cdot \left[ f'_1 (0, \, 0) + f'_2 (0, \, 0) \cdot 2 \cdot 0 \right] \\\\ \implies & \varphi'(0) = a + ab \end{array}$ 

<br>

## ㊄、

$\left. \begin{array}{l} \dfrac{ \partial z }{ \partial x } = \dfrac{ \partial z }{ \partial u } + \dfrac{ \partial z }{ \partial v } \\\\ \dfrac{ \partial z }{ \partial y } = (-2) \cdot \dfrac{ \partial z }{ \partial u } + a \cdot \dfrac{ \partial z }{ \partial v } \end{array} \right\}$ $\implies$ $\begin{cases} \dfrac{ \partial^2 z }{ \partial x^2 } = \dfrac{ \partial^2 z }{ \partial u^2 } + 2 \cdot \dfrac{ \partial^2 z }{ \partial u \partial v } + \dfrac{ \partial^2 z }{ \partial v^2 } \\\\ \dfrac{ \partial^2 z }{ \partial x \partial y } = (-2) \cdot \dfrac{ \partial^2 z }{ \partial u^2 } + (a-2) \cdot \dfrac{ \partial^2 z }{ \partial u \partial v } + a \cdot \dfrac{ \partial^2 z }{ \partial v^2 } \\\\ \dfrac{ \partial^2 z }{ \partial y^2 } = 4 \cdot \dfrac{ \partial^2 z }{ \partial u^2 } + (-4a) \cdot \dfrac{ \partial^2 z }{ \partial u \partial v } + a^2 \cdot \dfrac{ \partial^2 z }{ \partial v^2 } \end{cases}$ 

$\begin{array}{l} & 6 \dfrac{ \partial^2 z }{ \partial x^2 } + \dfrac{ \partial^2 z }{ \partial x \partial y } - \dfrac{ \partial^2 z }{ \partial y^2 } = 0 \\\\ \implies & (5a+10) \dfrac{ \partial^2 z }{ \partial u \partial v } + (6 + a - a^2)\dfrac{ \partial^2 z }{ \partial v^2 } = 0 \end{array}$ 

$\because \; \dfrac{ \partial^2 z }{ \partial u \partial v } = 0$ $\implies$ $\begin{cases} 5a + 10 \not= 0 \\\\ 6 + a - a^2 = 0 \end{cases}$ $\implies$ $a=3$ 

<br>

## ㊅、

${\rm d}z = z'_x \, {\rm d}x + z'_y \, {\rm d}y$ 

$\begin{cases} \begin{array}{l} z'_x|_{ (0, 0) } &= f'_2(e^y, \, x+y)|_{ (0, 0) } \\\\ &= f'_2(1, \, 0) = -2 \end{array} \\\\ \begin{array}{l} z'_y|_{ (0, 0) } &= f'_1(e^y, \, x+y)|_{ (0, 0) } \cdot e^y + f'_2(e^y, \, x+y)|_{ (0, 0) } \\\\ &= f'_1(1, \, 0) + f'_2(1, \, 0) = -3 \end{array} \end{cases}$ 

${\rm d}z = - 2 {\rm d}x - 3 \, {\rm d}y$ 

<br>

## ㊆、

1⃣️ 

由题可知 $\begin{cases} \dfrac{ \partial u }{ \partial x } = xy(1+y) - f(x)y \\\\ \dfrac{ \partial u }{ \partial y } = f(x) + x^2 y \end{cases}$ $\implies$ $\begin{cases} \dfrac{ \partial^2 u }{ \partial x \partial y } = x + 2xy - f(x) \\\\ \dfrac{ \partial^2 u }{ \partial y \partial x } = f'(x) + 2xy \end{cases}$ 

$\begin{array}{l} & & \dfrac{ \partial^2 u }{ \partial x \partial y } = \dfrac{ \partial^2 u }{ \partial y \partial x } \\\\ & \implies & f'(x) + f(x) = x \\\\ & \implies & f(x) = x - 1 + C \cdot e^{-x} \\\\ f(0) = 0 & \implies & f(x) = x - 1 + e^{-x} \end{array}$ 

【一阶线性方程】

$\begin{array}{l} & y' + p(x)y = q(x) \\\\ \implies & y = e^{ -\int p(x) \, {\rm d}x } \left\{ \int \left[ e^{ \int p(x) \, {\rm d}x } \cdot q(x) \right] \, {\rm d}x + C \right\} \end{array}$ 

2⃣️ 

$f(x) = x - 1 + e^{-x}$ $\implies$ $\begin{cases} \dfrac{ \partial u }{ \partial x } = xy^2 + y - ye^{-x} \\\\ \dfrac{ \partial u }{ \partial y } = x - 1 + e^{-x} + x^2 y \end{cases}$ 

⭐️ $\begin{array}{l} \\ & \dfrac{ \partial u }{ \partial x } = xy^2 + y - ye^{-x} \\\\ \implies & u = \dfrac{1}{2} x^2y^2 + xy + ye^{-x} + C(y) \\ & \end{array}$ 
- 是 $C(y)$，而不是 $C$。

$\begin{array}{l} & \dfrac{ \partial u }{ \partial y } = x^2y + x + e^{-x} + C'(y) = x - 1 + e^{-x} + x^2 y \\\\ \implies & C'(y) = -1 \\\\ \implies & C(y) = -y + C_1 \end{array}$ 

$\therefore \; u = \dfrac{1}{2} x^2y^2 + xy + ye^{-x} - y + C_1, \quad \forall C_1 \in {\rm R}$ 