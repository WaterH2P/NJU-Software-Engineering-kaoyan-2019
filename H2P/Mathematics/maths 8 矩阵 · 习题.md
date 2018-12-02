---
title: 矩阵 · 习题
date: 2018-8-8
updated: 2018-12-2
tags: [maths,线代,kaoyan]
mathjax: true

description: 做笔记，喝凉茶，看线代
real-date: 2018-12-2
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

<br>

## 一、概念

<br>

#### ㊃、对角阵

$$
\Lambda = 
\begin{vmatrix} 
    & \lambda_1 & & O & \\\\ 
    & & \ddots & & \\\\ 
    & O & & \lambda_n & 
\end{vmatrix}_{n \times n}
$$ 

$$
\begin{pmatrix} 
    \lambda_1 & & O \\\\ 
    & \ddots & \\\\ 
    O & & \lambda_n 
\end{pmatrix}^m = 
\begin{pmatrix} 
    \lambda_1^m & & O \\\\ 
    & \ddots & \\\\ 
    O & & \lambda_n^m 
\end{pmatrix}
$$

<br>

#### ㊅、对称阵

$$
A = A^{\rm T} \iff a_{ij} = a_{ji}
$$ 

<br>

#### ㊆、反对称阵

$$
A = -A^{\rm T} \iff 
\begin{cases} 
    a_{ii} = 0 \\\\ 
    a_{ij} = a_{ji}, \; i \not= j 
\end{cases}
$$ 

<br>

#### ㊇、⭐️ 正交阵

$$
AA^{\rm T} = A^{\rm T}A = E \iff A^{\rm T} = A^{-1}
$$ 

$n$ 阶正交阵 $A$ 由 $n$ 个两两正交的单位向量组（规范正交基）组成。

<br>

## 二、可逆阵

<br>

#### ㊁、性质

$$
\begin{array}{l} 
    (1) & (A^{-1})^{-1} = A \\\\ 
    (2) & k \not= 0,(kA)^{-1} = \dfrac{1}{k}A^{-1} \\\\
    (3) & (AB)^{-1} = B^{-1}A^{-1} \\\\
    (4) & (A^{\rm T})^{-1} = (A^{-1})^{\rm T} \\\\
    (4) & \mid A^{-1} \mid = \dfrac{1}{ \mid A \mid } \\\\
\end{array}
$$

<br>

## 三、伴随阵

<br>

#### ㊀、定义

$$
A^{\ast} = 
\begin{pmatrix} 
    & A_{11} & A_{21} & \cdots & A_{n1} & \\\\
    & A_{12} & A_{22} & \cdots & A_{n2} & \\\\ 
    & \vdots & \vdots & & \vdots & \\\\ 
    & A_{1n} & A_{2n} & \cdots & A_{nn} &
\end{pmatrix}
$$

⭐️⭐️⭐️ $\begin{cases} AA^\ast = \mid A \mid E \\\\ A^{-1} = \dfrac{1}{\mid A \mid} A^\ast \\\\ A^\ast = \mid A \mid A^{-1} \end{cases}$ 

【注】天生可交换
1. $AB = E, \; AB = BA$ 
2. $AA^\ast = A^\ast A$ 
3. $kE \cdot A = A \cdot kE$ 

<br>

#### 二、常用结论及其推论

（ $\mid A \mid \not= 0 \iff A$ 可逆 ）

$\begin{array}{l} (1) \; \mid A^\ast \mid = \mid A \mid^{n-1} \\\\      (2) \; k \not= 0, \; (kA)^\ast = k^{n-1}A^\ast \\\\      (3) \; \begin{cases} ( A^{\rm T} )^\ast = ( A^\ast )^{\rm T} \\\\ ( A^{-1} )^\ast = (A^\ast)^{-1} \\\\ ( A^{\rm T} )^{-1} = ( A^{-1} )^{\rm T} \end{cases} \\\\      (4) \; ( A^\ast )^\ast = \mid A \mid^{n-2} \cdot A \\\\      (5) \; \begin{cases} (AB)^\ast = B^\ast A^\ast \\\\ (AB)^{-1} = B^{-1} A^{-1} \\\\ (AB)^{ {\rm T} } = B^{ {\rm T} } A^{ {\rm T} } \end{cases} \qquad \text{ 穿脱原则 } \end{array}$ 

$\begin{array}{l} \\ & A^{\rm T} \cdot ( A^{\rm T} )^\ast = \mid A^{\rm T} \mid E \\\\      \implies & ( A^{\rm T} )^\ast = ( A^{\rm T} )^{-1} \cdot \mid A^{\rm T} \mid \\\\      \implies & ( A^{\rm T} )^\ast = \mid A \mid^{\rm T} \cdot ( A^{-1} )^{\rm T} \\\\      \implies & ( A^{\rm T} )^\ast = ( \mid A \mid \cdot A^{-1} )^{\rm T} = (A^\ast)^{\rm T} \end{array}$

<br>

## 四、初等阵

<br>

#### ㊀、定义

$n$ 阶单位矩阵经过一次初等变换得到的矩阵，叫初等阵。

<br>

#### ㊁、性质

$$
\begin{array}{l} 
    \text{ 互换初等阵的逆 } & \implies & E_{ij}^{-1} = E_{ij} \\\\ 
    \text{ 倍乘初等阵的逆 } & \implies & [ \, E_i(k) \, ]^{-1} = E_i( \dfrac{1}{k} ) \\\\ 
    \text{ 倍加初等阵的逆 } & \implies & [ \, E_{ij}(k) \, ]^{-1} = E_{ij}(-k) \\\\ 
\end{array}
$$

<br>

#### ㊂、左行右列定理

初等阵 $P$ 左乘（右乘）$A$ 得 $PA \; (AP)$，就是对 $A$ 做了一次与 $P$ 相同的初等行（列）变换。

<br>

## 五、求 A 的逆

<br>

#### ㊀、定义法（抽象型）

<br>

###### 1、利用定义求逆矩阵

根据题设条件，找出一个矩阵 $B$，使得 $AB = E$，则 $A$ 可逆，且 $A^{-1} = B$。

<br>

###### 2、

将 $A$ 分解成若干可逆矩阵的乘积。

若 $A=BC$，其中 $B, \, C$ 均是可逆矩阵，则 $A$ 可逆且 $A^{-1} = C^{-1}B^{-1}$。

<br>

#### ㊁、A 的伴随法

$$
AA^\ast = \mid A \mid E
$$

1⃣️ 求 $\mid A \mid$；2⃣️ 求 $A^\ast$；3⃣️ 写 $A^{-1} = \dfrac{1}{ \mid A \mid }A^\ast$。

###### 1、

$$
\begin{array}{l} 
    & A = \begin{pmatrix} a & b \\ c & d \end{pmatrix}, \quad ad \not= bc \\\\ 
    & A^{-1} = \dfrac{1}{ad-bc} \begin{pmatrix} d & -b \\ -c & a \end{pmatrix}
\end{array}
$$

<br>

#### ㊂、初等变换法

【Th】任何可逆矩阵 $A$ 一定可以通过若干初等行变换，化成同阶单位阵 $E$，即 $P_n \cdot P_2P_1 A = E, \; P_n \cdot P_2P_1 E = A^{-1}$。

$\Longrightarrow \begin{pmatrix} A \mid E \end{pmatrix} \implies \begin{pmatrix} E \mid A^{-1} \end{pmatrix} \quad \text{ 行变换 }$。

⭐️【验证 $A^{-1}$】












<br>

## 、练习题

<br>

#### 四、㊂、左行右列定理

<br>

###### 1

设 $A$ 是 $3$ 阶可逆矩阵，交换 $A$ 的第 $1$ 列和第 $2$ 列得到 $B$，$A6\ast, \, B^\ast$ 分别是 $A, \, B$ 的伴随矩阵，则 $B^\ast$ 可由 $(\quad)$ 。

$\begin{array}{l} ( {\rm A} ) \, A^\ast \text{ 的第 } 1 \text{ 列与第 } 2 \text{ 列互换得到 } \qquad & ( {\rm B} ) \, A^\ast \text{ 的第 } 1 \text{ 行与第 } 2 \text{ 行互换得到 } \\\\ ( {\rm C} ) \, -A^\ast \text{ 的第 } 1 \text{ 列与第 } 2 \text{ 列互换得到 } \qquad & ( {\rm D} ) \, -A^\ast \text{ 的第 } 1 \text{ 行与第 } 2 \text{ 行互换得到 } \end{array}$ 

<br>

###### 2、

$$
A = 
\begin{pmatrix} 
    & 0 & 1 & 0 \\\\ 
    & 1 & 0 & 0 \\\\ 
    & 0 & 0 & 1 & 
\end{pmatrix}^5 
\begin{pmatrix} 
    & 1 & 0 & 0 \\\\ 
    & 0 & 5 & 0 \\\\ 
    & 0 & 0 & 3 & 
\end{pmatrix} 
\begin{pmatrix} 
    & 1 & 0 & 0 \\\\ 
    & 0 & 1 & 1 \\\\ 
    & 0 & 0 & 1 & 
\end{pmatrix}^4
$$

求 $A^{-1}$。

<br>

#### 五、㊀、定义法（抽象型）

<br>

###### 1、利用定义求逆矩阵

$A, \, B$ 均是 $n$ 阶矩阵，且 $AB = A+B$。证明 $A-E$ 可逆，并求 $(A-E)^{-1}$。

<br>

###### 2、

设 $A, \, B$ 是同阶可逆方阵，且 $A^{-1} + B^{-1}$ 是可逆矩阵，证明 $A+B$ 是可逆矩阵，并求 $(A+B)^{-1}$。











<br>

## 、参考答案

<br>

#### 四、㊂、左行右列定理

<br>

###### 1、

$({\rm D})$。

$\begin{array}{l} & AE_{12} = B \\\\      & \mid AE_{12} \mid = \mid B \mid \\\\      & \mid A \mid \cdot \mid E_{12} \mid = \mid B \mid \\\\      & \mid A \mid \cdot (-1) = \mid B \mid \\\\      & \mid B \mid = - \mid A \mid \end{array}      \qquad      \begin{array}{l} & AE_{12} = B \\\\      & ( AE_{12} )^{-1} = B^{-1} \\\\      & E_{12}^{-1} \cdot A^{-1} = B^{-1} \\\\      & E_{12} \cdot A^{-1} = B^{-1} \\\\      & B^{-1} = E_{12} A^{-1} \end{array}$ 

$\begin{array}{l} \\ B^\ast &= \mid B \mid B^{-1} \\\\      &= - \mid A \mid \cdot E_{12}A^{-1} \\\\      &= E_{12} \, ( - \mid A \mid A^{-1} ) \\\\      &= E_{12} \, ( - A^\ast ) \end{array}$

<br>

#### 五、㊀、定义法（抽象型）

<br>

###### 1、利用定义求逆矩阵

$\begin{array}{l} & AB = A+B \\\\ \implies & (A-E)B = A \\\\ \implies & (A-E)(B-E) = E \\\\ \implies & (A-E)^{-1} = B-E \end{array}$

<br>

###### 2、

$A+B = A(E+A^{-1} B) = A( B^{-1} + A^{-1} )B$ 

所以 $(A+B)^{-1} = B^{-1}( A^{-1} + B^{-1} )^{-1} A^{-1}$。






