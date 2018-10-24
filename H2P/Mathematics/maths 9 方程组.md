---
title: 方程组【大题】
date: 2018-10-24
updated: 2018-10-24
tags: [maths,线代,kaoyan]
mathjax: true

description: 做笔记，喝凉茶，看线代
---

## 一、齐次线性方程组的求解
方程组
$$
\begin{cases}
  a_{11}x_1 + a_{12}x_2 + \cdots + a_{1n}x_n = 0 \\[1em]
  a_{21}x_1 + a_{22}x_2 + \cdots + a_{2n}x_n = 0 \\[1em]
  \cdots \cdots \\[1em] 
  a_{m1}x_1 + a_{m2}x_2 + \cdots + a_{mn}x_n = 0 \\[1em]
\end{cases} \quad ( {\rm I} )
$$

称为 m 个方程 n 个未知量的齐次线性方程组，其向量形式为
$$
x_1 \alpha_1 + x_2 \alpha_2 + \cdots + x_n \alpha_n = 0
$$

其中
$$
\alpha_j = 
\begin{bmatrix} 
  a_{ij} \\
  a_{2j} \\
  \vdots \\
  a_{mj}
\end{bmatrix},\quad
j=1, 2, \cdots, n
$$

其矩阵形式为
$$
A_{m \times n} x = 
\begin{bmatrix} 
  a_{11} & a_{12} & \cdots & a_{1n} \\
  a_{21} & a_{22} & \cdots & a_{2n} \\
  \vdots & \vdots & & \vdots \\
  a_{m1} & a_{m2} & \cdots & a_{mn} \\
\end{bmatrix}_{m \times n} 
\begin{bmatrix}
  x_1 \\ x_2 \\ \vdots \\ x_n
\end{bmatrix}_{n \times 1}
= 0
$$

<br>

#### 1、有解的条件
- 当 $ {\rm r}(A) = n $ 时（$ \alpha_1, \alpha_2, \cdots, \alpha_n $ 线性无关），方程组 $ ( {\rm I} ) $ 有唯一零解。
- 当 $ {\rm r}(A) = r < n $ 时（$ \alpha_1, \alpha_2, \cdots, \alpha_n $ 线性相关），方程组 $ ( {\rm I} ) $ 有非零解，且有 $ n-r $ 个线性无关解。
  - 无穷多解


<br>
#### 2、解的性质
- 若 $ A\xi_1 = 0, A\xi_2 = 0 $ ，则 $ A(k_1 \xi_1 + k_2 \xi_2) = 0 $ ，其中 $ k_1, k_2 $ 是任意常数。


<br>
#### 3、:star: **基础解系**和解的结构
1. 基础解系
  - 设 $ \xi_1, \xi_2, \cdots, \xi_{n-r} $ ，
  - :one: 是方程组 $ Ax = 0 $ 的解；:two: 线性无关； :three: 方程组 $ Ax = 0 $ 的任一解均可由 $ \xi_1, \xi_2, \cdots, \xi_{n-r} $ 线性表示。【基解中成员个数 $ S = n - {\rm r}(A) $】
  - 则称 $ \xi_1, \xi_2, \cdots, \xi_{n-r} $ 为 $ Ax = 0 $ 的基础解系。
2. 通解
  - 设 $ \xi_1, \xi_2, \cdots, \xi_{n-r} $ 为 $ Ax = 0 $ 的基础解系，
  - 则 $ k_1 \xi_1 + k_2 \xi_2 + \cdots + k_{n-r}\xi_{n-r} $ 是方程组 $ Ax = 0 $ 的通解，其中 $ k_1,  k_2, \cdots, k_{n-r} $ 是任意常数。
3. $ n $ 维空间由 $ n $ 个 $ n $ 维线性无关向量张成。


<br>
#### 4、求解方法
- :one: 将系数矩阵 $ A $ 作初等行变换化成行阶梯型矩阵 $ B $ （或行最简阶梯型矩阵），初等行变换将方程组化为同解方程组，故 $ Ax = 0 $ 和 $ Bx = 0 $ 同解，只需解 $ Bx = 0 $ 即可。设 ${\rm r}(A) = r $ ，$ A \underrightarrow{ \text{ 初等行变换 } } B = \begin{bmatrix} c_{11} & c_{12} & \cdots & c_{1r} & \cdots & c_{1n} \\ 0 & c_{22} & \cdots & c_{2r} & \cdots & c_{2n} \\ \vdots & \vdots & & \vdots & & \vdots \\ 0 & 0 & \cdots & c_{rr} & \cdots & c_{rn} \\ 0 & 0 & \cdots & 0 & \cdots & 0 \\ \vdots & \vdots & & \vdots & & \vdots \\ 0 & 0 & \cdots & 0 & \cdots & 0 \\ \end{bmatrix}_{m \times n} $ ，其中，$ m $ 是原方程组中方程个数，$ n $ 是未知量个数。
- :two: 按列找出一个秩为 $ {\rm r}(A) $ 的子矩阵，则剩余位置的元素即为自由变量。
- :three: 按照基础解系的定义写出通解。


<br>
#### 5、 例题
1. 求齐次线性方程组 $ \begin{cases} x_1 + x_2 - 3x_4 - x_5 = 0 \\[1em] x_1 - x_2 + 2x_3 - x_4 = 0 \\[1em] 4x_1 - 2x_2 + 6x_3 + 3x_4 - 4x_5 = 0 \\[1em] 2x_1 + 4x_2 - 2x_3 + 4x_4 - 7x_5 = 0 \end{cases} $ 的通解。
  - :one: $ A \to \begin{pmatrix} 1 & 1 & 0 & -3 & -1 \\ 0 & -2 & 2 & 2 & 1 \\ 0 & 0 & 0 & 3 & -1 \\ 0 & 0 & 0 & 0 & 0 \end{pmatrix} \quad {\rm r}(A) = 3 $ 
  - :two: 每个台阶上任取一列 
    - 取系数 $ 1, 2, 5 $ 列，则 $ x_3, x_4 $ 可作为自由变量
  - :three: 基础解系【倒用】
    1. $ S = n - {\rm r}(A) = 2 $ ，所以解 $ \begin{cases} \xi_1 = ( \_ & \_ & \_ & \_ & \_ )^{\rm T} \\[1em] \xi_2 = ( \_ & \_ & \_ & \_ & \_ )^{\rm T} \end{cases} $ 。
    2. 线性无关
       - $ \begin{cases} \xi_1 = ( \_ & \_ & 1 & 0 & \_ )^{\rm T} \\[1em] \xi_2 = ( \_ & \_ & 0 & 1 & \_ )^{\rm T} \end{cases} ​$ 
       - 在自由变量区域赋值后拼接出的行列式 $ \not= 0 $ ，上式即 $ \begin{vmatrix} 1 & 0 \\ 0 & 1 \end{vmatrix} \not= 0 $ 。
    3. 试解
       - 由于系数和解【内积为 0】
         - $ \xi_1, \xi_2 $ 与系数矩阵第三行内积为 0
           - $ \implies  \begin{cases} \xi_1 = ( \_ & \_ & 1 & 0 & 0 )^{\rm T} \\[1em] \xi_2 = ( \_ & \_ & 0 & 1 & 3 )^{\rm T} \end{cases} $ 
         - $ \xi_1, \xi_2 $ 与系数矩阵第二、一行内积为 0
           - $ \implies  \begin{cases} \xi_1 = ( -1 & 1 & 1 & 0 & 0 )^{\rm T} \\[1em] \xi_2 = ( \frac{7}{2} & \frac{5}{2} & 0 & 1 & 3 )^{\rm T} \end{cases} $ 
    4. 通解为 $ k_1 \xi_1 + k_2 \xi_2 $ 
       - $ \begin{pmatrix} x_1 \\ x_2 \\ x_3 \\ x_4 \\ x_5 \end{pmatrix} = k \begin{pmatrix} -1 \\ 1 \\ 1\\ 0 \\ 0 \end{pmatrix} + k_2 \begin{pmatrix} \frac{7}{2} \\ \frac{5}{2} \\ 0 \\ 1 \\ 3 \end{pmatrix}, \quad \forall \text{ } k_1, k_2 $ 。





