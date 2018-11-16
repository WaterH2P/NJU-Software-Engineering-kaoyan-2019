---
title: 特征值
date: 2018-10-26
updated: 2018-10-26
tags: [maths,线代,kaoyan]
mathjax: true

description: 做笔记，喝凉茶，看线代
---

【只讲方阵 $ A_{n \times n} $ 】

## 一、特征值与特征向量


<br>
#### 1、概念

设 A 是 n 阶矩阵，$ \lambda $ 是一个数，若存在 n 维非零列向量 $ \xi $ ，使得
$$
A\xi = \lambda \xi \quad (Ⅰ)
$$
则称 $ \lambda $ 是 A 的特征值，$ \xi $ 是 A 的对应于特征值 $ \lambda $ 的特征向量。

由 (Ⅰ) 式，得
$$
\begin{array}{l}
  \lambda \xi - A \xi = 0 &\implies (\lambda E - A)\xi = 0 \\\\
  \because \xi \not= 0 &\implies (\lambda E - A)X = 0 \text{ 对于 X 有非零解 } \\\\
  \text{齐次线性方程组有非零解} &\implies |\lambda E - A| = 0
\end{array}
$$
因 $ \xi \not= 0 $ ，故
$$
| \lambda E - A | = 
\begin{vmatrix}
  \lambda - a_{11} & -a_{12} & \cdots & -a_{1n} \\
  -a_{21} & \lambda - a_{22} & \vdots & -a_{2n} \\
  \vdots & \vdots & & \vdots \\
  -a_{n1} & -a_{n2} & \cdots & \lambda - a_{nn}
\end{vmatrix} = 0 \quad (Ⅱ)(Ⅱ) 式称为 A 的特征方程，是未知量 $ \lambda $ 的 n 次方程，有 n 个根（重根按照重数计），$ \lambda E - A $ 称为特征矩阵，$ |\lambda E - A| $ 称为特征多项式。
$$

(Ⅱ) 式称为 A 的特征方程，是未知量 $ \lambda $ 的 n 次方程，有 n 个根（重根按照重数计），$ \lambda E - A $ 称为特征矩阵，$ |\lambda E - A| $ 称为特征多项式。

<br>

#### 2、例题
1. 求 $ A = \begin{pmatrix} 0 & 0 & 1 \\ 0 & 1 & 0 \\ 1 & 0 & 0 \end{pmatrix} $ 的特征值与特征向量。
  - 1️⃣ 求 $ \lambda $ 
    - $ \begin{array}{l} |\lambda E - A| &= \begin{vmatrix} \lambda & 0 & -1 \\ 0 & \lambda - 1 & 0 \\ -1 & 0 & \lambda \end{vmatrix} \\\\ &= (\lambda -1) \cdot (-1)^{2+2} \cdot \begin{vmatrix} \lambda & -1 \\ -1 & \lambda \end{vmatrix} \\\\ &= (\lambda - 1)^2(\lambda + 1) = 0 \\\\ &\implies \lambda_1 = \lambda_2 = 1, \quad \lambda_3 = -1 \end{array} $ 
  - 2️⃣ 求 $ \xi $ 
    - 当 $ \lambda_1 = \lambda_2 = 1 $ 时
      - $ \begin{array}{l} & (\lambda E - A)X = 0 &\implies (E - A)X = 0 \\\\ \implies & \begin{pmatrix} 1 & 0 & -1 \\ 0 & 0 & 0 \\ -1 & 0 & 1 \end{pmatrix} &\to \begin{pmatrix} 1 & 0 & -1 \\ 0 & 0 & 0 \\ 0 & 0 & 0 \end{pmatrix} \end{array} $
      - $ S = n - {\rm r} = 2 \implies \begin{cases} \xi_1 = ( 0 & 1 & 0 )^{\rm T} \\\\ \xi_2 = ( 1 & 0 & 1 )^{\rm T} \end{cases} $ 
        - 取第一列，$ x_2, x_3 $ 为自由变量
          - 第二列不可以取，因为 $ {\rm r} \left( \begin{vmatrix} 0 \end{vmatrix} \right) = 0 $ 
      - 通解为 $ k_1 \xi_1 + k_2 \xi_2, \quad k_1, k_2 \text{ 为不全为 0 的任意常数} $ 
    - 当 $ \lambda_3 = -1 $ 时
      - $ \begin{array}{l} & (\lambda E - A)X = 0 &\implies (-E - A)X = 0 \\\\ \implies & \begin{pmatrix} -1 & 0 & -1 \\ 0 & -2 & 0 \\ -1 & 0 & -1 \end{pmatrix} &\to \begin{pmatrix} 1 & 0 & 1 \\ 0 & 1 & 0 \\ 0 & 0 & 0 \end{pmatrix} \end{array} $ 
      - $ S = n - {\rm r} = 1 \implies \xi_3 = \begin{pmatrix} -1 & 0 & 1 \end{pmatrix}^{\rm T} $ 
      - 通解为 $ k_3 \xi_3, \quad k_3 \not= 0 $ 
    - 所以特征向量为 $ \begin{cases} k_1 \xi_1 + k_2 \xi_2, \quad k_1, k_2 \text{ 为不全为 0 的任意常数} \\\\ k_3 \xi_3, \quad k_3 \not= 0 \end{cases} $ 


<br>
## 二、矩阵相似
1. 定义
  - 设 $ A, B $ 是两个 n 阶矩阵，若存在 n 阶可逆矩阵 P，使得 $ P^{-1}AP = B $，则称 A 相似于 B，记成 A ~ B 。


<br>
## 三、矩阵相似对角化
1. 定义
  - 若存在可逆矩阵 P，使得 $ P^{-1}AP = \Lambda $ ，其中 $ \Lambda $ 是对角矩阵，则称 A 可相似对角化，记 A ~ $ \Lambda $ ，称 $ \Lambda $ 是 A 的相似标准形。


<br>
## 四、求可逆矩阵 P
  - $ \begin{array}{l} & P^{-1}AP = \Lambda \\\\ \iff & AP = P \Lambda \\\\ \iff & A\begin{pmatrix} \xi_1& \xi_2 & \cdots & \xi_n \end{pmatrix} = \begin{pmatrix} \xi_1& \xi_2 & \cdots & \xi_n \end{pmatrix}\begin{pmatrix} \lambda_1 &  &  &  \\  & \lambda_2 & & \\ & & \ddots & \\ & & & \lambda_n \end{pmatrix} \\\\ \iff & \begin{pmatrix} A\xi_1 & A\xi_2 & \cdots & A\xi_n \end{pmatrix} = \begin{pmatrix} \lambda_1 \xi_1 & \lambda_2 \xi_2 & \cdots & \lambda_n \xi_n \end{pmatrix} \\\\ \iff & A\xi_i = \lambda_i \xi_i, \quad (i=1, 2, \cdots, n) \end{array} $ 
- 所以 $ \Lambda = \begin{bmatrix} \lambda_1 &  &  &  \\  & \lambda_2 & & \\ & & \ddots & \\ & & & \lambda_n \end{bmatrix} $ ，其中 $ \lambda_i (i=1, 2, \cdots, n) $ 为 A 的 n 个特征值。
- $ P = \begin{bmatrix} \xi_1& \xi_2 & \cdots & \xi_n \end{bmatrix}, \xi_i(i=1, 2, \cdots, n) $ 是 A 的 n 个线性无关的特征向量，且 $ \xi_i $ 对应的特征值为 $ \lambda_i $ 。
- A 可以相似对角化 $ \iff $ 存在可逆 P，使得 $ P^{-1} AP = \Lambda $ $ \iff $ A 有 n 个线性无关的特征向量
  - 即 $ \begin{vmatrix} \xi_1 & \xi_2 & \cdots & \xi_n \end{vmatrix} \not= 0 $ 


<br>
## 五、例题
1. 设 $ A_{3 \times 3} $ ，且 $ A \xi_i = i \xi_i, i=1, 2, 3 $ ，其中 $ \xi_1 = \begin{pmatrix} 1 \\ 0 \\ 0 \end{pmatrix}, \xi_2 = \begin{pmatrix} 1 \\ 1 \\ 0 \end{pmatrix}, \xi_3 = \begin{pmatrix} 1 \\ 1 \\ 1 \end{pmatrix} $ ，求 A。
  - 由定义 $ A \xi = \lambda \xi, \xi \not= 0 $ 可知，$ \left. \begin{array}{l} A\xi_1 = 1 \cdot \xi \\\\ A \xi_2 = 2 \cdot \xi_2 \\\\ A\xi_3 = 3 \cdot \xi_3 \end{array} \right\} \implies \begin{cases} \lambda_1 = 1， & \xi_1 = \begin{pmatrix} 1 & 0 & 0 \end{pmatrix}^{\rm T} \\\\ \lambda_2 = 2， & \xi_2 = \begin{pmatrix} 1 & 1 & 0 \end{pmatrix}^{\rm T} \\\\ \lambda_3 = 3， & \xi_3 = \begin{pmatrix} 1 & 1 & 1 \end{pmatrix}^{\rm T} \end{cases} $ 
  - 令 $ P = \begin{pmatrix} \xi_1 & \xi_2 & \xi_3 \end{pmatrix} $ ，所以 $ |P| = \begin{vmatrix} 1 & 1 & 1 \\ 0 & 1 & 1 \\ 0 & 0 & 1 \end{vmatrix} \not= 0 $ 。
  - 故 $ P^{-1}AP = \Lambda $ ，即 $ \begin{pmatrix} 1 & 1 & 1 \\ 0 & 1 & 1 \\ 0 & 0 & 1 \end{pmatrix}^{-1} A \begin{pmatrix} 1 & 1 & 1 \\ 0 & 1 & 1 \\ 0 & 0 & 1 \end{pmatrix} = \begin{pmatrix} 1 & & \\ & 2 & \\ & & 3 \end{pmatrix} $ 
  - $ \implies \begin{array}{l} A & = P \Lambda P^{-1} \\\\ &= \begin{pmatrix} 1 & 1 & 1 \\ 0 & 1 & 1 \\ 0 & 0 & 1 \end{pmatrix} \begin{pmatrix} 1 & & \\ & 2 & \\ & & 3 \end{pmatrix} \begin{pmatrix} 1 & -1 & 0 \\ 0 & 1 & -1 \\ 0 & 0 & 1 \end{pmatrix} \\\\ &= \begin{pmatrix} 1 & 1 & 1 \\ 0 & 2 &1 \\ 0 & 0 & 3 \end{pmatrix} \end{array} $ 
2. 已知 $ A = \begin{pmatrix} 2 & 2 & 1 \\ 0 & 3 & 0 \\ 3 & -6 & 0 \end{pmatrix} $ ，求 $ A^{100} $ 。
  - $ \begin{array}{l} |\lambda E - A| = 0 &\implies \begin{vmatrix} \lambda -2 & -2 & -1 \\ 0 & \lambda - 3 & 0 \\ -3 & 6 & \lambda \end{vmatrix} = 0 \\\\ &\implies (\lambda - 3)^2 (\lambda + 1) = 0 \\\\ &\implies \lambda_1 = \lambda_2 = 3, \quad \lambda_3 = -1 \end{array} $
  - $ \lambda_1 = \lambda_2 = 3 $ 时
    - $ \begin{array}{l} &\implies (3E - A)X = 0 \\\\ &\implies \begin{pmatrix} 1 & -2 & -1 \\ 0 & 0 & 0 \\ -3 & 6 & 3 \end{pmatrix} \to \begin{pmatrix} 1 & -2 & -1 \\ 0 & 0 & 0 \\ 0 & 0 & 0 \end{pmatrix} \\\\ &\implies S = 3 - {\rm r} = 2 \\\\ & \implies \begin{cases} \xi_1 = \begin{pmatrix} 2 & 1 & 0 \end{pmatrix}^{\rm T} \\\\ \xi_2 = \begin{pmatrix} 1 & 0 & 1 \end{pmatrix}^{\rm T} \end{cases} \end{array} ​$ 
  - $ \lambda_3 = -1 $ 时
    - $ \begin{array}{l} &\implies (-E - A)X = 0 \\\\ &\implies \begin{pmatrix} -3 & -2 & -1 \\ 0 & -4 & 0 \\ -3 & 6 & -1 \end{pmatrix} \to \begin{pmatrix} 3 & 2 & 1 \\ 0 & 1 & 0 \\ 0 & 0 & 0 \end{pmatrix} \\\\ &\implies S = 3 - {\rm r} = 1 \\\\ &\implies \xi_3 = \begin{pmatrix} -1 & 0 & 3 \end{pmatrix}^{\rm T} \end{array} $ 
  - 由于 $ \begin{vmatrix} \xi_1 & \xi_2 & \xi_3 \end{vmatrix} = \begin{vmatrix} 2 & 1 & -1 \\ 1 & 0 & 0 \\ 0 & 1 & 3 \end{vmatrix} \not= 0 $，令 $ P = \begin{pmatrix} \xi_1 & \xi_2 & \xi_3 \end{pmatrix} $ ，P 可逆。
  - 故 $ P^{-1}AP = \Lambda \implies A = P \Lambda P^{-1} $ 
  - $ \begin{array}{l} A^{100} &= P \Lambda^{100} P^{-1} \\\\ &= \begin{pmatrix} 2 & 1 & -1 \\ 1 & 0 & 0 \\ 0 & 1 & 3 \end{pmatrix} \begin{pmatrix} 3^{100} & & \\  & 3^{100} & \\ & & 1 \end{pmatrix} \cdot \dfrac{1}{4} \cdot \begin{pmatrix} 0 & 4 & 0 \\ 3 & -6 & 1 \\ -1 & 2 &1 \end{pmatrix} \\\\ &= \dfrac{1}{4} \cdot \begin{pmatrix} 2 \cdot 3^{100} & 3^{100} & -1 \\ 3^{100} & 0 & 0 \\ 0 & 3^{100} & 3 \end{pmatrix} \cdot \begin{pmatrix} 0 & 4 & 0 \\ 3 & -6 & 1 \\ -1 & 2 &1 \end{pmatrix} \\\\ &= \dfrac{1}{4} \cdot \begin{pmatrix} 3^{101} + 1 & 2 \cdot 3^{100} - 2 & 3^{100} - 1 \\ 0 & 4 \cdot 3^{100} & 0 \\ 3^{101} - 3 & -6 \cdot 3^{100} + 6 & 3^{100} + 3 \end{pmatrix} \end{array} $ 







