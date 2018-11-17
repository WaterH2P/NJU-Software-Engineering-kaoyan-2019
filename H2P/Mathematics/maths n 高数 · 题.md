---
title: 高数 · 题
date: 2018-8-30
updated: 2018-11-15
tags: [maths,高数,kaoyan]
mathjax: true

description: 做笔记，喝凉茶，做习题
real-date: 2018-11-15
---

## 习题

<br>

#### 1

设 $f(x, y)$ 为连续函数，计算

$$
I = \lim\limits_{t \to 0^+} \dfrac{1}{\pi t^2} \iint\limits_D f(x, y) \, {\rm d}\sigma
$$

其中 $D = \left\{ (x, y) \mid x^2 + y^2 \leq t^2 \right\}$ 。

<br>

#### 2

计算

$$
\int_0^a {\rm d}x \int_0^b e^{ \max \{ b^2x^2, \; a^2y^2 \} } \, {\rm d}y \qquad (a, b > 0)
$$

<br>

#### 3
【6.4】
设线性无关的函数 $y_1(x), \, y_2(x), \, y_3(x)$ 均是方程 $y'' + p(x)y' + q(x)y = f(x)$ 的解，$C_1, \, C_2$ 是任意常数，则该方程的通解是 $( \quad )$ 。

$$
\begin{array}{l}
	\text{ (A) } C_1 y_1 + C_2 y_2 + y_3 \qquad & \text{ (B) } C_1 y_1 + C_2 y_2 - ( C_1 + C_2 ) y_3 \\\\
	\text{ (C) } C_1 y_1 + C_2 y_2 - ( 1 - C_1 - C_2 ) y_3 \qquad & \text{ (D) } C_1 y_1 + C_2 y_2 + ( 1 - C_1 - C_2 ) y_3 
\end{array}
$$



<br>

## 参考答案

<br>

#### 1

【解析】因被积函数 $f(x, y)$ 在闭区间 D 上是抽象函数，故无法用先求出重积分的方法求极限，因此考虑：

- 1⃣️ 用中值定理先去掉积分号再求极限；
- 2⃣️ 用二次积分化分子为积分上限的方法。

1⃣️ 

因 $f(x, y)$ 在 D 上连续，有积分中值定理可知，在 D 上至少存在一点 $(\xi, \eta)$ 使

$$
\iint\limits_D f(x, y) \, {\rm d} \sigma = f(\xi, \eta) \, \sigma = \pi t^2 f(\xi, \eta)
$$

因 $(\xi, \eta)$ 在 D 上。所以当 $t \to 0^+$ 时，$(\xi, \eta) \to (0, 0)$ ，于是

$$
\lim\limits_{t \to 0^+} \dfrac{1}{\pi t^2} \iint\limits_D f(x, y) \, {\rm d}\sigma = 
\lim\limits_{ (\xi, \eta) \to (0, 0) } f(\xi, \eta) = 
f(0, 0)
$$

<br>

#### 2

$$
\begin{array}{l}
& \int_0^a {\rm d}x \int_0^b e^{ \max \{ b^2x^2, \; a^2y^2 \} } \\\\
= & \int_0^a \, {\rm d}x \int_0^{ \frac{b}{a}x } e^{b^2x^2} \, {\rm d}y + \int_0^b {\rm d}x \int_0^{ \frac{a}{b}y } e^{ a^2y^2 } \, {\rm d}y \\\\
= & \int_0^a \dfrac{b}{a} x e^{ b^2 x^2 } \, {\rm d}x + \int_0^b \, {\rm d}y \int_0^{ \frac{a}{b}y } e^{ a^2 y^2 } {\rm d}x \\\\
= & \dfrac{1}{2ab} \left( e^{ a^2 b^2 } - 1 \right) + \dfrac{1}{2ab} \left( e^{ a^2 b^2 } - 1 \right) \\\\
= & \dfrac{1}{ab} \left( e^{ a^2 b^2 } - 1 \right)
\end{array}
$$
<br>

#### 3
$( \text{ D } )$ 由于

$$
C_1 y_1 + C_2 y_2 + ( 1 - C_1 - C_2 ) y_3 = C_1 ( y_1 - y_3 ) + C_2 ( y_2 - y_3 ) + y_3
$$

其中 $( y_1 - y_3 )$ 和 $( y_2 - y_3 )$ 是原方程对应的齐次方程的两个线性无关的解，又 $y_3$ 是原方程的一个特解，所以 D 是原方程的通解。

【注】

事实上，有下述定理：设 $p(x), \, q(x)$ 与 $f(x)$ 均为连续函数。设 $y_1(x), \, y_2(x), \, y_3(x)$ 为二阶非齐次线性方程

$$
y'' + p(x)y' + q(x)y = f(x)
$$

的 3 个解，A、B、C 为常数，并设

$$
Y = Ay_1(x) + By_2(x) + Cy_3(x)
$$

Y 是 $y'' + p(x)y' + q(x)y = f(x)$ 的解得充要条件是 $A + B + C = 1$；

Y 是 $y'' + p(x)y' + q(x)y = 0$ 的解得充要条件是 $A + B + C = 0$ 。








