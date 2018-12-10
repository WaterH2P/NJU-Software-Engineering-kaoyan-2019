---
title: 高数 · 题
date: 2018-8-30
updated: 2018-12-9
tags: [maths,高数,kaoyan]
mathjax: true

description: 做笔记，喝凉茶，做习题
real-date: 2018-11-15
---

<!-- 
$\begin{array}{l} ( {\rm A} ) \, 1 \qquad & ( {\rm B} ) \, 2 \\\\ ( {\rm C} ) \, 3 \qquad & ( {\rm D} ) \, 4 \end{array}$ 
-->

<!-- 
$\begin{array}{l} \end{array}$

$\begin{vmatrix} \end{vmatrix}$

$\begin{pmatrix} \end{pmatrix}$

$\begin{bmatrix} \end{bmatrix}$

\begin{array}{l} \\ 
 \\ & \end{array}
-->

<!-- 
⭐
㊀ ㊁ ㊂ ㊃ ㊄ ㊅ ㊆ ㊇ ㊈

<img src="" width="80%">
️ -->

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

#### 4、八套卷二（12）

设函数 $z = f(x, \, y) \, (xy \not= 0)$ 满足 $f(xy, \, \dfrac{y}{x}) = y^2 (x^2 - 1)$，则 ${\rm d}z =$ ________ 。

<br>

#### 5、李林四套卷二（15）

计算 

$$
\lim\limits_{x \to 0} \left[ \left( \left. \dfrac{1}{2} \int_0^2 x \sqrt{ 4 - x^2 u^2 } {\rm d}u - 2x \right) \right/  \ln(1 + x^3) \right]
$$

<br>

#### 5、李林四套卷一

<br>

###### (4)

设 $y=y(x)$ 是 $y''+2y'+y = e^{3x}$ 满足 $y(0) = y'(0) = 0$ 的解，则当 $x \to 0$ 时，与 $y(x)$ 为等价无穷小的是 $(\qquad)$。

$\begin{array}{l} ( {\rm A} ) \, \sin x^2 \qquad & ( {\rm B} ) \, \sin x \qquad & ( {\rm C} ) \, \ln(1 + x^2) \qquad & ( {\rm D} ) \, \ln \sqrt{1 + x^2} \end{array}$ 

<br>

###### (10)

设函数 $y = f(x)$ 由参数方程 $\begin{cases} x = t^2 + 1 \\\\ y = 4t - t^2 \end{cases}, (t \geq 0)$ 确定，则计算极限

$$
\lim\limits_{n \to \infty} n \left[ f \left( \dfrac{2n+1}{n} \right) - 3 \right]
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

<br>

#### 4、八套卷二（12）

令 $\begin{cases} u = xy \\\\ v = \dfrac{y}{x} \end{cases}$ $\implies$ $\begin{cases} x^2 = \dfrac{u}{v} \\\\ y^2 = uv \end{cases}$，则 $f(u, \, v) = uv(\dfrac{u}{v} - 1) = u^2 - uv$，即 $z = f(x, \, y) = x^2 - xy$。

所以 ${\rm d}z = (2x - y){\rm d}x - x{\rm d}y$。

<br>

#### 5、李林四套卷二（15）

$\begin{array}{l} \text{原式} &= \lim\limits_{x \to 0} \dfrac{ \dfrac{1}{2} \int_0^2 \sqrt{ 4 - (xu)^2 } \, {\rm d}(xu) - 2x }{ \ln(1 + x^3) } \\\\     \text{令 } t=xu &= \lim\limits_{x \to 0} \dfrac{ \dfrac{1}{2} \int_0^{2x} \sqrt{ 4 - t^2 } \, {\rm d}t -2x }{x^3} \\\\      \text{洛必达} &= \lim\limits_{x \to 0} \dfrac{ \dfrac{1}{2} \sqrt{ 4 - 4x^2 } \cdot 2 - 2 }{3x^2} \\\\      &= 2 \lim\limits_{x \to 0} \dfrac{ \sqrt{ 1 - x^2 } - 1 }{3x^2} \\\\      &= 2 \lim\limits_{x \to 0} \dfrac{ \dfrac{1}{2} (-x^2) }{ 3x^2 } \\\\      &= -\dfrac{1}{3} \end{array}$

<br>

#### 5、李林四套卷一

<br>

###### (4)

$({\rm D})$。

由 $y''+2y'+y = e^{3x}$ 得 

$$
\lim\limits_{x \to 0} y''(x) = \lim\limits_{x \to 0} \left[ e^{3x} -2y'(x) - y(x) \right] = 1
$$ 

故 

$\begin{array}{l} \lim\limits_{x \to 0} \dfrac{ \ln \sqrt{1 + x^2} }{y(x)} &= \lim\limits_{x \to 0} \dfrac{ \dfrac{1}{2} \ln (1 + x^2) }{y(x)} = \lim\limits_{x \to 0} \dfrac{ \dfrac{1}{2} x^2 }{y(x)} \\\\      &= \lim\limits_{x \to 0} \dfrac{x}{y'(x)} = \lim\limits_{x \to 0} \dfrac{1}{y''(x)} \\\\      &= 1 \end{array}$

<br>

###### (10)

$({\rm 1})$。

$$
\lim\limits_{n \to \infty} \left[ f \left( \dfrac{2n+1}{n} \right) - 3 \right] = \lim\limits_{n \to \infty} \dfrac{ f \left( \dfrac{2n+1}{n} \right) - 3 }{ \dfrac{1}{n} }
$$

由已知条件，当 $x=2$ 时，$t=1$，$y=3$，故

$$
\lim\limits_{n \to \infty} \dfrac{ f \left( \dfrac{2n+1}{n} \right) - 3}{ \dfrac{1}{n} } = \lim\limits_{n \to \infty} \dfrac{ f \left( 2 + \dfrac{1}{n} \right) - f(2) }{ \dfrac{1}{n} } = f'(2)
$$

而 $\left. \dfrac{ {\rm d}y }{ {\rm d}x } \right|_{x=2} = \left. \dfrac{4 - 2t}{2t} \right|_{t=1} = 1$，所以 $f'(2) = 1$。

