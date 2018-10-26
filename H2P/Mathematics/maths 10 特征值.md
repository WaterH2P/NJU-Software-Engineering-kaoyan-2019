---
title: 特征值与二次型
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

​    设 A 是 n 阶矩阵，$ \lambda $ 是一个数，若存在 n 维非零列向量 $ \xi $ ，使得
$$
A\xi = \lambda \xi \quad (Ⅰ)
$$
则称 $ \lambda $ 是 A 的特征值，$ \xi $ 是 A 的对应于特征值 $ \lambda $ 的特征向量。

​    由 (Ⅰ) 式，得
$$
\begin{array}{l}
  \lambda \xi - A \xi = 0 &\implies (\lambda E - A)\xi = 0 \\[1em]
  \because \xi \not= 0 &\implies (\lambda E - A)X = 0 \text{ 对于 X 有非零解 } \\[1em]
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
\end{vmatrix} = 0 \quad (Ⅱ)
$$

​    (Ⅱ) 式称为 A 的特征方程，是未知量 $ \lambda $ 的 n 次方程，有 n 个根（重根按照重数计），$ \lambda E - A $ 称为特征矩阵，$ |\lambda E - A| $ 称为特征多项式。


<br>
#### 2、例题
1. 求 $ A = \begin{pmatrix} 0 & 0 & 1 \\ 0 & 1 & 0 \\ 1 & 0 & 0 \end{pmatrix} $ 的特征值与特征向量。
  - 1️⃣ 求 $ \lambda $ 
    - $ \begin{array}{l} |\lambda E - A| &= \begin{vmatrix} \lambda & 0 & -1 \\ 0 & \lambda - 1 & 0 \\ -1 & 0 & \lambda \end{vmatrix} \\[1em] &= (\lambda -1) \cdot (-1)^{2+2} \cdot \begin{vmatrix} \lambda & -1 \\ -1 & \lambda \end{vmatrix} \\[1em] &= (\lambda - 1)^2(\lambda + 1) = 0 \end{array} $ $ \implies \lambda_1 = \lambda_2 = 1, \lambda_3 = -1 $ 
  - 2️⃣ 求 $ \xi $ 
    - 当 $ \lambda_1 = \lambda_2 = 1 $ 时
      - $ \begin{array}{l} & (\lambda E - A)X = 0 &\implies (E - A)X = 0 \\[1em] \implies & \begin{pmatrix} 1 & 0 & -1 \\ 0 & 0 & 0 \\ -1 & 0 & 1 \end{pmatrix} &\to \begin{pmatrix} 1 & 0 & -1 \\ 0 & 0 & 0 \\ 0 & 0 & 0 \end{pmatrix} \end{array} $
      - $ S = n - {\rm r} = 2 \implies \begin{cases} \xi_1 = ( 0 & 1 & 0 )^{\rm T} \\[1em] \xi_2 = ( 1 & 0 & 1 )^{\rm T} \end{cases} $ 
        - 取第一列，$ x_2, x_3 $ 为自由变量
          - 第二列不可以取，因为 $ {\rm r} \left( \begin{vmatrix} 0 \end{vmatrix} \right) = 0 $ 
      - 通解为 $ k_1 \xi_1 + k_2 \xi_2, \quad k_1, k_2 \text{ 为不全为 0 的任意常数} $ 
    - 当 $ \lambda_3 = -1 $ 时
      - $ \begin{array}{l} & (\lambda E - A)X = 0 &\implies (E - A)X = 0 \\[1em] \implies & \begin{pmatrix} -1 & 0 & -1 \\ 0 & -2 & 0 \\ -1 & 0 & -1 \end{pmatrix} &\to \begin{pmatrix} 1 & 0 & 1 \\ 0 & 1 & 0 \\ 0 & 0 & 0 \end{pmatrix} \end{array} $ 
      - $ S = n - {\rm r} = 1 \implies \xi_3 = \begin{pmatrix} -1 & 0 & 1 \end{pmatrix}^{\rm T} $ 
      - 通解为 $ k_3 \xi_3, \quad k_3 \not= 0 $ 
    - 所以特征向量为 $ \begin{cases} k_1 \xi_1 + k_2 \xi_2, \quad k_1, k_2 \text{ 为不全为 0 的任意常数} \\[1em] k_3 \xi_3, \quad k_3 \not= 0 \end{cases} $ 












