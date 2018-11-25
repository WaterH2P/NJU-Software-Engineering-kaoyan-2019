---
title: 极限 · 习题
date: 2018-8-1
updated: 2018-11-22
tags: [maths,高数,kaoyan]
mathjax: true

description: 做笔记，喝凉茶，做习题
real-date: 2018-11-17
---

<!-- 
$\begin{array}{l} ( {\rm A} ) \, 1 \qquad & ( {\rm B} ) \, 2 \\\\ ( {\rm C} ) \, 3 \qquad & ( {\rm D} ) \, 4 \end{array}$ 
-->

<!-- 
⭐
️ -->

<br>

## 一、概念

#### ㊀

$$
\forall \, \alpha > 0, \qquad \lim\limits_{x \to 0^+} x^\alpha \ln x = 0
$$

<br>

## 二、练习题

<br>

#### ㊀

设正项数列 $\{ x_n \}$ 满足 $\lim\limits_{n \to \infty} \dfrac{ x_{n+1} }{x_n} = \dfrac{1}{2}$ ，则 $( \text{ A } )$ 。

$\begin{array}{l} (A) \, \lim\limits_{n \to \infty} x_n = 0 & (B) \, \lim\limits_{n \to \infty} x_n \text{ 存在，但不为零} \\\\ (C) \, \lim\limits_{n \to \infty} x_n \text{ 不存在 } \quad & (D) \, \lim\limits_{n \to \infty} x_n \text{ 可能存在，也可能不存在 } \end{array}$ 

<br>

#### ㊁

$f(x) = e^{ 1/x } \dfrac{ \sin \pi x }{ (x^2 - 1) \mid x \mid }$ 无界的一个区间是 $( \text{  } )$ 。

$\begin{array}{l} (A) \, (-\infty, -1) & (B) \, (-1, 0) \\\\ (C) \, (0, 1) & (D) \, (1, +\infty) \end{array}$ 

<br>

#### ㊂

若 $\lim\limits_{x \to 0} \dfrac{ f(x) - f(0) }{ x^2 } = \ln 2$，则 $f(x)$ 在 $x=0$ 处 ________ 。

<br>

#### ㊃

求极限 $\lim\limits_{x \to 1} \dfrac{x - x^x}{1 - x + \ln x}$ 。

<br>

#### ㊄

求极限 $\lim\limits_{x \to 0} \dfrac{ a \left( x^2 - \sin^2 x \right) + b \arcsin x }{ c \left( e^x - 1 \right) + d \ln( 1 + x^3) }$ 。

<br>

#### ㊄

$\begin{array}{l} x \to 0 : \quad & e^{\alpha x} \gg x^{\beta} \gg \ln^\gamma x \quad (\alpha, \, \beta, \gamma > 0) \\\\ x \to 0^+ : \quad & \dfrac{1}{x^\alpha} \gg \mid \ln x \mid \end{array}$

<br>

#### ㊅

如果 $\lim\limits_{x \to 0} \dfrac{ x - \sin x + f(x) }{ x^4 }$ 存在，则 $\lim\limits_{x \to 0} \dfrac{x^3}{ f(x) } = (\quad)$ 。

$\begin{array}{l} ( {\rm A} ) \, -36 \quad & ( {\rm B} ) \, 36 \quad & ( {\rm C} ) \, 6 \quad & ( {\rm D} ) \, -6 \end{array}$ 

<br>

#### ㊆

1️⃣ 设 $f(x)$ 在 $(0, +\infty)$ 内可导，$f'(x) > 0，\, x \in (0, +\infty)$，证明 $f(x)$ 在 $(0, +\infty)$ 内单调增加。

2️⃣ 证明 $f(x) = (n^x + 1)^{ -(1/x) }$ 在 $(0, +\infty)$ 内单调增加，$n > 0$。

3️⃣ 给 $\{ x_n \}, \, x_n = \sum\limits_{k=1}^n (n^k + 1)^{ -(1/k) }$，求 $\lim\limits_{n \to +\infty} x_n$。

<br>

#### ㊇

1️⃣ 证明方程 $x = 2 \ln (1+x)$ 在 $(0, +\infty)$ 内有唯一实根 $\xi$ 。

2️⃣ 设 $x_1 > \xi$，定义 $x_{n+1} = 2\ln(1 + x_n), \, n=1, 2, \cdots$，证明 $\lim\limits_{n \to \infty} x_n = \xi$ 。

<br>

#### ㊈

$f(x) = \dfrac{\mid x \mid^x - 1}{x \, (x+1) \ln \mid x \mid}$ 的可去间断点的个数为 ________ 。

<br>

#### Ⅹ

设 $f(x)$ 二阶可导，$f'(0)=0, \, f''(0)=2$，计算

$$
\lim\limits_{x \to 0} \dfrac{ f(\sin x) - f(x) }{x^4}
$$

















<br>

## 三、参考答案

<br>

#### ㊀

- 由题可知 $x_n > 0$ 且 $x_n$ 单调减，因此 $\lim\limits_{n \to \infty} x_n$ 存在
- 记 $\lim\limits_{n \to \infty} x_n = A$，设 $A \not= 0$ 
   - 则 $\lim\limits_{n \to \infty} \dfrac{ x_{n+1} }{x_n} = \dfrac{ \lim\limits_{n \to \infty} x_{n+1} }{ \lim\limits_{n \to \infty}x_n } = \dfrac{A}{A} = 1$，矛盾，所以 $A \not= 0$ 。 
- 【变体】
   - 若 $\lim\limits_{n \to \infty} \dfrac{ x_{n+1} }{x_n} = 2$ 
      - 令 $u_n = \dfrac{1}{x_n}$，则 $\lim\limits_{n \to \infty} \dfrac{ u_{n+1} }{u_n} = \dfrac{1}{2}$，从而 $\lim\limits_{n \to \infty} u_n = 0$。利用无穷小和无穷大的关系，$\lim\limits_{n \to \infty} x_n = \infty$。
   - 若 $\lim\limits_{n \to \infty} \dfrac{ x_{n+1} }{x_n} = 1$ 
      - 则 $\lim\limits_{n \to \infty} x_n$ 可能存在，可能不存在。如 $x_n = \dfrac{1}{n}$ 时存在，$x_n = n$ 时不存在。

<br>

#### ㊁

- 【分析】讨论 $f(x)$ 在 $I$ 上的有界性，有三种方法
   1. 理论法
      - 若 $f(x)$ 在 $[a, b]$ 上连续，则 $f(x)$ 在 $[a, b]$ 上有界。
   2. 计算法
      - $\left. \begin{array}{l} f(x) \text{ 在 } (a, b) \text{ 内连续 } \\\\ \lim\limits_{x \to a^+} f(x) \text{ 存在 } \\\\ \lim\limits_{x \to b^-} f(x) \text{ 存在 } \end{array} \right\} \implies f(x) \text{ 在 } (a, b) \text{ 内有界 }$ 
   3. 四则运算法
      - 若 $\lim f(x)$ 不存在 $\implies$ 拆！
         - 因为极限不存在不代表函数无界
            - $\lim\limits_{x \to +\infty} \sin x$ 
         - 拆为 $\begin{cases} \text{ 有界 } \pm \text{ 有界 } \\\\ \text{ 有界 } \times \text{ 有界 } \end{cases}$ 
            - 有限个有界函数加减乘
- 计算
   - $\begin{array}{l} \lim\limits_{x \to -\infty} e^{ 1/x } \dfrac{ \sin \pi x }{ (x^2 - 1) \mid x \mid } = 0 \\\\ \lim\limits_{x \to -1 } e^{ 1/x } \dfrac{ \sin \pi x }{ (x^2 - 1) \mid x \mid } = \dfrac{1}{e} \lim\limits_{x \to -1} \dfrac{\sin \pi x}{x^2 - 1} = \dfrac{1}{e} \lim\limits_{x \to -1} \dfrac{\pi \cos \pi x}{2x} = \dfrac{\pi}{2e} \\\\ \lim\limits_{x \to 0^-} e^{ 1/x } \dfrac{ \sin \pi x }{ (x^2 - 1) \mid x \mid } = -\pi \\\\ \lim\limits_{x \to 0+} e^{ 1/x } \dfrac{ \sin \pi x }{ (x^2 - 1) \mid x \mid } = -\infty \\\\ \lim\limits_{x \to -1 } e^{ 1/x } \dfrac{ \sin \pi x }{ (x^2 - 1) \mid x \mid } = \dfrac{1}{e} \lim\limits_{x \to 1} \dfrac{\sin \pi x}{x^2 - 1} = e \lim\limits_{x \to 1} \dfrac{\pi \cos \pi x}{2x} = -\dfrac{\pi e}{2} \\\\ \lim\limits_{x \to +\infty} e^{ 1/x } \dfrac{ \sin \pi x }{ (x^2 - 1) \mid x \mid } = 0 \end{array}$ 

<br>

#### ㊂

- 脱帽
   - $\dfrac{ f(x) - f(0) }{ x^2 } > 0$ 
   - $x \in (-\delta, 0), \; f(x) > f(0)$ 
   - $x \in (0, \delta), \; f(x) > f(0)$ 
- 所以 取极小值

<br>

#### ㊃

$2$。

$\begin{array}{l} \lim\limits_{x \to 1} \dfrac{x - x^x}{1 - x + \ln x} &= \lim\limits_{x \to 1} \dfrac{ x (1 - x^{x - 1} ) }{1 - x + \ln x} & = \lim\limits_{x \to 1} \dfrac{ x (1 - e^{ (x-1) \ln x } ) }{1 - x + \ln x} \\\\ &= \lim\limits_{x \to 1} \dfrac{ x \left[ -(x-1) \ln x \right] }{1 - x + \ln x} &= \lim\limits_{x \to 1} \dfrac{ (x-1) \ln x }{x - 1 - \ln x} \\\\ &= \lim\limits_{x \to 1} \dfrac{ (x-1) (x-1) }{x - 1 - \ln x} &= \lim\limits_{x \to 1} \dfrac{ x^2 - 2x + 1 }{x - 1 - \ln x} \\\\ &= \lim\limits_{x \to 1} \dfrac{ 2x - 2 }{ 1 - \dfrac{1}{x} } &= \lim\limits_{x \to 1} \dfrac{ 2x (x - 1) }{ x - 1 } \\\\ &= 2 \end{array}$ 

<br>

#### ㊄

$\dfrac{b}{c}$。

找“带头大哥”：

<img src="https://github.com/WaterH2P/WaterH2P.github.io/raw/master/img/images/%E6%9E%81%E9%99%90%20-%20%E5%B8%A6%E5%A4%B4%E5%A4%A7%E5%93%A5.jpg" width="80%">

$\begin{array}{l} x^2 - \sin^2 x \sim \dfrac{1}{3}x^4 \quad & \arcsin x \sim x & \implies x^4 < x \\\\ e^x - 1 \sim x \quad & \ln(1 + x^3) \sim x^3 & \implies x > x^3 \end{array}$

$\therefore \quad \lim\limits_{x \to 0} \dfrac{ a \left( x^2 - \sin^2 x \right) + b \arcsin x }{ c \left( e^x - 1 \right) + d \ln( 1 + x^3) } = \dfrac{b}{c}$ 

<br>

#### ㊅

$( {\rm D} )$ 。

$\lim\limits_{x \to 0} \dfrac{ x - \sin x + f(x) }{ x^4 } = A \text{ (唯一) }$ 

$\begin{array}{l} \\ & \lim\limits_{x \to 0} \dfrac{ x - \sin x + f(x) }{ x^3 } = \lim\limits_{x \to 0} \dfrac{ x - \sin x + f(x) }{ x^4 } \cdot x = 0 \\\\ \implies & \lim\limits_{x \to 0} \dfrac{ x - \sin x }{ x^3 } + \dfrac{ f(x) }{ x^3 } = 0 \\\\ \implies & \lim\limits_{x \to 0} \dfrac{ f(x) }{ x^3 } = -\dfrac{1}{6} \\ & \end{array}$ 

$\therefore \quad \lim\limits_{x \to 0} \dfrac{ x^3 }{ f(x) } = -6$

<br>

#### ㊆

1️⃣

设任意 $0 < x_1 < x_2$ ，由拉氏定理（拉格朗日中值定理）得

$$
\dfrac{ f(x_2) - f(x_1) }{ x_2 - x_1 } = f'(\xi) \quad (x_1 < \xi < x_2)
$$

由题可知 $f'(x) > 0$，所以 $\dfrac{ f(x_2) - f(x_1) }{ x_2 - x_1 } > 0$，且 $x_2 > x_1$，所以 $f(x_2) > f(x_1)$ 。

所以当 $x_2 > x_1 > 0$ 时，$f(x_2) > f(x_1)$ 。

2️⃣

设 $g(x) = \ln f(x) = -\dfrac{ \ln (n^x + 1) }{x}$， 

$$
g'(x) = \dfrac{ \ln(n^x + 1) }{ x^2 } - \dfrac{ n^x \ln n }{ x(n^x + 1) } > \dfrac{ \ln n^x }{ x^2 } - \dfrac{ n^x \ln n }{ x n^x } = 0
$$

所以 $g(x)$ 在 $(0, +\infty)$ 内单调增加，所以 $f(x)$ 在 $(0, +\infty)$ 内单调增加。

3️⃣

放缩

$$
n \cdot (n+1)^{-1} < \sum\limits_{k=1}^n (n^k + 1)^{ -(1/k) } < n \cdot (n^n + 1)^{ -(1/n) }
$$

$\begin{array}{l} \lim\limits_{n \to +\infty} n \cdot (n+1)^{-1} = \lim\limits_{n \to +\infty} \dfrac{n}{n+1} = 1 \\\\ \lim\limits_{n \to +\infty} n \cdot (n^n + 1)^{ -(1/n) } = \lim\limits_{n \to +\infty} \dfrac{ (n^n)^{1/n} }{ (n^n + 1)^{1/n} } = \lim\limits_{n \to +\infty} \left[ 1 + \left( -\dfrac{1}{ n^n + 1 } \right) \right]^{1/n} = 1 \end{array}$ 

由【哪里跑】或【夹逼定理】，$\lim\limits_{n \to +\infty} x_n = 1$ 。

<br>

#### ㊇

1️⃣

设 $f(x) = x - 2\ln (1 + x)$ ，$f'(x) = 1 - \dfrac{2}{1+x} = 0 \implies x=1$ 。

当 $0<x<1$ 时，$f'(x) < 0$ 且 $f(0) = 0$ ，所以 $f(x) < 0$ 。

当 $x>1$ 时，$f'(x) > 0$ 且 $\lim\limits_{x \to +\infty} f(x) = +\infty$ ，所以存在唯一实根 $\xi$ 使得 $f(\xi) = 0$ 。

2️⃣

$x_1 > \xi \implies \begin{cases} x_1 > 2 \ln (1 + x_1) = x_2 \\\\ x_2 = 2 \ln (1 + x_1) > 2\ln (1 + \xi) = \xi \end{cases}$ ，

设 $x_{n-1} > x_n > \xi$ ，所以 $\begin{cases} x_n > 2 \ln (1 + x_n) = x_{n+1} \\\\ x_{n+1} = 2 \ln (1 + x_n) > 2\ln (1 + \xi) = \xi \end{cases}$

所以 $\{ x_n \}$ 单调减小且 $x_n > \xi$ ，设  $\lim\limits_{n \to \infty} x_n = A > 0$ 。

所以 $A = 2 \ln (1 + A)$ ，由 $( {\rm I} )$ 可知 $A = \xi$ 。

<br>

#### ㊈

$2$ 。

由题可知，只考虑无定义点 $x=0, \, -1, \, 1$ 。

$\begin{array}{l} \lim\limits_{x \to 0} \dfrac{\mid x \mid^x - 1}{x \, (x+1) \ln \mid x \mid} = \dfrac{ e^{x \ln \mid x \mid} - 1}{x \, (x+1) \ln \mid x \mid} = \lim\limits_{x \to 0} \dfrac{x \ln \mid x \mid}{x \, (x+1) \ln \mid x \mid} = 1 \\\\ \lim\limits_{x \to -1} \dfrac{\mid x \mid^x - 1}{x \, (x+1) \ln \mid x \mid} = \dfrac{ e^{x \ln \mid x \mid} - 1}{x \, (x+1) \ln \mid x \mid} = \lim\limits_{x \to -1} \dfrac{x \ln \mid x \mid}{x \, (x+1) \ln \mid x \mid} = \infty \\\\ \lim\limits_{x \to 1} \dfrac{\mid x \mid^x - 1}{x \, (x+1) \ln \mid x \mid} = \dfrac{ e^{x \ln \mid x \mid} - 1}{x \, (x+1) \ln \mid x \mid} = \lim\limits_{x \to 1} \dfrac{x \ln \mid x \mid}{x \, (x+1) \ln \mid x \mid} = \dfrac{1}{2} \end{array}$ 

所以 $x=0, \, 1$ 是可去间断点。

<br>

#### Ⅹ

$\begin{array}{l} \lim\limits_{x \to 0} \dfrac{ f(\sin x) - f(x) }{x^4} &= \lim\limits_{x \to 0} \dfrac{1}{x^3} \left[ \dfrac{ f(\sin x) - f(0) }{\sin x} \cdot \dfrac{\sin x}{x} - \dfrac{f(x) - f(0)}{x-0} \right] \\\\ &= \lim\limits_{x \to 0} \dfrac{1}{x^3} \left[ f'(x) \cdot \dfrac{\sin x}{x} - f'(x) \right] \\\\ &= \lim\limits_{x \to 0} \dfrac{1}{x^3} \cdot f'(x) \cdot \dfrac{\sin x - x}{x} \\\\ &= \lim\limits_{x \to 0} -\dfrac{1}{6} \cdot \dfrac{ f'(x) - f'(0) }{x} \\\\ &= \lim\limits_{x \to 0} -\dfrac{1}{6} f''(x) \\\\ &= -\dfrac{1}{3} \end{array}$ 


























