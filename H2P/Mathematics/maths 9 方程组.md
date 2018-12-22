---
title: 方程组【大题】
date: 2018-8-9
updated: 2018-10-25
tags: [maths,线代,kaoyan]
mathjax: true

description: 做笔记，喝凉茶，看线代
real-date: 2018-10-24
---

## 一、齐次线性方程组

方程组

$$
\begin{cases}
  a_{11}x_1 + a_{12}x_2 + \cdots + a_{1n}x_n = 0 \\\\
  a_{21}x_1 + a_{22}x_2 + \cdots + a_{2n}x_n = 0 \\\\
  \cdots \cdots \\\\ 
  a_{m1}x_1 + a_{m2}x_2 + \cdots + a_{mn}x_n = 0
\end{cases} \quad (Ⅰ)
$$

称为 m 个方程 n 个未知量的齐次线性方程组，其向量形式为

$$
x_1 \alpha_1 + x_2 \alpha_2 + \cdots + x_n \alpha_n = 0
$$

其中

$$
\alpha_j = 
\begin{bmatrix} 
  a_{1j} \\
  a_{2j} \\
  \vdots \\
  a_{mj}
\end{bmatrix},\quad
j=1, 2, \cdots, n
$$

其矩阵形式为

$$
Ax = 
\begin{bmatrix} 
  a_{11} & a_{12} & \cdots & a_{1n} \\
  a_{21} & a_{22} & \cdots & a_{2n} \\
  \vdots & \vdots & & \vdots \\
  a_{m1} & a_{m2} & \cdots & a_{mn} \\
\end{bmatrix}
\begin{bmatrix}
  x_1 \\ x_2 \\ \vdots \\ x_n
\end{bmatrix}
= 0
$$

<br>

#### 1、有解的条件

- 当 ${\rm r}(A) = n$ 时（$\alpha_1, \alpha_2, \cdots, \alpha_n$ 线性无关），方程组 $( {\rm I} )$ 有唯一零解。
- 当 ${\rm r}(A) = r < n$ 时（$\alpha_1, \alpha_2, \cdots, \alpha_n$ 线性相关），方程组 $( {\rm I} )$ 有非零解，且有 $n-r$ 个线性无关解。
  - 无穷多解

<br>

#### 2、解的性质

- 若 $A\xi_1 = 0, \, A\xi_2 = 0$ ，则 $A(k_1 \xi_1 + k_2 \xi_2) = 0$ ，其中 $k_1, k_2$ 是任意常数。

<br>

#### 3、⭐️基础解系和解的结构

1. 基础解系
   - 设 $\xi_1, \, \xi_2, \, \cdots, \, \xi_{n-r}$ ，
   - 1️⃣ 是方程组 $Ax = 0$ 的解；2️⃣ 线性无关； 3️⃣ 方程组 $Ax = 0$ 的任一解均可由 $\xi_1, \, \xi_2, \, \cdots, \, \xi_{n-r}$ 线性表示。
      - 基解中成员个数 ⭐️⭐️⭐️ $S = n - {\rm r}(A)$ 
   - 则称 $\xi_1, \, \xi_2, \, \cdots, \, \xi_{n-r}$ 为 $Ax = 0$ 的基础解系。
2. 通解
   - 设 $\xi_1, \, \xi_2, \, \cdots, \, \xi_{n-r}$ 为 $Ax = 0$ 的基础解系，
   - 则 $k_1 \xi_1 + k_2 \xi_2 + \cdots + k_{n-r}\xi_{n-r}$ 是方程组 $Ax = 0$ 的通解，其中 $k_1, \,  k_2, \, \cdots, \, k_{n-r}$ 是任意常数。
3. $n$ 维空间由 $n$ 个 $n$ 维线性无关向量张成。

<br>

#### 4、求解方法

- 1️⃣ 将系数矩阵 A 作初等行变换化成行阶梯型矩阵 B （或行最简阶梯型矩阵），初等行变换将方程组化为同解方程组，故 $Ax = 0$ 和 $Bx = 0$ 同解，只需解 $Bx = 0$ 即可。
   - 设 ${\rm r}(A) = r$，$A \underrightarrow{ \text{ 初等行变换 } } B = \begin{bmatrix} c_{11} & c_{12} & \cdots & c_{1r} & \cdots & c_{1n} \\ 0 & c_{22} & \cdots & c_{2r} & \cdots & c_{2n} \\ \vdots & \vdots & & \vdots & & \vdots \\ 0 & 0 & \cdots & c_{rr} & \cdots & c_{rn} \\ 0 & 0 & \cdots & 0 & \cdots & 0 \\ \vdots & \vdots & & \vdots & & \vdots \\ 0 & 0 & \cdots & 0 & \cdots & 0 \\ \end{bmatrix}_{m \times n}$ ，其中，$m$ 是原方程组中方程个数，$n$ 是未知量个数。
- 2️⃣ 按列找出一个秩为 ${\rm r}(A)$ 的子矩阵，则剩余位置的元素即为自由变量。
-  3️⃣ 按照基础解系的定义写出通解。

<br>

#### 5、 例题

1. 求齐次线性方程组 $\begin{cases} x_1 + x_2 - 3x_4 - x_5 = 0 \\\\ x_1 - x_2 + 2x_3 - x_4 = 0 \\\\ 4x_1 - 2x_2 + 6x_3 + 3x_4 - 4x_5 = 0 \\\\ 2x_1 + 4x_2 - 2x_3 + 4x_4 - 7x_5 = 0 \end{cases}$ 的通解。
  - 1️⃣ $A \to \begin{pmatrix} 1 & 1 & 0 & -3 & -1 \\ 0 & -2 & 2 & 2 & 1 \\ 0 & 0 & 0 & 3 & -1 \\ 0 & 0 & 0 & 0 & 0 \end{pmatrix} \quad {\rm r}(A) = 3$ 
  - 2️⃣ 每个台阶上任取一列 
    - 取系数 $1, \, 2, \, 5$ 列，则 $x_3, \, x_4$ 可作为自由变量
  - 3️⃣ 基础解系【倒用】
    1. $S = n - {\rm r}(A) = 2$ ，所以解 $\begin{cases} \xi_1 = \begin{pmatrix} \ast & \ast & \ast & \ast & \ast \end{pmatrix}^{\rm T} \\\\ \xi_2 = \begin{pmatrix} \ast & \ast & \ast & \ast & \ast \end{pmatrix}^{\rm T} \end{cases}$ 。
    2. 线性无关
       - $\begin{cases} \xi_1 = \begin{pmatrix} \ast & \ast & 1 & 0 & \ast \end{pmatrix}^{\rm T} \\\\ \xi_2 = \begin{pmatrix} \ast & \ast & 0 & 1 & \ast \end{pmatrix}^{\rm T} \end{cases}$ 
       - 在自由变量区域赋值后拼接出的行列式 $\not= 0$ ，上式即 $\begin{vmatrix} 1 & 0 \\ 0 & 1 \end{vmatrix} \not= 0$ 。
    3. 试解
       - 由于系数和解【内积为 0】
         - $\xi_1, \xi_2$ 与系数矩阵第三行内积为 0
           - $\implies  \begin{cases} \xi_1 = ( \ast & \ast & 1 & 0 & 0 )^{\rm T} \\\\ \xi_2 = ( \ast & \ast & 0 & 1 & 3 )^{\rm T} \end{cases}$ 
         - $\xi_1, \xi_2$ 与系数矩阵第二、一行内积为 0
           - $\implies  \begin{cases} \xi_1 = ( -1 & 1 & 1 & 0 & 0 )^{\rm T} \\\\ \xi_2 = ( \frac{7}{2} & \frac{5}{2} & 0 & 1 & 3 )^{\rm T} \end{cases}$ 
    4. 通解为 $k_1 \xi_1 + k_2 \xi_2$ 
       - $\begin{pmatrix} x_1 \\ x_2 \\ x_3 \\ x_4 \\ x_5 \end{pmatrix} = k \begin{pmatrix} -1 \\ 1 \\ 1\\ 0 \\ 0 \end{pmatrix} + k_2 \begin{pmatrix} \frac{7}{2} \\ \frac{5}{2} \\ 0 \\ 1 \\ 3 \end{pmatrix}, \quad \forall \, k_1, k_2 \in {\rm R}​$ 。

<br>

## 二、非齐次线性方程组

方程组

$$
\begin{cases}
  a_{11}x_1 + a_{12}x_2 + \cdots + a_{1n}x_n = b_1 \\\\
  a_{21}x_1 + a_{22}x_2 + \cdots + a_{2n}x_n = b_2 \\\\
  \cdots \cdots \\\\ 
  a_{m1}x_1 + a_{m2}x_2 + \cdots + a_{mn}x_n = b_m
\end{cases} \quad (Ⅱ)
$$

称为 $m$ 个方程 $n$ 个未知量的齐次线性方程组，其向量形式为

$$
x_1 \alpha_1 + x_2 \alpha_2 + \cdots + x_n \alpha_n = b
$$

其中

$$
\alpha_j = 
\begin{bmatrix} 
  a_{1j} \\
  a_{2j} \\
  \vdots \\
  a_{mj}
\end{bmatrix},\,
(j=1, 2, \cdots, n,) \qquad
b = 
\begin{bmatrix} 
  b_i \\
  b_2 \\
  \vdots \\
  b_m
\end{bmatrix}( \text{自由项矩阵} )
$$

其矩阵形式为

$$
Ax = 
\begin{bmatrix} 
  a_{11} & a_{12} & \cdots & a_{1n} \\
  a_{21} & a_{22} & \cdots & a_{2n} \\
  \vdots & \vdots & & \vdots \\
  a_{m1} & a_{m2} & \cdots & a_{mn} \\
\end{bmatrix}
\begin{bmatrix}
  x_1 \\ x_2 \\ \vdots \\ x_n
\end{bmatrix}
= b
$$

矩阵 $\begin{bmatrix} A \mid b \end{bmatrix}$ 或 $\begin{bmatrix} A, b \end{bmatrix}​$  称为矩阵 A 的增广矩阵。

<br>

#### 1、有解的条件
- 若 ${\rm r}(A) \not= {\rm r}( \begin{bmatrix} A, b \end{bmatrix} )$ （ $B$ 不能由 $\alpha_1, \alpha_2, \cdots, \alpha_n$ 线性表示），则方程 (Ⅱ) 无解。
- 若 ${\rm r}(A) = {\rm r}( \begin{bmatrix} A, b \end{bmatrix} ) = n$ （即 $\alpha_1, \alpha_2, \cdots, \alpha_n$ 线性无关，$\alpha_1, \alpha_2, \cdots, \alpha_n, B$ 线性相关），则方程 (Ⅱ) 有唯一解。
- 若 ${\rm r}(A) = {\rm r}( \begin{bmatrix} A, b \end{bmatrix} ) = r < n$ ，则方程 (Ⅱ) 有无穷多解。

<br>

#### 2、解的性质
- 设 $\eta_1, \eta_2, \eta$ 是非齐次线性方程组 $Ax = B$ 的解，$\xi$ 是齐次线性方程组 $Ax = 0$ 的解，则 1️⃣ $\eta_1 - \eta_2$ 是 $Ax = 0$ 的解； 2️⃣ $k \xi + \eta$ 是 $Ax = B$ 的解。

<br>

#### 3、⭐️ 求解方法和通解结构

将增广矩阵作初等行变换化成行阶梯形矩阵（或行最简阶梯型矩阵），求出对应齐次线性方程组的通解加上一个非齐次线性方程组的特解即是非齐次线性方程组的通解。

<br>

#### 4、例题

1. 求解非齐次线性方程组 $\begin{cases} x_1 + 5x_2 - x_3 - x_4 = -1 \\\\ x_1 - 2x_2 + x_3 + 3x_4 = 3 \\\\ 3x_1 + 8 x_2 - x_3 + x_4 = 1 \\\\ x_1 - 9x_2 + 3x_3 + 7x_4 = 7 \end{cases}$ ，并用对应的齐次方程组的基础解系表示通解。
  - $\begin{pmatrix} A \mid b \end{pmatrix} = \begin{pmatrix} 1 & 5 & -1 & -1 & \mid & -1 \\ 1 & -2 & 1 & 3 & \mid & 3 \\ 3 & 8 & -1 & 1 & \mid & 1 \\ 1 & -9 & 3 & 7 & \mid & 7 \end{pmatrix} \to \begin{pmatrix} 1 & 5 & -1 & -1 & \mid & -1 \\ 0 & -7 & 2 & 4 & \mid & 4 \\ 0 & 0 & 0 & 0 & \mid & 0 \\ 0 & 0 & 0 & 0 & \mid & 0 \end{pmatrix}$ 
    - ${\rm r}(A \mid b) = {\rm r}(A) = 2 < 4$ 
    - $S = n - {\rm r}(A) = 4-2 = 2 \implies \begin{cases} \xi_1 = ( -3 & 2 & 7 & 0 )^{\rm T} \\\\ \xi_2 = ( -13 & 4 & 0 & 7 )^{\rm T} \end{cases}$ 
      - 取 $1, 2$ 列，则 $x_3, \, x_4$ 为自由变量
    - $\begin{array}{l} \xi^{\ast} = ( \frac{13}{7} & -\frac{4}{7} & 0 & 0 ) \end{array}$ 
      - $A\xi^{\ast} = B$ 
  - 通解为 $k_1 \xi_1 + k_2 \xi_2 + \xi^{\ast} \quad ( \forall \, k_1, k_2 \in {\rm R})​$ 
2. 求线性方程组 $\begin{cases} x_1 - 5x_2 + 2x_3 + 3x_4 = 11 \\\\ -3x_1 + x_2 - 4x_3 - 2x_4 = -6 \\\\ -x_1 - 9x_2 + 3x_4 = 15 \end{cases}$ 满足条件 $X_1 = x_2$ 的全部解。
   - 解 1️⃣
     - $(A \mid b) = \begin{pmatrix} 1 & -5 & 2 & 3 & \mid & 11 \\ -3 & 1 & -4 & -2 & \mid & -6 \\ -1 & -9 & 0 & 3 & \mid & 15 \end{pmatrix} \to \begin{pmatrix} 1 & -5 & 2 & 3 & \mid & 11 \\ 0 & -14 & 2 & 7 & \mid & 27 \\ 0 & 0 & 0 & 1 & \mid & 1 \end{pmatrix}$ 
     - $S = n - {\rm r}(A) = 4-3 = 1 \implies \begin{array}{l} \xi = ( -9 & 1 & 7 & 0 )^{\rm T} \end{array}$ 
       - 取 $1, 2, 4$ 列，则 $x_3$ 为自由变量
     - $\begin{array}{l} \xi^{\ast} = ( \frac{6}{7} & -\frac{10}{7} & 0 & 1 )^{\rm T} \end{array}$ 
     - 通解为 $k\xi + \xi^{\ast} = \begin{pmatrix} -9k + \frac{6}{7} \\ k - \frac{10}{7} \\ 7k \\ 1 \end{pmatrix} = \begin{pmatrix} x_1 \\ x_2 \\ x_3 \\ x_4 \end{pmatrix}$ 
     - 当 $X_1 = x_2$ 时，$k = \dfrac{8}{35} \implies \begin{pmatrix} x_1 \\ x_2 \\ x_3 \\ x_4 \end{pmatrix} = \begin{pmatrix} -\frac{6}{5} \\ -\frac{6}{5} \\ \frac{8}{5} \\ 1 \end{pmatrix}$ 
   - 解 2️⃣
     - 讨论方程组 $\begin{cases} x_1 - 5x_2 + 2x_3 + 3x_4 = 11 \\\\ -3x_1 + x_2 - 4x_3 - 2x_4 = -6 \\\\ -x_1 - 9x_2 + 3x_4 = 15 \\\\ x_1 = x_2 \end{cases} \implies \begin{cases} -4x_2 + 2x_3 + 3x_4 = 11 \\\\ -2x_2 - 4x_3 - 2x_4 = -6 \\\\ -10x_2 + 3x_4 = 15 \end{cases}$ 
     - $  (A \mid b) = \begin{pmatrix} -4 & 2 & 3 & \mid & 11 \\ -2 & -4 & -2 & \mid & -6 \\ -10 & 0 & 3 & \mid & 15 \end{pmatrix} \to \begin{pmatrix} 1 & 2 & 1 & \mid & 3 \\ 0 & 10 & 7 & \mid & 23 \\ 0 & 0 & 1 & \mid & 1 \end{pmatrix}$ 
     - 由于 ${\rm r}(A) = {\rm r}(A \mid b) = 3 = n$ ，所以方程组有唯一解。
     - 解得 $\begin{pmatrix} x_1 \\ x_2 \\ x_3 \\ x_4 \end{pmatrix} = \begin{pmatrix} -\frac{6}{5} \\ -\frac{6}{5} \\ \frac{8}{5} \\ 1 \end{pmatrix}$ 。

<br>

## 三、例题

<br>

#### 1

已知 $a$ 是常数，且矩阵 $A = \begin{pmatrix} 1 & 2 & a \\ 1 & 3 & 0 \\ 2 & 7 & -a \end{pmatrix}$ 可经初等列变换化为 $B = \begin{pmatrix} 1 & a & 2 \\ 0 & 1 & 1 \\ -1 & 1 & 1 \end{pmatrix}$ 。1️⃣ 求常数 a；2️⃣ 求满足 $AP = B$ 的所有可逆矩阵 $P$ 。
- 分析
   - 初等行（列）变换**不改变**矩阵的秩（台阶数）
- 1️⃣
   - $A = \begin{pmatrix} 1 & 2 & a \\ 1 & 3 & 0 \\ 2 & 7 & -a \end{pmatrix} \underrightarrow{ 初等行变换 } \begin{pmatrix} 1 & 2 & a \\ 0 & 1 & -a \\ 0 & 0 & 0 \end{pmatrix}$ 
   - $B = \begin{pmatrix} 1 & a & 2 \\ 0 & 1 & 1 \\ -1 & 1 & 1 \end{pmatrix} \underrightarrow{ 初等行变换 } \begin{pmatrix} 1 & a & 2 \\ 0 & 1 & 1 \\ 0 & 0 & 2-a \end{pmatrix}$ 
   - 由于 ${\rm r}(B) = {\rm r}(A) = 2$ ，所以 $a = 2$ 。
- 2️⃣
   - $\begin{pmatrix} 1 & 2 & 2 \\ 1 & 3 & 0 \\ 2 & 7 & -2 \end{pmatrix} \begin{pmatrix} \cdot & \cdot & \cdot \\ \cdot & \cdot & \cdot \\ \cdot & \cdot & \cdot \end{pmatrix} = \begin{pmatrix} 1 & 2 & 2 \\ 0 & 1 & 1 \\ -1 & 1 & 1 \end{pmatrix}$ 
      - 所以 $P$ 是 $3 \times 3$ 的矩阵
      - 设 $P$ 的第一列为 $X_1$ ，第二列为 $X_2$ ，第三列为 $X_3$ 。
      - 设 $B$ 的第一列为 $\beta_1 $ ，第二列为 $\beta_2$ ，第三列为 $\beta_3$ 。
      - 所以 $AX_1 = \beta_1,  AX_2 = \beta_2,  AX_3 = \beta_3$ 
         - 三个非齐次线性方程组
   - 故 $(A \mid B) = \begin{pmatrix} 1 & 2 & 2 & \mid & 1 & 2 & 2 \\ 1 & 3 & 0 & \mid & 0 & 1 & 1 \\ 2 & 7 & -2 & \mid & -1 & 1 & 1 \end{pmatrix} \to \begin{pmatrix} 1 & 2 & 2 & \mid & 1 & 2 & 2 \\ 0 & 1 & -2 & \mid & -1 & -1 & -1 \\ 0 & 0 & 0 & \mid & 0 & 0 & 0 \end{pmatrix}$ 
   - $S = 3 - {\rm r}(A) = 1 \implies \begin{array}{l} \xi = ( -6 & 2 & 1 )^{\rm T} \end{array}$ 
      - 基础解系一个成员
      - 取 $1, 2$ 列，$X_3$ 为自由变量
   - $\begin{array}{l} \eta_1 = ( 3 & -1 & 0 )^{\rm T}, \quad \eta_2 = \eta_3 = ( 4 & -1 & 0 )^{\rm T} \end{array}$ 
      - 特解：自由变量赋值为 0
   - 故 $AX = B$ ，$\begin{array}{l} A(X_1, X_2, X_3) = (\beta_1, \beta_2, \beta_3) \end{array}$ 
   - $\begin{array}{l} & \\X &=  (X_1, X_2, X_3) \\\\ &= (k_1 \xi + \eta_1, k_2 \xi + \eta_2, k_3 \xi + \eta_3) \\\\ &= \begin{pmatrix}3 - 6k_1 & 4 - 6k_2 & 4 - 6k_3 \\ -1 + 2k_1 & -1 + 2k_2 & -1 + 2k_3 \\ k_1 & k_2 & k_3 \end{pmatrix} \\ & \end{array}$ 
   - $\begin{array}{l} & \\ |X| &= \begin{vmatrix} 3 - 6k_1 & 4 - 6k_2 & 4 - 6k_3 \\\\ -1 + 2k_1 & -1 + 2k_2 & -1 + 2k_3 \\ k_1 & k_2 & k_3 \end{vmatrix} \\\\ &= \begin{vmatrix} 1 & 0 & 0 \\ 0 & 1 & 1 \\ k_1 & k_2 & k_3 \end{vmatrix} \\\\ &= k_3 - k_2 \not= 0 \\ & \end{array}​$ 
   - 故 $P = \begin{pmatrix}3 - 6k_1 & 4 - 6k_2 & 4 - 6k_3 \\ -1 + 2k_1 & -1 + 2k_2 & -1 + 2k_3 \\ k_1 & k_2 & k_3 \end{pmatrix}, \forall \, k_1, k_2, k_3, \text{ 且 } k_2 \not= k_3$ 








