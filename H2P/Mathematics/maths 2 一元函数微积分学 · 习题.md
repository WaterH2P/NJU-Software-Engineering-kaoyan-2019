---
title: 一元函数微积分学 · 习题
date: 2018-8-2
updated: 2018-11-23
tags: [maths,高数,kaoyan]
mathjax: true

description: 做笔记，喝凉茶，做习题
real-date: 2018-11-23
---

【70-80 分】

- 定义    （ 4 / 10 ）
- 计算    （ 4 + 10 ）
- 应用    （ 10 ）
   - 几何应用
   - 物理应用
- 逻辑证明     （ 10 ）
   - 中值定理
   - 方程根
   - 不等式

## 一、定义

导数、微分、不定积分、定积分、变限积分、反常积分

凡是见到 $f'(x_0)$，先用定义再说；区间上求导用公式。

<br>

## 二、练习题

<!-- 
$\begin{array}{l} ( {\rm A} ) \, 1 \qquad & ( {\rm B} ) \, 2 \\\\ ( {\rm C} ) \, 3 \qquad & ( {\rm D} ) \, 4 \end{array}$ 
-->

<br>

#### 1

设 $F(x) = \begin{cases} x^2 \sin \dfrac{1}{x}, \quad & x\not= 0 \\\\ 0, \quad & x=0 \end{cases}$，求 $F'(x)$。

<br>

#### 2

设常数 $a>1$，函数 

$$
f(x) = \begin{cases} x^\alpha \sin \dfrac{1}{x}, \quad & x>0 \\\\ 0, \quad & x=0 \\\\ \dfrac{1}{n^\alpha}, \quad & -\dfrac{1}{n} < x \leq -\dfrac{1}{n+1}, n=1, 2, \cdots \end{cases}
$$

则 $f(x)$ 在 $x=0$ 处 $(\quad)$。

$\begin{array}{l} ( {\rm A} ) \, \text{ 不连续 } \qquad & ( {\rm B} ) \, \text{ 连续但不可导 } \\\\ ( {\rm C} ) \, \text{ 可导， } f'(0) = \alpha \qquad & ( {\rm D} ) \, \text{ 可导， } f'(0) = 0 \end{array}$ 

<br>

#### 3

设函数 $f(x)$ 在区间 $(-\delta, \delta)$ 内有定义，若当 $x \in (-\delta, \delta)$ 时，恒有 $\mid f(x) \mid \leq x^2$，则 $x=0$ 必然是 $f(x)$ 的 $(\quad)$。

$\begin{array}{l} ( {\rm A} ) \, \text{ 间断点 } \qquad & ( {\rm B} ) \, \text{ 连续，但不可导的点 } \\\\ ( {\rm C} ) \, \text{ 可导的点，且 } f'(0) = 0 \qquad & ( {\rm D} ) \, \text{ 可导的点，且 } f'(0) \not= 0 \end{array}$ 




















<br>

## 二、参考答案

<br>

#### 1

$\begin{array}{l} x=0, \quad F'(0) &= \lim\limits_{x \to 0} \dfrac{ F(x) - F(0) }{ x - 0 } = \lim\limits_{x \to 0} x \sin \dfrac{1}{x} = 0 \\\\ x \not= 0, \quad F'(x) &= 2x \sin \dfrac{1}{x} + x^2 \cos \dfrac{1}{x} \cdot (- \dfrac{1}{x^2} ) \\\\ &= 2x \sin \dfrac{1}{x} - \cos \dfrac{1}{x} \\ & \end{array}$ 

故 $F'(x) = \begin{cases} 2x \sin \dfrac{1}{x} - \cos \dfrac{1}{x}, \quad & x \not= 0 \\\\ 0, \quad & x=0 \end{cases}$ 

<br>

#### 2

${\rm D}$。

连续性

$\begin{array}{l} \lim\limits_{x \to 0^+} x^\alpha \sin \dfrac{1}{x} = 0 \\\\ \lim\limits_{x \to 0^-} f(x) = \lim\limits_{n \to \infty} \dfrac{1}{ n^\alpha } = 0 \end{array}$ 

可导性

$\begin{array}{l} \lim\limits_{x \to 0^+} \dfrac{ f(x) - f(0) }{x-0} = \lim\limits_{x \to 0^+} x \sin \dfrac{1}{x} = 0 \\\\ \lim\limits_{x \to 0^-} \dfrac{ f(x) - f(0) }{x-0} = \lim\limits_{x \to 0^-} \dfrac{ f(x) }{x} \end{array}$ 

由于 $x \to 0^-$ 时，定义域被划分为一小段一小段，所以不可以直接将 $f(x) = \dfrac{1}{n^\alpha}$ 带入。

$-\dfrac{1}{n} < x \leq -\dfrac{1}{n+1} \implies -(n+1) \leq \dfrac{1}{x} < -n$，所以 $-\dfrac{n+1}{n^\alpha} \leq \dfrac{ f(x) }{x} < -\dfrac{n}{n^\alpha}$ 

由于 $a>1$，所以 $\begin{cases} \lim\limits_{n \to \infty} -\dfrac{n+1}{n^\alpha} = 0 \\\\ \lim\limits_{n \to \infty} -\dfrac{n}{n^\alpha} = 0 \end{cases}$，所以 $\lim\limits_{x \to 0^-} \dfrac{ f(x) }{x} = 0$。

<br>

#### 3

${\rm C}$。

$\mid f(0) \mid \leq 0 \implies f(0)=0$ 

$\begin{array}{l} \mid f(x) \mid \leq x^2 &\implies 0 \leq \, \mid \dfrac{ f(x) }{x} \mid \, \leq \dfrac{x^2}{\mid x \mid} \\\\ & \implies 0 \leq \lim\limits_{x \to 0} \mid \dfrac{ f(x) }{x} \mid \leq \lim\limits_{x \to 0} \dfrac{x^2}{\mid x \mid} = 0 \\\\ & \implies \lim\limits_{x \to 0} \dfrac{ f(x) }{x} = 0 \end{array}$ 

所以 $f'(0) = \lim\limits_{x \to 0} \dfrac{ f(x) - f(0) }{x-0} = \lim\limits_{x \to 0} \dfrac{ f(x) }{x} = 0$ 

$$
\begin{array}{c}
\quad \\
★★★ \\
\quad \\
\lim A = 0 \iff \lim \mid A \mid = 0
\end{array}
$$






