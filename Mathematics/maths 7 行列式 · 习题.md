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

## 二、⭐️⭐️⭐️ 行列式计算

<br>

#### ㊀、消零化三角形

计算行列式

$$
\begin{vmatrix}
    & 1 & 2 & 3 & \cdots & n-1 & n & \\\\
    & 2 & 3 & 4 & \cdots & n & 1 & \\\\
    & \vdots & \vdots & \vdots & & \vdots & \vdots & \\\\
    & n-1 & n & 1 & \cdots & n-3 & n-2 & \\\\
    & n & 1 & 2 & \cdots & n-2 & n-1 & 
\end{vmatrix}_{n \times n}
$$

<br>

#### ㊁、加边法

计算行列式

$$
D_n = 
\begin{vmatrix}
    & 1+a_1 & 1 & \cdots & 1 & \\\\
    & 2 & 2+a_2 & \cdots & 2 & \\\\
    & \vdots & \vdots & & \vdots & \\\\
    & n & n & \cdots & n+a_n & 
\end{vmatrix}_{n \times n}
$$

其中 $a_1, \, a_2, \cdots, a_n \not= 0$ 。

<br>

#### ㊂、递推法

【⭐️ 宽对角线行列式】

计算

$$
D_n = 
\begin{vmatrix}
    & 2 & -1 & 0 & \cdots & 0 & 0 & \\\\
    & -1 & 2 & -1 & \cdots & 0 & 0 & \\\\
    & 0 & -1 & 2 & \cdots & 0 & 0 & \\\\
    & \vdots & \vdots & \vdots & & \vdots & \vdots & \\\\
    & 0 & 0 & 0 & \cdots & 2 & -1 & \\\\
    & 0 & 0 & 0 & \cdots & -1 & 2 & 
\end{vmatrix}_{n \times n}
$$

<br>

#### ㊃、数学归纳法

$$
\begin{array}{l}
    \begin{array}{l}
        \text{ 第一类归纳法：} \\\\
        (1) \text{ 验证 } n=1 \text{ 时，命题成立； } \\\\
        (2) \text{ 假设 } n=k \text{ 时，命题成立； } \\\\
        (3) \text{ 证明 } n=k+1 \text{ 时，命题成立。 } \\\\
        \text{ 则命题对任意正整数 } n \text{ 成立。 }
    \end{array} & 
    \begin{array}{l}
        \text{ 第二类归纳法：} \\\\
        (1) \text{ 验证 } n=1, \, 2 \text{ 时，命题成立； } \\\\
        (2) \text{ 假设 } n < k \text{ 时，命题成立； } \\\\
        (3) \text{ 证明 } n=k \text{ 时，命题成立。 } \\\\
        \text{ 则命题对任意正整数 } n \text{ 成立。 }
    \end{array}
\end{array}
$$

<br>

###### 1、证明范德蒙德行列式

$$
\begin{vmatrix}
  & 1 & 1 & \cdots & 1 & \\\\
  & x_1 & x_2 & \cdots & x_n & \\\\
  & x_1^2 & x_2^2 & \cdots & x_n^2 & \\\\
  & \vdots & \vdots & & \vdots & \\\\
  & x_1^{n-1} & x_2^{n-1} & \cdots & x_n^{n-1} & 
\end{vmatrix} = 
\prod\limits_{1 \leq i < j \leq n} (x_j - x_i) \; (n \geq 2)
$$

<br>

###### 2、

证明：$n$ 阶行列式

$$
D_n = 
\begin{vmatrix} 
    & 2a & 1 & 0 & \cdots & 0 & 0 & \\\\ 
    & a^2 & 2a & 1 & \cdots & 0 & 0 & \\\\ 
    & 0 & a^2 & 2a & \cdots & 0 & 0 & \\\\
    & \vdots & \vdots & \vdots & & \vdots & \vdots & \\\\
    & 0 & 0 & 0 & \cdots & 2a & 1 \\\\
    & 0 & 0 & 0 & \cdots & a^2 & 2a
\end{vmatrix} = 
(n+1)a^n
$$

<br>

#### ㊄、抽象型行列式

<br>

###### 1、

已知 $n$ 阶行列式 $\mid A \mid = a$，$\begin{vmatrix} A & \beta \\ \beta^{\rm T} & b \end{vmatrix} = 0$，其中 $\beta$ 是 $n$ 维列向量，则 $\begin{vmatrix} A & \beta \\ \beta^{\rm T} & c \end{vmatrix} =$ ________ 。

<br>

###### 2、

已知 $n$ 阶矩阵 $\mid A \mid = a$，将 $\mid A \mid$ 中的每一列减去其余各列得到的行列式记为 $\mid B \mid$，则 $\mid B \mid =$ ________ 。 

<br>

#### ㊅、展开式法的逆运用

设 

$$
\mid A \mid = 
\begin{vmatrix} 
    & -2 & 2 & -2  & 2 & \\\\
    & 1 & 2 & 3 & 4 & \\\\
    & 1 & 1 & 1 & 1 & \\\\
    & 2 & -1 & 3 & 5
\end{vmatrix}
$$

计算 1⃣️ $A_{41} + A_{42} + A_{43} + A_{44}$；2⃣️ $M_{31}+M_{32}+M_{33}+M_{34}$。

<br>

#### ㊆、行列式的逆序数法定义

<img src="https://github.com/WaterH2P/WaterH2P.github.io/raw/master/img/images/%E8%A1%8C%E5%88%97%E5%BC%8F%20%E9%80%86%E5%BA%8F%E6%95%B0.jpg" width="80%">

<br>

###### 1、

设行列式 

$$
D_4 = 
\begin{vmatrix} 
    & 5x & 1 & 2 & 3 & \\\\
    & 2 & 1 & x & 3 & \\\\
    & x & x & 2 & 3 & \\\\
    & 1 & 2 & 1 & -3x & 
\end{vmatrix}
$$

则 $D_4$ 的展开式中，$x^4$ 的系数是 ________ ，$x^3$ 的系数是 ________ 。













<br>

## 三、参考答案

<br>

#### ㊀、消零化三角形

$(-1)^{ n(n-1)/2 } \cdot n^{n-1} \cdot \dfrac{n+1}{2}$。

$\begin{array}{l} \\      && \begin{vmatrix} & 1 & 2 & 3 & \cdots & n-1 & n & \\\\ & 2 & 3 & 4 & \cdots & n & 1 & \\\\ & \vdots & \vdots & \vdots & & \vdots & \vdots & \\\\ & n-1 & n & 1 & \cdots & n-3 & n-2 & \\\\ & n & 1 & 2 & \cdots & n-2 & n-1 \end{vmatrix}_{n \times n} \\\\      \underrightarrow{ a_1 + \sum\limits_{ j=2 }^n a_j } & = & \dfrac{ n(n+1) }{2} \begin{vmatrix} & 1 & 2 & 3 & \cdots & n-1 & n & \\\\ & 1 & 3 & 4 & \cdots & n & 1 & \\\\ & \vdots & \vdots & \vdots & & \vdots & \vdots & \\\\ & 1 & n & 1 & \cdots & n-3 & n-2 & \\\\ & 1 & 1 & 2 & \cdots & n-2 & n-1 & \end{vmatrix}_{n \times n} \\\\      \begin{array}{l} \underrightarrow{ a_i - a_{i-1} } \\ i : n \to 2 \end{array} & = & \dfrac{ n(n+1) }{2} \begin{vmatrix} & 1 & 2 & 3 & \cdots & n-1 & n & \\\\ & 0 & 1 & 1 & \cdots & 1 & 1-n & \\\\ & \vdots & \vdots & \vdots & & \vdots & \vdots & \\\\ & 0 & 1 & 1-n & \cdots & 1 & 1 & \\\\ & 0 & 1-n & 1 & \cdots & 1 & 1 & \end{vmatrix}_{n \times n} \\\\      & = & \dfrac{ n(n+1) }{2} \begin{vmatrix} & 1 & 1 & \cdots & 1 & 1-n & \\\\ & 1 & 1 & \cdots & 1-n & 1 & \\\\ & \vdots & \vdots & & \vdots & \vdots & \\\\ & 1 & 1-n & \cdots & 1 & 1 & \\\\ & 1-n & 1 & \cdots & 1 & 1 & \end{vmatrix}_{ (n-1) \times (n-1) } \\\\      \begin{array}{l} \underrightarrow{ a_i - a_1 } \\ i : 2 \to n \end{array} & = & \dfrac{ n(n+1) }{2} \begin{vmatrix} & 1 & 1 & \cdots & 1 & 1-n & \\\\ & 0 & 0 & \cdots & -n & n & \\\\ & \vdots & \vdots & & \vdots & \vdots & \\\\ & 0 & -n & \cdots & 0 & n & \\\\ & -n & 0 & \cdots & 0 & n & \end{vmatrix}_{ (n-1) \times (n-1) } \qquad ( \text{ 爪型 } ) \\\\      \underrightarrow{ a_n + \sum\limits_{j=1}^{n-1}a_j } & = & \dfrac{ n(n+1) }{2} \begin{vmatrix} & 1 & 1 & \cdots & 1 & -1 & \\\\ & 0 & 0 & \cdots & -n & 0 & \\\\ & \vdots & \vdots & & \vdots & \vdots & \\\\ & 0 & -n & \cdots & 0 & 0 & \\\\ & -n & 0 & \cdots & 0 & 0 & \end{vmatrix}_{ (n-1) \times (n-1) } \\\\       & = & \dfrac{ n(n+1) }{2} \cdot (-1)^{n-1} \cdot (-1)^{ (n-1)(n-2) / 2 } \cdot n^{n-1} \\\\ & = & (-1)^{ n(n-1)/2 } \cdot n^{n-1} \cdot \dfrac{n+1}{2} \end{array}$

<br>

#### ㊁、加边法

$\begin{array}{l} \\      && \begin{vmatrix} & 1+a_1 & 1 & \cdots & 1 & \\\\ & 2 & 2+a_2 & \cdots & 2 & \\\\ & \vdots & \vdots & & \vdots & \\\\ & n & n & \cdots & n+a_n \end{vmatrix}_{n \times n} \\\\      &=& \begin{vmatrix} & 1 & 1 & 1 & \cdots & 1 & \\\\ & 0 & 1+a_1 & 1 & \cdots & 1 & \\\\ & 0 & 2 & 2+a_2 & \cdots & 2 & \\\\ & \vdots & \vdots & \vdots & & \vdots & \\\\ & 0 & n & n & \cdots & n+a_n & \end{vmatrix}_{ (n+1) \times (n+1) } \\\\      \begin{array}{l} \underrightarrow{ a_i - (i-1)a_1 } \\ i:2 \to n \end{array} &=& \begin{vmatrix} & 1 & 1 & 1 & \cdots & 1 & \\\\ & -1 & a_1 & 0 & \cdots & 0 & \\\\ & -2 & 0 & a_2 & \cdots & 0 & \\\\ & \vdots & \vdots & \vdots & & \vdots & \\\\ & -n & 0 & 0 & \cdots & a_n & \end{vmatrix}_{ (n+1) \times (n+1) } \\\\      \begin{array}{l} \underrightarrow{ a_1 + \sum\limits_{j = 1}^n \dfrac{j}{a_j} } \end{array} &=& \begin{vmatrix} & 1+\sum\limits_{i = 1}^n \dfrac{i}{a_i} & 1 & 1 & \cdots & 1 & \\\\ & 0 & a_1 & 0 & \cdots & 0 & \\\\ & 0 & 0 & a_2 & \cdots & 0 & \\\\ & \vdots & \vdots & \vdots & & \vdots & \\\\ & 0 & 0 & 0 & \cdots & a_n \end{vmatrix}_{ (n+1) \times (n+1) } \\\\      &=& ( 1+\sum\limits_{i = 1}^n \dfrac{i}{a_i} ) \cdot \begin{vmatrix} & 1 & 1 & 1 & \cdots & 1 & \\\\ & 0 & a_1 & 0 & \cdots & 0 & \\\\ & 0 & 0 & a_2 & \cdots & 0 & \\\\ & \vdots & \vdots & \vdots & & \vdots & \\\\ & 0 & 0 & 0 & \cdots & a_n & \end{vmatrix}_{ (n+1) \times (n+1) } \\\\      &=& ( 1+\sum\limits_{i = 1}^n \dfrac{i}{a_i} ) \cdot \prod\limits_{i=1}^n a_i \end{array}$

<br>

#### ㊂、递推法

$\begin{array}{l} D_n &=&      \begin{vmatrix} & 2 & -1 & 0 & \cdots & 0 & 0 & \\\\ & -1 & 2 & -1 & \cdots & 0 & 0 & \\\\ & 0 & -1 & 2 & \cdots & 0 & 0 & \\\\ & \vdots & \vdots & \vdots & & \vdots & \vdots & \\\\ & 0 & 0 & 0 & \cdots & 2 & -1 & \\\\ & 0 & 0 & 0 & \cdots & -1 & 2 & \end{vmatrix}_{n \times n} \\\\      &=& 2 \cdot D_{n-1} + (-1) \cdot (-1)^{1+2} \cdot \begin{vmatrix} & -1 & -1 & 0 & \cdots & 0 & 0 & \\\\ & 0 & 2 & -1 & \cdots & 0 & 0 & \\\\ & 0 & -1 & 2 & \cdots & 0 & 0 & \\\\ & \vdots & \vdots & \vdots & & \vdots & \vdots & \\\\ & 0 & 0 & 0 & \cdots & 2 & -1 & \\\\ & 0 & 0 & 0 & \cdots & -1 & 2\end{vmatrix}_{ (n-1) \times (n-1) } \\\\      &=& 2 \cdot D_{n-1} - D_{n-2} \end{array}$ 

$\begin{array}{l} \\ \implies D_n - D_{n-1} & = D_{n-1} - D_{n-2} \\\\ & \cdots \cdots \\\\ & = D_2 - D_1 = 1 \\ & \end{array}$ 

$\begin{array}{l} \implies D_n & = D_{n-1} + 1 \\\\ & = D_{n-2} + 2 \\\\ & \cdots \cdots \\\\ & = D_1 + (n-1) \\\\ & = n+1 \end{array}$ 

<br>

#### ㊃、数学归纳法

<br>

###### 1、证明范德蒙德行列式

1️⃣ 

$n=2$ 时，$D_2 = \begin{vmatrix} 1 & 1 \\ x_1 & x_2 \end{vmatrix} = x_2 - x_1$，成立。

2️⃣ 

设 $n-1$ 时成立。

3️⃣ 

（证 $n$ 时成立）

$\begin{array}{l}      D_n &=& \begin{vmatrix} & 1 & 1 & 1 & \cdots & 1 & \\\\ & x_1 & x_2 & x_3 & \cdots & x_n \\\\ & x_1^2 & x_2^2 & x_3^2 & \cdots & x_n^2 \\\\ & \vdots & \vdots & \vdots & & \vdots & \\\\ & x_1^{n-2} & x_2^{ n-2 } & x_3^{ n-2 } & \cdots & x_n^{ n-2 } \\\\ & x_1^{n-1} & x_2^{ n-1 } & x_3^{ n-1 } & \cdots & x_n^{ n-1 } \end{vmatrix} \\\\      \begin{array}{l} \underrightarrow{ x_i-x_1x_{i-1} } \\ i:2 \to n \end{array} &=& \begin{vmatrix} & 1 & 1 & 1 & \cdots & 1 & \\\\ & 0 & x_2 - x_1 & x_3 - x_1 & \cdots & x_n - x_1 \\\\ & 0 & x_2(x_2  - x_1) & x_3(x_3 - x_1) & \cdots & x_n(x_n - x_1) \\\\ & \vdots & \vdots & \vdots & & \vdots & \\\\ & 0 & x_2^{ n-2 }(x_2 - x_1) & x_3^{ n-2 }(x_3 - x_1) & \cdots & x_n^{ n-2 }(x_n - x_1) \end{vmatrix} \\\\      &=& \begin{vmatrix} & x_2 - x_1 & x_3 - x_1 & \cdots & x_n - x_1 \\\\ & x_2(x_2  - x_1) & x_3(x_3 - x_1) & \cdots & x_n(x_n - x_1) \\\\ & \vdots & \vdots & & \vdots & \\\\ & x_2^{ n-2 }(x_2 - x_1) & x_3^{ n-2 }(x_3 - x_1) & \cdots & x_n^{ n-2 }(x_n - x_1) \end{vmatrix} \\\\      &=& \prod\limits_{k=2}^{n}(x_k - x_1) \begin{vmatrix} & 1 & 1 & \cdots & 1 \\\\ & x_2 & x_3 & \cdots & x_n \\\\ & \vdots & \vdots & & \vdots & \\\\ & x_2^{ n-2 } & x_3^{ n-2 } & \cdots & x_n^{ n-2 } \end{vmatrix}_{ (n-1) \times (n-1) } \\\\      &=& \prod\limits_{k=2}^{n}(x_k - x_1) \cdot \prod\limits_{2 \leq i < j \leq n} (x_j - x_i) \\\\      &=& \prod\limits_{1 \leq i < j \leq n} (x_j - x_i) \end{array}$ 

所以 $n$ 时成立。

<br>

###### 2、

1️⃣

$n=1$ 时，$D_1 = 2a = (1+1)a$，成立。

$n=2$ 时，$D_2 = \begin{vmatrix} 2a & 1 \\ a^2 & 2a \end{vmatrix} = 3a^2 = (2+1)a^2$，成立。

2️⃣

假设 $n<k$ 时成立。

3️⃣ 

$n=k$ 时

$\begin{array}{l}      D_k &=& 2aD_{k-1} + (-1)^{1+2} \cdot a^2 \cdot D_{k-2} \\\\      &=& 2a \cdot (k-1+1)a^{k-1} - a^2 \cdot (k-2+1)a^{k-2} \\\\      &=& (k+1)a^k \end{array}$

所以 $n=k$ 时成立。

<br>

#### ㊄、抽象型行列式

<br>

###### 1、

$\begin{array}{l}      \begin{vmatrix} & A & \beta & \\\\ & \beta^{\rm T} & c & \end{vmatrix} &=& \begin{vmatrix} & A & \beta & \\\\ & \beta^{\rm T} & b+c-b & \end{vmatrix} \\\\      &=& \begin{vmatrix} & A & \beta & \\\\ & \beta^{\rm T} & b & \end{vmatrix} + \begin{vmatrix} & A & 0 & \\\\ & \beta^{\rm T} & c-b & \end{vmatrix} \\\\      &=& 0 + (c-b) \cdot (-1)^{n+1+n+1} \cdot \mid A \mid \\\\      &=& (c-b)a \end{array}$

<br>

###### 2、

$\begin{array}{l}      \mid B \mid &=& \begin{vmatrix} & \alpha_1 - \sum\limits_{i \not= 1} \alpha_i & \alpha_2 - \sum\limits_{i \not= 2} \alpha_i & \cdots & \alpha_n - \sum\limits_{i \not= n} \alpha_i & \end{vmatrix} \\\\      &=& \begin{vmatrix} \begin{pmatrix} & \alpha_1 & \alpha_2 & \cdots & \alpha_n & \end{pmatrix} \cdot \begin{pmatrix} & 1 & -1 & -1 & \cdots & -1 & \\\\ & -1 & 1 & -1 & \cdots & -1 & \\\\ & -1 & -1 & 1 & \cdots & -1 \\\\ & \vdots & \vdots & \vdots & & \vdots & \\\\ & -1 & -1 & -1 & \cdots & 1 & \end{pmatrix} \end{vmatrix} \\\\      &=& \begin{vmatrix} & \alpha_1 & \alpha_2 & \cdots & \alpha_n & \end{vmatrix} \cdot \begin{vmatrix} & 1 & -1 & -1 & \cdots & -1 & \\\\ & -1 & 1 & -1 & \cdots & -1 & \\\\ & -1 & -1 & 1 & \cdots & -1 \\\\ & \vdots & \vdots & \vdots & & \vdots & \\\\ & -1 & -1 & -1 & \cdots & 1 & \end{vmatrix} \\\\      &=& a \cdot (2-n) \cdot \begin{vmatrix} & 1 & -1 & -1 & \cdots & -1 & \\\\ & 1 & 1 & -1 & \cdots & -1 & \\\\ & 1 & -1 & 1 & \cdots & -1 \\\\ & \vdots & \vdots & \vdots & & \vdots & \\\\ & 1 & -1 & -1 & \cdots & 1 & \end{vmatrix} \\\\      &=& a \cdot (2-n) \cdot 2^{n-1} \end{array}$

<br>

#### ㊅、展开式法的逆运用

<br>

#### ㊆、行列式的逆序数法定义

<br>

###### 1、

$15$， $-3$。

$$
D_4 = 
\begin{vmatrix} 
    & 5x & 1 & 2 & 3 & \\\\
    & 2 & 1 & x & 3 & \\\\
    & x & x & 2 & 3 & \\\\
    & 1 & 2 & 1 & -3x & 
\end{vmatrix}
$$

$\begin{cases} - & 5x & \cdot & x & \cdot & x & \cdot & (-3x) & = 15x^4 \\\\ - & a_{11} & \cdot & a_{23} & \cdot & a_{32} & \cdot & a_{44} \end{cases} \qquad \tau(1324) = 1$ 


$\begin{cases} + & 1 & \cdot & x & \cdot & x & \cdot & (-3x) & = 15x^4 \\\\ + & a_{12} & \cdot & a_{23} & \cdot & a_{31} & \cdot & a_{44} \end{cases} \qquad \tau(2314) = 2$ 


