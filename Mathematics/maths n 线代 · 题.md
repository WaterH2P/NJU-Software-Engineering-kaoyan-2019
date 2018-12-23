---
title: 线代 · 题
date: 2018-8-31
updated: 2018-11-20
tags: [maths,线代,kaoyan]
mathjax: true

description: 做笔记，喝凉茶，做习题
addition: 《1000 题（数学二） 线性代数》
real-date: 2018-11-20
---

<!-- 
$\begin{array}{l} ( {\rm A} ) \, 1 \qquad & ( {\rm B} ) \, 2 \\\\ ( {\rm C} ) \, 3 \qquad & ( {\rm D} ) \, 4 \end{array}$ 
-->

<br>

## 习题

<br>

#### 【A - 1】

设三阶行列式

$$
\mid A \mid = 
\begin{vmatrix} 
    a_{11} & a_{12} & a_{13} \\
    a_{21} & a_{22} & a_{23} \\
    a_{31} & a_{32} & a_{33} 
\end{vmatrix}
$$

其中 $a_{ij} = 1 \text{ 或 } -1, \, (i=1, 2, 3; \, j=1, 2, 3)$，则 $\mid A \mid$ 的最大值是 ________ 。

<br>

#### 【A - 6】

线性方程组

$$
\begin{cases}
  a_{11}x_1 + a_{12}x_2 + \cdots + a_{1n}x_n = b_1 \\\\
  a_{21}x_1 + a_{22}x_2 + \cdots + a_{2n}x_n = b_2 \\\\
  \cdots \cdots \\\\ 
  a_{m1}x_1 + a_{m2}x_2 + \cdots + a_{mn}x_n = b_m
\end{cases}
$$

则 $(\qquad)$ 。

$\begin{array}{l} ( {\rm A} ) \text{ 若方程组无解，则必有系数行列式 } \mid A \mid = 0 \\\\ ( {\rm B} ) \text{ 若方程组有解，则必有系数行列式 } \mid A \mid \not= 0 \\\\ ( {\rm C} ) \text{ 系数行列式 } \mid A \mid = 0 \text{ ，则方程组必无解 } \\\\ ( {\rm D} ) \text{ 系数行列式 } \mid A \mid = 0 \text{ 是方程组有唯一解的充分非必要条件 } \end{array}$ 

<br>

#### 【A - 11】

设 $A$ 是 $n$ 阶矩阵，$X$ 是任意的 $n$ 维列向量，$B$ 是任意的 $n$ 阶方阵，则下列说法错误的是 $(\quad)$ 。

$\begin{array}{l} ( {\rm A} ) \, AB = O \implies A = O & ( {\rm B} ) \, B^{\rm T}AB = O \implies A = O \\\\ ( {\rm C} ) \, AX = \overrightarrow{0} \implies A = O & ( {\rm D} ) \, X^{\rm T} AX = 0 \implies A = O \end{array}$ 

<br>

#### 【A - 17】

设 $A_{n \times n}$ 是正交矩阵，则 $(\quad)$ 。

$\begin{array}{l} ( {\rm A} ) \, A^\ast ( A^\ast ) ^{\rm T} = \mid A \mid E \qquad & ( {\rm B} ) \, A^\ast ( A^\ast ) ^{\rm T} = \mid A^\ast \mid E \\\\ ( {\rm C} ) \, A^\ast ( A^\ast ) ^{\rm T} = E \qquad & ( {\rm D} ) \, A^\ast ( A^\ast ) ^{\rm T} = -E \end{array}$ 

<br>

#### 【A - 19】

设 $A$ 为 $3$ 阶非零矩阵，且满足 $a_{ij} = A_{ij} \, (i, j = 1, 2, 3)$ ，其中 $A_{ij}$ 为 $a_{ij}$ 的代数余子式，且下列结论：

$\begin{array}{l} 1. \; A \text{ 是可逆矩阵 } \quad & 2. \; A \text{ 是对称矩阵 } \\\\ 3. \; A \text{ 是不可逆矩阵 } \quad & 4. \; A \text{ 是正交矩阵 } \end{array}$ 

其中正确的个数为 $(\quad)$ 。

$\begin{array}{l} ( {\rm A} ) \, 1 \qquad & ( {\rm B} ) \, 2 \\\\ ( {\rm C} ) \, 3 \qquad & ( {\rm D} ) \, 4 \end{array}$ 

<br>

#### 【A - 21】

已知 $Q = \begin{bmatrix} 1 & 2 & 3 \\ 2 & 4 & t \\ 3 & 6 & 9 \end{bmatrix}$， $P$ 为 $3$ 阶非零矩阵，且满足 $PQ = O$，则 $(\quad)$ 。

$\begin{array}{l} ( {\rm A} ) \, t = 6 \text{ 时 ，} P \text{ 的秩必为 } 1 & ( {\rm B} ) \, t = 6 \text{ 时 ，} P \text{ 的秩必为 } 2 \\\\ ( {\rm C} ) \, t \not= 6 \text{ 时 ，} P \text{ 的秩必为 } 1 \qquad & ( {\rm D} ) \, t \not= 6 \text{ 时 ，} P \text{ 的秩必为 } 2 \end{array}$ 

<br>

#### 【A - 28】

设 $A$ 是 $m \times n$ 矩阵， $C$ 是 $n$ 阶可逆矩阵，矩阵 $A$ 的秩为 $r$，矩阵 $B = AC$ 的秩为 $r_1$，则 $(\quad)$ 。

$\begin{array}{l} ( {\rm A} ) \, r > r_1 \qquad & ( {\rm B} ) \, r < r_1> \\\\ ( {\rm C} ) \, r = r_1 \qquad & ( {\rm D} ) \, r \text{ 和 } r_1 \text{ 的关系依 } C \text{ 而定 } \end{array}$ 

<br>

#### 【A - 28】

设 $A$ 为 $m \times n$ 矩阵，齐次线性方程组 $AX = \overrightarrow{0}$ 仅有零解的充分条件是 $(\quad)$ 。

$\begin{array}{l} ( {\rm A} ) \, A \text{ 的列向量线性无关 } \qquad & ( {\rm B} ) \, A \text{ 的列向量线性相关 } \\\\ ( {\rm C} ) \, A \text{ 的行向量线性无关 } \qquad & ( {\rm D} ) \, A \text{ 的行向量线性相关 } \end{array}$ 

<br>

#### 【A - 49】

设 $A$ 为奇数矩阵，$AA^{\rm T} = A^{\rm T}A = E$，且 $\mid A \mid > 0$，则 $\mid A - E \mid =$ ________ 。












<br>

## 参考答案

<br>

#### 【A - 1】

最大值：4。

<br>

#### 【A - 6】

$( {\rm A} )$ 。

<br>

#### 【A - 11】

$( {\rm D} )$ 。

对于任意的 $X$，有 $X^{\rm T}AX = 0$，可推出 $A^{\rm T} = -A$，不能推出 $A = O$ 。

<br>

#### 【A - 17】

$( {\rm C} )$ 。

因为 $A$ 是正交矩阵，则有

$$
A^{\rm T} = A^{-1} = \dfrac{ A^\ast }{ \mid A \mid }, \quad A^\ast ( A^\ast )^{\rm T} = \mid A \mid A^{\rm T} \left( \, \mid A \mid A^{\rm T} \, \right)^{\rm T} = \mid A \mid^2 A^{\rm T}A = E
$$

or

$$
\left.
\begin{array}{r}
  \left( A^\ast \right)^{\rm T} = \left( A^{\rm T} \right)^\ast \\\\
  \left( AB \right)^\ast = B^\ast A^\ast
\end{array}
\right\} \implies 
A^\ast \left( A^\ast \right)^{\rm T} = A^\ast \left( A^{\rm T} \right)^\ast = \left( A^{\rm T} A \right)^\ast = E
$$

<br>

#### 【A - 19】

$( {\rm B} )$ 。

由 $a_{ij} = A_{ij} \, (i, j = 1, 2, 3)$ 及伴随矩阵的定义可知：$A^\ast = A^{\rm T}$，那么 $\mid A^\ast \mid = \mid A^{\rm T} \mid$，也即 $\mid A \mid^2 = \mid A \mid$，即 $\mid A \mid \left( \mid A \mid - 1 \right) = 0$ 。

又由于 $A$ 为非零矩阵，不妨设 $a_{11} \not= 0$，则

$$
\mid A \mid = \sum\limits_{j=1}^3 a_{1j}A_{1j} = a_{11}^2 + a_{12}^2 + a_{13}^2 > 0
$$

故 $\mid A \mid = 1$，因此 $A$ 可逆。

并且由 $A A^{\rm T} = A A^\ast = \mid A \mid E = E$，可知 $A$ 是正交矩阵，故 $1, \, 4$ 正确，$3$ 错误。

$2$ 无法判别。

<br>

#### 【A - 21】

$( {\rm C} )$ 。

$\begin{array}{l} 1. \quad A_{m \times s} B_{s \times n} = O \implies {\rm r}(A) + {\rm r}(B) \leq s; \\\\ 2. \quad A_{m \times s} B_{s \times n} = O \implies \text{ 组成 } B \text{ 的每一列都是 } A_{m \times s}X = 0 \text{ 的解向量 } \end{array}$

对于本题，

$$
PQ = O \implies {\rm r}(P) + {\rm r}(Q) \leq 3 \implies 1 \leq {\rm r}(P) \leq 3 - {\rm r}(Q)
$$

当 $t = 6$ 时，${\rm r}(Q) = 1 \implies 1 \leq {\rm r}(P) \leq 2 \implies {\rm r}(P) = 1 \text{ 或 } 2$，则 $( {\rm A} ), \, ( {\rm B} )$ 都错。

当 $t \not= 6$ 时，${\rm r}(Q) = 2 \implies 1 \leq {\rm r}(P) \leq 2 \implies {\rm r}(P) = 1$，故选 $( {\rm C} )$ 。

<br>

#### 【A - 28】

$( {\rm C} )$ 。

因 $C$ 是可逆矩阵，是若干个初等矩阵的积，$A$ 右边乘 $C$，相当于对 $A$ 作若干次初等变换，不改变矩阵的秩，所以 ${\rm }(A) = {\rm }(B)$ 。

<br>

#### 【A - 28】

$( {\rm A} )$ 。

$A$ 的列向量线性无关 $\iff AX = \overrightarrow{0}$ 有唯一零解。

<br>

#### 【A - 49】

${0}$ 。

由题可知，$\begin{array}{l} \mid A - E \mid &= \mid A - AA^{\rm T} \mid &= \mid A \, ( E - A^{\rm T} ) \mid \\\\ &= \mid A \mid \cdot \mid ( E - A ）^{\rm T} \mid \\\\ &= \mid A \mid \cdot \mid E - A \mid \end{array}$ 

又由于 $AA^{\rm T} = A^{\rm T}A = E$，可知 $\mid A \mid^2 = 1$。又由 $\mid A \mid > 0$，可知 $\mid A \mid = 1$。又 $A$ 为奇数矩阵，故

$$
\mid E - A \mid \, = \, \mid - (A - E) \mid \, = \, - \mid A - E \mid
$$

从而有 $\mid A - E \mid \, = - \mid A - E \mid$，可知 $\mid A - E \mid - 0$。
