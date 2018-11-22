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

## 一、练习题

<br>

#### 1

设正项数列 $\{ x_n \}$ 满足 $\lim\limits_{n \to \infty} \dfrac{ x_{n+1} }{x_n} = \dfrac{1}{2}$ ，则 $( \text{ A } )$ 。

$\begin{array}{l} (A) \, \lim\limits_{n \to \infty} x_n = 0 & (B) \, \lim\limits_{n \to \infty} x_n \text{ 存在，但不为零} \\\\ (C) \, \lim\limits_{n \to \infty} x_n \text{ 不存在 } \quad & (D) \, \lim\limits_{n \to \infty} x_n \text{ 可能存在，也可能不存在 } \end{array}$ 

<br>

#### 2

$f(x) = e^{ 1/x } \dfrac{ \sin \pi x }{ (x^2 - 1) \mid x \mid }$ 无界的一个区间是 $( \text{  } )$ 。

$\begin{array}{l} (A) \, (-\infty, -1) & (B) \, (-1, 0) \\\\ (C) \, (0, 1) & (D) \, (1, +\infty) \end{array}$ 

<br>

#### 3

若 $\lim\limits_{x \to 0} \dfrac{ f(x) - f(0) }{ x^2 } = \ln 2$，则 $f(x)$ 在 $x=0$ 处 ________ 。

<br>

#### 4

求极限 $\lim\limits_{x \to 1} \dfrac{x - x^x}{1 - x + \ln x}$ 。

<br>

#### 5

求极限 $\lim\limits_{x \to 0} \dfrac{ a \left( x^2 - \sin^2 x \right) + b \arcsin x }{ c \left( e^x - 1 \right) + d \ln( 1 + x^3) }$ 。

<br>

#### 5

$\begin{array}{l} x \to 0 : \quad & e^{\alpha x} \gg x^{\beta} \gg \ln^\gamma x \quad (\alpha, \, \beta, \gamma > 0) \\\\ x \to 0^+ : \quad & \dfrac{1}{x^\alpha} \gg \mid \ln x \mid \end{array}$

<br>

#### 6

如果 $\lim\limits_{x \to 0} \dfrac{ x - \sin x + f(x) }{ x^4 }$ 存在，则 $\lim\limits_{x \to 0} \dfrac{x^3}{ f(x) } = (\quad)$ 。

$\begin{array}{l} ( {\rm A} ) \, -36 \quad & ( {\rm B} ) \, 36 \quad & ( {\rm C} ) \, 6 \quad & ( {\rm D} ) \, -6 \end{array}$ 





<br>

## 二、参考答案

<br>

#### 1

- 由题可知 $x_n > 0$ 且 $x_n$ 单调减，因此 $\lim\limits_{n \to \infty} x_n$ 存在
- 记 $\lim\limits_{n \to \infty} x_n = A$，设 $A \not= 0$ 
   - 则 $\lim\limits_{n \to \infty} \dfrac{ x_{n+1} }{x_n} = \dfrac{ \lim\limits_{n \to \infty} x_{n+1} }{ \lim\limits_{n \to \infty}x_n } = \dfrac{A}{A} = 1$，矛盾，所以 $A \not= 0$ 。 
- 【变体】
   - 若 $\lim\limits_{n \to \infty} \dfrac{ x_{n+1} }{x_n} = 2$ 
      - 令 $u_n = \dfrac{1}{x_n}$，则 $\lim\limits_{n \to \infty} \dfrac{ u_{n+1} }{u_n} = \dfrac{1}{2}$，从而 $\lim\limits_{n \to \infty} u_n = 0$。利用无穷小和无穷大的关系，$\lim\limits_{n \to \infty} x_n = \infty$。
   - 若 $\lim\limits_{n \to \infty} \dfrac{ x_{n+1} }{x_n} = 1$ 
      - 则 $\lim\limits_{n \to \infty} x_n$ 可能存在，可能不存在。如 $x_n = \dfrac{1}{n}$ 时存在，$x_n = n$ 时不存在。

<br>

#### 2

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

#### 3

- 脱帽
   - $\dfrac{ f(x) - f(0) }{ x^2 } > 0$ 
   - $x \in (-\delta, 0), \; f(x) > f(0)$ 
   - $x \in (0, \delta), \; f(x) > f(0)$ 
- 所以 取极小值

<br>

#### 4

$2$。

$\begin{array}{l} \lim\limits_{x \to 1} \dfrac{x - x^x}{1 - x + \ln x} &= \lim\limits_{x \to 1} \dfrac{ x (1 - x^{x - 1} ) }{1 - x + \ln x} & = \lim\limits_{x \to 1} \dfrac{ x (1 - e^{ (x-1) \ln x } ) }{1 - x + \ln x} \\\\ &= \lim\limits_{x \to 1} \dfrac{ x \left[ -(x-1) \ln x \right] }{1 - x + \ln x} &= \lim\limits_{x \to 1} \dfrac{ (x-1) \ln x }{x - 1 - \ln x} \\\\ &= \lim\limits_{x \to 1} \dfrac{ (x-1) (x-1) }{x - 1 - \ln x} &= \lim\limits_{x \to 1} \dfrac{ x^2 - 2x + 1 }{x - 1 - \ln x} \\\\ &= \lim\limits_{x \to 1} \dfrac{ 2x - 2 }{ 1 - \dfrac{1}{x} } &= \lim\limits_{x \to 1} \dfrac{ 2x (x - 1) }{ x - 1 } \\\\ &= 2 \end{array}$ 

<br>

#### 5

$\dfrac{b}{c}$。

找“带头大哥”：

<img src="https://github.com/WaterH2P/WaterH2P.github.io/raw/master/img/images/%E6%9E%81%E9%99%90%20-%20%E5%B8%A6%E5%A4%B4%E5%A4%A7%E5%93%A5.jpg" width="80%">

$\begin{array}{l} x^2 - \sin^2 x \sim \dfrac{1}{3}x^4 \quad & \arcsin x \sim x & \implies x^4 < x \\\\ e^x - 1 \sim x \quad & \ln(1 + x^3) \sim x^3 & \implies x > x^3 \end{array}$

$\therefore \quad \lim\limits_{x \to 0} \dfrac{ a \left( x^2 - \sin^2 x \right) + b \arcsin x }{ c \left( e^x - 1 \right) + d \ln( 1 + x^3) } = \dfrac{b}{c}$ 

<br>

#### 6

$( {\rm D} )$ 。

$\lim\limits_{x \to 0} \dfrac{ x - \sin x + f(x) }{ x^4 } = A \text{ (唯一) }$ 

$\begin{array}{l} \\ & \lim\limits_{x \to 0} \dfrac{ x - \sin x + f(x) }{ x^3 } = \lim\limits_{x \to 0} \dfrac{ x - \sin x + f(x) }{ x^4 } \cdot x = 0 \\\\ \implies & \lim\limits_{x \to 0} \dfrac{ x - \sin x }{ x^3 } + \dfrac{ f(x) }{ x^3 } = 0 \\\\ \implies & \lim\limits_{x \to 0} \dfrac{ f(x) }{ x^3 } = -\dfrac{1}{6} \\ & \end{array}$ 

$\therefore \quad \lim\limits_{x \to 0} \dfrac{ x^3 }{ f(x) } = -6$
