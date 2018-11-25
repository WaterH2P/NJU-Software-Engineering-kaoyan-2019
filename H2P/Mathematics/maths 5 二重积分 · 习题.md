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
️ -->

概念与对称性：4

计算（直角坐标系，极坐标系）：10

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

- 若将 $D$ 中的 $x$ 与 $y$ 对调发现 $D$ 不变，则 $\iint\limits_D f(x, y) \, {\rm d}x {\rm d}y = \iint\limits_D f(y, x) \, {\rm d}x {\rm d}y$ 
   - 关于 $y = x$ 对称






<br>

## 、练习题

<br>

#### ㊀、轮换对称性

设 $f(x)$ 在 $[a, \, b]$ 上连续且单调增加，证明

$$
\iint_D y f(y) \, {\rm d}\sigma > \dfrac{b^2 - a^2}{2} \int_a^b f(x) \, {\rm d}x
$$

其中 $D = \{ (x, \, y) \mid a \leq x \leq b, \, a \leq y \leq b \}$。






<br>

## 、参考答案

<br>

#### ㊀、轮换对称性

$\begin{array}{l} \\ & \dfrac{b^2 - a^2}{2} = \int_a^b x \, {\rm d}x, \; \int_a^b f(x) \, {\rm d}x = \int_a^b f(y) \, {\rm d}y \\\\ \text{右边} &= \int_a^b x \, {\rm d}x \, \int_a^b f(y) \, {\rm d}y \\\\ & = \iint_D xf(y) \, {\rm d}\sigma \end{array}$ 

$\begin{array}{l} \\ & \iint_D y f(y) \, {\rm d}\sigma > \iint_D xf(y) \, {\rm d}\sigma \\\\ \implies & \iint_D (y - x)f(y) \, {\rm d}\sigma > 0 \\\\ \iff & \iint_D (x - y)f(x) \, {\rm d} \sigma = I \\\\ \implies & 2I = \iint_D (y - x)\left[ f(y) - f(x) \right] \, {\rm d} \sigma > 0 \\\\ \implies & I > 0 \implies \text{ 左边 } > \text{ 右边 } \end{array}$

