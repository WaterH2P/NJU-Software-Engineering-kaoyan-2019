---
title: 行列式 · 习题
date: 2018-8-7
updated: 2018-12-1
tags: [maths,线代,kaoyan]
mathjax: true

description: 做笔记，喝凉茶，看线代
real-date: 2018-12-1
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

1. 基础扎实
2. 熟练计算

行列式的定义与七大性质

行列式的展开定理与计算：4 / 11

<br>

## 一、行列式七大性质

1. 行列互换，其值不变
2. 某行（列）元素全为零
3. ⭐️倍乘性质
4. 单行（列）可拆（加）
5. ⭐️互换性质
6. 两行（列）元素对应成比例
7. ⭐️⭐️⭐️倍加性质

<br>

## 二、⭐️⭐️⭐️行列式计算

<br>

#### ㊀、消零化三角形

计算行列式

$$
\begin{vmatrix}
    1 & 2 & 3 & \cdots & n-1 & n \\
    2 & 3 & 4 & \cdots & n & 1 \\
    \vdots & \vdots & \vdots & & \vdots & \vdots \\
    n-1 & n & 1 & \cdots & n-3 & n-2 \\
    n & 1 & 2 & \cdots & n-2 & n-1
\end{vmatrix}_{n \times n}
$$

<br>

#### ㊁、加边法

计算行列式

$$
D_n = 
\begin{vmatrix}
    1+a_1 & 1 & \cdots & 1 \\
    2 & 2+a_2 & \cdots & 2 \\
    \vdots & \vdots & & \vdots \\
    n & n & \cdots & n+a_n
\end{vmatrix}_{n \times n}
$$

其中 $a_1, \, a_2, \cdots, a_n \not= 0$ 。

<br>

#### ㊂、递推法

计算

$$
D_n = 
\begin{vmatrix}
    2 & -1 & 0 & \cdots & 0 & 0 \\
    -1 & 2 & -1 & \cdots & 0 & 0 \\
    0 & -1 & 2 & \cdots & 0 & 0 \\
    \vdots & \vdots & \vdots & & \vdots & \vdots \\
    0 & 0 & 0 & \cdots & 2 & -1 \\
    0 & 0 & 0 & \cdots & -1 & 2
\end{vmatrix}_{n \times n}
$$

<br>

#### ㊃、数学归纳法









<br>

## 三、参考答案

<br>

#### ㊀、消零化三角形

$(-1)^{ n(n-1)/2 } \cdot n^{n-1} \cdot \dfrac{n+1}{2}$。

$\begin{array}{l} \\ && \begin{vmatrix} 1 & 2 & 3 & \cdots & n-1 & n \\ 2 & 3 & 4 & \cdots & n & 1 \\ \vdots & \vdots & \vdots & & \vdots & \vdots \\ n-1 & n & 1 & \cdots & n-3 & n-2 \\ n & 1 & 2 & \cdots & n-2 & n-1 \end{vmatrix}_{n \times n} \\\\ \underrightarrow{ a_1 + \sum\limits_{ j=2 }^n a_j } & = & \dfrac{ n(n+1) }{2} \begin{vmatrix} 1 & 2 & 3 & \cdots & n-1 & n \\ 1 & 3 & 4 & \cdots & n & 1 \\ \vdots & \vdots & \vdots & & \vdots & \vdots \\ 1 & n & 1 & \cdots & n-3 & n-2 \\ 1 & 1 & 2 & \cdots & n-2 & n-1 \end{vmatrix}_{n \times n} \\\\ \begin{array}{l} \underrightarrow{ a_i - a_{i-1} } \\ i : n \to 2 \end{array} & = & \dfrac{ n(n+1) }{2} \begin{vmatrix} 1 & 2 & 3 & \cdots & n-1 & n \\ 0 & 1 & 1 & \cdots & 1 & 1-n \\ \vdots & \vdots & \vdots & & \vdots & \vdots \\ 0 & 1 & 1-n & \cdots & 1 & 1 \\ 0 & 1-n & 1 & \cdots & 1 & 1 \end{vmatrix}_{n \times n} \\\\ & = & \dfrac{ n(n+1) }{2} \begin{vmatrix} 1 & 1 & \cdots & 1 & 1-n \\ 1 & 1 & \cdots & 1-n & 1 \\ \vdots & \vdots & & \vdots & \vdots \\ 1 & 1-n & \cdots & 1 & 1 \\ 1-n & 1 & \cdots & 1 & 1 \end{vmatrix}_{ (n-1) \times (n-1) } \\\\ \begin{array}{l} \underrightarrow{ a_i - a_1 } \\ i : 2 \to n \end{array} & = & \dfrac{ n(n+1) }{2} \begin{vmatrix} 1 & 1 & \cdots & 1 & 1-n \\ 0 & 0 & \cdots & -n & n \\ \vdots & \vdots & & \vdots & \vdots \\ 0 & -n & \cdots & 0 & n \\ -n & 0 & \cdots & 0 & n \end{vmatrix}_{ (n-1) \times (n-1) } \qquad ( \text{ 爪型 } ) \\\\ \underrightarrow{ a_n + \sum\limits_{j=1}^{n-1}a_j } & = & \dfrac{ n(n+1) }{2} \begin{vmatrix} 1 & 1 & \cdots & 1 & -1 \\ 0 & 0 & \cdots & -n & 0 \\ \vdots & \vdots & & \vdots & \vdots \\ 0 & -n & \cdots & 0 & 0 \\ -n & 0 & \cdots & 0 & 0 \end{vmatrix}_{ (n-1) \times (n-1) } \\\\ & = & \dfrac{ n(n+1) }{2} \cdot (-1)^{n-1} \cdot (-1)^{ (n-1)(n-2) / 2 } \cdot n^{n-1} \\\\ & = & (-1)^{ n(n-1)/2 } \cdot n^{n-1} \cdot \dfrac{n+1}{2} \end{array}$

<br>

#### ㊁、加边法

$\begin{array}{l} \\ && \begin{vmatrix} 1+a_1 & 1 & \cdots & 1 \\ 2 & 2+a_2 & \cdots & 2 \\ \vdots & \vdots & & \vdots \\ n & n & \cdots & n+a_n \end{vmatrix}_{n \times n} \\\\ &=& \begin{vmatrix} 1 & 1 & 1 & \cdots & 1 \\ 0 & 1+a_1 & 1 & \cdots & 1 \\ 0 & 2 & 2+a_2 & \cdots & 2 \\ \vdots & \vdots & \vdots & & \vdots \\ 0 & n & n & \cdots & n+a_n \end{vmatrix}_{ (n+1) \times (n+1) } \\\\ \begin{array}{l} \underrightarrow{ a_i - (i-1)a_1 } \\ i:2 \to n \end{array} &=& \begin{vmatrix} 1 & 1 & 1 & \cdots & 1 \\ -1 & a_1 & 0 & \cdots & 0 \\ -2 & 0 & a_2 & \cdots & 0 \\ \vdots & \vdots & \vdots & & \vdots \\ -n & 0 & 0 & \cdots & a_n \end{vmatrix}_{ (n+1) \times (n+1) } \\\\ \begin{array}{l} \underrightarrow{ a_1 + \sum\limits_{j = 1}^n \dfrac{j}{a_j} } \end{array} &=& \begin{vmatrix} 1+\sum\limits_{i = 1}^n \dfrac{i}{a_i} & 1 & 1 & \cdots & 1 \\ 0 & a_1 & 0 & \cdots & 0 \\ 0 & 0 & a_2 & \cdots & 0 \\ \vdots & \vdots & \vdots & & \vdots \\ 0 & 0 & 0 & \cdots & a_n \end{vmatrix}_{ (n+1) \times (n+1) } \\\\ &=& ( 1+\sum\limits_{i = 1}^n \dfrac{i}{a_i} ) \cdot \begin{vmatrix} 1 & 1 & 1 & \cdots & 1 \\ 0 & a_1 & 0 & \cdots & 0 \\ 0 & 0 & a_2 & \cdots & 0 \\ \vdots & \vdots & \vdots & & \vdots \\ 0 & 0 & 0 & \cdots & a_n \end{vmatrix}_{ (n+1) \times (n+1) } \\\\ &=& ( 1+\sum\limits_{i = 1}^n \dfrac{i}{a_i} ) \cdot \prod\limits_{i=1}^n a_i \end{array}$

<br>

#### ㊂、递推法

$\begin{array}{l} D_n &=& \begin{vmatrix} 2 & -1 & 0 & \cdots & 0 & 0 \\ -1 & 2 & -1 & \cdots & 0 & 0 \\ 0 & -1 & 2 & \cdots & 0 & 0 \\ \vdots & \vdots & \vdots & & \vdots & \vdots \\ 0 & 0 & 0 & \cdots & 2 & -1 \\ 0 & 0 & 0 & \cdots & -1 & 2\end{vmatrix}_{n \times n} \\\\ &=& 2 \cdot D_{n-1} + (-1) \cdot (-1)^{1+2} \cdot \begin{vmatrix} -1 & -1 & 0 & \cdots & 0 & 0 \\ 0 & 2 & -1 & \cdots & 0 & 0 \\ 0 & -1 & 2 & \cdots & 0 & 0 \\ \vdots & \vdots & \vdots & & \vdots & \vdots \\ 0 & 0 & 0 & \cdots & 2 & -1 \\ 0 & 0 & 0 & \cdots & -1 & 2\end{vmatrix}_{ (n-1) \times (n-1) } \\\\ &=& 2 \cdot D_{n-1} - D_{n-2} \end{array}$ 

$\begin{array}{l} \\ \implies D_n - D_{n-1} & = D_{n-1} - D_{n-2} \\\\ & \cdots \cdots \\\\ & = D_2 - D_1 = 1 \\ & \end{array}$ 

$\begin{array}{l} \implies D_n & = D_{n-1} + 1 \\\\ & = D_{n-2} + 2 \\\\ & \cdots \cdots \\\\ & = D_1 + (n-1) \\\\ & = n+1 \end{array}$ 

<br>

#### ㊃、数学归纳法


