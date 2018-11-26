---
title: 二重积分 · 习题
date: 2018-8-5
updated: 2018-11-26
tags: [maths,高数,kaoyan]
mathjax: true

description: 做笔记，喝凉茶，做习题
real-date: 2018-11-26
---

<!-- 
$\begin{array}{l} ( {\rm A} ) \, 1 \qquad & ( {\rm B} ) \, 2 \\\\ ( {\rm C} ) \, 3 \qquad & ( {\rm D} ) \, 4 \end{array}$ 
-->

<!-- 
$\begin{array}{l} \end{array}$

\begin{array}{l} \\ 
 \\ & \end{array}
-->

<!-- 
⭐
㊀ ㊁ ㊂ ㊃ ㊄ ㊅ ㊆ ㊇ ㊈

<img src="" width="80%">
️ -->

概念与对称性：4

计算（直角坐标系，极坐标系）：10

【沉浸在计算当中】

<br>

## 一、概念

<br>

## 二、对称性

<br>

#### ㊀、普通对称性

<img src="https://github.com/WaterH2P/WaterH2P.github.io/raw/master/img/images/%E4%BA%8C%E9%87%8D%E7%A7%AF%E5%88%86%20%E6%99%AE%E9%80%9A%E5%AF%B9%E7%A7%B0%E6%80%A7.jpg" width="70%">

<br>

#### ㊁、轮换对称性

【定义】

只在直角坐标系下使用

- 若将 $D$ 中的 $x$ 与 $y$ 对调发现 $D$ 不变，则 $\iint\limits_D f(x, y) \, {\rm d}x {\rm d}y = \iint\limits_D f(y, x) \, {\rm d}x {\rm d}y$ 
   - 关于 $y = x$ 对称

<br>

#### ㊂、平面图形的形心

$$
\overline{x} = \dfrac{ \iint\limits_D x \, {\rm d}\sigma }{ \iint\limits_D \, {\rm d}\sigma }, \quad \overline{y} = \dfrac{ \iint\limits_D y \, {\rm d}\sigma }{ \iint\limits_D \, {\rm d}\sigma }
$$





<br>

## 、练习题

<br>

#### ㊀、轮换对称性

设 $f(x)$ 在 $[a, \, b]$ 上连续且单调增加，证明

$$
\iint\limits_D y f(y) \, {\rm d}\sigma > \dfrac{b^2 - a^2}{2} \int_a^b f(x) \, {\rm d}x
$$

其中 $D = \{ (x, \, y) \mid a \leq x \leq b, \, a \leq y \leq b \}$。

<br>

#### ㊁

设平面区域 $D$ 由曲线

$$
\begin{cases} x = t - \sin t \\\\ y = 1 - \cos t \end{cases}, \quad (0 \leq t \leq 2\pi)
$$

与 $x$ 轴围成，计算二重积分

$$
\iint\limits_D (x + 2y) \, {\rm d}x \, {\rm d}y.
$$






<br>

## 、参考答案

<br>

#### ㊀、轮换对称性

$\begin{array}{l} \\ & \dfrac{b^2 - a^2}{2} = \int_a^b x \, {\rm d}x, \; \int_a^b f(x) \, {\rm d}x = \int_a^b f(y) \, {\rm d}y \\\\ \text{右边} &= \int_a^b x \, {\rm d}x \, \int_a^b f(y) \, {\rm d}y \\\\ & = \iint\limits_D xf(y) \, {\rm d}\sigma \end{array}$ 

$\begin{array}{l} \\ & \iint\limits_D y f(y) \, {\rm d}\sigma > \iint\limits_D xf(y) \, {\rm d}\sigma \\\\ \implies & \iint\limits_D (y - x)f(y) \, {\rm d}\sigma > 0 \\\\ \iff & \iint\limits_D (x - y)f(x) \, {\rm d} \sigma = I \\\\ \implies & 2I = \iint\limits_D (y - x)\left[ f(y) - f(x) \right] \, {\rm d} \sigma > 0 \\\\ \implies & I > 0 \implies \text{ 左边 } > \text{ 右边 } \end{array}$

<br>

#### ㊁

<img src="https://github.com/WaterH2P/WaterH2P.github.io/raw/master/img/images/%E4%BA%8C%E9%87%8D%E7%A7%AF%E5%88%86%20%E6%91%86%E7%BA%BF.png" width="80%">

由于 $D$ 关于 $x=\pi$ 对称

$\begin{array}{l} \iint\limits_D (x + 2y) \, {\rm d}x \, {\rm d}y &= \iint\limits_D (x - \pi) \, {\rm d}x \, {\rm d}y + \iint\limits_D (2y + \pi) \, {\rm d}x \, {\rm d}y \\\\ &= 0 + \iint\limits_D (2y + \pi) \, {\rm d}x \, {\rm d}y \\\\ & = \iint\limits_D 2y \, {\rm d}x \, {\rm d}y + \pi \iint\limits_D \, {\rm d}x \, {\rm d}y \\\\ &= \int_0^{2\pi} \, {\rm d}x \int_0^{ y(x) } 2y \, {\rm d}y + \pi \int_0^{2\pi} \, {\rm d}x \int_0^{ y(x) } \, {\rm d}y \\\\ &= \int_0^{2\pi} y^2(x) \, {\rm d}x + \pi \int_0^{2\pi} y(x) \, {\rm d}x \end{array}$ 

$\begin{array}{l} \int_0^{2\pi} y^2(x) \, {\rm d}x &= \int_0^{2\pi} (1 - \cos t)^3 \, {\rm d}t \\\\ &= \int_0^{2\pi} 1 - 3\cos t + 3\cos^2 t - \cos^3 t \, {\rm d}t \\\\ &= 2\pi - 0 + 3 \cdot 4 \cdot \dfrac{1}{2} \cdot \dfrac{\pi}{2} - 0 \\\\ &= 5\pi \end{array}$ 

$\begin{array}{l} \int_0^{2\pi} y(x) \, {\rm d}x &= \int_0^{2\pi} (1 - \cos t)^2 \, {\rm d}t \\\\ &= \int_0^{2\pi} 1 - 2\cos t + \cos^2 t \, {\rm d}t \\\\ &= 2\pi - 0 + 4 \cdot \dfrac{1}{2} \cdot \dfrac{\pi}{2} \\\\ &= 3\pi \end{array}$ 

$\begin{array}{l} \iint\limits_D (x + 2y) \, {\rm d}x \, {\rm d}y &= \int_0^{2\pi} y^2(x) \, {\rm d}x + \pi \int_0^{2\pi} y(x) \, {\rm d}x \\\\ &= 5\pi + 3\pi^2 \end{array}$

⭐

<img src="https://github.com/WaterH2P/WaterH2P.github.io/raw/master/img/images/%E5%8D%8E%E9%87%8C%E5%A3%AB%E5%85%AC%E5%BC%8F.jpg" width="80%">

