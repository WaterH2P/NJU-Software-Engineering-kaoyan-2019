---
date: 2018-12-6
updated: 2018-12-6
---


11 分大题

【综述】

1. 求 $A$ 的特征值、特征向量

2. $A$ 与 $B$ 相似，相似对角化

3. 化二次型为标准形、规范形

【A 均为正方形】

<br>

# 一、A 的特征值、特征向量

<br>

## ㊁、性质

$$
\begin{array}{l}
    (1) & \sum\limits_{i=1}^n a_{ii} = tr(A) = \sum\limits_{i=1}^n \lambda_{i} \\\\
    (2) & \mid A \mid = \prod\limits_{i=1}^n \lambda_i
\end{array}
$$

<br>

## ㊂、⭐定义法求特征值

$$
A \xi = \lambda \xi, \quad ( \,\xi \not= 0 \,)
$$

⭐ $\xi \not= 0$ 

<br>

## ㊃、特征方程求特征值

<br>

# 二、矩阵相似

<br>

## ㊀、定义

设 $A, B$ 是两个 n 阶矩阵，若存在 n 阶可逆矩阵 P，使得 $P^{-1}AP = B$，则称 A 相似于 B，记成 A ~ B 。

<br>

## ㊁、性质

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

## ㊂、A ~ Λ

<br>

### 1、

若 $A \sim \Lambda$ $\iff$ $A \text{ 有 } n \text{ 个线性无关的特征向量 }$ 

<br>

### 2、重要结论

1️⃣ 

普通 $A \begin{cases} \lambda_1 \not= \lambda_2 \implies \xi_1 \text{ 与 } \xi_2 \text{ 无关 } \\\\ \lambda_1 = \lambda_2, \text{ 则不确定 } \end{cases}$ 

2️⃣ 

实对称 $A \begin{cases} \lambda_1 \not= \lambda_2 \implies \xi_1 \perp \xi_2 \text{ 正交 } \\\\ \lambda_1 = \lambda_2 \implies \xi_1 \text{ 与 } \xi_2 \text{ 一定无关，不一定正交 } \end{cases}$ 

<br>

### 3、A ~ Λ 判别方法

1️⃣ 两个充分方法

- $A$ 有 $n$ 个不同的特征值，则 $A \sim \Lambda$；

- $A$ 为实对称矩阵，则 $A \sim \Lambda$；

2️⃣ 两个必要条件

- $A$ 有 $n$ 个线性无关的特征向量 $\iff$ $A \sim \Lambda$；

- $n_i = n - {\rm r}( \lambda_i E - A)$，$\lambda_i$ 为 $n_i$ 重根 $\iff$ $A \sim \Lambda$。

   - $\lambda_1 = \lambda_2 = \cdots = \lambda_s$ 作为 $A$ 的 $s$ 重根，要存在 $s$ 个线性无关的特征向量，即对应 $(\lambda E - A)X = 0$ 的基础解系有 $s$ 个独立变量，即 $s = S = n - {\rm r}(\lambda E - A)$。

   - $\lambda_i$ 为 $n_i$ 重根，$n_i = n - {\rm r}(\lambda E - A)$

<br>

## ㊃、A ~ B

1️⃣ 证 $A \sim \Lambda_1$，2️⃣ 证 $B \sim \Lambda_2$，3️⃣ $\Lambda_1 = \Lambda_2$，由传递性得 $A \sim B$。

<br>

## ㊄、求 $A^n$ 

若存在可逆矩阵 $P$，使得 $P^{-1} A P = \Lambda$，则 $A^n = P \Lambda^n P^{-1}$。

<br>

# 三、二次型化标准形、规范形

<br>

## ㊁、化 f 为标准形

$f = d_1 x_1^2 + d_2 x_2^2 + \cdots + d_n x_n^2, \quad (d \text{ 为实数 })$ $\implies$ 标准形

$f = x_1^2 + x_2^2 + \cdots + x_p^2 - x_{p+1}^2 - \cdots - x_{p+q}^2, \quad ( p \text{ 为正惯性指数， } q \text{ 为负惯性指数 } )$ $\implies$ 规范形（⭐️ 正的都写在前面）

<br>

### 1、配方法（拉氏配方法）

【例题】将 $f(x_1, \, x_2, \, x_3) = 4x_2^2 - 3x_3^2 + 4x_1x_2 - 4x_1x_3 + 8x_2x_3$ 用配方法化为标准形、规范形。

【分析】

从左，找第一个 $x_i^2$，配完全平方，依次如法炮制，直到配完所有的完全平方。

【解答】

$\begin{array}{l} f &= 4x_2^2 - 3x_3^2 + 4x_1x_2 - 4x_1x_3 + 8x_2x_3 \\\\      &= 4x_2^2 + 4x_1x_2 + 8x_2x_3 - 3x_3^2 - 4x_1x_3 \\\\      &= (2x_2 + x_1 + 2x_3)^2 - x_1^2 - 7x_3^2 - 8x_1x_3 \\\\      &= (x_1 + 2x_2 + 2x_3)^2 - (x_1 + 4x_3)^2 + 9x_3^2 \end{array}$ 

令 $\begin{cases} y_1 = x_1 + 2x_2 + 2x_3 \\\\      y_2 = x_1 + 4x_3 \\\\      y_3 = x_3 \end{cases}$ $\implies$ $\begin{pmatrix} y_1 \\\\ y_2 \\\\ y_3 \end{pmatrix} = \begin{pmatrix} 1 & 2 & 2 \\\\ 1 & 0 & 4 \\\\ 0 & 0 & 1 \end{pmatrix} \begin{pmatrix} x_1 \\\\ x_2 \\\\ x_3 \end{pmatrix}$ $\implies$ $f = y_1^2 - y_2^2 + 9y_e^2$ （标准形）

最后要对方程求逆，写成 $X = CY$ $\implies$ $\begin{pmatrix} x_1 \\\\ x_2 \\\\ x_3 \end{pmatrix} = \begin{pmatrix} 0 & 1 & -4 \\\\ \dfrac{1}{2} & -\dfrac{1}{2} & 1 \\\\ 0 & 0 & 1 \end{pmatrix} \begin{pmatrix} y_1 \\\\ y_2 \\\\ y_3 \end{pmatrix}$ 

再令 $\begin{cases} y_1 = z_1 \\\\ y_3 = \dfrac{z_2}{3} \\\\ y_2 = z_3 \end{cases}$ $\implies$ $\begin{pmatrix} y_1 \\\\ y_2 \\\\ y_3 \end{pmatrix} = \begin{pmatrix} 1 & 0 & 0 \\\\ 0 & 0 & 1 \\\\ 0 & \dfrac{1}{3} & 0 \end{pmatrix} \begin{pmatrix} z_1 \\\\ z_2 \\\\ z_3 \end{pmatrix}$ $\implies$ $f = z_1^2 + z_2^2 - z_3^2$ （规范形）

故 $\begin{array}{l} X &= \begin{pmatrix} 0 & 1 & -4 \\\\ \dfrac{1}{2} & -\dfrac{1}{2} & 1 \\\\ 0 & 0 & 1 \end{pmatrix}Y \\\\      &= \begin{pmatrix} 0 & 1 & -4 \\\\ \dfrac{1}{2} & -\dfrac{1}{2} & 1 \\\\ 0 & 0 & 1 \end{pmatrix} \begin{pmatrix} 1 & 0 & 0 \\\\ 0 & 0 & 1 \\\\ 0 & \dfrac{1}{3} & 0 \end{pmatrix}Z \\\\      &= \begin{pmatrix} 0 & -\dfrac{4}{3} & 1 \\\\ \dfrac{1}{2} & \dfrac{1}{3} & -\dfrac{1}{2} \\\\ 0 & \dfrac{1}{3} & 0 \end{pmatrix}Z \end{array}$ 

<br>

### 2、正交变换法

【例题】将 $f(x_1, \, x_2, \, x_3) = 4x_2^2 - 3x_3^2 + 4x_1x_2 - 4x_1x_3 + 8x_2x_3$ 1⃣️ 用正交变换法化为标准形，并写出正交阵 $P$。2⃣️ 化为规范形并写出变换矩阵。

【分析】

1. 求 $A$ 的 $\lambda, \, \xi$

2. 将 $\xi_1, \, \cdots, \, \xi_n$ 正交化、标准化为 $\eta_1, \, \cdots, \, \eta_n$ （规范正交基）

3. 令 $P=(\eta_1, \, \cdots, \, \eta_n)$，则 $f = x^{\rm T} A X = Y^{\rm T} \Lambda Y$

【解答】

$A = \begin{pmatrix} 0 & 2 & -2 \\ 2 & 4 & 4 \\ -2 & 4 & -3 \end{pmatrix}$ $\implies$ $\begin{cases} \lambda_1 = 1, & \xi_1 = \begin{pmatrix} -2 & 0 & 1 \end{pmatrix}^{\rm T} \\\\ \lambda_2 = 6, & \xi_2 = \begin{pmatrix} 1 & 5 & 2 \end{pmatrix}^{\rm T} \\\\ \lambda_3 = -6, & \xi_3 = \begin{pmatrix} 1 & -1 & 2 \end{pmatrix}^{\rm T} \end{cases}$ 

正交化 $\begin{cases} \xi_1 \to & \eta_1 = \begin{pmatrix} -\dfrac{2}{ \sqrt{5} } & 0 & \dfrac{1}{ \sqrt{5} } \end{pmatrix}^{\rm T} \\\\      \xi_2 \to & \eta_2 = \begin{pmatrix} \dfrac{1}{ \sqrt{30} } & \dfrac{5}{ \sqrt{30} } & \dfrac{2}{ \sqrt{30} } \end{pmatrix}^{\rm T} \\\\      \xi_3 \to & \eta_3 = \begin{pmatrix} \dfrac{1}{ \sqrt{6} } & -\dfrac{1}{ \sqrt{6} } & \dfrac{2}{ \sqrt{6} } \end{pmatrix}^{\rm T} \end{cases}$ 

令 $P = \begin{pmatrix} \eta_1, \, \eta_2, \, \eta_3 \end{pmatrix}$，$X = PY$，则 $f = x^{\rm T} A x = Y^{\rm T} \Lambda Y$。

$P^{-1} A P = \Lambda$ $\implies$ $f = y_1^2 + 6y_2^2 - 6y_3^2$ （标准形）

令 $\begin{cases} y_1 = z_1 \\\\ y_2 = \dfrac{ z_2 }{ \sqrt{6} } \\\\ y_3 = \dfrac{ z_3 }{ \sqrt{6} } \end{cases}$ $\implies$ $\begin{pmatrix} y_1 \\\\ y_2 \\\\ y_3 \end{pmatrix} = \begin{pmatrix} 1 & 0 & 0 \\\\ 0 & \dfrac{1}{ \sqrt{6} } & 0 \\\\ 0 & 0 & \dfrac{1}{ \sqrt{6} } \end{pmatrix} \begin{pmatrix} z_1 \\\\ z_2 \\\\ z_3 \end{pmatrix}$ $\implies$ $f = z_1^2 + z_2^2 - z_3^2$ （规范形）

故 $\begin{array}{l} X &= PY \\\\      &= \begin{pmatrix} \dfrac{2}{ \sqrt{5} } & \dfrac{1}{ 6\sqrt{5} } & \dfrac{1}{6} \\\\ 0 & \dfrac{5}{ 6\sqrt{5} } & -\dfrac{1}{6} \\\\ -\dfrac{1}{ \sqrt{5} } & \dfrac{1}{ 3\sqrt{5} } & \dfrac{1}{3} \end{pmatrix}Z \end{array}$ 

<br>

## ㊂、f 的正定性

【定义】

- 若 $\forall x \not= 0$，均有 $f = x^{\rm T} A x > 0$，称 $f$ 正定，$A$ 正定。

【必要条件】

- $A$ 正定，则 $a_{ii} > 0$，$\mid A \mid > 0$，$A^{\rm T} = A$。

   - 在抽象证明时必须验证 $A^{\rm T} = A$

⭐️【充要条件】

$$
\begin{array}{l} 
	f \text{ 正定 } 
	& \iff A \text{ 正定 } \iff A^{-1} \text{ 正定 } \iff \lambda_i > 0 \\\\      
	& \iff p \, (\text{ 正惯性指数 }) = n \\\\
    & \iff \text{ 顺序主子式均大于 } 0 \\\\      
	& \iff A \text{ 合同于 } E \\\\      
	& \iff \exists \, \text{ 可逆矩阵 } D \text{ ，使 } A = D^{\rm T}D \end{array}
$$

- $\begin{vmatrix} a_{11} & & \\\\ & \ddots & \\\\ & & a_{nn} \end{vmatrix}$ 的顺序主子式是：

   - $\begin{vmatrix} a_{11} \end{vmatrix}$，$\begin{vmatrix} a_{11} & a_{12} \\\\ a_{21} & a_{22} \end{vmatrix}$，$\begin{vmatrix} a_{11} & a_{12} & a_{13} \\\\ a_{21} & a_{22} & a_{23} \\\\ a_{31} & a_{32} & a_{33} \end{vmatrix}$ …………

- 合同

   - 若 $C$ 可逆，且 $C^{\rm T}AC = B$，称 $A, \, B$ 合同。

<br>

# 四、矩阵的等价、相似、合同

<br>

## ㊀、矩阵的等价

$A, \, B$ 是同型矩阵，则

$$
A, \, B \text{ 等价 } \iff {\rm r}(A) = {\rm r}(B)
$$ 

<br>

## ㊁、矩阵的相似

$A, \, B$ 是同阶矩阵，则

$$
A, \, B \text{ 相似 } \iff \text{ 有可逆矩阵 } P \text{ ，使 } P^{-1} A P = B
$$ 

<br>

## ㊂、矩阵的合同

$A, \, B$ 是同阶矩阵，则

$$
\begin{array}{l}
    A, \, B \text{ 合同 } 
    & \iff \text{ 有可逆矩阵 } C \text{ ，使 } C^{\rm T} A C = B \\\\
    & \iff x^{\rm T} Ax, \, x^{\rm T} Bx \text{ 有相同的正、负惯性指数 } \\\\
    & \iff x^{\rm T} Ax, \, x^{\rm T} Bx \text{ 有相同的秩及正（或负）惯性指数 }
\end{array}
$$ 

<br>

# 五、练习题

<br>

## 一㊂、特征值定义法

设 $\alpha, \, \beta$ 均为 $n$ 维单位列向量，且 $\alpha, \, \beta$ 正交。$A = \alpha \beta^{\rm T} + \beta \alpha^{\rm T}$，证明 1️⃣ $\mid A \mid = 0$；2️⃣ $\alpha + \beta, \, \alpha - \beta$ 均是 $A$ 的特征向量。

<br>

## 二㊃、A ~ B

证明：$n$ 阶矩阵 $\begin{bmatrix} 1 & 1 & \cdots & 1 \\ 1 & 1 & \cdots & 1 \\ \vdots & \vdots & & \vdots \\ 1 & 1 & \cdots & 1 \end{bmatrix}$ 与 $\begin{bmatrix} 0 & \cdots & 0 & 1 \\ 0 & \cdots & 0 & 2 \\ \vdots & & \vdots & \vdots \\ 0 & \cdots & 0 & n \end{bmatrix}$ 相似。

<br>

## 三㊁、化 f 为标准形

设实二次型 $f(x_1, \, x_2, \, x_3) = (x_1 - x_2 + x_3)^2 + (x_2 + x_3)^2 + (x_1 + \alpha x_3)^2$，其中 $\alpha$ 是参数。1⃣️ 求 $f(x_1, \, x_2, \, x_3) = 0$ 的解；2⃣️ 求 $f(x_1, \, x_2, \, x_3)$ 的规范形。

<br>

## 三㊂、f 的正定性

<br>

### 具体型

设 

$$
f(x_1, \, x_2, \, x_3) = (x_1 - ax_2)^2 + (x_2 - bx_3)^2 + (x_3 - cx_1)^2
$$

其中 $abc \not= 1$。证明：$f(x_1, \, x_2, \, x_3)$ 是正定二次型。

<br>

### 抽象型

设 $B$ 是 $n$ 阶反对陈矩阵，$E$ 是 $n$ 阶单位矩阵，$\lambda > 0$，证明：$\lambda E - B^2$ 是正定矩阵。

<br>

# 六、参考答案

<br>

## 一㊂、特征值定义法

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

## 二㊃、A ~ B

设 $A = \begin{bmatrix} 1 & 1 & \cdots & 1 \\ 1 & 1 & \cdots & 1 \\ \vdots & \vdots & & \vdots \\ 1 & 1 & \cdots & 1 \end{bmatrix}$，$B = \begin{bmatrix} 0 & \cdots & 0 & 1 \\ 0 & \cdots & 0 & 2 \\ \vdots & & \vdots & \vdots \\ 0 & \cdots & 0 & n \end{bmatrix}$。

$\mid \lambda E - A \mid = 0$ 解得 $\lambda_1, \, \lambda_2, \, \cdots, \, \lambda_{n-1} = 0$，$\lambda_n = n$。

由于 $A$ 是实对称矩阵，所以 $A \sim \Lambda_1 = \begin{pmatrix} 0 & & & \\ & \ddots & & \\ & & 0 & \\ & & & n \end{pmatrix}$。

$\mid \eta E - B \mid = 0$ 解得 $\eta_1, \, \eta_2, \, \cdots, \, \eta_{n-1} = 0$，$\eta_n = n$。

$0$ 为 $n-1$ 重根，且 $n-1 = n - {\rm r}(0 \cdot E - B) = n-1$，所以 $B \sim \Lambda_2 = \begin{pmatrix} 0 & & & \\ & \ddots & & \\ & & 0 & \\ & & & n \end{pmatrix}$。

$\Lambda_1 = \Lambda_2$ $\implies$ $A \sim B$

<br>

## 三㊁、化 f 为标准形

1⃣️ 

当 $f(x_1, \, x_2, \, x_3) = 0$ 时，$\begin{cases} x_1 - x_2 + x_3 = 0 \\\\ x_2 + x_3 = 0 \\\\ x_1 + ax_3 = 0 \end{cases}$ 

令 $A = \begin{pmatrix} 1 & -1 & 1 \\\\ 0 & 1 & 1 \\\\ 1 & 0 & a \end{pmatrix} \to \begin{pmatrix} 1 & -1 & 1 \\\\ 0 & 1 & 1 \\\\ 0 & 0 & a-2 \end{pmatrix}$ 

$1^\circ \;$ 当 $a \not= 2$ 时，${\rm r}(A) = 3$，方程只有零解，$x_1 = x_2 = x_3 = 0$。

$2^\circ \;$ 当 $a = 2$ 时，$S = n - {\rm r}(A) = 1$，$\xi = (-2, \, -1, \, 1)^{\rm T}$，所以 $f(x_1, \, x_2, \, x_3) = 0$ 的解为 $k(-2, \, -1, \, 1)^{\rm T}, \, ( \forall \, k \in {\rm R} )$ 

2⃣️ 

令 $\begin{cases} y_1 = x_1 - x_2 + x_3 \\\\ y_2 = x_2 + x_3 \\\\ y_3 = x_1 + ax_3 \end{cases}$，即 $\begin{pmatrix} y_1 \\\\ y_2 \\\\ y_3 \end{pmatrix} = \begin{pmatrix} 1 & -1 & 1 \\\\ 0 & 1 & 1 \\\\ 1 & 0 & a \end{pmatrix} \begin{pmatrix} x_1 \\\\ x_2 \\\\ x_3 \end{pmatrix}$，令 $C = \begin{pmatrix} 1 & -1 & 1 \\\\ 0 & 1 & 1 \\\\ 1 & 0 & a \end{pmatrix}$。 

$1^\circ \;$ 当 $a \not= 2$ 时，$C$ 可逆 $\implies$ $X = C^{-1}Y$ $\implies$ $f = y_1^2 + y_2^2 + y_3^2$

$2^\circ \;$ 当 $a = 2$ 时，$\begin{array}{l} \\ f &= 2 x_1^2 + 2 x_2^2 + 6 x_3^2 - 2 x_1 x_2 + 6 x_1 x_3 \\\\      &= 2( x_1 - \dfrac{1}{2} x_2 + \dfrac{3}{2} x_3 )^2 + \dfrac{3}{2} (x_2 + x_3)^2 + 0 \cdot x_3^2 \\ & \end{array}$ 

令 $\begin{cases} y_1 = x_1 - \dfrac{1}{2}x_2 + \dfrac{3}{2}x_3 \\\\ y_2 = x_2 + x_3 \\\\ y_3 = x_3 \end{cases}$ $\implies$ $\begin{pmatrix} y_1 \\\\ y_2 \\\\ y_3 \end{pmatrix} = \begin{pmatrix} 1 & -\dfrac{1}{2} & \dfrac{3}{2} \\\\ 0 & 1 & 1 \\\\ 0 & 0 & 1 \end{pmatrix} \begin{pmatrix} x_1 \\\\ x_2 \\\\ x_3 \end{pmatrix}$ $\implies$ $f = 2y_1^2 + \dfrac{3}{2} y_2^2$ 

令 $\begin{cases} y_1 = \dfrac{z_1}{ \sqrt{2} } \\\\ y_2 = \dfrac{z_2}{ \sqrt{3/2} } \\\\ y_3 = z_3 \end{cases}$ $\implies$ $\begin{pmatrix} z_1 \\\\ z_2 \\\\ z_3 \end{pmatrix} = \begin{pmatrix} \sqrt{2} & 0 & 0 \\\\ 0 & \sqrt{ \dfrac{3}{2} } & 0 \\\\ 0 & 0 & 1 \end{pmatrix} \begin{pmatrix} y_1 \\\\ y_2 \\\\ y_3 \end{pmatrix}$ $\implies$ $f = z_1^2 + z_2^2$ 

$\implies$ $\begin{pmatrix} x_1 \\\\ x_2 \\\\ x_3 \end{pmatrix} = \begin{pmatrix} \dfrac{ \sqrt{2} }{2} & \dfrac{ \sqrt{6} }{6} & -2 \\\\ 0 & \sqrt{ \dfrac{2}{3} } & -1 \\\\ 0 & 0 & 1 \end{pmatrix} \begin{pmatrix} z_1 \\\\ z_2 \\\\ z_3 \end{pmatrix}$ $\implies$ $f = z_1^2 + z_2^2$ 

<br>

## 三㊂、f 的正定性

<br>

### 具体型

方法 1⃣️ 定义法

由题可知，$f \geq 0$。当 $f=0$ 时，即 $\begin{cases} x_1 - ax_2 = 0 \\\\ x_2 - bx_3 = 0 \\\\ x_3 - cx_1 = 0 \end{cases}$ 

由于 $\begin{vmatrix} 1 & -a & 0 \\\\ 0 & 1 & -b \\\\ -c & 0 & 1 \end{vmatrix} = 1 - abc \not= 0$，所以 $\begin{cases} x_1 - ax_2 = 0 \\\\ x_2 - bx_3 = 0 \\\\ x_3 - cx_1 = 0 \end{cases}$ 只有零解，即 $x_1 = x_2 = x_3 = 0$ 

所以当 $\begin{pmatrix} x_1 \\ x_2 \\ x_3 \end{pmatrix} \not= \begin{pmatrix} 0 \\ 0 \\ 0 \end{pmatrix}$ 时，$f > 0$，所以 $f(x_1, \, x_2, \, x_3)$ 是正定二次型。

方法 2⃣️ 

令 $\begin{cases} x_1 - ax_2 = y_1 \\\\ x_2 - bx_3 = y_2 \\\\ x_3 - cx_1 = y_3 \end{cases}$，即 $\begin{pmatrix} y_1 \\\\ y_2 \\\\ y_3 \end{pmatrix} = \begin{pmatrix} 1 & -a & 0 \\\\ 0 & 1 & -b \\\\ -c & 0 & 1 \end{pmatrix} \begin{pmatrix} x_1 \\\\ x_2 \\\\ x_3 \end{pmatrix}$ 

令 $D = \begin{pmatrix} 1 & -a & 0 \\\\ 0 & 1 & -b \\\\ -c & 0 & 1 \end{pmatrix}$，由于 $\mid D \mid = 1 - abc \not= 0$，所以存在 $D^{-1}$。

所以令 $\begin{pmatrix} x_1 \\ x_2 \\ x_3 \end{pmatrix} = D^{-1} \begin{pmatrix} y_1 \\ y_2 \\ y_3 \end{pmatrix}$ $\implies$ $f = y_1^2 + y_2^2 + y_3^2$，所以对于任意 $\begin{pmatrix} x_1 \\ x_2 \\ x_3 \end{pmatrix} \not= \begin{pmatrix} 0 \\ 0 \\ 0 \end{pmatrix}$ 即 $\begin{pmatrix} y_1 \\ y_2 \\ y_3 \end{pmatrix} \not= \begin{pmatrix} 0 \\ 0 \\ 0 \end{pmatrix}$，$f > 0$，所以 $f(x_1, \, x_2, \, x_3)$ 是正定二次型。

方法 3⃣️ 

$\begin{array}{l} f &= \begin{pmatrix} x_1 - ax_2 & x_2 - bx_3 & x_3 - cx_1 \end{pmatrix} \begin{pmatrix} x_1 - ax_2 \\\\ x_2 - bx_3 \\\\ x_3 - cx_1 \end{pmatrix} \\\\      &= \begin{pmatrix} x_1 & x_2 & x_3 \end{pmatrix} \begin{pmatrix} 1 & 0 & -c \\\\ -a & 1 & 0 \\\\ 0 & -b & 1 \end{pmatrix} \begin{pmatrix} 1 & -a & 0 \\\\ 0 & 1 & -b \\\\ -c & 0 & 1 \end{pmatrix} \begin{pmatrix} x_1 \\\\ x_2 \\\\ x_3 \end{pmatrix} \end{array}$ 

令 $D = \begin{pmatrix} 1 & -a & 0 \\\\ 0 & 1 & -b \\\\ -c & 0 & 1 \end{pmatrix}$，$\mid D \mid = 1 - abc \not= 0$，所以 $D$ 可逆。

假设 $f = x^{\rm T}Ax = x^{\rm T}D^{\rm T}Dx$，所以存在可逆矩阵 $D$，使得 $A = D^{\rm T}D$，所以 $f(x_1, \, x_2, \, x_3)$ 是正定二次型。

<br>

### 抽象型

⭐️ 勿忘先验证欲证矩阵的对称性 ⭐️

$\begin{array}{l} \\ (\lambda E - B^2)^{\rm T} &= (\lambda E)^{\rm T} - (B^2)^{\rm T} \\\\ &= \lambda E - ( B^{\rm T} )^2 \\\\ &= \lambda E - (-B)^2 \\\\ &= \lambda E - B^2 \\ & \end{array}$ 

$\forall \, x \not= 0$，$\begin{array}{l} x^{\rm T}(\lambda E - B^2)x &= \lambda x^{\rm T}x - x^{\rm T} B^2 x \\\\ &= \lambda \begin{Vmatrix} x \end{Vmatrix}^2 + x^{\rm T} B^{\rm T} B x \\\\ &= \lambda \begin{Vmatrix} x \end{Vmatrix}^2 + \begin{Vmatrix} Bx \end{Vmatrix}^2 > 0 \end{array}$，所以 $\lambda E - B^2$ 是正定二次型。