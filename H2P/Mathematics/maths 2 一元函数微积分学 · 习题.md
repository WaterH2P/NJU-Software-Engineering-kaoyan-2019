---
title: 一元函数微积分学 · 习题
date: 2018-8-2
updated: 2018-11-24
tags: [maths,高数,kaoyan]
mathjax: true

description: 做笔记，喝凉茶，做习题
real-date: 2018-11-23
---

<!-- 
$\begin{array}{l} ( {\rm A} ) \, 1 \qquad & ( {\rm B} ) \, 2 \\\\ ( {\rm C} ) \, 3 \qquad & ( {\rm D} ) \, 4 \end{array}$ 
-->

<!-- 
$\begin{array}{l} \end{array}$
-->

<!-- 
⭐
️ -->

【70-80 分】

- 定义    （ 4 / 10 ）
- 计算    （ 4 + 10 ）
- 应用    （ 10 ）
   - 几何应用
   - 物理应用
- 逻辑证明     （ 10 ）
   - 中值定理
   - 方程根
   - 不等式

<br>

## 一、概念

导数、微分、不定积分、定积分、变限积分、反常积分

凡是见到 $f'(x_0)$，先用定义再说；区间上求导用公式。

<br>

#### Ⅰ、微分不等式

《高数 18 讲》 P106

<br>

#### Ⅱ、定义考法

<img src="https://github.com/WaterH2P/WaterH2P.github.io/raw/master/img/images/%E5%AE%9A%E7%A7%AF%E5%88%86%20%E5%AE%9A%E4%B9%89%E8%80%83%E6%B3%95%E4%BA%8C.jpg" width="80%">

$$
f(x) \text{ 可积 } \implies F(x) = \int_a^x f(x) \, {\rm d}t \text{ 连续 } \qquad \text{ 看 18 讲证明 }
$$

<br>

#### Ⅲ、变限积分求导公式

$$
\left( \int_{\varphi_1(x)}^{\varphi_2(x)} f(t) \, {\rm d}t \right)'_x  = f \left[ \, \varphi_2(x) \, \right] \cdot \varphi'_2(x) - f \left[ \, \varphi_1(x) \, \right] \cdot \varphi'_1(x)
$$

上述求导公式使用前提是被积函数只含有 $t$，不含 $x$。

<br>

#### Ⅳ、反常积分

<br>

###### 1、p-积分

$$
\int_1^{+\infty} \dfrac{1}{x^p} \, {\rm d}x \begin{cases} p>1 & \implies \text{ 收敛 } \\\\ p \leq 1 & \implies \text{ 发散 } \end{cases}
$$

$and$

$$
\int_0^1 \dfrac{1}{x^p} \, {\rm d}x \begin{cases} p<1 & \implies \text{ 收敛 } \\\\ p \geq 1 & \implies \text{ 发散 } \end{cases}
$$

<br>

#### Ⅴ、综合性质

$$
\begin{array}{|c|c|c|c|c|}
   \hline \\
   \int_0^x f(t) \, {\rm d}t & \longleftarrow & f(x) & \longrightarrow & f'(x) \\\\
   \hline \\
   \text{ 偶 } & \longleftarrow & \text{ 奇 } & \longrightarrow & \text{ 偶 } \\\\
   \hline \\
   \text{ 奇 } & \longleftarrow & \text{ 偶 } & \longrightarrow & \text{ 奇 } \\\\
   \hline \hline \\
   \begin{array}{c} T \\\\ \Updownarrow \\\\ \int_0^T f(x) \, {\rm d}x = 0 \end{array} & \longleftarrow & T & \longrightarrow & T \\\\
   \hline \hline \\
   & & \begin{array}{c} f(x) \text{ 在有限区间有界 } \end{array} & \longleftarrow & f'(x) \text{ 有界 } \\\\
   \hline
\end{array}
$$


























<br>

## 二、练习题


<br>

#### Ⅰ

<br>

###### 1、

设 $F(x) = \begin{cases} x^2 \sin \dfrac{1}{x}, \quad & x\not= 0 \\\\ 0, \quad & x=0 \end{cases}$，求 $F'(x)$。

<br>

###### 2、

设常数 $a>1$，函数 

$$
f(x) = \begin{cases} x^\alpha \sin \dfrac{1}{x}, \quad & x>0 \\\\ 0, \quad & x=0 \\\\ \dfrac{1}{n^\alpha}, \quad & -\dfrac{1}{n} < x \leq -\dfrac{1}{n+1}, n=1, 2, \cdots \end{cases}
$$

则 $f(x)$ 在 $x=0$ 处 $(\quad)$。

$\begin{array}{l} ( {\rm A} ) \, \text{ 不连续 } \qquad & ( {\rm B} ) \, \text{ 连续但不可导 } \\\\ ( {\rm C} ) \, \text{ 可导， } f'(0) = \alpha \qquad & ( {\rm D} ) \, \text{ 可导， } f'(0) = 0 \end{array}$ 

<br>

###### 3、

设函数 $f(x)$ 在区间 $(-\delta, \delta)$ 内有定义，若当 $x \in (-\delta, \delta)$ 时，恒有 $\mid f(x) \mid \leq x^2$，则 $x=0$ 必然是 $f(x)$ 的 $(\quad)$。

$\begin{array}{l} ( {\rm A} ) \, \text{ 间断点 } \qquad & ( {\rm B} ) \, \text{ 连续，但不可导的点 } \\\\ ( {\rm C} ) \, \text{ 可导的点，且 } f'(0) = 0 \qquad & ( {\rm D} ) \, \text{ 可导的点，且 } f'(0) \not= 0 \end{array}$ 

<br>

#### Ⅱ、连续函数必有原函数

即设 $f(x)$ 在 $I$ 上连续，证明

$$
F(x) = \int_a^x f(t) \, {\rm d}t + C, \quad (a, x \in I)
$$

必可导，且 $F'(x) = f(x), \quad \forall x \in I$。

<br>

#### Ⅲ、原函数的存在性

设

$$
f(x) = \begin{cases} \cos x, & x \geq 0 \\\\ \sin x, & x < 0 \end{cases} \qquad g(x) = \begin{cases} x \sin \frac{1}{x}, & x \not= 0 \\\\ 0, & x=0 \end{cases}
$$

则在区间 $(-1, 1)$ 上

$\begin{array}{l} ( {\rm A} ) \, f(x) \text{ 与 } g(x) \text{ 都存在原函数 } \qquad & ( {\rm B} ) \, f(x) \text{ 与 } g(x) \text{ 都不存在原函数 } \\\\ ( {\rm C} ) \, f(x) \text{ 存在原函数 }， g(x) \text{ 不存在原函数 } \qquad & ( {\rm D} ) \, f(x) \text{ 不存在原函数 }， g(x) \text{ 存在原函数 } \end{array}$ 

<br>

#### Ⅳ、周期性

设 $f(x)$ 在 $(-\infty, ++\infty)$ 内连续，以 ${\rm T}$ 为周期，证明

$\begin{array}{l} 1) \; \text{ 可导 } f(x) \text{ 以 } {\rm T} \text{ 为周期 } \implies f'(x) \text{ 以 } {\rm T} \text{ 为周期 } \\\\ 2) \; \int_a^{a+T} f(x) \, {\rm d}x = \int_0^T f(x) \, {\rm d}x \quad (\, \forall \, a \in {\rm R} \, ) \\\\ 3) \; \int_0^x f(x) \, {\rm d}t \text{ 以 } {\rm T} \text{ 为周期 } \iff \int_0^T f(x) \, {\rm d}x = 0 \\\\ 4) \; \int f(x) \, {\rm d}x \, \text{ （即 } f(x) \text{ 的全体原函数） } \text{ 周期为 } {\rm T} \iff \int_0^T f(x) \, {\rm d}x = 0 \end{array}$

<br>

#### Ⅴ、有界性

设 $f(x)$ 在 $(0, \, +\infty)$ 内可导，则 $(\quad)$。

$\begin{array}{l} ( {\rm A} ) \, f(x) \text{ 在 } (X, \, +\infty) \text{ 内有界，则 } f'(x) \text{ 在 } (X, \, +\infty) \text{ 内有界 } \\\\ ( {\rm B} ) \, f'(x) \text{ 在 } (X, \, +\infty) \text{ 内有界，则 } f(x) \text{ 在 } (X, \, +\infty) \text{ 内有界 } \\\\ ( {\rm C} ) \, f(x) \text{ 在 } (0, \, \delta) \text{ 内有界，则 } f'(x) \text{ 在 } (0, \, \delta) \text{ 内有界 } \\\\ ( {\rm D} ) \, f'(x) \text{ 在 } (0, \, \delta) \text{ 内有界，则 } f(x) \text{ 在 } (0, \, \delta) \text{ 内有界 } \end{array}$ 

<br>

#### Ⅵ、定积分精确定义

$n$ 等分 $[a, \, b]$，取右端点的高，则

$$
\lim\limits_{n \to \infty} \sum\limits_{i=1}^n f \left( a + \dfrac{b-a}{n}i \right) \dfrac{b-a}{n} = \int_a^b f(x) \, {\rm d}x
$$

令 $a=0, \, b=1$，则

$$
\lim\limits_{n \to \infty} \sum\limits_{i=1}^n f \left( \dfrac{i}{n} \right) \dfrac{1}{n} = \int_0^1 f(x) \, {\rm d}x
$$

<br>

###### 1、

计算

$$
\lim\limits_{n \to \infty} \left( \dfrac{n+1}{n^2+1} + \dfrac{n+2}{n^2+4} + \dfrac{n+3}{n^2+9} + \cdots + \dfrac{n+n}{n^2+n^2} \right)
$$


<br>

###### 2、

计算

$$
\lim\limits_{n \to \infty} \sum\limits_{i=1}^n \dfrac{ \sin \dfrac{\pi i}{n} }{n+1}
$$

<br>

#### Ⅶ、变上限积分求导

设 $f(x)$ 连续，则

$$
\left( \int_0^x t f(x^2 - t^2) \, {\rm d}t \right)' = \text{ ? }
$$

<br>

#### Ⅷ、⭐敛散性

设 $a>0$，讨论

$$
\int_0^1 \dfrac{\ln x}{x^\alpha} {\rm d}x
$$

的敛散性。

<br>

#### Ⅸ、求导

<br>

###### 1、复合函数

设 $f(x), \, g(x)$ 二阶可导，$g''(x)<0$，若 $g'(x_0)=a$ 是 $g(x)$ 的极值，则 $f \left[ \, g(x) \, \right]$ 在 $x_0$ 取极大值的一个充分条件是 $(\quad)$。

$\begin{array}{l} ( {\rm A} ) & f'(a)<0 \qquad & ( {\rm B} ) & f'(a)>0 \\\\ ( {\rm C} ) & f''(a)<0 \qquad & ( {\rm D} ) & f''(a)>0 \end{array}$ 

<br>

###### 2、隐函数

设 $y=y(x)$ 由方程 $y^3 + xy^2 + x^2y + 6 = 0$ 确定，求 $y(x)$ 的极值。

<br>

###### 3、参数方程

设曲线 $\begin{cases} x = t - \sin t \\\\ y = 1 - \cos t \end{cases} \, (0<t<\pi)$ 上任意一点 $(x, \, y)$ 处的切线的倾斜角为 $\alpha$，求 $\dfrac{\cos \alpha}{ \sqrt{y} }$。


<br>

###### 4、反函数

设 $y=f(x)$ 与 $x = y + \arctan y$ 互为反函数，求 $\left. {\rm d} f(x) \right|_{x=0}$ 。

<br>

###### 5、⭐泰勒（麦氏）公式

设 $y = x^2 \cos 2x$，求 $y_{ (0) }^{ (2020) }$ 。

<br>

###### 6、莱布尼兹高阶求导公式

<br>

#### Ⅹ、求积分

<br>

###### 1、凑微分法

$$
\int \sqrt{ \dfrac{ \ln( x + \sqrt{1+x^2} ) }{1+x^2} } \, {\rm d}x
$$

<br>

###### 2、微观换元法

$$
\int \dfrac{ {\rm d}x }{ (2x+1) \sqrt{3+4x-4x^2} }
$$

<br>

###### 3、宏观换元法

$$
\int e^{2x} \arctan \sqrt{e^x-1} \, {\rm d}x
$$

<br>

###### 4、有理函数的积分

$$
\int \dfrac{x}{x^3-x^2+x-1} \, {\rm d}x
$$




















<br>

## 三、参考答案

<br>

#### Ⅰ

<br>

###### 1、

$\begin{array}{l} x=0, \quad F'(0) &= \lim\limits_{x \to 0} \dfrac{ F(x) - F(0) }{ x - 0 } = \lim\limits_{x \to 0} x \sin \dfrac{1}{x} = 0 \\\\ x \not= 0, \quad F'(x) &= 2x \sin \dfrac{1}{x} + x^2 \cos \dfrac{1}{x} \cdot (- \dfrac{1}{x^2} ) \\\\ &= 2x \sin \dfrac{1}{x} - \cos \dfrac{1}{x} \\ & \end{array}$ 

故 $F'(x) = \begin{cases} 2x \sin \dfrac{1}{x} - \cos \dfrac{1}{x}, \quad & x \not= 0 \\\\ 0, \quad & x=0 \end{cases}$ 

<br>

###### 2、

${\rm D}$。

连续性

$\begin{array}{l} \lim\limits_{x \to 0^+} x^\alpha \sin \dfrac{1}{x} = 0 \\\\ \lim\limits_{x \to 0^-} f(x) = \lim\limits_{n \to \infty} \dfrac{1}{ n^\alpha } = 0 \end{array}$ 

可导性

$\begin{array}{l} \lim\limits_{x \to 0^+} \dfrac{ f(x) - f(0) }{x-0} = \lim\limits_{x \to 0^+} x \sin \dfrac{1}{x} = 0 \\\\ \lim\limits_{x \to 0^-} \dfrac{ f(x) - f(0) }{x-0} = \lim\limits_{x \to 0^-} \dfrac{ f(x) }{x} \end{array}$ 

由于 $x \to 0^-$ 时，定义域被划分为一小段一小段，所以不可以直接将 $f(x) = \dfrac{1}{n^\alpha}$ 带入。

$-\dfrac{1}{n} < x \leq -\dfrac{1}{n+1} \implies -(n+1) \leq \dfrac{1}{x} < -n$，所以 $-\dfrac{n+1}{n^\alpha} \leq \dfrac{ f(x) }{x} < -\dfrac{n}{n^\alpha}$ 

由于 $a>1$，所以 $\begin{cases} \lim\limits_{n \to \infty} -\dfrac{n+1}{n^\alpha} = 0 \\\\ \lim\limits_{n \to \infty} -\dfrac{n}{n^\alpha} = 0 \end{cases}$，所以 $\lim\limits_{x \to 0^-} \dfrac{ f(x) }{x} = 0$。

<br>

###### 3、

${\rm C}$。

$\mid f(0) \mid \leq 0 \implies f(0)=0$ 

$\begin{array}{l} \mid f(x) \mid \leq x^2 &\implies 0 \leq \, \left| \dfrac{ f(x) }{x} \right| \, \leq \dfrac{x^2}{\mid x \mid} \\\\ & \implies 0 \leq \lim\limits_{x \to 0} \left| \dfrac{ f(x) }{x} \right| \leq \lim\limits_{x \to 0} \dfrac{x^2}{\mid x \mid} = 0 \\\\ & \implies \lim\limits_{x \to 0} \dfrac{ f(x) }{x} = 0 \end{array}$ 

所以 $f'(0) = \lim\limits_{x \to 0} \dfrac{ f(x) - f(0) }{x-0} = \lim\limits_{x \to 0} \dfrac{ f(x) }{x} = 0$ 

$$
\begin{array}{c}
\quad \\
★★★ \\
\quad \\
\lim A = 0 \iff \lim \mid A \mid = 0
\end{array}
$$

${\rm or}$

$\mid f(x) \mid \leq x^2 \implies -x^2 \leq f(x) \leq x^2$ 

<br>

#### Ⅱ、连续函数必有原函数

$\begin{array}{l} F'(x) &= \lim\limits_{\Delta x \to 0} \dfrac{ F(x + \Delta x) - F(x) }{ \Delta x } \\\\ &= \lim\limits_{\Delta x \to 0} \dfrac{ \int_x^{x+\Delta x} f(t) \, {\rm d}t }{\Delta x} \\\\ &= \lim\limits_{\Delta x \to 0} \dfrac{ f(\xi) \cdot \Delta x }{\Delta x} \qquad (\xi \text{ 介于 } x, x+\Delta x \text{ 之间 } ) \\\\ &= \lim\limits_{\xi \to x} f(\xi) = f(x) \end{array}$

- 凡是遇到 $\int_a^b f(x) \, {\rm d}x$，$f(x)$ 抽象 $\implies$ 先用积分中值定理处理一下再说。

$$
\int_a^b f(x) \, {\rm d}x = f(\xi)(b-a), \quad \exists \, \xi \in (a, b)
$$

- 含跳跃、可去、无穷间断点的 $f(x)$ 在此区间无原函数。
   
   - 跳跃间断点的变限积分存在尖点（不可导点）
   
   - 可去间断点的变限积分处处可导

- 含振荡间断点的 $f(x)$ 在此区间可能有也可能没有原函数。

   - $\begin{array}{l} \\ f(x) = \begin{cases} 2x \sin \dfrac{1}{x} - \cos \dfrac{1}{x}, & x \not= 0 \\\\ 0, & x=0 \end{cases}\\ & \end{array}$ 的原函数是 $F(x) = \begin{cases} x^2 \sin \dfrac{1}{x}, & x\not= 0 \\\\ 0, & x=0 \end{cases}$ 。

   - $f(x) = \begin{cases} \dfrac{1}{x} \sin \dfrac{1}{x}, & x \not= 0 \\\\ 0, & x=0 \end{cases}$ 在包含 $(0, \, 0)$ 的任何区间上没有原函数。

<br>

#### Ⅲ、原函数的存在性

${\rm D}$。

$(0, 0)$ 为 $f(x)$ 的跳跃间断点，所以 $f(x)$ 没有原函数。

$\lim\limits_{x \to 0} x \sin \dfrac{1}{x} = 0 = g(0)$ 所以 $g(x)$ 为连续函数，存在原函数。

<br>

#### Ⅳ、周期性

1）

$$
\begin{array}{l} f'(x+T) &= \lim\limits_{\Delta x \to 0} \dfrac{ f(x+T+\Delta x) - f(x+T) }{\Delta x} \\\\ &= \lim\limits_{\Delta x \to 0} \dfrac{ f(x+\Delta x) - f(x) }{\Delta x} = f'(x) \end{array}
$$

2）

$$
\int_a^{a+T} f(x) \, {\rm d}x = \int_0^T f(x) \, {\rm d}x
$$

3）

$$
\begin{array}{l} 
   & \int_0^{x+T} f(t) \, {\rm d}t - \int_0^{x} \, f(t) {\rm d}t = 0 \\\\
   \implies & \int_x^{x+T} f(t) \, {\rm d}t = 0 \\\\
   \implies & \int_0^T f(t) \, {\rm d}t = 0 \qquad ( \text{ 由 1）得 } )
\end{array}
$$

凡是以 ${\rm T}$ 为周期的函数，它的变限积分还是以 ${\rm T}$ 为周期的充要条件是 $\int_0^T f(x) \, {\rm d}x = 0$。

4）

$$
\int f(x) \, {\rm d}x = \int_0^x f(t) \, {\rm d}t + C
$$

<br>

#### Ⅴ、有界性

${\rm D}$。

${\rm A}$ 反例
- $(\sin 🐶)' = 🐶' \cos 🐶$ 
- $(\sin x^2)' = 2x \cos x^2$ 

${\rm B}$ 反例
- x

${\rm C}$ 反例
- $(\sin \dfrac{1}{x})' = -\dfrac{1}{x^2} \cos \dfrac{1}{x}$ 

<br>

###### 【Th】

设 $f(x)$ 在 $[a, \, b]$ 有限区间内可导，且 $f'(x)$ 有界，$\forall \, x \in (a, \, b)$，证明 $f(x)$ 有界，$\forall \, x \in (a, \, b)$ 。
- 联系 $f$ 与 $f'$，想到拉式定理。
- 由题可知，$\exists \, M > 0 \implies \mid f'(x) \mid \leq M$。
- $\begin{array}{l} \\ & f(x) - f(x_0) = f'(\xi)(x - x_0) \\\\ \implies & \mid f(x) \mid = \mid f(x_0) + f'(\xi)(x - x_0) \mid \\\\ \implies & \leq \mid f(x_0) \mid + \mid f'(\xi)(x - x_0) \mid \\\\ \implies & \leq \mid f(x_0) \mid + M(b-a) \end{array}$ 

<br>

#### Ⅵ、定积分精确定义

三步曲：1️⃣ 先提出 $\dfrac{1}{n}$，2️⃣ 再凑出 $\dfrac{i}{n}$，3️⃣ $\dfrac{1}{n}$ 读作 $\int_0^1$ 上的 ${\rm d}x$，$\dfrac{i}{n}$ 读作 $\int_0^1$ 上的 $x$。

<br>

###### 1、

$\dfrac{\pi}{4} + \dfrac{1}{2} \ln 2$。

$\begin{array}{l} \text{原式 } &= \lim\limits_{n \to \infty} \sum\limits_{i=1}^n \dfrac{n+i}{n^2 + i^2} \\\\ &= \lim\limits_{n \to \infty} \sum\limits_{i=1}^n \dfrac{n^2 + ni}{n^2 + i^2} \cdot \dfrac{1}{n} \\\\ &= \lim\limits_{n \to \infty} \sum\limits_{i=1}^n \dfrac{1 + i/n}{1 + (1/n)^2} \cdot \dfrac{1}{n} \\\\ & = \int_0^1 \dfrac{1+x}{1+x^2} {\rm d}x \\\\ &= \int_0^1 \dfrac{1}{1+x^2} {\rm d}x + \int_0^1 \dfrac{x}{1+x^2} {\rm d}x \\\\ &= \left. \arctan x \right|_0^1 + \left. \dfrac{1}{2} \ln (1+x^2) \right|_0^1 \\\\ &= \dfrac{\pi}{4} + \dfrac{1}{2} \ln 2 \end{array}$ 

<br>

###### 2、

$\dfrac{2}{\pi}$。

$\begin{array}{l} \lim\limits_{n \to \infty} \sum\limits_{i=1}^n \dfrac{ \sin \dfrac{\pi i}{n} }{n+1} &= \lim\limits_{n \to \infty} \dfrac{1}{n+1} \sum\limits_{i=1}^n \sin \dfrac{\pi i}{n} \\\\ &= \lim\limits_{n \to \infty} \dfrac{n}{n+1} \cdot \dfrac{1}{n} \cdot \sum\limits_{i=1}^n \sin (\pi \dfrac{i}{n}) \\\\ &= \lim\limits_{n \to \infty} \cdot \sum\limits_{i=1}^n \sin (\pi \dfrac{i}{n}) \cdot \dfrac{1}{n} \\\\ &= \int_0^1 \sin \pi x \, {\rm d}x \\\\ &= \dfrac{2}{\pi} \end{array}$ 

<br>

#### Ⅶ、变上限积分求导

由于被积函数中含有 $x$，所以想办法除掉 $x$。

【换元】

令 $x^2 - t^2 = u \implies -2t \, {\rm d}t = {\rm d}u$ （对于 $u$，$x$ 看为常数）

$\begin{array}{l} \int_0^x t f(x^2 - t^2) \, {\rm d}t &= -\dfrac{1}{2} \int_{x^2}^0 f(u) \, {\rm d}u \\\\ &= \dfrac{1}{2} \int_0^{x^2} f(u) \, {\rm d}u \end{array}$ 

$\left( \dfrac{1}{2} \int_0^{x^2} f(u) \, {\rm d}u \right)' = xf(x^2)$ 

<br>

#### Ⅷ、敛散性

1️⃣ 

$\alpha \geq 1$ 时，$\dfrac{1}{ x^\alpha }$ 发散

由于 $\lim\limits_{x \to 0} \dfrac{ \ln x }{ x^\alpha } = \lim\limits_{x \to 0} \ln x \cdot \dfrac{1}{ x^\alpha } = \infty$，所以 $\dfrac{\ln x}{x^\alpha}$ 发散。

2️⃣ 

当 $0 < \alpha < 1$ 时，取 $\varepsilon > 0$，使得 $\alpha + \varepsilon < 1$，所以 $\dfrac{1}{ x^{\alpha + \varepsilon} }$ 收敛。

由于 $\lim\limits_{x \to 0} \dfrac{ \ln x }{ x^\alpha } \cdot \dfrac{1}{ x^{\alpha + \varepsilon} } = \lim\limits_{x \to 0} x^\varepsilon \ln x = 0$，所以 $\dfrac{\ln x}{x^\alpha}$ 收敛。

<br>

#### Ⅸ、求导

<br>

###### 1、复合函数

${\rm B}$。

$\begin{cases} g(x_0) = a \\\\ g'(x_0) = 0 \\\\ g''(x_0)<0 \\\\ f [ \, g(x) \, ] \text{ 在 } x_0 \text{ 取极大值 } \end{cases}$ $\implies$ $\begin{cases} f'[ \, g(x_0) \, ]g'(x_0) = 0 \\\\ f'' \left[ \, g(x_0) \, \right] \cdot \left[ \, g'(x_0) \, \right]^2 + f' \left[ \, g(x_0) \, \right]g''(x_0) > 0 \end{cases}$

$f''(a) \cdot 0 + f'(a) \cdot g''(x_0) > 0 \implies f'(a) > 0$

<br>

###### 2、隐函数

<br>

###### 3、参数方程

$\dfrac{ \sqrt{2} }{2}$。

$\tan \alpha = \dfrac{ {\rm d}y }{ {\rm d}x } = \dfrac{ {\rm d}y / {\rm d}t }{ {\rm d}x / {\rm d}t } = \dfrac{\sin t}{1 - \cos t}$ 

$\cos \alpha = \sqrt{ \dfrac{1}{\sec^2 \alpha} } = \sqrt{ \dfrac{1}{1 + \tan^2 \alpha} } = \sqrt{ \dfrac{1 - \cos t}{2} }$ 

$\therefore \; \dfrac{\cos \alpha}{ \sqrt{y} } = \dfrac{ \sqrt{2} }{2}$

<br>

###### 4、反函数

$\dfrac{1}{2} \, {\rm d}x$。

$f'(x) = \dfrac{ {\rm d}y }{ {\rm d}x } = \dfrac{1}{ \dfrac{ {\rm d}x }{ {\rm d}y } } = \dfrac{1}{ 1 + \dfrac{1}{1 + y^2} } = \dfrac{1+y^2}{2+y^2}$ 

当 $x=0$ 时，$y + \arctan y = 0 \implies y=0$

$\therefore \; \left. {\rm d} f(x) \right|_{x=0} = \dfrac{1}{2} \, {\rm d}x$

<br>

###### 5、⭐泰勒（麦氏）公式

三步曲：对于无穷阶可导函数 $y(x)$，1️⃣ $y(x) = \sum\limits_{n=0}^\infty \dfrac{ y^{ (n) }(0) }{n!}x^n$，2️⃣ $y(x)$ 具体函数具体分析，3️⃣ 展开式具有唯一性。

即 1️⃣ 抽象展开，2️⃣ 具体展开，3️⃣ 相同次数前系数相等。

1️⃣ 

$y(x) = \sum\limits_{m=0}^\infty \dfrac{ y^{ (m) }(0) }{m!}x^m$ 

2️⃣ 

$\cos 2x = \sum\limits_{n=0}^\infty (-1)^n \cdot \dfrac{ (2x)^{2n} }{ (2n)! } \implies y = \sum\limits_{n=0}^\infty (-1)^n \cdot \dfrac{ 2^{2n} }{ (2n)! } \cdot x^{2n+2}$ 

3️⃣ 

抽象的：$\dfrac{ y^{(2020)}_{(0)} }{ (2020)! } x^{2020}$ 

由 $2n+2 = m = 2020 \implies n = 1009$ 

具体的：$(-1)^{1009} \dfrac{ 2^{(2018)} }{ (2018)! } x^{2020}$ 

唯一性：$\begin{array}{l} \\ \implies & \dfrac{ y^{(2020)}_{(0)} }{ (2020)! } = (-1)^{1009} \dfrac{ 2^{(2018)} }{ (2018)! } \\\\ \implies & y^{(2020)}_{(0)} = -2020 \cdot 2019 \cdot 2^{2018} \end{array}$ 

<br>

#### Ⅹ、求积分

<br>

###### 1、凑微分法

$$
\int \sqrt{ \dfrac{ \ln( x + \sqrt{1+x^2} ) }{1+x^2} } \, {\rm d}x
$$

<br>

###### 2、微观换元法

$$
\int \dfrac{ {\rm d}x }{ (2x+1) \sqrt{3+4x-4x^2} }
$$

令 $2x-1 = 2\sin t$，原式 $= \int \dfrac{ \cos t \, {\rm d}t }{ 2(\sin t + 1)2\cos t } = \dfrac{1}{4} \int \dfrac{1}{1+\sin t} {\rm d}t$ 

$\dfrac{1}{1+\sin t}$ 是正三角形式，化为倒三角形式。

$\begin{array}{l} \text{原式 } &= \dfrac{1}{4} \int \dfrac{1 - \sin t}{\cos^2 t} {\rm d}t &= \dfrac{1}{4} \left( \tan t - \dfrac{1}{\cos t} \right) + C \\\\ \text{回代 } &= \dfrac{2x-3}{ 4 \sqrt{3+4x-4x^2} } + C \end{array}$ 

<br>

###### 3、宏观换元法

$$
I = \int e^{2x} \arctan \sqrt{e^x-1} \, {\rm d}x
$$

$\begin{array}{l} I &= \dfrac{1}{2} \int \arctan \sqrt{e^x-1} \, {\rm d}e^{2x} \\\\ &= \dfrac{1}{2}e^{2x} \arctan \sqrt{e^x-1} -\dfrac{1}{4} \int \dfrac{ e^{2x} }{ \sqrt{e^x-1} } \, {\rm d}x \end{array}$ 

令 $\sqrt{e^x - 1} = t, \; x = \ln(1+t^2)$ 

$\begin{array}{l} \text{原式 } &= \dfrac{1}{2}e^{2x} \arctan \sqrt{e^x-1} - \dfrac{1}{4} \int \dfrac{ (1+t^2)^2 }{t} \cdot \dfrac{2t}{1+t^2} \, {\rm d}t \\\\ &= \dfrac{1}{2}e^{2x} \arctan \sqrt{e^x-1} - \dfrac{1}{2} \sqrt{e^x-1} - \dfrac{1}{6} (e^x-1)^{3/2} + C \end{array}$ 

<br>

###### 4、有理函数的积分

$$
\int \dfrac{x}{x^3-x^2+x-1} \, {\rm d}x
$$

$\dfrac{x}{x^3-x^2+x-1} = -\dfrac{1}{2} \cdot \dfrac{x-1}{x^2+1} + \dfrac{1}{2} \cdot \dfrac{1}{x-1}$ 

