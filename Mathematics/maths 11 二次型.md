---
date: 2018-10-27
updated: 2018-10-27
---

# 一、二次型

<br>

## 1、定义

n 元变量 $x_1, x_2, \cdots, x_n$ 的二次齐次多项式
$$
\begin{array}{l}
  f(x_1, x_2, \cdots, x_n) = & a_{11}x_1^2 &+& 2a_{12}x_1x_2 &+& \cdots &+& 2a_{1n}x_1x_n \\\\
  & &+& a_{22}x_2^2 &+& \cdots &+& 2a_{2n}x_2x_n \\\\
  & && && \cdots \\\\
  & && && &+& a_{nn}x_n^2
\end{array}
$$
称为 $n$ 元二次型，简称二次型。

因为 $x_ix_j = x_jx_i$ ，先若令 $a_{ij} = a_{ji} (i, j=1, 2, \cdots, n)$ ，则 $2a_{ij}x_ix_j = a_{ij}x_ix_j + a_{ji}x_jx_i$ ，于是
$$
\begin{array}{l}
  f(x_1, x_2, \cdots, x_n) 
  & = 
    & a_{11}x_1^2 + a_{12}x_1x_2 + \cdots + a_{1n}x_1x_n + \\\\ 
    && a_{21}x_2x_1 + a_{22}x_2^2 + \cdots + a_{2n}x_2x_n + \\\\ 
    && \cdots \cdots + \\\\ 
    && a_{n1}x_nx_1 + a_{n2}x_nx_2 + \cdots + a_{nn}x_n^2 \quad & \quad (\ast) \\\\
  & = 
    & \sum\limits_{i=1}^{\infty}\sum\limits_{j=1}^{\infty}a_{ij}x_ix_j \quad & \quad (\ast\ast)
\end{array}
$$
其中 $(\ast)$ 式称为完全展开式， $(\ast\ast)$ 式称为和式。令
$$
A = 
\begin{bmatrix} 
  a_{11} & a_{12} & \cdots & a_{1n} \\ 
  a_{21} & a_{22} & \cdots & a_{2n} \\
  \vdots & \vdots & & \vdots \\
  a_{n1} & a_{n2} & \cdots & a_{nn}
\end{bmatrix}, 
x = 
\begin{bmatrix} 
  x_1 \\ x_2 \\ \vdots \\ x_n
\end{bmatrix}
$$
则二次型可表示为
$$
\begin{array}{l} 
  f(x) = x^{\rm T} A x (A^{\rm T} = A). \quad & \quad (\ast\ast\ast)
\end{array}
$$
$(\ast\ast\ast)$ 式称为二次型 $f(x_1, x_2, \cdots, x_n)$ 的矩阵表达式，实**对称**矩阵 $A$ 称为**二次型** $f(x)$ 的矩阵。

<br>

## 2、例题

<br>

### 1

写出三元二次型
$$
f(x_1, x_2, x_3) = 2x_1^2 + 2x_2^2 + 2x_3^2 - 2x_1x_2 - 2x_2x_3 + 2x_1x_3
$$
的二次型矩阵 $A$。

- 先写模子：$\begin{pmatrix} x_1 & x_2 & x_3 \end{pmatrix} \begin{pmatrix} \ast & \ast & \ast \\ \ast & \ast & \ast \\ \ast & \ast & \ast \end{pmatrix} \begin{pmatrix} x_1 \\ x_2 \\ x_3 \end{pmatrix}$ 

- 主对角线位置抄【平方项】前的系数

   - $\begin{pmatrix} x_1 & x_2 & x_3 \end{pmatrix} \begin{pmatrix} 2 & \ast & \ast \\ \ast & 2 & \ast \\ \ast & \ast & 2 \end{pmatrix} \begin{pmatrix} x_1 \\ x_2 \\ x_3 \end{pmatrix}$ 

- 把混合项 $x_ix_j \, (i \not= j)$ 前的系数平分，写在 $a_{ij}$ 和 $a_{ji}$ 的位置

   - $\begin{pmatrix} x_1 & x_2 & x_3 \end{pmatrix} \begin{pmatrix} 2 & -1 & 1 \\ -1 & 2 & -1 \\ 1 & -1& 2 \end{pmatrix} \begin{pmatrix} x_1 \\ x_2 \\ x_3 \end{pmatrix}$ 

<br>

# 二、线性变换

<br>

## 1、定义

对于 n 元二次型 $f(x_1, x_2, \cdots, x_n)$，若令
$$
\begin{cases}
  x_1 = c_{11}y_1 + c_{12}y_2 + \cdots + c_{1n}yn \\\\
  x_2 = c_{21}y_1 + c_{22}y_2 + \cdots + c_{2n}yn \\\\
  \quad \cdots\cdots \\\\
  x_n = c_{n1}y_1 + c_{n2}y_2 + \cdots + c_{nn}yn
\end{cases}
$$

记 $x = \begin{bmatrix} x_1 \\ x_2 \\ \vdots \\ x_n \end{bmatrix}, C = \begin{bmatrix} c_{11} & c_{12} & \cdots & c_{1n} \\ c_{21} & c_{22} & \cdots & c_{2n} \\ \vdots & \vdots & & \vdots \\ c_{n1} & c_{n2} & \cdots & c_{nn} \end{bmatrix}, y = \begin{bmatrix} y_1 \\ y_2 \\ \vdots \\ y_n \end{bmatrix}$ ，则可写为 $x = Cy$ 。

上式称为从 $y_1, y_2, \cdots, y_n$ 到 $x_1, x_2, \cdots, x_n$ 的线性变换。若线性变换的系数矩阵 C 可逆，即 $ |C| \not= 0$ ，则称为可逆线性变换。现给出 $f(x) = x^{\rm T} A x$ ，令 $x = Cy$ ，则
$$
f(x_1, x_2, \cdots, x_n) = (Cy)^{\rm T} A (Cy) = y^{\rm T}( C^{\rm T} A C )y
$$

记 $B = C^{\rm T} A C$ ，则
$$
f(x_1, x_2, \cdots, x_n) = y^{\rm T}By = g(y)
$$
此时，二次型 $f(x_1, x_2, \cdots, x_n) = x^{\rm T}Ax$ 通过线性变换 $x = Cy$ 得到一个新二次型 $g(y) = y^{\rm T}By$ 。

【⭐️ 注】：一定要写 $x = Cy$ ！如果题目给出 $y = Cx$ ，则写为 $x = C^{-1}y$ 。

若 $P$ 为 $n$ 阶矩阵，则 $PP^{\rm T} = E \iff P \text{ 为正交矩阵 } \iff P^{-1} = P^{\rm T} \iff P \text{ 由规范正交基组成 }$ 。 

<br>

## 2、例题

<br>

### 1

已知二次型 $f(x_1, x_2, x_3) = 4x_2^2 - 3x_3^2 + 4x_1x_2 - 4x_1x_3 + 8x_2x_3$ ，1️⃣ 写出二次型 $f$ 的矩阵表达式；2️⃣ 用正交变换把二次型 $f$ 化为标准形，并写出相应的正交矩阵。

- 1️⃣ 

   - $a = \begin{pmatrix} 0 & 2 & -2 \\ 2 & 4 & 4 \\ -2 & 4 & -3 \end{pmatrix}$ 

   - $f(x_1, x_2, x_3) = \begin{pmatrix} x_1 & x_2 & x_3 \end{pmatrix} \begin{pmatrix} 0 & 2 & -2 \\ 2 & 4 & 4 \\ -2 & 4 & -3 \end{pmatrix} \begin{pmatrix} x_1 \\ x_2 \\ x_3 \end{pmatrix}$ 

- 2️⃣ 

   - $\begin{vmatrix} \lambda E - A \end{vmatrix} = 0 \implies \begin{cases} \lambda_1 = -6, & \xi_1 = \begin{pmatrix} 1 & -1 & 2 \end{pmatrix}^{\rm T} \\\\ \lambda_2 = 1, & \xi_2 = \begin{pmatrix} -2 & 0 & 1 \end{pmatrix}^{\rm T} \\\\ \lambda_3 = 6, & \xi_3 = \begin{pmatrix} 1 & 5 & 2 \end{pmatrix}^{\rm T} \end{cases}$ 

   - ⭐️ 写出正交阵 P

      - $\xi_1, \xi_2, \xi_3$ 正交化 $and$ 单位化

      - $P = \begin{pmatrix} \dfrac{1}{ \sqrt{6} } & -\dfrac{2}{ \sqrt{5} } & \dfrac{1}{ \sqrt{30} } \\\\ -\dfrac{1}{ \sqrt{6} } & 0 & \dfrac{5}{ \sqrt{30} } \\\\ \dfrac{2}{ \sqrt{6} } & \dfrac{1}{ \sqrt{5} } & \dfrac{2}{ \sqrt{30} } \end{pmatrix}$ ，则 $P^{-1} = P^{\rm T}$ 。

   - 令 $x = PY \implies \begin{array}{l} \\ f &= X^{\rm T}AX &= (PY)^{\rm T} A PY \\\\ &= Y^{\rm T}P^{\rm T}APY &= Y^{\rm T}P^{-1}APY \\\\ &= Y^{\rm T} \Lambda Y \\ & \end{array}$

   - $f = \begin{pmatrix} y_1 & y_2 & y_3 \end{pmatrix} \begin{pmatrix} -6 & & \\ & 1 & \\ & & 6 \end{pmatrix} \begin{pmatrix} y_1 \\ y_2 \\ y_3 \end{pmatrix} = -6y_1^2 + y_2^2 + 6y_3^3$

<br>

### 2、施式正交法

- $\xi_1 \not\bot \xi_2, \, \xi_1 \bot \xi_3, \, \xi_2 \bot \xi_3 \implies \eta_1 \bot \eta_2, \, \eta_1 \bot \eta_3, \, \eta_2 \bot \eta_3$ ，其中 $\eta_3$ 就是 $\xi_3$ ，对 $\xi_1, \, \xi_2$ 正交化。

- 例题

   1. $a \implies \begin{cases} \xi_1 = \begin{pmatrix} -2 & 1 & 0 \end{pmatrix}^{\rm T} \\\\ \xi_2 = \begin{pmatrix} 2 & 0 & 1 \end{pmatrix}^{\rm T} \\\\ \xi_3 = \begin{pmatrix} 1 & 2 & -2 \end{pmatrix}^{\rm T} \end{cases}$ ，$\xi_1 \not\bot \xi_2, \, \xi_1 \bot \xi_3, \, \xi_2 \bot \xi_3$ 

      - 令 $\eta_1 = \xi_1, \, \eta_3 = \xi_3$ 

      - $\xi_2$ 减去 $\xi_2 \text{ 在 } \xi_1$ 上的投影，得到的向量与 $\xi_1$ 垂直

         - <img src="./images/11-2.2 向量正交化.png" width="50%">

      - $\begin{array}{l} \xi_2 \text{ 在 } \xi_1 \text{ 上的投影 } &= \begin{Vmatrix} \xi_2 \end{Vmatrix} \cos \theta \, \xi_1^o \\\\ &= \begin{Vmatrix} \xi_2 \end{Vmatrix} \cos \theta \dfrac{ \xi_1 }{ \begin{Vmatrix} \xi_1 \end{Vmatrix} } &= \dfrac{ \begin{Vmatrix} \xi_1 \end{Vmatrix} \begin{Vmatrix} \xi_2 \end{Vmatrix} \cos \theta }{ \begin{Vmatrix} \xi_1 \end{Vmatrix} \begin{Vmatrix} \xi_1 \end{Vmatrix} } \xi_1 \\\\ &= \dfrac{ (\xi_2, \xi_1) }{ (\xi_1, \xi_1) } \xi_1 \end{array}$ 
         
         - $\theta \text{ 是 } \xi_1, \, \xi_2$ 的夹角，$\xi_1^o \text{ 是 } \xi_1$ 方向上的单位向量 

      - 所以：$\begin{array}{l} \\ \eta_2 &= \xi_2 - \dfrac{ (\xi_2, \xi_1) }{ (\xi_1, \xi_1) } \xi_1 \\\\ &= \begin{pmatrix} 2 \\ 0 \\ 1 \end{pmatrix} - \dfrac{-4}{5} \begin{pmatrix} -2 \\ 1 \\ 0 \end{pmatrix} \\\\ &= \begin{pmatrix} \dfrac{2}{5} & \dfrac{4}{5} & 1 \end{pmatrix}^{\rm T} \\ & \end{array}$ 

      - $\eta_1, \, \eta_2, \, \eta_3$ 正交 









