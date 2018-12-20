---
title: 高数 · 公式
date: 2018-8-30
updated: 2018-11-16
tags: [maths,高数,kaoyan]
mathjax: true

description: 做笔记，喝凉茶，背公式
real-date: 2018-11-16
---

<!-- 
$\begin{array}{l} \end{array}$
-->

<!-- 
⭐
️ -->

## 极限计算

<br>

#### ㊀、等价无穷小

$$
(1 + x)^\alpha - 1 \sim \alpha x \implies (1 + 🐶)^\alpha - 1 \sim \alpha 🐶 \; (🐶 \to 0)
$$ 

<br>

#### ㊁、泰勒公式

$$
f(x) = \dfrac{ f(a) }{ 0! } + \dfrac{ f'(a) }{1!} (x - a) + \dfrac{ f''(a) }{2!} (x - a)^2 + \cdots + \dfrac{ f^{ (n) }(a) }{n!} (x - a)^n + R(n)
$$

<br>

#### ㊂、泰勒展开式

$\begin{array}{l} e^x &= \sum\limits_{n=0}^{\infty} \dfrac{1}{n!} x^n \\\\ &= 1 + x + \dfrac{x^2}{2!} + \cdots + \dfrac{x^n}{n!} + \cdots \quad (-\infty < x <+\infty) \\ & \end{array}$ 

$\begin{array}{l} \dfrac{1}{1 + x} &= \sum\limits_{n=0}^{\infty} (-1)^n x^n \\\\ &= 1 - x + x^2 + \cdots + (-1)^n x^n + \cdots \quad (-1 < x < 1) \\ & \end{array}$ 

$\begin{array}{l} \dfrac{1}{1 - x} &= \sum\limits_{n=0}^{\infty} x^n \\\\ &= 1 + x + x^2 + \cdots + x^n + \cdots \quad (-1 < x < 1) \\ & \end{array}$ 

$\begin{array}{l} \ln(1 + x) &= \sum\limits_{n=1}^{\infty} (-1)^{n-1} \dfrac{1}{n}x^n \\\\ &= x - \dfrac{x^2}{2} + \dfrac{x^3}{3} - \dfrac{x^4}{4} + \cdots + (-1)^{n-1} \dfrac{x^n}{n} + \cdots \quad (-1 < x \leq 1) \\ & \end{array}​$ 

$\begin{array}{l} \sin x &= \sum\limits_{n=0}^{\infty} (-1)^n \dfrac{ x^{2n+1} }{ (2n+1)! } \\\\ &= 1 - \dfrac{ x^3 }{ 3! } + \dfrac{ x^5 }{ 5! } - \dfrac{ x^7 }{ 7! } + \cdots + (-1)^n \dfrac{ x^{2n+1} }{ (2n+1)! } + \cdots, \quad (-\infty < x < +\infty) \\ & \end{array}$ 

$\begin{array}{l} \cos x &= \sum\limits_{n=0}^{\infty} (-1)^n \dfrac{ x^{2n} }{ (2n)! } \\\\ &= 1 - \dfrac{ x^2 }{ 2! } + \dfrac{ x^4 }{ 4! } - \dfrac{ x^6 }{ 6! } + \cdots + (-1)^n \dfrac{ x^{2n} }{ (2n)! } + \cdots, \quad (-\infty < x < +\infty) \\ & \end{array}$

$\begin{array}{l} ( 1 + x )^\alpha = 1 + \alpha x + \dfrac{ a(a-1) }{2!} x^2 + \cdots + \dfrac{ a(a-1) \cdots (a-n+1) }{n!} x^n + \cdots \end{array},$ $\begin{array}{l} \\ \begin{cases} x \in (-1, \, 1) \text{ ，当 } \alpha \leq -1 \\\\ x \in (-1, \, 1] \text{ ，当 } -1 < \alpha < 0 \\\\ x \in [-1, \, 1] \text{ ，当 } \alpha > 0 \end{cases} \end{array}$

<br>

#### ㊃、麦克劳林公式

$\begin{array}{l} \sin x = x - \dfrac{1}{3!}x^3 + o(x^3) \\\\       \arcsin x = x + \dfrac{1}{3!}x^3 + o(x^3) \end{array}$

$\begin{array}{l} \tan x = x + \dfrac{1}{3}x^3 + o(x^3) \\\\      \arctan x = x - \dfrac{1}{3}x^3 + o(x^3) \end{array}$


$\begin{array}{l} \cos x = 1 - \dfrac{1}{2!}x^2 + \dfrac{1}{4!}x^4 + o(x^4) \end{array}$

$\begin{array}{l} \ln(1 + x) = x - \dfrac{x^2}{2} + \dfrac{x^3}{3} - \dfrac{x^4}{4} + o(x^4) \\\\      \dfrac{1}{1 - x} = 1 + x + x^2 + x^3 + o(x^3), \quad (| x| < 1) \end{array}$

$\begin{array}{l} e^x = 1 + x + \dfrac{x^2}{2!} + \dfrac{x^3}{3!} + o(x^3)  \end{array}$

<br>

## 导数计算

<br>

#### ㊀、基本求导公式

$\begin{array}{l} (\sin x)' = \cos x & (\cos x)' = -\sin x \\\\ (\tan x)' = \sec^2 x & (\cot x)' = - \csc^2 x \\\\ (\sec x)' = \sec x \tan x & (\csc x)' = - \csc x \cot x \end{array}$ 

$\begin{array}{l} (\arcsin x)' = \dfrac{1}{ \sqrt{1 - x^2} } & (\arccos x)' = - \dfrac{1}{ \sqrt{1 - x^2} } \\\\ (\arctan x)' = \dfrac{1}{1 + x^2} & ( {\rm arccot} x)' = - \dfrac{1}{1 + x^2} \end{array}$

$\begin{array}{l} \left( \ln(x + \sqrt{x^2 \pm 1}) \right)' = \dfrac{1}{ \sqrt{x^2 \pm 1} } \end{array}$ 

<br>

#### ㊁、莱布尼兹公式

- $(u \pm v)^{(n)} = u^{(n)} \pm v^{(n)}$ 

$$
\begin{array}{l} & \\ (uv)^{(n)} &= \sum\limits_{k=0}^{n} C_n^k u^{(n - k)} v^{(k)} \\\\ &= u^{(n)}v + n \cdot u^{(n - 1)}v' + \dfrac{n(n - 1)}{2} \cdot u^{(n - 2)}v'' + ... + uv^{(n)} \\ & \end{array}
$$
   - $\begin{cases} & (a^x)^{(n)} = a^x(\ln a)^n, \quad (e^x)^{(n)} = e^x \\\\ & (\sin kx)^{(n)} = k^n \sin( kx + \frac{\pi}{2} \cdot n ) \\\\      & (\cos kx)^{(n)} = k^n \cos( kx + \frac{\pi}{2} \cdot n ) \\\\      & (\ln x)^{(n)} = (-1)^{(n - 1)} \cdot \dfrac{(n - 1)!}{x^n}, \; (x > 0) \\\\      & [ \, \ln(x + 1) \, ]^{(n)} = (-1)^{(n - 1)} \cdot \dfrac{(n - 1)!}{(1 + x)^n}, \; (x > -1) \\\\      & (\dfrac{1}{x + a})^{(n)} = (-1)^n \cdot \dfrac{n!}{ (x + a)^{(n + 1)} } \end{cases}$  

<br>

## 积分计算

<br>

#### ㊀、基本积分公式

- $\int x^k {\rm d}x = \dfrac{1}{k + 1}x^{k + 1} + C, \quad ( k \not= -1 )$ 
   
   - $\begin{array}{l} \\ \begin{cases} \int \dfrac{1}{x^2} {\rm d}x = -\dfrac{1}{x} + C \\\\ \int \dfrac{1}{ \sqrt{x} } {\rm d}x = 2 \sqrt{x} + C \implies \dfrac{ {\rm d}u }{ \sqrt{u} } = {\rm d}( 2 \sqrt{u} ) \end{cases} \end{array}$ 

- $\begin{array}{l} \\ \int \dfrac{1}{x} {\rm d}x = \ln |x| + C \\ & \end{array}$ 

- $\begin{array}{l} \begin{cases} \int a^x {\rm d}x = \dfrac{1}{ \ln a } a^x + C, \quad ( a > 0, a \not= 1 ) \\\\ \int e^x {\rm d}x = e^x + C \end{cases} \end{array}$ 

- $\begin{array}{l} \\ \begin{cases} \int \sin x {\rm d}x = - \cos x + C \quad & \int \tan x{\rm d}x = - \ln | \cos x | + C \\ \\ \int \cos x {\rm d}x = \sin x + C \quad & \int \cot x {\rm d}x = \ln | \sin x | + C \\ \\ \int \sec x {\rm d}x = \ln | \sec x + \tan x | + C \\\\ \int \csc x {\rm d}x = \ln | \csc x - \cot x | + C \\\\ \int \sec^2 x {\rm d}x = \tan x + C \quad & \int \sec x \tan x {\rm d}x = \sec x + C \\\\ \int \csc^2 x {\rm d}x = - \cot x + C \quad & \int \csc x \cot x {\rm d}x = - \csc x + C \end{cases} \\ & \end{array}$ 

- $\begin{array}{l} \begin{cases} \int \dfrac{1}{ \sqrt{1 - x^2} }{\rm d}x = \arcsin x + C \quad & \int \dfrac{1}{ \sqrt{x^2 + a^2} } = \ln ( x + \sqrt{x^2 + a^2} ) + C \\\\ \int \dfrac{1}{ \sqrt{a^2 - x^2} }{\rm d}x = \arcsin \dfrac{x}{a} + C \quad & \int \dfrac{1}{ \sqrt{x^2 - a^2} } = \ln ( x + \sqrt{x^2 - a^2} ) + C \\\\ \int \dfrac{1}{1 + x^2}{\rm d}x = \arctan x + C \quad & \int \dfrac{1}{a^2 - x^2} {\rm d}x = \dfrac{1}{2a} \ln |\dfrac{a + x}{a - x}| + C \\\\   \int \dfrac{1}{a^2 + x^2}{\rm d}x = \dfrac{1}{a} \arctan \dfrac{x}{a} + C \quad & \int \dfrac{1}{x^2 - a^2} {\rm d}x = \dfrac{1}{2a} \ln |\dfrac{x - a}{x + a}| + C \end{cases} \end{array}$

- $\begin{array}{l} \\ \int \sqrt{a^2 - x^2} {\rm d}x = \dfrac{a^2}{2} \arcsin \dfrac{x}{a} + \dfrac{x}{2} \sqrt{a^2 - x^2} + C \end{array}$ 

<br>

#### ㊁、反常积分

$$
\int_1^{+\infty} \dfrac{1}{x^p} \, {\rm d}x \begin{cases} p>1 & \implies \text{ 收敛 } \\\\ p \leq 1 & \implies \text{ 发散 } \end{cases}
$$

$and$

$$
\int_0^1 \dfrac{1}{x^p} \, {\rm d}x \begin{cases} p<1 & \implies \text{ 收敛 } \\\\ p \geq 1 & \implies \text{ 发散 } \end{cases}
$$

<br>

#### ㊂、综合性质

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

- 奇函数注意 $f(0) = 0$

<br>

#### ㊃、定积分精确定义

$n$ 等分 $[a, \, b]$，取右端点的高，则

$$
\lim\limits_{n \to \infty} \sum\limits_{i=1}^n f \left( a + \dfrac{b-a}{n}i \right) \dfrac{b-a}{n} = \int_a^b f(x) \, {\rm d}x
$$

令 $a=0, \, b=1$，则

$$
\lim\limits_{n \to \infty} \sum\limits_{i=1}^n f \left( \dfrac{i}{n} \right) \dfrac{1}{n} = \int_0^1 f(x) \, {\rm d}x
$$

三步曲：1️⃣ 先提出 $\dfrac{1}{n}$，2️⃣ 再凑出 $\dfrac{i}{n}$，3️⃣ $\dfrac{1}{n}$ 读作 $\int_0^1$ 上的 ${\rm d}x$，$\dfrac{i}{n}$ 读作 $\int_0^1$ 上的 $x$。