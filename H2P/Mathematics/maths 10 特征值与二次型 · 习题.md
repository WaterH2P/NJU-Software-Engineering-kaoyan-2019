---
title: 特征值与二次型 · 习题
date: 2018-8-10
updated: 2018-12-6
tags: [maths,线代,kaoyan]
mathjax: true

description: 做笔记，喝凉茶，看线代
real-date: 2018-12-6
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

11 分大题

【综述】

1. 求 $A$ 的特征值、特征向量
2. $A$ 与 $B$ 相似，相似对角化
3. 化二次型为标准形、规范形

【A 均为正方形】

<br>

## 一、A 的特征值、特征向量

<br>

#### ㊁、性质

$$
\begin{array}{l}
    (1) & \sum\limits_{i=1}^n a_{ii} = tr(A) = \sum\limits_{i=1}^n \lambda_{i} \\\\
    (2) & \mid A \mid = \prod\limits_{i=1}^n \lambda_i
\end{array}
$$

<br>

#### ㊂、⭐定义法求特征值

$$
A \xi = \lambda \xi, \quad ( \,\xi \not= 0 \,)
$$

⭐ $\xi \not= 0$ 

<br>

#### ㊃、特征方程求特征值

<br>

## 二、矩阵相似

<br>

#### ㊀、定义

设 $A, B$ 是两个 n 阶矩阵，若存在 n 阶可逆矩阵 P，使得 $P^{-1}AP = B$，则称 A 相似于 B，记成 A ~ B 。

<br>

#### ㊁、性质

若 $A \sim B$，则

$$
\begin{array}{l}
    1^\circ \quad & {\rm r}(A) = {\rm r}(B) \\\\
    2^\circ \quad & \mid A \mid = \mid B \mid \\\\
    3^\circ \quad & \mid \lambda E - A \mid = \mid \lambda E - B \mid, \, \text{ 特征值相同 } \\\\
    4^\circ \quad & tr(A) = tr(B) \\\\
    5^\circ \quad & A^m \sim B^m \\\\
    6^\circ \quad & f(A) \sim f(B) \\\\
    7^\circ \quad & \text{ 若 } A^{-1}, \, B^{-1} \text{ 存在，则 } \begin{cases} A^{-1} \sim B^{-1} \\\\ f( A^{-1} ) \sim f( B^{-1} ) \\\\ A^\ast \sim B^\ast \\\\ f(A^\ast) \sim f(B^\ast) \end{cases}
\end{array}
$$

秩、行列式、特征值、迹 相同

<br>

#### ㊂、A ~ Λ

<br>

###### 1、

若 $A \sim \Lambda$ $\iff$ $A \text{ 有 } n \text{ 个线性无关的特征向量 }$ 

<br>

###### 2、重要结论

1️⃣ 

普通 $A \begin{cases} \lambda_1 \not= \lambda_2 \implies \xi_1 \text{ 与 } \xi_2 \text{ 无关 } \\\\ \lambda_1 = \lambda_2, \text{ 则不确定 } \end{cases}$ 

2️⃣ 

对称 $A \begin{cases} \lambda_1 \not= \lambda_2 \implies \xi_1 \perp \xi_2 \text{ 正交 } \\\\ \lambda_1 = \lambda_2 \implies \xi_1 \text{ 与 } \xi_2 \text{ 一定无关，不一定正交 } \end{cases}$ 

<br>

###### 3、A ~ Λ 判别方法

1️⃣ 两个充分方法

- $A$ 有 $n$ 个不同的特征值，则 $A \sim \Lambda$；

- $A$ 为实对称矩阵，则 $A \sim \Lambda$；

2️⃣ 两个必要条件

- $A$ 有 $n$ 个线性无关的特征向量 $\iff$ $A \sim \Lambda$；

- $n_i = n - {\rm r}( \lambda_i E - A)$，$\lambda_i$ 为 $n_i$ 重根 $\iff$ $A \sim \Lambda$。

   - $\lambda_1 = \lambda_2 = \cdots = \lambda_s$ 作为 $A$ 的 $s$ 重根，要存在 $s$ 个线性无关的特征向量，即对应 $(\lambda E - A)X = 0$ 的基础解系有 $s$ 个独立变量，即 $s = S = n - {\rm r}(\lambda E - A)$。

   - $\lambda_i$ 为 $n_i$ 重根，$n_i = n - {\rm r}(\lambda E - A)$

<br>

#### ㊃、A ~ B

1️⃣ 证 $A \sim \Lambda_1$，2️⃣ 证 $B \sim \Lambda_2$，3️⃣ $\Lambda_1 = \Lambda_2$，由传递性得 $A \sim B$。

<br>

#### ㊄、求 $A^n$ 

若存在可逆矩阵 $P$，使得 $P^{-1} A P = \Lambda$，则 $A^n = P \Lambda^n P^{-1}$。

<br>

## 三、二次型化标准形、规范形

























<br>

## 、练习题

<br>

#### 一㊂、特征值定义法

设 $\alpha, \, \beta$ 均为 $n$ 维单位列向量，且 $\alpha, \, \beta$ 正交。$A = \alpha \beta^{\rm T} + \beta \alpha^{\rm T}$，证明 1️⃣ $\mid A \mid = 0$；2️⃣ $\alpha + \beta, \, \alpha - \beta$ 均是 $A$ 的特征向量。

<br>

#### 二㊃、A ~ B

证明：$n$ 阶矩阵 $\begin{bmatrix} 1 & 1 & \cdots & 1 \\ 1 & 1 & \cdots & 1 \\ \vdots & \vdots & & \vdots \\ 1 & 1 & \cdots & 1 \end{bmatrix}$ 与 $\begin{bmatrix} 0 & \cdots & 0 & 1 \\ 0 & \cdots & 0 & 2 \\ \vdots & & \vdots & \vdots \\ 0 & \cdots & 0 & n \end{bmatrix}$ 相似。









㊁ ㊂ ㊃ ㊄ ㊅ ㊆ ㊇ ㊈
































<br>

## 、参考答案

<br>

#### 一㊂、特征值定义法

1️⃣ 

$\begin{array}{l} {\rm r}(A) & = {\rm r}( \alpha \beta^{\rm T}, \, \beta \alpha^{\rm T} ) \\\\ & \leq  {\rm r}( \alpha \beta^{\rm T} ) +  {\rm r}( \beta \alpha^{\rm T} ) \\\\ & \leq {\rm r}(\alpha) + {\rm r}(\beta) \\\\ &= 1 + 1 = 2 \end{array} \quad \implies \mid A \mid = 0$ 

2️⃣ 

由题可知 $\begin{cases} \alpha^{\rm T} \beta = \beta^{\rm T} \alpha = 0 \\\\ \alpha^{\rm T} \alpha = \beta^{\rm T} \beta = 1 \end{cases}$。

设 $\lambda_1$ 是 $\alpha + \beta$ 对应的特征值，所以 $A(\alpha + \beta) = \lambda_1(\alpha + \beta)$。

$\begin{array}{l} \\ & A(\alpha + \beta) = \lambda_1(\alpha + \beta) \\\\      \implies & ( \alpha \beta^{\rm T} + \beta \alpha^{\rm T} )(\alpha + \beta) = \lambda_1(\alpha + \beta) \\\\      \implies & \alpha \beta^{\rm T} \alpha + \alpha \beta^{\rm T} \beta + \beta \alpha^{\rm T} \alpha + \beta \alpha{\rm T} \beta = \lambda_1(\alpha + \beta) \\\\      \implies & \alpha + \beta = \lambda_1(\alpha + \beta) \\\\ \implies & \lambda_1 = 1 \\ & \end{array}$ 

其中 $\alpha + \beta \not= 0$，因若不然，$\beta = -\alpha$ $\implies$ $\alpha^{\rm T} \alpha = -\alpha^{\rm T} \beta = 0$ 矛盾。

设 $\lambda_2$ 是 $\alpha - \beta$ 对应的特征值，所以 $A(\alpha - \beta) = \lambda_2(\alpha - \beta)$。

$\begin{array}{l} \\ & A(\alpha - \beta) = \lambda_2(\alpha - \beta) \\\\      \implies & ( \alpha \beta^{\rm T} + \beta \alpha^{\rm T} )(\alpha - \beta) = \lambda_2(\alpha - \beta) \\\\      \implies & \alpha \beta^{\rm T} \alpha - \alpha \beta^{\rm T} \beta + \beta \alpha^{\rm T} \alpha - \beta \alpha{\rm T} \beta = \lambda_2(\alpha - \beta) \\\\      \implies & - ( \alpha - \beta ) = \lambda_2(\alpha - \beta) \\\\ \implies & \lambda_2 = -1 \\ & \end{array}$ 

其中 $\alpha - \beta \not= 0$，因若不然，$\beta = \alpha$ $\implies$ $\alpha^{\rm T} \alpha = \alpha^{\rm T} \beta = 0$ 矛盾。

<br>

#### 二㊃、A ~ B

设 $A = \begin{bmatrix} 1 & 1 & \cdots & 1 \\ 1 & 1 & \cdots & 1 \\ \vdots & \vdots & & \vdots \\ 1 & 1 & \cdots & 1 \end{bmatrix}$，$B = \begin{bmatrix} 0 & \cdots & 0 & 1 \\ 0 & \cdots & 0 & 2 \\ \vdots & & \vdots & \vdots \\ 0 & \cdots & 0 & n \end{bmatrix}$。

$\mid \lambda E - A \mid = 0$ 解得 $\lambda_1, \, \lambda_2, \, \cdots, \, \lambda_{n-1} = 0$，$\lambda_n = n$。

由于 $A$ 是实对称矩阵，所以 $A \sim \Lambda_1 = \begin{pmatrix} 0 & & & \\ & \ddots & & \\ & & 0 & \\ & & & n \end{pmatrix}$。

$\mid \eta E - B \mid = 0$ 解得 $\eta_1, \, \eta_2, \, \cdots, \, \eta_{n-1} = 0$，$\eta_n = n$。

$0$ 为 $n-1$ 重根，且 $n-1 = n - {\rm r}(0 \cdot E - B) = n-1$，所以 $B \sim \Lambda_2 = \begin{pmatrix} 0 & & & \\ & \ddots & & \\ & & 0 & \\ & & & n \end{pmatrix}$。

$\Lambda_1 = \Lambda_2$ $\implies$ $A \sim B$












