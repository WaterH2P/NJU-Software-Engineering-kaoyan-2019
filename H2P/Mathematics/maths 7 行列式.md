---
title: 行列式
date: 2018-10-17
updated: 2018-10-17
tags: [maths,线代,kaoyan]
mathjax: true

description: 做笔记，喝凉茶，看线代
---

## 一、概念


<br>
#### ㊀、引言
$ \begin{vmatrix} a_{11} & a_{12} \\ a_{21} & a_{22} \end{vmatrix} $  

- 看成是两个二维向量 $ \alpha_1 = ( a_{11}, a_{12} ) $  $ \alpha_2 = ( a_{21}, a_{22} ) $ ，与 $ x $ 轴夹脚分别是 $ \alpha $  $ \beta $ 。
<!-- - <img src="./images/7-1 二阶行列式.png" width="50%"> -->
- <img src="https://github.com/WaterH2P/WaterH2P.github.io/raw/master/img/images/7-1%20%E4%BA%8C%E9%98%B6%E8%A1%8C%E5%88%97%E5%BC%8F.png" width="50%"> 
- $ \begin{array}{l} S_{ABCD} & = |\alpha_1| \cdot |\alpha_2| \cdot \sin (\beta - \alpha) \\[1em] & = lm \cdot ( \sin \beta \cos \alpha - \cos \beta \sin \alpha ) \\[1em] & = l \cos \alpha \cdot m \sin \beta - l \sin \alpha \cdot m \cos \beta \\[1em] & = a_{11}a_{22} - a_{12}a_{21} \end{array} $
- $ \therefore \begin{vmatrix} a_{11} & a_{12} \\ a_{21} & a_{22} \end{vmatrix} = a_{11}a_{22} - a_{12}a_{21} = S_{ABCD} $ 


<br>
#### ㊁、定义
- $ n $ 阶行列式由 $ n $ 个 $ n $ 维向量 $ \alpha_1 = \left[ a_{11}, a_{12}, \cdots, a_{1n} \right] $，$ \alpha_2 = \left[ a_{21}, a_{22}, \cdots, a_{2n} \right] $，$ \cdots $，$ \alpha_n = \left[ a_{n1}, a_{n2}, \cdots, a_{nn} \right] $ 组成，其结果为以这 $ n $ 个向量为邻边的 $ n $ 维图形的体积（ $ n $ 维体积 ）。


<br>
## 二、行列式的性质

【7 大性质】

1. 行列互换，其值不变，即 $ |A| = |A^T| $ 。
  - $ |A^T| $ （转置）是将 $ |A| $ 中每一行竖着写。
  - $ |A| = \begin{vmatrix} 1 & 2 \\ -1 & 5 \end{vmatrix} \implies |A^T| = \begin{vmatrix} 1 & -1 \\ 2 & 5 \end{vmatrix} $ 
2. 行列式中某行（列）元素全为零，则行列式为零。
3. ⭐️倍乘性质
  - 行列式中某行（列）元素有公因子 $ k(k \not= 0) $ ，则 $ k $ 可提到行列式外面，即 $ \begin{vmatrix} a_{11} & a_{12} & \cdots & a_{1n} \\ \vdots & \vdots &  & \vdots \\ ka_{i1} & ka_{i2} & \cdots & ka_{in} \\ \vdots & \vdots &  & \vdots \\ a_{n1} & a_{n2} & \cdots & a_{nn} \end{vmatrix} = k \begin{vmatrix} a_{11} & a_{12} & \cdots & a_{1n} \\ \vdots & \vdots &  & \vdots \\ a_{i1} & a_{i2} & \cdots & a_{in} \\ \vdots & \vdots &  & \vdots \\ a_{n1} & a_{n2} & \cdots & a_{nn} \end{vmatrix} $ 
4. 单行（列）可拆（加）
  - 行列式中某行（列）元素均是两个元素之和，则可拆成两个行列式之和，即 $ \begin{vmatrix} a_{11} & a_{12} & \cdots & a_{1n} \\ \vdots & \vdots &  & \vdots \\ a_{i1} + b_{i1} & a_{i2} + b_{i2} & \cdots & a_{in} + b_{in} \\ \vdots & \vdots &  & \vdots \\ a_{n1} & a_{n2} & \cdots & a_{nn} \end{vmatrix} = \begin{vmatrix} a_{11} & a_{12} & \cdots & a_{1n} \\ \vdots & \vdots &  & \vdots \\ a_{i1} & a_{i2} & \cdots & a_{in} \\ \vdots & \vdots &  & \vdots \\ a_{n1} & a_{n2} & \cdots & a_{nn} \end{vmatrix} + \begin{vmatrix} a_{11} & a_{12} & \cdots & a_{1n} \\ \vdots & \vdots &  & \vdots \\ b_{i1} & b_{i2} & \cdots & b_{in} \\ \vdots & \vdots &  & \vdots \\ a_{n1} & a_{n2} & \cdots & a_{nn} \end{vmatrix} $ 
  - 两个行列式可相加
    - 只有对应的某一行（列）不同
5. ⭐️互换性质
  - 行列式中两行（列）互换，行列式的值反号。
6. 行列式中两行（列）元素相等或对应成比例，则行列式为零。
7. ⭐️⭐️⭐️倍加性质
  - 行列式中某行（列）的 $ k $ 倍加到另一行（列），行列式的值不变。
  - $ I = \begin{vmatrix} a_{11} & a_{12} & \cdots & a_{1n} \\ \vdots & \vdots &  & \vdots \\ a_{h1} & a_{h2} & \cdots & a_{hn} \\ \vdots & \vdots &  & \vdots \\ a_{i1} + ka_{h1} & a_{i2} + ka_{h2} & \cdots & a_{in} + ka_{hn} \\ \vdots & \vdots &  & \vdots \\ a_{n1} & a_{n2} & \cdots & a_{nn} \end{vmatrix}  ​$ 
  - 根据【性质 4】
    - $ I = \begin{vmatrix} a_{11} & a_{12} & \cdots & a_{1n} \\ \vdots & \vdots &  & \vdots \\ a_{h1} & a_{h2} & \cdots & a_{hn} \\ \vdots & \vdots &  & \vdots \\ a_{i1} & a_{i2} & \cdots & a_{in} \\ \vdots & \vdots &  & \vdots \\ a_{n1} & a_{n2} & \cdots & a_{nn} \end{vmatrix} + \begin{vmatrix} a_{11} & a_{12} & \cdots & a_{1n} \\ \vdots & \vdots &  & \vdots \\ a_{h1} & a_{h2} & \cdots & a_{hn} \\ \vdots & \vdots &  & \vdots \\ ka_{h1} & ka_{h2} & \cdots & ka_{hn} \\ \vdots & \vdots &  & \vdots \\ a_{n1} & a_{n2} & \cdots & a_{nn} \end{vmatrix} $ 
  - 根据【性质 6】
    - $ I = \begin{vmatrix} a_{11} & a_{12} & \cdots & a_{1n} \\ \vdots & \vdots &  & \vdots \\ a_{h1} & a_{h2} & \cdots & a_{hn} \\ \vdots & \vdots &  & \vdots \\ a_{i1} & a_{i2} & \cdots & a_{in} \\ \vdots & \vdots &  & \vdots \\ a_{n1} & a_{n2} & \cdots & a_{nn} \end{vmatrix} $ 


<br>
## 三、行列式的展开定理


<br>
#### 一、余子式
在 $ n $ 阶行列式中，去掉元素 $ a_{ij} $ 所在的第 $ i $ 行，第  $ j $ 列元素，由剩下的元素按原来的位置与顺序组成的 $ (n - 1) $ 阶行列式称为元素 $ a_{ij} $ 的余子式，记为 $ M_{ij} $ ，即 
$$
M_{ij} = 
\begin{vmatrix} 
  a_{11} & \cdots & a_{1, j-1} & a_{1, j+1} & \cdots & a_{1n} \\ 
  \vdots & & \vdots & \vdots & & \vdots \\ 
  a_{i-1, 1} & \cdots & a_{i-1, j-1} & a_{i-1, j+1} & \cdots & a_{i-1, n} \\ 
  a_{i+1, 1} & \cdots & a_{i+1, j-1} & a_{i+1, j+1} & \cdots & a_{i+1, n} \\ 
  \vdots & & \vdots & \vdots & & \vdots \\ 
  a_{n1} & \cdots & a_{n, j-1} & a_{n, j+1} & \cdots & a_{nn} 
\end{vmatrix}
$$


<br>
#### 二、代数余子式
余子式 $ M_{ij} $ 乘 $ (-1)^{i + j} $ 后称为 $ a_{ij} $ 的代数余子式，记为 $ A_{ij} $ ，即 $ A_{ij} = (-1)^{i+j} M_{ij} $ 。


<br>
#### ★ 三、行列式按某一行（列）展开的展开公式
行列式的值等于行列式的某行（列）元素分别乘其相应的代数余子式后再求和，即
$$
\left| A \right| = 
\begin{cases}
  a_{i1}A_{i1} + a_{i2}A_{i2} + \cdots + a_{in}A_{in} & = \sum\limits_{j = 1}^n a_{ij}A_{ij}, \quad (i = 1, 2, \cdots, n) \\[1em]
  a_{1j}A_{1j} + a_{2j}A_{2j} + \cdots + a_{nj}A_{nj} & = \sum\limits_{i = 1}^n a_{ij}A_{ij}, \quad (i = 1, 2, \cdots, n)
\end{cases}
$$
但行列式的某行（列）元素分别乘另一行（列）元素的代数余子式后再求和，结果为 $ 0 $ ，即
$$
\begin{array}{l}
  a_{i1}A_{k1} + a_{i2}A_{k2} + \cdots + a_{in}A_{kn} = 0, \quad (i \not= k) \\[1em]
  a_{1j}A_{1k} + a_{2j}A_{2k} + \cdots + a_{nj}A_{nk} = 0, \quad (j \not= k)
\end{array}
$$


<br>
#### 四、几个重要的行列式
1. 上（下）三角形行列式
【注】$ a_{ii} \to a_{nn} $ 称为**主对角线**（$ n \times n $ 阶行列式）
$$
\begin{vmatrix}
  a_{11} & 0 & \cdots & 0 \\
  a_{21} & a_{22} & \cdots & 0 \\
  \vdots & \vdots & & \vdots \\
  a_{n1} & a_{n2} & \cdots & a_{nn}
\end{vmatrix} = 
\begin{vmatrix}
  a_{11} & a_{12} & \cdots & a_{1n} \\
  0 & a_{22} & \cdots & a_{2n} \\
  \vdots & \vdots & & \vdots \\
  0 & 0 & \cdots & a_{nn}
\end{vmatrix} = 
\begin{vmatrix}
  a_{11} & 0 & \cdots & 0 \\
  0 & a_{22} & \cdots & 0 \\
  \vdots & \vdots & & \vdots \\
  0 & 0 & \cdots & a_{nn}
\end{vmatrix} = 
\prod\limits_{i = 1}^{n} a_{ii}
$$

2. 副对角线行列式
$$
\begin{vmatrix}
  a_{11} & a_{12} & \cdots & a_{1, n-1} & a_{1n} \\
  a_{21} & a_{22} & \cdots & a_{2, n-1} & 0 \\
  \vdots & \vdots & & \vdots & \vdots \\
  a_{n1} & 0 & \cdots & 0 & 0
\end{vmatrix} = 
\begin{vmatrix}
  0 & \cdots & 0 & a_{1n} \\
  0 & \cdots & a_{2, n-1} & a_{2n} \\
  \vdots & & \vdots & \vdots \\
  a_{n1} & \cdots & a_{n, n-1} & a_{nn}
\end{vmatrix} = 
\begin{vmatrix}
  0 & \cdots & 0 & a_{1n} \\
  0 & \cdots & a_{2, n-1} & 0 \\
  \vdots & & \vdots & \vdots \\
  a_{n1} & \cdots & 0 & 0 
\end{vmatrix}
$$
$$
= (-1)^{ \frac{ n(n-1) }{2} }a_{1n}a_{2, n-1} \cdots a_{n1}
$$

3. 两个特殊的拉普拉斯展开式
$$
\begin{vmatrix}
  A_{m \times m} & O \\
  O & B_{n \times n}
\end{vmatrix} = 
\begin{vmatrix}
  A & C \\
  O & B
\end{vmatrix} = 
\begin{vmatrix}
  A & O \\
  C & B
\end{vmatrix} = 
|A||B|
$$
$$
\begin{vmatrix}
  O & A_{n \times n} \\
  B_{m \times m} & O
\end{vmatrix} = 
\begin{vmatrix}
  C & A \\
  B & O
\end{vmatrix} = 
\begin{vmatrix}
  O & A \\
  B & C
\end{vmatrix} = 
(-1)^{mn}|A||B|
$$

4. 范德蒙德（范式）行列式
$$
\begin{vmatrix}
  1 & 1 & \cdots & 1 \\
  x_1 & x_2 & \cdots & x_n \\
  x_1^2 & x_2^2 & \cdots & x_n^2 \\
  \vdots & \vdots & & \vdots \\
  x_1^{n-1} & x_2^{n-1} & \cdots & x_n^{n-1}
\end{vmatrix} = 
\prod\limits_{1 \leq i < j \leq n} (x_j - x_i)
$$
  - 盯着第二行，用 $ \text{ 大列位置的元素 } - \text{ 小列位置的元素 } $ ，所有情况相乘。
$$
\begin{vmatrix}
  1 & 1 & 1 \\
  a & b & c & \\
  a^2 & b^2 & c^2
\end{vmatrix} = (c-b)(c-a)(b-a)
$$
  - 例题
    1. $ I = \begin{vmatrix} a & b & c \\ b+c & a+c & a+b \\ a^2 & b^2 & c^2 \end{vmatrix} = $ \_\_\_\_\_\_\_\_ 。
       - $ \begin{array}{l} I & = \begin{vmatrix} a & b & c \\ a+b+c & a+b+c & a+b+c \\ a^2 & b^2 & c^2 \end{vmatrix} \\[1em] & = (a+b+c) \cdot (-1) \cdot \begin{vmatrix} 1 & 1 & 1 \\ a & b & c \\ a^2 & b^2 & c^2 \end{vmatrix} \\[1em] & = -(a+b+c)(c-b)(c-a)(b-a) \end{array} $

5. 行和或列和相等的行列式
（行和是指每一行元素相加的和，列和同理）
$$
I = 
\begin{vmatrix}
  a & b & \cdots & b \\
  b & a & \cdots & b \\
  \vdots & \vdots & & \vdots \\
  b & b & \cdots & a
\end{vmatrix}_{n \times n} = 
\left[ a + (n-1)b \right](a-b)^{n-1}
$$
  - 推导
    - 将第 $ j(j=2, 3, \cdots, n) $ 列乘 $ 1 $ 加到第 $ 1 $ 列上
      - $ I = [a + (n-1)b] \begin{vmatrix} 1 & b & \cdots & b \\ 1 & a & \cdots & b \\ \vdots & \vdots & & \vdots \\ 1 & b & \cdots & a \end{vmatrix}_{n \times n} $ 
    - 将第 $ 1 $ 行乘 $ -1 $ 加到第 $ i(i=2, 3, \cdots, n) $ 行上
      - $ \begin{array}{l} I & = [a + (n-1)b] \begin{vmatrix} 1 & b & b & \cdots & b \\ 0 & a-b & 0 & \cdots & 0 \\ 0 & 0 & a-b & \cdots & 0 \\ \vdots & \vdots & \vdots & & \vdots \\ 0 & 0 & 0 & \cdots & a-b \end{vmatrix}_{n \times n} \\[1em] & = [a + (n-1)b] \begin{vmatrix} a-b & 0 & \cdots & 0 \\ 0 & a-b & \cdots & 0 \\ \vdots & \vdots & & \vdots \\ 0 & 0 & \cdots & a-b \end{vmatrix}_{ (n-1) \times (n-1)} \end{array} $ 
    - $ I = [ a + (n-1)b](a-b)^{n-1} $ 


<br>
#### 五、例题
1. 消 $ 0 $ 化三角形法
  1. 设 $ n $ 阶矩阵 $ A = \begin{vmatrix} 0 & 1 & 1 & \cdots & 1 & 1 \\ 1 & 0 & 1 & \cdots & 1 & 1 \\ 1 & 1 & 0 & \cdots & 1 & 1 \\ \vdots & \vdots & \vdots & & \vdots & \vdots \\ 1 & 1 & 1 & \cdots & 0 & 1 \\ 1 & 1 & 1 & \cdots & 1 & 0 \end{vmatrix} $ ，则 $ |A| =  $ \_\_\_\_\_\_\_\_ 。
    - $ |A| = (-1)^{n-1} (n-1) $ 
  2. 计算行列式 $ I = \begin{vmatrix} x+1 & x & x & \cdots & x \\ x & x+\dfrac{1}{2} & x & \cdots & x \\ x & x & x+\dfrac{1}{3} & \cdots & x \\ \vdots & \vdots & \vdots & & \vdots \\ x & x & x & \cdots & x+\dfrac{1}{n} \end{vmatrix} $ 。
    - 第 $ 1 $ 行乘 $ -1 $ 加到第 $ i(i=2, 3, \cdots, n) $  行
      - $ I = \begin{vmatrix} x+1 & x & x & \cdots & x \\ -1 & \dfrac{1}{2} & 0 & \cdots & 0 \\ -1 & 0 & \dfrac{1}{3} & \cdots & 0 \\ \vdots & \vdots & \vdots & & \vdots \\ -1 & 0 & 0 & \cdots & \dfrac{1}{n} \end{vmatrix} $ 
        - 将 $ \begin{vmatrix} \cdot & \cdots & \cdots \\ \vdots & \ \ddots & \\ \vdots & & \ddots \end{vmatrix} $，$ \begin{vmatrix} \cdots & \cdots & \cdot \\ & \ \cdot & \vdots \\ \cdot & & \vdots \end{vmatrix} $，$ \begin{vmatrix} \ddots & & \vdots \\ & \ \ddots & \vdots \\ \cdots & \cdots & \cdot \end{vmatrix} $，$ \begin{vmatrix} \vdots & & \cdot \\ \vdots & \ \cdot & \\ \cdot & \cdots & \cdots \end{vmatrix} $ 等称为【爪型】行列式
          - 用**斜爪**消去**平爪**（水平/铅垂）
      - 将第 $ i(i=2, 3, \cdots, n) $ 列元素乘 $ i(i=2, 3, \cdots, n) $ 加到第 $ 1 $ 列
        - $ I = \begin{vmatrix} 1 + \dfrac{ n(n+1) }{2}x & x & x & \cdots & x \\ 0 & \dfrac{1}{2} & 0 & \cdots & 0 \\ 0 & 0 & \dfrac{1}{3} & \cdots  & 0 \\ \vdots & \vdots & \vdots & & \vdots \\ 0 & 0 & 0 & \cdots & \dfrac{1}{n} \end{vmatrix} = \left[ 1 + \dfrac{ n(n+1) }{2}x \right] \cdot \dfrac{1}{n!} $ 

2. 加边法
  - $ |A| = \begin{vmatrix} 1 & \ast & \ast & \ast \\ 0 & \\ \vdots & \\ 0 & \end{vmatrix}_{ (n+1) \times (n+1) } $ 
    - 其中 $ \ast \quad \ast \quad \ast $ 为增加的**边**
      - 一般选择公共元素
  1. 计算 $ n $ 阶行列式：$ D_n = \begin{vmatrix} 1+x_1^2 & x_1 x_2 & \cdots & x_1 x_n \\ x_2 x_1 & 1+x_2^2 & \cdots & x_2 x_n \\ \vdots & \vdots & & \vdots \\ x_n x_1 & x_n x_2 & \cdots & 1+x_n^2 \end{vmatrix} $ 。
     - $ D_n = \begin{vmatrix} 1 & x_1 & x_2 & \cdots & x_n \\ 0 & 1+x_1^2 & x_1 x_2 & \cdots & x_1 x_n \\ 0 & x_2 x_1 & 1+x_2^2 & \cdots & x_2 x_n \\ \vdots & \vdots & \vdots & & \vdots \\ 0 & x_n x_1 & x_n x_2 & \cdots & 1+x_n^2 \end{vmatrix} $
     - 第 $ 1 $ 行乘 $ -x_i(i=1, 2, \cdots, n) $ 加到第 $ i(i=1, 2, \cdots, n) $ 行 
       - $ D_n = \begin{vmatrix} 1 & x_1 & x_2 & \cdots & x_n \\ -x_1 & 1 & 0 & \cdots & 0 \\ -x_2 & 0 & 1 & \cdots & 0 \\ \vdots & \vdots & \vdots & & \vdots \\ -x_n & 0 & 0 & \cdots & 1 \end{vmatrix} $ 
     - 第 $ i(i=2, 3, \cdots, n) $ 列乘 $ x_i(i=2, 3, \cdots, n) $ 加到第 $ 1 $ 列
       - $ D_n = \begin{vmatrix} 1 + \sum\limits_{i=1}^n x_i^2 & x_1 & x_2 & \cdots & x_n \\ 0 & 1 & 0 & \cdots & 0 \\ 0 & 0 & 1 & \cdots & 0 \\ \vdots & \vdots & \vdots & & \vdots \\ 0 & 0 & 0 & \cdots & 1 \end{vmatrix} = 1 + \sum\limits_{i=1}^n x_i^2 $ 

3. 递推法
  - 宽边行列式
  1. 计算 $ D_5 = \begin{vmatrix} 1-x & x & 0 & 0 & 0 \\ -1 & 1-x & x & 0 & 0 \\ 0 & -1 & 1-x & x & 0 \\ 0 & 0 & -1 & 1-x & x \\ 0 & 0 & 0 & -1 & 1-x \end{vmatrix} $ 。
      - $ \begin{array}{l} D_5 & = (1 - x) \cdot (-1)^{1+1} \cdot D_4 + x \cdot (-1)^{1+2} \cdot \begin{vmatrix} -1 & x & 0 & 0 \\ 0 & 1-x & x & 0 \\ 0 & -1 & 1-x & x \\ 0 & 0 & -1 & 1-x \end{vmatrix} \\[1em] & = (1-x)D_4 + (-x) \cdot (-1) \cdot (-1)^{1+1} \cdot D_3 \\[1em] & = (1-x)D_4 + xD_3 \\[1em] & = D_4 - xD_4 + xD_3 \end{array} $ 
      - $ \begin{array}{l} \implies D_5 - D_4 = -x (D_4 - D_3) = (-x)^2 (D_3 - D_2) = (-x)^3 (D_2 - D_1) \end{array} $
        - $ D_1 = 1-x $，$ D_2 = \begin{vmatrix} 1-x & x \\ -1 & 1-x \end{vmatrix} = 1 - x + x^2 $ 
        - $ \begin{cases} D_5 - D_4 = -x^5 \\D_4 - D_3 = x^4 \\ D_3 - D_2 = -x^3 \end{cases} \implies D_5 = 1 - x + x^2 - x^3 + x^4 - x^5 $ 

4. 范式行列式
  1. 计算 $ D_{n+1} = \begin{vmatrix}  a_1^n & a_1^{n-1}b_1 & a_1^{n-2}b_1^2 & \cdots & a_1b_1^{n-1} & b_1^n \\ a_2^n & a_2^{n-1}b_2 & a_2^{n-2}b_2^2 & \cdots & a_2b_2^{n-1} & b_2^n \\ \vdots & \vdots & \vdots & & \vdots & \vdots \\ a_{n+1}^n & a_{n+1}^{n-1}b_{n+1} & a_{n+1}^{n-2}b_{n+1}^2 & \cdots & a_{n+1}b_{n+1}^{n-1} & b_{n+1}^n \end{vmatrix}, \quad (a_1, a_2, \cdots, a_n \not= 0) $ 。
    - $ D_{n+1} = \prod\limits_{i=1}^{n+1} a_i^n \cdot \begin{vmatrix}  1 & \dfrac{b_1}{a_1} & \left( \dfrac{b_1}{a_1} \right)^2 & \cdots & \left( \dfrac{b_1}{a_1} \right)^n \\ 1 & \dfrac{b_2}{a_2} & \left( \dfrac{b_2}{a_2} \right)^2 & \cdots & \left( \dfrac{b_2}{a_2} \right)^n \\ \vdots & \vdots & \vdots & & \vdots \\ 1 & \dfrac{ b_{n+1} }{ a_{n+1} } & \left( \dfrac{ b_{n+1} }{ a_{n+1} } \right)^2 & \cdots & \left( \dfrac{ b_{n+1} }{ a_{n+1} } \right)^n \end{vmatrix} $ 
    - $ D_{n+1} = \prod\limits_{i=1}^{n+1} a_i^n \cdot \prod\limits_{ 1 \leq i < j \leq (n+1) } \left( \dfrac{b_j}{a_j} - \dfrac{b_i}{a_i} \right) $ 

<br>

## 四、总结
1. 理解行列式概念
2. 七大性质
3. 展开公式
4. 重要行列展开式
5. 四种计算方法



