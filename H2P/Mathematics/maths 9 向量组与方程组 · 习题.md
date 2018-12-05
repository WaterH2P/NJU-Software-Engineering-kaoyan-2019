---
title: 向量组与方程组 · 习题
date: 2018-8-9
updated: 2018-12-4
tags: [maths,线代,kaoyan]
mathjax: true

description: 做笔记，喝凉茶，看线代
real-date: 2018-12-4
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

11 分

<br>

### 综述

$$
\begin{array}{c}
    \begin{cases}
        a_{11} x_1 + a_{12} x_2 + \cdots + a_{1n}x_n = b_1 \\\\
        a_{21} x_1 + a_{22} x_2 + \cdots + a_{2n}x_n = b_2 \\\\
        \cdots \cdots \cdots \cdots \\\\
        a_{m1} x_1 + a_{m2} x_2 + \cdots + a_{mn}x_n = b_n
    \end{cases} & \iff &
    x_1 \begin{pmatrix} a_{11} \\\\ a_{21} \\\\ \vdots \\\\ a_{m1} \end{pmatrix} + 
    x_2 \begin{pmatrix} a_{12} \\\\ a_{22} \\\\ \vdots \\\\ a_{m2} \end{pmatrix} + \cdots +
    x_n \begin{pmatrix} a_{1n} \\\\ a_{2n} \\\\ \vdots \\\\ a_{mn} \end{pmatrix} = 
    \begin{pmatrix} b_1 \\\\ b_2 \\\\ \vdots \\\\ b_m \end{pmatrix} \\\\
    \text{ 方程组的解 } & \iff & \text{ 向量组的系数 }
\end{array}
$$

<br>

## 一、向量组的线性相关性

（有无多余向量）

<br>

#### ㊀、定义

1⃣️ $\exists \;$ 一组不全为 $0$ 的数 $x_1, \, x_2, \, \cdots, \, x_s$，使 $x_1 \alpha_1, \, x_2 \alpha_2, \, \cdots, \, x_s \alpha_s = 0$ 成立称 $\alpha_1, \, \alpha_2, \, \cdots, \, \alpha_s$ 线性相关。$\iff$ $\begin{pmatrix} \alpha_1, \, \alpha_2, \, \cdots, \, \alpha_s \end{pmatrix} \begin{pmatrix} x_1 \\\\ \vdots \\\\ x_s \end{pmatrix}$ 有非零解。

2⃣️ 若要使 $x_1 \alpha_1, \, x_2 \alpha_2, \, \cdots, \, x_s \alpha_s = 0$ 成立，必须有 $x_1 = x_2 = \cdots = x_s = 0$ ，称 $\alpha_1, \, \alpha_2, \, \cdots, \, \alpha_s$ 线性无关。 $\iff$ $\begin{pmatrix} \alpha_1, \, \alpha_2, \, \cdots, \, \alpha_s \end{pmatrix} \begin{pmatrix} x_1 \\\\ \vdots \\\\ x_s \end{pmatrix}$ 只有零解。

<br>

#### ㊁、判别线性相关的方法

设 $m$ 个 $n$ 维向量

（1）$m=n$ 时，行列式 $\begin{cases} \begin{vmatrix} \alpha_1, \, \alpha_2, \, \cdots, \, \alpha_m \end{vmatrix} = 0 \iff \text{ 线性相关 } \\\\ \begin{vmatrix} \alpha_1, \, \alpha_2, \, \cdots, \, \alpha_m \end{vmatrix} \not= 0 \iff \text{ 线性无关 } \end{cases}$ 

【注】对于 $1$ 个成员的向量组，$\begin{cases} \text{ 若 } \alpha = 0 \text{ ，叫线性相关 } \\\\ \text{ 若 } \alpha \not= 0 \text{ ，叫线性无关 } \end{cases}$ 

（2）$m>n$ 时，必相关

（4）$m<n$ 时，拼矩阵，化行阶梯型矩阵，求秩 $\begin{cases} \text{ 秩 } < n \implies \text{ 线性相关 } \\\\ \text{ 秩 } \geq n \implies \text{ 线性无关 } \end{cases}$ 

<br>

#### ㊂、重要结论（判别法的补充）

$\begin{array}{l} (1) \text{ 部分相关，整体必相关 } \\\\ \text{ 若 } \alpha_1, \, \alpha_2, \, \cdots, \, \alpha_s \text{ 线性相关，则 } \alpha_1, \, \alpha_2, \, \cdots, \, \alpha_s, \alpha_{s+1} \text{ 线性相关 }  \\\\      (2) \text{ 整体无关，则部分无关 } \\\\ \text{ 若 } \alpha_1, \, \alpha_2, \, \cdots, \, \alpha_s, \, \alpha_{s+1} \text{ 线性相关，则 } \alpha_1, \, \alpha_2, \, \cdots, \, \alpha_s \text{ 线性无关 } \\\\      (3) \text{ 原来相关，缩短必无关 } \\\\      (4) \text{ 原来无关，延长必无关 } \end{array}$

<br>

## 二、线性表示问题

<br>

#### ㊀、定义

1⃣️ $\exists \;$ 一组数 $x_1, \, x_2, \, \cdots, \, x_s$，使 $x_1 \alpha_1, \, x_2 \alpha_2, \, \cdots, \, x_s \alpha_s = \beta$ 成立，称 $\beta$ 可由 $\alpha_1, \, \alpha_2, \, \cdots, \, \alpha_s$ 线性表示。$\iff$ $\begin{pmatrix} \alpha_1, \, \alpha_2, \, \cdots, \, \alpha_s \end{pmatrix} \begin{pmatrix} x_1 \\\\ \vdots \\\\ x_s \end{pmatrix} = \beta$ 有解。

2⃣️ 不 $\exists \;$ 任何一组数 $x_1, \, x_2, \, \cdots, \, x_s$，使 $x_1 \alpha_1, \, x_2 \alpha_2, \, \cdots, \, x_s \alpha_s = \beta$ 成立，称 $\beta$ 不可由 $\alpha_1, \, \alpha_2, \, \cdots, \, \alpha_s$ 线性表示。$\iff$ $\begin{pmatrix} \alpha_1, \, \alpha_2, \, \cdots, \, \alpha_s \end{pmatrix} \begin{pmatrix} x_1 \\\\ \vdots \\\\ x_s \end{pmatrix} = \beta$ 无解。

<br>

#### ㊁、重要结论

$n$ 维空间由 $n$ 个 $n$ 维线性无关向量组表示

（1） 若 $\alpha_1, \, \alpha_2, \, \cdots, \, \alpha_s$ 无关，但 $\alpha_1, \, \alpha_2, \, \cdots, \, \alpha_s, \, \beta$ 相关，则 $\beta$ 可由 $\alpha_1, \, \alpha_2, \, \cdots, \, \alpha_s$ 唯一表示。

（2）若 $\beta_1, \, \cdots, \, \beta_s$ 可由 $\alpha_1, \, \alpha_2, \, \cdots, \, \alpha_t$ 表出，且 $s > t$，则 $\beta_1, \, \cdots, \, \beta_s$ 必相关。（以少表多，多的相关）

（3）若 $\beta_1, \, \cdots, \, \beta_s$ 可由 $\alpha_1, \, \alpha_2, \, \cdots, \, \alpha_t$ 表出，且 $\beta_1, \, \cdots, \, \beta_s$ 无关，则 $s \leq t$。

<br>

## 三、极大线性无关组

<br>

#### ㊀、定义

$\alpha_{i1}, \, \alpha_{i2}, \, \cdots, \, \alpha_{ir} \; (r \leq s)$ 满足 $\begin{cases} (1) \; \text{ 取自 } \alpha_1, \, \alpha_2, \, \cdots, \, \alpha_s \\\\      (2) \; \text{ 线性无关 } \\\\      (3) \; \alpha_1, \, \alpha_2, \, \cdots, \, \alpha_s \text{ 中任一 } a_i \text{ 均可由其表示 } \end{cases}$，则 $\alpha_{i1}, \, \alpha_{i2}, \, \cdots, \, \alpha_{ir}$ 为 $\alpha_1, \, \alpha_2, \, \cdots, \, \alpha_s$ 组的**一个**（往往不唯一）极大线性无关组。

$r$ 唯一，叫 $\alpha_1, \, \alpha_2, \, \cdots, \, \alpha_s$ 向量组的秩，是向量组中独立的向量个数。

<br>

#### ㊁、求法

（1）构造 $A = \begin{pmatrix} \alpha_1, \, \alpha_2, \, \cdots, \, \alpha_s \end{pmatrix}$

（2）作初等行变换，化行阶梯型 $B = (\beta_1, \, \beta_2, \, \cdots, \, \beta_s)$，得 ${\rm r}(A) =$ 台阶数，按列找出一个秩为 ${\rm r}(A)$ 的子矩阵，即得极大线性无关组。

<br>

## 四、等价向量组

<br>

#### ㊀、定义

设 $(\, {\rm I} \,) \, \alpha_1, \, \alpha_2, \, \cdots, \, \alpha_s$，$(\, {\rm II} \,) \, \beta_1, \, \beta_2, \, \cdots, \, \beta_t$ 同维（不要求 $s=t$）。

则 $(\, {\rm I} \,) \, (\, {\rm II} \,)$ 等价 $\iff$ $(\, {\rm I} \,)$ 与 $(\, {\rm II} \,)$ 可互相线性表示。

<br>

#### ㊁、⭐重要结论

【Th】⭐$(\, {\rm I} \,) \, (\, {\rm II} \,)$ 等价 $\iff$ ${\rm r}(\, {\rm I} \,) = {\rm r}(\, {\rm II} \,) = {\rm r}(\, {\rm I} \mid {\rm II} \,)$ 

<br>

## 五、齐次 AX=0 和 非齐次 AX=β 的求解

<br>

#### ㊀、齐次线性方程组

<div class="div-message div-desc" style="padding: 0 0 25px 10px ">
    <br>
    解法见：<a href="https://waterh2p.cn/2018/08/09/maths%209%20%E6%96%B9%E7%A8%8B%E7%BB%84/#%E4%B8%80.%20%E9%BD%90%E6%AC%A1%E7%BA%BF%E6%80%A7%E6%96%B9%E7%A8%8B%E7%BB%84" target="_blank">齐次线性方程组</a>
</div>

<br>

#### ㊁、非齐次线性方程组

<div class="div-message div-desc" style="padding: 0 0 25px 10px ">
    <br>
    解法见：<a href="https://waterh2p.cn/2018/08/09/maths%209%20%E6%96%B9%E7%A8%8B%E7%BB%84/#%E4%BA%8C.%20%E9%9D%9E%E9%BD%90%E6%AC%A1%E7%BA%BF%E6%80%A7%E6%96%B9%E7%A8%8B%E7%BB%84" target="_blank">非齐次线性方程组</a>
</div>

<br>

#### ㊂、同解方程组

若两个方程 $A_{m \times n} x = 0$ 和 $B_{s \times n} x = 0$ 有完全相同的解，则称为同解方程组。

于是

$$
\begin{array}{l}
    & Ax=0, \, Bx=0 \text{ 是同解方程组 } \\\\
    \iff & \begin{cases}Ax=0 \text{ 的解满足 } Bx=0 \\\\ Bx=0 \text{ 的解满足 } Ax=0 \end{cases} \qquad & \text{ 抽象型 } \\\\
    \iff &  {\rm r}(A) = {\rm r}(B) = {\rm r} \left( \begin{bmatrix} A \\ B \end{bmatrix} \right) \qquad & \text{ 具体型 }
\end{array}
$$




















<br>

## 、练习题

<br>

#### 一、向量组的线性相关性

设向量组 $\alpha_1 = (1, \, t_1, \, \cdots, \, t_1^{n-1})^{\rm T}$，$\alpha_2 = (1, \, t_2, \, \cdots, \, t_2^{n-1})^{\rm T}$，$\cdots$，$\alpha_r = (1, \, t_r, \, \cdots, \, t_r^{n-1})^{\rm T}$，其中 $t_1, \, t_2, \, \cdots, t_r$ 是互不相同的数，且 $r \leq n$。证明 $\alpha_1, \, \alpha_2, \, \cdots, \, \alpha_r$ 线性无关。

<br>

#### 二、㊁、重要结论

设向量组 $\alpha_1, \, \alpha_2, \, \cdots, \, \alpha_s$ 线性相关，$\alpha_2, \, \cdots, \, \alpha_s, \, \alpha_{s+1}$ 线性无关，问 1️⃣ $\alpha_1$ 能否由 $\alpha_2, \, \cdots, \, \alpha_s$ 线性表出，证明你的结论；2️⃣ $\alpha_{s+1}$ 能否由 $\alpha_1, \, \alpha_2, \, \cdots, \, \alpha_s$ 线性表出，证明你的结论。

<br>

#### 四、㊁、重要结论

设向量组 $(\, {\rm I} \,) \begin{cases} \alpha_1 = \begin{bmatrix} 1 & 0 & 2 \end{bmatrix}^{\rm T} \\\\      \alpha_2 = \begin{bmatrix} 0 & 1 & 1 \end{bmatrix}^{\rm T} \\\\      \alpha_3 = \begin{bmatrix} 2 & -1 & a+4 \end{bmatrix}^{\rm T} \end{cases}$，设向量组 $(\, {\rm II} \,) \begin{cases} \beta_1 = \begin{bmatrix} 1 & 2 & 4 \end{bmatrix}^{\rm T} \\\\      \beta_2 = \begin{bmatrix} 1 & -1 & a+2 \end{bmatrix}^{\rm T} \\\\      \beta_3 = \begin{bmatrix} 3 & 3 & 10 \end{bmatrix}^{\rm T} \end{cases}$，矩阵 $A = \begin{bmatrix} & 1 & 0 & 2 & \\\\ & 0 & 1 & -1 & \\\\ & 2 & 1 & a+4 & \end{bmatrix}$，$B = \begin{bmatrix} & 1 & 1 & 3 & \\\\ & 2 & -1 & 3 & \\\\ & 4 & a+2 & 10 & \end{bmatrix}$。

问：1️⃣ $A, \, B$ 是否等价，说明理由；2️⃣ 向量组 $(\, {\rm I} \,) \alpha_1, \, \alpha_3, \, \alpha_3$ 与 $(\, {\rm II} \,) \beta_1, \, \beta_3, \, \beta_3$ 是否等价，说明理由。

<br>

#### 五、㊂、同解方程组

设 $A$ 是 $n$ 阶实矩阵，$A^{\rm T}$ 是 $A$ 的转置矩阵。证明：方程组 $(\, {\rm I} \,) Ax=0$ 和 $(\, {\rm II} \,) A^{\rm T}Ax=0$ 是同解方程组。

<br>

#### 五、㊃、综合题

<br>

###### 1、

已知线性方程组

$$
\begin{cases}
    a_{11}x_1 + a_{12}x_2 + a_{13}x_3 + a_{14}x_4 = a_{15} \\\\
    a_{21}x_1 + a_{22}x_2 + a_{23}x_3 + a_{24}x_4 = a_{25} \\\\
    a_{31}x_1 + a_{32}x_2 + a_{33}x_3 + a_{34}x_4 = a_{35} \\\\
    a_{41}x_1 + a_{42}x_2 + a_{43}x_3 + a_{44}x_4 = a_{45}
\end{cases}
$$

的通解为 $\begin{bmatrix} 2 \\ 1 \\ 0 \\ 1 \end{bmatrix} + k\begin{bmatrix} 1 \\ -1 \\ 2 \\ 0 \end{bmatrix}$。记 $\alpha_j = \begin{bmatrix} a_{1j} \\ a_{2j} \\ a_{3j} \\ a_{4j} \end{bmatrix}, \, (j=1, \, 2, \cdots, \, 5)$。问：

- 1️⃣ $\alpha_4$ 能否由 $\alpha_1, \, \alpha_2, \, \alpha_3, \, \alpha_5$ 线性表出，说明理由；

- 2️⃣ $\alpha_4$ 能否由 $\alpha_1, \, \alpha_2, \, \alpha_3$ 线性表出，说明理由。

<br>

###### 2、

设 $\alpha_i = \begin{bmatrix} a_{i1}, \, a_{i2}, \, \cdots, \, a_{in} \end{bmatrix} \; (i=1, \, 2, \, \cdots, \, m)$ 为齐次线性方程组

$$
\begin{cases}
    a_{11} x_1 + a_{12} x_2 + \cdots + a_{1n} x_n = 0 \\\\
    a_{21} x_1 + a_{22} x_2 + \cdots + a_{2n} x_n = 0 \\\\
    \cdots \cdots \\\\
    a_{m1} x_1 + a_{m2} x_2 + \cdots + a_{mn} x_n = 0 
\end{cases} \qquad ({\rm I})
$$

的行向量，已知方程组 $({\rm I})$ 有非零解 $\beta = \begin{bmatrix} b_1, \, b_2, \, \cdots, \, b_n \end{bmatrix}^{\rm T}$，且行向量组的秩 ${\rm r}(\alpha_1, \, \alpha_2, \, \cdots, \, \alpha_m) = m$。证明：向量组 $\alpha_1, \, \alpha_2, \, \cdots, \, \alpha_m, \, \beta^{\rm T}$ 线性无关。 

<br>

###### 3、

设 $4$ 阶矩阵 $A = \begin{pmatrix} \alpha_1, \, \alpha_2, \, \alpha_3, \, \alpha_4 \end{pmatrix}$，方程组 $Ax = \beta$ 的通解为 $\begin{pmatrix} 1 \\ 2 \\ 2 \\ 1 \end{pmatrix}+ c \begin{pmatrix} 1 \\ -2 \\ 4 \\ 0 \end{pmatrix}$，其中 $c$ 为任意常数。记 $B = (\alpha_3, \, \alpha_2, \, \alpha_1, \, \beta - \alpha_4)$。求方程组 $Bx = \alpha_1 - \alpha_2$ 的通解。 









<br>

## 、参考答案

<br>

#### 一、向量组的线性相关性

设存在一组数 $k_1, \, k_2, \, \cdots, \, k_r$，使 $k_1 \alpha_1 + k_2 \alpha_2 + \cdots + k_r \alpha_r = 0$ 即

$$
k_1 \begin{pmatrix} 1 \\\\ t_1 \\\\ \vdots \\\\ t_1^{n-1} \end{pmatrix} + k_2 \begin{pmatrix} 1 \\\\ t_2 \\\\ \vdots \\\\ t_2^{n-1} \end{pmatrix} + 
\cdots + 
k_r \begin{pmatrix} 1 \\\\ t_r \\\\ \vdots \\\\ t_r^{n-1} \end{pmatrix} = \begin{pmatrix} 0 \\\\ 0 \\\\ \vdots \\\\ 0 \end{pmatrix}
$$

将 $k_1, \, k_2, \, \cdots, \, k_r$ 作为主角

$\implies \begin{cases} k_1 + k_2 + \cdots + k_r = 0 \\\\      t_1 k_1 + t_2 k_2 + \cdots + t_r k_r = 0 \\\\      \cdots \cdots \\\\      t_1^{n-1} k_1 + t_2^{n-1} k_2 + \cdots + t_r^{n-1} k_r = 0 \end{cases}$ 

$1^\circ \quad$ $r=n$ 时，$\mid A \mid = \begin{vmatrix} & 1 & 1 & \cdots & 1 & \\\\      & t_1 & t_2 & \cdots & t_n & \\\\      & \vdots & \vdots & & \vdots & \\\\      & t_1^{n-1} & t_2^{n-1} & \cdots & t_n^{n-1} & \end{vmatrix} = \prod\limits_{1 \leq i < j \leq n} (t_j - t_i) \not= 0$ 

$\implies A$ 可逆，由 $AK=0 \implies A^{-1}AK = 0 \implies K = 0$，所以 $k_1 = k_2 = \cdots = k_r = 0$，从而 $\alpha_1, \, \alpha_2, \, \cdots, \, \alpha_r$ 线性无关。

$2^\circ \quad$ $r<n$ 时，取 

$$
\beta_1 = \begin{pmatrix} 1 \\\\ t_1 \\\\ \vdots \\\\ t_1^{r-1} \end{pmatrix}, \, 
\beta_2 = \begin{pmatrix} 1 \\\\ t_2 \\\\ \vdots \\\\ t_2^{r-1} \end{pmatrix}, \,
\cdots, \,
\beta_r = \begin{pmatrix} 1 \\\\ t_r \\\\ \vdots \\\\ t_r^{r-1} \end{pmatrix}
$$

由 $1^\circ$ 可知 $\beta_1, \, \beta_2, \, \cdots, \, \beta_r$ 线性无关，则 $\alpha_1, \, \alpha_2, \, \cdots, \, \alpha_r$ 线性无关。

<br>

#### 二、㊁、重要结论

1️⃣ 

$\alpha_2, \, \cdots, \, \alpha_s, \, \alpha_{s+1}$ 线性无关 $\implies$ $\alpha_2, \, \cdots, \, \alpha_s$ 线性无关

且 $\alpha_1, \, \alpha_2, \, \cdots, \, \alpha_s$ 线性相关 $\implies$ $\alpha_1$ 可以由 $\alpha_2, \, \cdots, \, \alpha_s$ （唯一）线性表出。

2️⃣ 

由 1️⃣ 设 $\alpha_1 = k_2 \alpha_2 + \cdots + k_s \alpha_s$。

假设 $\alpha_{s+1}$ 可以由 $\alpha_1, \, \alpha_2, \, \cdots, \, \alpha_s$ 线性表出，所以 $\begin{array}{l} \alpha_{s+1} &= \lambda_1 \alpha_1 + \lambda_2 \alpha_2 + \cdots + \lambda_s \alpha_s \\\\ &= (\lambda_1  k_2 + \lambda_2) \alpha_2 + \cdots + (\lambda_s k_s + \lambda_s) \alpha_s \end{array}$，所以 $\alpha_2, \, \cdots, \, \alpha_s, \, \alpha_{s+1}$ 线性相关，矛盾。

所以 $\alpha_{s+1}$ 不能由 $\alpha_1, \, \alpha_2, \, \cdots, \, \alpha_s$ 线性表出

<br>

#### 四、㊁、重要结论

1️⃣ 

$A, \, B$ 等价 $\iff$ ${\rm r}(A) = {\rm r}(B)$。

$A = \begin{bmatrix} & 1 & 0 & 2 & \\\\ & 0 & 1 & -1 & \\\\ & 2 & 1 & a+4 & \end{bmatrix} \to \begin{bmatrix} & 1 & 0 & 2 & \\\\ & 0 & 1 & -1 & \\\\ & 0 & 0 & a+1 & \end{bmatrix}$ 

$B = \begin{bmatrix} & 1 & 1 & 3 & \\\\ & 2 & -1 & 3 & \\\\ & 4 & a+2 & 10 & \end{bmatrix} \to \begin{bmatrix} & 1 & 1 & 3 & \\\\ & 0 & 1 & 1 & \\\\ & 0 & 0 & 4 & \end{bmatrix}$ 

$1^\circ \quad$ 若 $a \not= -1 \text{ 且 } a \not= 0$ 时，${\rm r}(A) = {\rm r}(B) = 3$ $\implies$ $A, \, B$ 等价。

$2^\circ \quad$ 若 $a = -1$ 时，${\rm r}(A) = 2 \not= {\rm r}(B) = 3$ $\implies$ $A, \, B$ 不等价。

$3^\circ \quad$ 若 $a = 0$ 时，${\rm r}(A) = 3 \not= {\rm r}(B) = 2$ $\implies$ $A, \, B$ 不等价。

2️⃣ 

$(\, {\rm I} \,), \, (\, {\rm II} \,)$ 等价 $\iff$ ${\rm r}(A) = {\rm r}(B) = {\rm r}(A \mid B)$。

$\begin{array}{l} (A \mid B) &= \begin{pmatrix} & 1 & 0 & 2 & 1 & 1 & 3 & \\\\ & 0 & 1 & -1 & 2 & -1 & 3 & \\\\ & 2 & 1 & a+4 & 4 & a+2 & 10 \end{pmatrix} \\\\      &\to \begin{pmatrix} & 1 & 0 & 2 & 1 & 1 & 3 & \\\\ & 0 & 1 & -1 & 2 & -1 & 3 & \\\\ & 0 & 1 & a & 2 & a & 4 \end{pmatrix} \\\\      &\to \begin{pmatrix} & 1 & 0 & 2 & 1 & 1 & 3 & \\\\ & 0 & 1 & -1 & 2 & -1 & 3 & \\\\ & 0 & 0 & a+1 & 0 & a+1 & 1 \end{pmatrix} \end{array}$ 

$1^\circ \quad$ 若 $a \not= -1 \text{ 且 } a \not= 0$ 时，${\rm r}(A) = {\rm r}(B) = {\rm r}(A \mid B) = 3$ $\implies$ $(\, {\rm I} \,), \, (\, {\rm II} \,)$ 等价。

$2^\circ \quad$ 若 $a = -1$ 时，${\rm r}(A) = 2 \not= {\rm r}(B) = 3$ $\implies$ $(\, {\rm I} \,), \, (\, {\rm II} \,)$ 不等价。

$3^\circ \quad$ 若 $a = 0$ 时，${\rm r}(A) = 3, \not= {\rm r}(B) = 2$ $\implies$ $(\, {\rm I} \,), \, (\, {\rm II} \,)$ 不等价。

<br>

#### 五、㊂、同解方程组

$1^\circ \;$ 设 $\eta$ 为 $(\, {\rm I} \,)$ 的任一解，即 $A \eta = 0 \implies A^{\rm T}A \eta = 0$，故 $\eta$ 也为 $(\, {\rm II} \,)$ 的解。

$2^\circ \;$ 设 $\gamma$ 为 $(\, {\rm II} \,)$ 的任一解，即 $A^{\rm T}A \gamma = 0$ $\implies$ $\gamma^{\rm T}A^{\rm T}A \gamma = 0$ $\implies$ $(A\gamma)^{\rm T}A\gamma = 0$ $\implies$ $\begin{Vmatrix} A\gamma \end{Vmatrix} = 0$ $\implies$ $A\gamma=0$，故 $\gamma$ 也为 $(\, {\rm I} \,)$ 的解。

- $\begin{Vmatrix} \alpha \end{Vmatrix} = 0 \iff \alpha = 0$ 

【注】
- 此题 $A_{m \times n}$ 时亦成立结论。
- $\begin{array}{l} \\ & \begin{cases} (\, {\rm I} \,) \; AX=0 \\\\ (\, {\rm II} \,) \; A^{\rm T}AX=0 \end{cases} \text{ 同解 } \implies \begin{cases} (\, {\rm I} \,) \\\\ (\, {\rm II} \,) \end{cases} \text{ 的基础解系等价 } \\\\      \implies & S_1 = S_2 \\\\      \implies & n - {\rm r}(A) = n - {\rm r}(A^{\rm T} A) \\\\      \implies & {\rm r}(A) = {\rm r}(A^{\rm T} A) \\ & \end{array}$ 
   - $\begin{array}{l} \text{ 又 } \begin{cases} {\rm r}(A^{\rm T}) = {\rm r}(AA^{\rm T}) \\\\ {\rm r}(A) = {\rm r}(A^{\rm T}) \end{cases} \\ & \end{array}$ 
   - ⭐ 故 $A_{m \times n}$，均有 ${\rm r}(A) = {\rm r}(A^{\rm T}) = {\rm r}(A^{\rm T} A) = {\rm r}(AA^{\rm T})$

<br>

#### 五、㊃、综合题

<br>

###### 1、

1️⃣ 

$\begin{array}{l} & \begin{bmatrix} 2 \\ 1 \\ 0 \\ 1 \end{bmatrix} + k\begin{bmatrix} 1 \\ -1 \\ 2 \\ 0 \end{bmatrix} = \begin{bmatrix} 2+k \\ 1-k \\ 2k \\ 1 \end{bmatrix} \\\\      \implies & (2+k) \alpha_1 + (1-k) \alpha_2 + 2k \alpha_3 + \alpha_4 = \alpha_5 \\\\ \implies & \alpha_4 = -(2+k) \alpha_1 - (1-k) \alpha_2 - 2k \alpha_3 + \alpha_5 \end{array}$

2️⃣ 

令 $A = \begin{pmatrix} \alpha_1, \, \alpha_2, \, \alpha_3, \, \alpha_4 \end{pmatrix}$ 

由题可知 $\begin{array}{l} \begin{cases} S = n - {\rm r}(A) \\\\ S=1 \\\\ n=4 \end{cases} \implies {\rm r}(A) = 3 \end{array}$ 

又 $\begin{pmatrix} 1 \\ -1 \\ 2 \\ 0 \end{pmatrix}$ 是 $AX=0$ 的解，$\alpha_1 - \alpha_2 + 2 \alpha_3 = 0 \implies {\rm r}(\alpha_1, \, \alpha_2, \, \alpha_3) < 3$ 

若 $\alpha_4$ 可以由 $\alpha_1, \, \alpha_2, \, \alpha_3$ 表示 $\implies$ ${\rm r}(\alpha_1, \, \alpha_2, \, \alpha_3, \, \alpha_4) = {\rm r}(\alpha_1, \, \alpha_2, \, \alpha_3) < 3$，矛盾。

所以 $\alpha_4$ 不可以由 $\alpha_1, \, \alpha_2, \, \alpha_3$ 表示。

<br>

###### 2、

由于 $\beta$ 是方程组的解，所以 $\alpha_i \beta = 0, \, (i=1, \, 2, \, \cdots, \, m)$。

假设存在 $k_0, \, k_1, \, k_2, \, \cdots, \, k_m$ 使得 $k_0 \beta^{\rm T} + k_1 \alpha_1 + k_2 \alpha_2 + \cdots + k_m \alpha_m = 0$，在等式两边同时乘以 $\beta$ 得 $\begin{array}{l} \\ & k_0 \beta^{\rm T} \beta + k_1 \alpha_1 \beta + k_2 \alpha_2 \beta + \cdots + k_m \alpha_m \beta = 0 \\\\      \implies & k_0 \beta^{\rm T} \beta = 0 \\\\      \implies & k_0 \begin{Vmatrix} \beta \end{Vmatrix} = 0 \\\\      \implies & k_0 = 0 \end{array}$。

所以 $k_1 \alpha_1 + k_2 \alpha_2 + \cdots + k_m \alpha_m = 0$，又由于 $\alpha_1, \, \alpha_2, \, \cdots, \, \alpha_m$ 线性无关，所以 $k_1 = k_2 = \cdots = k_m = 0$。

所以 $\alpha_1, \, \alpha_2, \, \cdots, \, \alpha_m, \, \beta^{\rm T}$ 线性无关。 