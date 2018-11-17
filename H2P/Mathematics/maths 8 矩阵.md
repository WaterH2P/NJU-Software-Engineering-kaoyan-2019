---
title: 矩阵
date: 2018-8-8
updated: 2018-10-22
tags: [maths,线代,kaoyan]
mathjax: true

description: 做笔记，喝凉茶，看线代
real-date: 2018-10-22
---

## 一、概念


<br>
#### 1、矩阵的定义
- 由 $ m \times n $ 个数，排成 $ m $ 行 $ n $ 列的矩形表格 
$$
\begin{bmatrix} 
  a_{11} & a_{12} & \cdots & a_{1n} \\ 
  a_{21} & a_{22} & \cdots & a_{2n} \\ 
  \vdots & \vdots & & \vdots \\ 
  a_{m1} & a_{m2} & \cdots & a_{mn} 
\end{bmatrix} 
\text{ 或 } 
\begin{pmatrix} 
  a_{11} & a_{12} & \cdots & a_{1n} \\ 
  a_{21} & a_{22} & \cdots & a_{2n} \\ 
  \vdots & \vdots & & \vdots \\ 
  a_{m1} & a_{m2} & \cdots & a_{mn} 
\end{pmatrix} 
$$
称为一个 $ m \times n $ 矩阵，简记为 $ A $ 或 $ ( a_{ij} )_{m \times n} (i=1, 2, \cdots, m; j=1, 2, \cdots, n) $ ，当 $ m = n $ 时，称为 $ n $ 阶方阵（矩阵）。
- 两个矩阵 $ A = ( a_{ij} )_{m \times n}, B = ( b_{ij} )_{s \times k} $ ，若 $ m = s, n = k $ ，则称 $ A $ 与 $ B $ 为同型矩阵。


<br>
#### 2、矩阵的基本运算

1. 相等
  - $ A, B $ 是同型矩阵，且对应元素相等。
2. 加法
  - 两个矩阵是同型矩阵时，可以相加，即 $ C = A + B = ( a_{ij} )_{m \times n} + ( b_{ij} )_{m \times n} = ( c_{ij} )_{m \times n} $ ，其中 $ c_{ij} = a_{ij} + b_{ij} (i=1, 2, \cdots, m; j=1, 2, \cdots, n) $ ，即对应元素相加。
3. 数乘矩阵
  - 设 $ k $ 是一个数，$ A $ 是一个 $ m \times n $ 矩阵，数 $ k $ 和 $ A $ 的乘积称为数乘矩阵，即 $ kA = Ak = k \begin{bmatrix}  a_{11} & a_{12} & \cdots & a_{1n} \\  a_{21} & a_{22} & \cdots & a_{2n} \\  \vdots & \vdots & & \vdots \\  a_{m1} & a_{m2} & \cdots & a_{mn} \end{bmatrix} = \begin{bmatrix}  ka_{11} & ka_{12} & \cdots & ka_{1n} \\  ka_{21} & ka_{22} & \cdots & ka_{2n} \\  \vdots & \vdots & & \vdots \\  ka_{m1} & ka_{m2} & \cdots & ka_{mn} \end{bmatrix} $ ，即 $ A $ 的每个元素都乘以 $ k $ 。
  - $ | kA_{n \times n} | = k^n |A| $ 
4. ⭐️矩阵的乘法
  - 设 $ A $ 是 $ m \times s $ 矩阵， $ B $ 是 $ s \times n $ 矩阵（矩阵 $ A $ 的列数必须与矩阵 $ B $ 的行数相等），则 $ A, B $ 可乘，乘积 $ AB $ 是 $ m \times n $ 矩阵，记 $ C = AB = ( c_{ij} )_{m \times n} $ ，$ C $ 的第 $ i $ 行第 $ j $ 列元素 $ c_{ij} $ 是 $ A $ 的第 $ i $ 行的 $ s $ 个元素与 $ B $ 的第 $ j $ 列的 $ s $ 个对应元素两两相乘之和，即 $ c_{ij} = \sum\limits_{k = 1}^s a_{ik}b_{kj} = a_{i1}b_{1j} + a_{i2}b_{2j} + \cdots + a_{is}b_{sj} \quad (i=1, 2, \cdots, m; j=1, 2, \cdots, n) $ 。
  - 向量内积
    - 记 $ \alpha = \begin{pmatrix} a_1 & a_2 & \cdots & a_n \end{pmatrix}, \beta = \begin{pmatrix} b_1 & b_2 & \cdots & b_n \end{pmatrix} $ 
      - 称 $ (\alpha, \beta) = a_1b_1 + a_2b_2 + \cdots + a_nb_n $ 叫 $ \alpha, \beta $ 的内积。
  - 特别地
    - $ \begin{pmatrix} a_1 & a_2 & \cdots & a_n \end{pmatrix}_{1 \times n} \begin{pmatrix} b_1 \\ b_2 \\ \vdots \\ b_n \end{pmatrix}_{n \times 1} = \left( \sum\limits_{i = 1}^n a_ib_i \right)_{1 \times 1} $ 
    - ⭐️ $ \underleftarrow{ \begin{pmatrix} b_1 \\ b_2 \\ \vdots \\ b_n \end{pmatrix} \begin{pmatrix} a_1 & a_2 & \cdots & a_n \end{pmatrix}_{1 \times n} = \begin{pmatrix} a_1b_1 & a_2b_1 & \cdots & a_nb_1 \\ a_1b_2 & a_2b_2 & \cdots & a_nb_2 \\ \vdots & \vdots & & \vdots \\ a_1b_n & a_2b_n & \cdots & a_nb_n \end{pmatrix}_{n \times n} } $ 
      - 逆向思维很重要
  - 【注】
    - 矩阵的乘法一般情况下不满足交换律，即 $ AB \not= BA $ 。
    - 例如 $ A = \begin{bmatrix} 1& 1 \\ -1 & -1 \end{bmatrix}, B = \begin{bmatrix} 1 & -1 \\ -1 & 1 \end{bmatrix} $ 
      - $ AB = \begin{bmatrix} 1& 1 \\ -1 & -1 \end{bmatrix} \begin{bmatrix} 1 & -1 \\ -1 & 1 \end{bmatrix} = \begin{bmatrix} 0 & 0 \\ 0 & 0 \end{bmatrix} $ 
      - $ BA = \begin{bmatrix} 1 & -1 \\ -1 & 1 \end{bmatrix} \begin{bmatrix} 1& 1 \\ -1 & -1 \end{bmatrix} = \begin{bmatrix} 2 & 2 \\ -2 & -2 \end{bmatrix} $ 


<br>
#### 3、例题
1. 设 $ A = \begin{bmatrix} 1 & -1 & -1 & -1 \\ -1 & 1 & -1 & -1 \\ -1 & -1 & 1 & -1 \\ -1 & -1 & -1 & 1 \end{bmatrix} $ ，计算 $ A^n $ 。【归纳法】
  - $ \begin{array}{l} A^2 &= AA \\\\ &= \begin{pmatrix} 1 & -1 & -1 & -1 \\ -1 & 1 & -1 & -1 \\ -1 & -1 & 1 & -1 \\ -1 & -1 & -1 & 1 \end{pmatrix} \begin{pmatrix} 1 & -1 & -1 & -1 \\ -1 & 1 & -1 & -1 \\ -1 & -1 & 1 & -1 \\ -1 & -1 & -1 & 1 \end{pmatrix} \\\\ &= \begin{pmatrix} 4 & 0 & 0 & 0 \\ 0 & 4 & 0 & 0 \\ 0 & 0 & 4 & 0 \\ 0 & 0 & 0 & 4 \end{pmatrix} = 4E \end{array} $ 
   - $ A^n = \begin{cases} 4^k \cdot E \quad & n = 2k \\\\ 4^k \cdot A \quad & n = 2k + 1 \end{cases} $
2. 设 $ A = \begin{bmatrix} 1 & 2 & -1 \\ -2 & -4 & 2 \\ 3 & 6 & -3 \end{bmatrix} $ ，则 $ A^n $ \_\_\_\_\_\_\_\_ 。【秩为 1 】
  - 当矩阵每一行之间【成比例关系】时
    - $ A = \begin{pmatrix} 1 \\ -2 \\ 3 \end{pmatrix} \begin{pmatrix} 1 & 2 & -1 \end{pmatrix} $ 
  - 记 $ \alpha = \begin{pmatrix} 1 \\ -2 \\ 3 \end{pmatrix}, \beta = \begin{pmatrix} 1 \\ 2 \\ -1 \end{pmatrix} $ 
    - 代数中，习惯上写【列向量】
    - $ A = \alpha \beta^T $ 
  - $ A^2 = A \cdot A = \alpha \beta^T \alpha \beta^T = \alpha \left( \beta^T \alpha \right) \beta^T = \alpha \left( -6 \right) \beta^T = -6A $ 
  - $ A^n = (-6)^{n-1} \cdot A $
  - 【注】
    - 称 $ \sum\limits_{i=1}^n a_{ii} = {\rm tr} (A) $ ，叫 $ A $ 的迹（trace）。
    - 若 $ {\rm r}( A_{n \times n} ) = 1 $ （秩为 $ 1 $ ），即 $ n $ 行元素均称比例。
      - 则 $ A^n = \left[ {\rm tr}(A) \right]^{n-1} \cdot A $ 
3. 已知 $ A = \begin{bmatrix} 1 & 1 & 0 \\ 0 & 1 & 1 \\ 0 & 0 & 1 \end{bmatrix} $ ，求 $ A^n $ 。【拆项法】
  - 令 $ A = B + C $ ，其中 $ C = E $ 最好，$ A^n = (B+E)^n $ 
    - 由于 $ BE = EB $ ，所以 $ A^n = C_n^0 E^n B^0 + C_n^1E^{n-1}B1 + \cdots + C_n^nE^0B^n $ 
  - $ A = B + E = \begin{bmatrix} 0 & 1 & 0 \\ 0 & 0 & 1 \\ 0 & 0 & 0 \end{bmatrix} + \begin{bmatrix} 1 & 0 & 0 \\ 0 & 1 & 0 \\ 0 & 0 & 1 \end{bmatrix} $ 
  - $ B^2 = \begin{bmatrix} 0 & 0 & 1 \\ 0 & 0 & 0 \\ 0& 0 & 0 \end{bmatrix}, \quad B^3 = O $ 
  - 所以 $ B^i = O \quad (i=3, 4, \cdots, n) $ 
  - $ \implies \begin{array}{l} A^n &= E + nB + \dfrac{ n(n-1) }{2}B^2 \\\\ &= \begin{bmatrix} 1 & 0 & 0 \\ 0 & 1 & 0 \\ 0 & 0 & 1 \end{bmatrix} + \begin{bmatrix} 0 & n & 0 \\ 0 & 0 & n \\ 0 & 0 & 0 \end{bmatrix} + \begin{bmatrix} 0 & 0 & \frac{ n(n-1) }{2} \\ 0 & 0 & 0 \\ 0 & 0 & 0 \end{bmatrix} \\\\ &= \begin{bmatrix} 1 & n & \frac{ n(n-1) }{2} \\ 0 & 1 & n \\ 0 & 0 & 1 \end{bmatrix} \end{array} $ 


<br>
## 二、初等变化法


<br>
#### 1、初等变换
1. 倍乘
   - 一个非零常数乘矩阵的某一行（列）；
2. 互换
   - 互换矩阵中某两行（列）的位置；
3. 倍加
   - 将某行（列）的 $ k $ 倍加到另一行（列）。
- 【注】
  - 行列式中操作目标是对应的面积体积是否变化。
  - 矩阵中操作目标是方程组的解是否保持同解。

$$
\text{行阶梯型矩阵}
\begin{cases}
  \text{1. 若有 0 行，全在下方} \\\\
  \text{2. 从行上看，自左边起，出现连续 0 的个数自上而下严格单增}
\end{cases}
$$

【or】

$$
\text{行最简阶梯型矩阵}
\begin{cases}
  \text{1. 若有 0 行，全在下方} \\\\
  \text{2. 从行上看，自左边起，出现连续 0 的个数自上而下严格单增} \\\\
  \text{3. 台角位置元素为 1} \\\\
  \text{4. 台角正上方元素全为 0}
\end{cases}
$$

- :star: :star: :star: 
  - 矩阵初等变换中间只能写 $ \to $ 

4. 例题
   1. 化 $ A = \begin{bmatrix} 1 & 1 & 0 & -3 & -1 \\ 1 & -1 & 2 & -1 & 0 \\ 4 & -2 & 6 & 3 & -4 \\ 2 & 4 & -2 & 4 & -7 \end{bmatrix} $ 为行阶梯型矩阵。
      - $ \begin{array}{l} A & \to \begin{bmatrix} 1 & 1 & 0 & -3 & -1 \\ 0 & -2 & 2 & 2 & 1 \\ 0 & -6 & 6 & 15 & 0 \\ 0 & 2 & -2 & 10 & -5 \end{bmatrix} \\\\ & \to \begin{bmatrix} 1 & 1 & 0 & -3 & -1 \\ 0 & -2 & 2 & 2 & 1 \\ 0 & 0 & 0 & 9 & -3 \\ 0 & 0 & 0 & 12 & -4 \end{bmatrix} \to \begin{bmatrix} 1 & 1 & 0 & -3 & -1 \\ 0 & -2 & 2 & 2 & 1 \\ 0 & 0 & 0 & 3 & -1 \\ 0 & 0 & 0 & 12 & -4 \end{bmatrix} \\\\ & \to \begin{bmatrix} 1 & 1 & 0 & -3 & -1 \\ 0 & -2 & 2 & 2 & 1 \\ 0 & 0 & 0 & 3 & -1 \\ 0 & 0 & 0 & 0 & 0 \end{bmatrix} \end{array} $ 
   2. 化 $ B = \begin{bmatrix} 1 & 1 & 0 & -3 & -1 \\ 0 & -2 & 2 & 2 & 1 \\ 0 & 0 & 0 & 3 & -1 \\ 0 & 0 & 0 & 0 & 0 \end{bmatrix} $ 为行最简阶梯型矩阵。
      - $ \begin{array}{l} B & \to \begin{bmatrix} 1 & 1 & 0 & 0 & -2 \\ 0 & -2 & 2 & 0 & \frac{5}{3} \\ 0 & 0 & 0 & 1 & -\frac{1}{3} \\ 0 & 0 & 0 & 0 & 0 \end{bmatrix} \\\\ & \to \begin{bmatrix} 1 & 0 & 1 & 0 & -\frac{7}{6} \\ 0 & 1 & -1 & 0 & -\frac{5}{6}  \\ 0 & 0 & 0 & 1 & -\frac{1}{3} \\ 0 & 0 & 0 & 0 & 0 \end{bmatrix} \end{array} $ 


<br>
## 三、$ A^{-1} $ 


<br>
#### 1、定义
$$
A^{-1} 
\begin{cases} 
  \text{1. } A \text{ 必须是方阵} \\\\
  \text{2. } \text{定义：}AB = E \implies A^{-1} = B, B^{-1} = A \\\\
  \text{1. } A \text{ 可逆 }\iff |A| \not= 0 
\end{cases}
$$


<br>
#### 2、性质

- $ ( A^{-1} )^{-1} = A $ 
- 若 $ k \not= 0 $ ，则 $ (kA)^{-1} = \dfrac{1}{k}A^{-1} $ 
- AB 也可逆，且 $ (AB)^{-1} = B^{-1}A^{-1} $ 
- $ A^{\rm T} $ 也可逆，且 $ ( A^{\rm T} )^{-1} = ( A^{-1} )^{\rm T} $ 
- $ | A^{-1} | = |A|^{-1} $ 
- $ (A + B)^{-1} \not= A^{-1} + B^{-1} $ 

<br>
#### 3、用初等变化求逆矩阵的方法

1. 【Th】
  - 任何可逆矩阵一定可通过若干次**初等行变换**化成同阶单位矩阵
    - 行最简阶梯型矩阵
      - 可逆矩阵 $ \to $ 不存在 $ 0 $ 行

2. 概念
$$
\begin{bmatrix}
  A \mid E
\end{bmatrix}
\underrightarrow{初等行变换}
\begin{bmatrix}
  E \mid A^{-1}
\end{bmatrix}
$$

- - 推导
    - 想对 $ A $ 做什么变换，可以先对 $ E $ 做同样的变化得到矩阵 $ P $ 
    - 然后计算 $ PA $ 得到结果
    - 例如
      - $ A = \begin{bmatrix} 4 & 6 \\ 2 & 1 \end{bmatrix} $ ，想将第二行的 $ -2 $ 倍加到第一行
      - 先对 $ E = \begin{bmatrix} 1 & 0 \\ 0 & 1 \end{bmatrix} $ 做该变换，得到 $ P = \begin{bmatrix} 1 & -2 \\ 0 & 1 \end{bmatrix} $ 
      - $ PA = \begin{bmatrix} 1 & -2 \\ 0 & 1 \end{bmatrix} \begin{bmatrix} 4 & 6 \\ 2 & 1 \end{bmatrix} = \begin{bmatrix} 0 & 4 \\ 2 & 1 \end{bmatrix} $ 
    - 根据【Th】
      - $ \begin{array}{l} & P_s \cdots P_2P_1A = E \\\\ \implies & P_s \cdots P_2P_1AA^{-1} = EA^{-1} \\\\ \implies & P_s \cdots P_2P_1E = A^{-1} \end{array} $

3. 例题
   1. 设 $ A = \begin{bmatrix} 0 & 2 & -1 \\ 1 & 1 & 2 \\ -1 & -1 & -1 \end{bmatrix} $ ，求 $ A^{-1} $ 。
      - $ \begin{array}{l} \begin{pmatrix} A \mid E \end{pmatrix} = & \begin{pmatrix} 0 & 2 & -1 & \vdots & 1 & 0 & 0 \\ 1 & 1 & 2 & \vdots & 0 & 1 & 0 \\ -1 & -1 & -1 & \vdots & 0 & 0 & 1 \end{pmatrix} \\\\ \underrightarrow{1 \leftrightarrow 2 \\ 3 + 1 } & \begin{pmatrix} 1 & 1 & 2 & \vdots & 0 & 1 & 0 \\ 0 & 2 & -1 & \vdots & 1 & 0 & 0 \\ 0 & 0 & 1 & \vdots & 0 & 1 & 1 \end{pmatrix} \\\\ \underrightarrow{2 + 3 \\ \frac{1}{2} 2 } & \begin{pmatrix} 1 & 1 & 0 & \vdots & 0 & -1 & -2 \\ 0 & 1 & 0 & \vdots & \frac{1}{2} & \frac{1}{2} & \frac{1}{2} \\ 0 & 0 & 1 & \vdots & 0 & 1 & 1 \end{pmatrix} \\\\ \underrightarrow{1-2} & \begin{pmatrix} 1 & 0 & 0 & \vdots & -\frac{1}{2} & -\frac{3}{2} & -\frac{5}{2} \\ 0 & 1 & 0 & \vdots & \frac{1}{2} & \frac{1}{2} & \frac{1}{2} \\ 0 & 0 & 1 & \vdots & 0 & 1 & 1 \end{pmatrix} = \begin{pmatrix} E \mid A^{-1} \end{pmatrix} \end{array} $ 


<br>
#### 4、分块矩阵的逆
$$
\begin{bmatrix}
  A & O \\
  O & B
\end{bmatrix}^{-1} = 
\begin{bmatrix}
  A^{-1} & O \\
  O & B^{-1}
\end{bmatrix},\qquad
\begin{bmatrix}
  O & A \\
  B & O
\end{bmatrix}^{-1} = 
\begin{bmatrix}
  O & B^{-1} \\
  A^{-1} & O
\end{bmatrix}
$$

- 副对角线分块矩阵的逆

$$
\begin{array}{l}
A = 
\begin{bmatrix}
  & & & A_1 \\
  & & A_2 \\
  & \dots \\
  A_s
\end{bmatrix} ,
\text{ 其中 } A_i(i=1, 2, \cdots, s) \text{ 可逆 ，则 } A \text{ 可逆且 } \\\\

A^{-1} = 
\begin{bmatrix}
  & & & A_s^{-1} \\
  & & \cdots \\
  & A_2^{-1} \\
  A_1^{-1}
\end{bmatrix}
\end{array}
$$

