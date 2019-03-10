---
date: 2018-11-26
updated: 2018-12-23
---


微分方程：10

<br>

# 一、引言

按类求解，对号入座

1. 一阶方程
   
   - 可分离变量、齐次型、一阶线性型、可降价

2. 高阶方程
  
   - 齐次、非齐次

3. 应用题

【注】

1⃣️ 求解方程过程中，除了（一阶线性型公式法），只要出现 $\ln u$，且 $u$ 不知正负 $\implies$ 一律写 $\ln \mid u \mid$。

2⃣️ 

<br>

# 二、一阶方程的求解

<br>

## ㊀、变量可分离型

$$
\dfrac{ {\rm  d}y }{ {\rm d}x } = f(x, y) = g(x) \, h(y)
$$

<br>

## ㊁、齐次型方程

$$
\dfrac{ {\rm d}y }{ {\rm d}x } = f \left( \dfrac{y}{x} \right)
$$

<br>

## ㊂、一阶线性型

$$
y' + p(x)y = q(x), \qquad ( \; p(x), \, q(x) \text{ 为已知的连续函数 } )
$$

<br>

## ㊃、可降阶

<img src="./images/微分方程 可降阶.jpg" width="60%">

<br>

# 三、二阶方程的求解

<br>

## ㊀、二阶常系数齐次线性微分方程

$$
y'' + py' + qy = 0 \qquad ( \, p, \, q \text{ 为常数 } )
$$

<br>

## ㊁、二阶常系数非齐次线性微分方程

<br>

### 2

$$
y'' + py' + qy = e^{\alpha x}P_m(x) \qquad ( \, P_m(x) \text{ 为 } x \text{ 的 } m \text{ 次多项式 })
$$

<br>

### 2

$$
y'' + py' + qy = e^{\alpha x} \left[ \, P_m(x) \cos \beta x + P_n(x) \sin \beta x \, \right]
$$

$y^* = e^{\alpha x}\left[ \, Q_{l1}(x) \cos \beta x + Q_{l2}(x) \sin \beta x \, \right] x^k, \qquad l1 = l2 = \max\{ m, \, n \}​$ 

1. 一看：自由项中的 $\alpha, \, \beta \implies \alpha \pm \beta i$ 

2. 二算：$\lambda_1, \, \lambda_2$ 

3. 三比：$k = \begin{cases} 1, & \lambda_1, \lambda_2 = \alpha \pm \beta i \\\\ 0 & \lambda_1, \lambda_2 \not= \alpha \pm \beta i \end{cases}$ 

<br>

# 四、练习题

<br>

## 、齐次型方程

已知函数 $y(x) \, (x>0)$ 可微且满足方程 

$$
y(x) - 1 = \int_1^x \left[ \dfrac{ y^2(t) }{t^2} + \dfrac{ y(t) }{t} \right] \, {\rm d}t
$$

则 $y(x) =$ ________ 。

<br>

## 、一阶线性型

已知微分方程 $y' + y = f(x)$，其中 $f(x)$ 是 ${\rm R}$ 上的连续函数。

1⃣️ 若 $f(x) = x$，求方程的通解；

2⃣️ 若 $f(x)$ 是周期为 $T$ 的函数，证明：方程存在唯一的以 ${\rm T}$ 为周期的解。

<br>

## 、可降阶

求 $2yy'' = (y')^2 + y^2$ 满足 $\begin{cases} y(0) = 1, \\\\ y'(0) = -1 \end{cases}$ 的特解。 

<br>

## 、二阶常系数齐次线性微分方程

设 $\cos x$ 与 $xe^x$ 为 $4$ 阶常系数线性其次微分方程的两个解，则首项系数为 $1$ 的该方程为 ________ 。

<br>

# 五、参考答案

<br>

## 、齐次型方程

对 $y(x) - 1 = \int_1^x \left[ \dfrac{ y^2(t) }{t^2} + \dfrac{ y(t) }{t} \right] \, {\rm d}t$ 两边求导得：$y' = \dfrac{y^2}{x^2} + \dfrac{y}{x}$。

令 $y = ux \implies \dfrac{ {\rm d}y }{ {\rm d}x } = \dfrac{ {\rm d}u }{ {\rm d}x } \, x + u$ 

$\begin{array}{l} & \dfrac{ {\rm d}u }{ {\rm d}x } \, x + u = u^2 + u \\\\ \implies & \dfrac{1}{u^2} \, {\rm d}u = \dfrac{1}{x} \, {\rm d}x \\\\ \implies & \int \dfrac{1}{u^2} \, {\rm d}u = \int \dfrac{1}{x} \, {\rm d}x \\\\ \implies & -\dfrac{1}{u} = \ln x + C \quad & (\text{ 由于 } x>0) \\\\ \implies & y = - \dfrac{x}{ \ln x + C } \end{array}$ 

由 $y(x) - 1 = \int_1^x \left[ \dfrac{ y^2(t) }{t^2} + \dfrac{ y(t) }{t} \right] \, {\rm d}t$ 得 $y(1) = 1$。

$\begin{array}{l} \implies & 1 = - \dfrac{1}{0+C} \implies C=-1 \\\\ \implies & y = \dfrac{x}{1 - \ln x}, \quad (x>0) \end{array}$ 

<br>

## 、一阶线性型

1⃣️ 

当 $f(x) = x$ 时，$y' + y = x$。

$\begin{array}{l} y &= e^{ -\int {\rm d}x } \left[ \int \left( e^{ \int {\rm d}x } \cdot x \right) {\rm d}x + C_1 \right] \\\\ &= x - 1 + C_1 e^{-x} \quad (\forall C_1 \in {\rm R}) \end{array}$ 

2⃣️ 

$\begin{array}{l} y &= e^{ -\int {\rm d}x } \left\{ \int \left[ e^{ \int {\rm d}x } \cdot f(x) \right] {\rm d}x + C_2 \right\} \\\\ &= e^{-x} \left[ \, \int e^x \cdot f(x) \, {\rm d}x + C_2 \, \right] \end{array}$ 

⭐️

$$
\int e^x \cdot f(x) \, {\rm d}x = \int_0^x e^t f(t) \, {\rm d}t + C, \quad (C \in {\rm R})
$$

$\begin{array}{l} y &= e^{-x} \left[ \, \int_0^x e^t f(t) \, {\rm d}t + C_2 \, \right] \end{array}$ 

$\begin{array}{l} \\ \therefore & y(x+T) - y(x) \\\\ = & e^{ -(x+T) } \left[ \, \int_0^{x+T} e^t f(t) \, {\rm d}t + C_2 \, \right] - e^{-x} \left[ \, \int_0^x e^t f(t) \, {\rm d}t + C_2 \, \right] \\\\ = & e^{-x} \left[ \left( \dfrac{1}{e^T} - 1 \right) C_2 + \dfrac{1}{e^T} \int_0^{x+T} e^t f(t) \, {\rm d}t - \int_0^x e^t f(t) \, {\rm d}t \right] \\ & \end{array}$ 

其中

$\begin{array}{l} \dfrac{1}{e^T} \int_0^{x+T} e^t f(t) \, {\rm d}t &= \dfrac{1}{e^T} \int_0^{T} e^t f(t) \, {\rm d}t + \dfrac{1}{e^T} \int_T^{x+T} e^t f(t) \, {\rm d}t \\\\ &= \dfrac{1}{e^T} \int_0^{T} e^t f(t) \, {\rm d}t + \int_T^{x+T} e^{t-T} f(t) \, {\rm d}t \\\\ \text{令 } t = u+T &= \dfrac{1}{e^T} \int_0^{T} e^t f(t) \, {\rm d}t + \int_0^x e^u f(u+T) \, {\rm d}u \\\\ f(u) = f(u+T) &= \dfrac{1}{e^T} \int_0^{T} e^t f(t) \, {\rm d}t + \int_0^x e^u f(u) \, {\rm d}u \\\\ &= \dfrac{1}{e^T} \int_0^{T} e^t f(t) \, {\rm d}t + \int_0^x e^t f(t) \, {\rm d}t \\ & \end{array}$ 

$\begin{array}{l} \therefore && y(x+T) - y(x) \\\\ & = & e^{-x} \left[ \left( \dfrac{1}{e^T} - 1 \right) C_2 + \dfrac{1}{e^T} \int_0^{T} e^t f(t) \, {\rm d}t + \int_0^x e^t f(t) \, {\rm d}t - \int_0^x e^t f(t) \, {\rm d}t \right] \\\\ & = & e^{-x} \left[ \left( \dfrac{1}{e^T} - 1 \right) C_2 + \dfrac{1}{e^T} \int_0^{T} e^t f(t) \, {\rm d}t \right] = 0 \\\\ \implies & & C_2 = \dfrac{ \int_0^{T} e^t f(t) \, {\rm d}t }{ e^T - 1 } \quad ( \text{ 唯一确定 } ) \\ & \end{array}$ 

故存在唯一的以 ${\rm T}$ 为周期的解，当 $C = \dfrac{ \int_0^{T} e^t f(t) \, {\rm d}t }{ e^T - 1 }$ 时。

<br>

## 、可降阶

求 $2yy'' = (y')^2 + y^2$ 满足 $\begin{cases} y(0) = 1, \\\\ y'(0) = -1 \end{cases}$ 的特解。

令 $y' = p, \, y'' = \dfrac{ {\rm d}p }{ {\rm d}y } p$。

$\begin{array}{l} \implies & 2y \cdot \dfrac{ {\rm d}p }{ {\rm d}y } p = p^2 + y^2 \qquad ( \text{ 记 } \dfrac{ {\rm d}p }{ {\rm d}y } = p' ) \\\\ \implies & p' + ( -\dfrac{1}{2y} )p = \dfrac{y}{2p} \\\\ \implies & pp' + ( -\dfrac{1}{2y} )p^2 = \dfrac{y}{2} \qquad ( \text{ 令 } p^2 = z, \; 2pp' = z' ) \\\\ \implies & z' + ( -\dfrac{1}{y} )z = y \\\\ \implies & z = e^{ -\int (-1/y) \, {\rm d}y } \left[ \int e^{ \int (-1/y) \, {\rm d}y } \cdot y \, {\rm d}y + C_1 \right] \\\\ \implies & y'^2 = p^2 = z = y^2 + C_1 y \qquad \text{ 由于 } \begin{cases} p(0) = y'(0) = -1 \\\\ y(0) = 1 \end{cases} \\\\ \implies & C_1 = 0 \implies p^2 = y^2 \qquad ( \text{ 由于 } p(0) = -y(0) ) \\\\ \implies & p = -y \implies y' + y = 0 \\\\ \implies & y = e^{ -\int {\rm d}x } \left[ \int e^{ \int {\rm d}x } \cdot 0 \, {\rm d}x + C_2 \right] \\\\ \implies & y = C_2 e^{-x} \qquad ( \text{ 由于 } y(0) = 1 ) \\\\ \implies & C_2 = 1 \implies y = e^{-x} \end{array}$ 

<br>

## 、二阶常系数齐次线性微分方程

$4$ 阶方程分解为一个二阶方程乘另一个二阶方程。

由 $\cos x$ 联想到 $\Delta < 0$ 的情况，$\cos x = e^{0x} ( 1 \cdot \cos 1 x + 0 \sin 1 x )$，所以 $\alpha = 0, \, \beta = 1$，所以该方程为 $\lambda^2 = -1 \implies \lambda^2 + 1 = 0$。

$xe^x = (0 + 1 \cdot x) e^{1 \cdot x} \implies \lambda_1 = \lambda_2 = 1$，所以该方程为 $(\lambda - 1)^2 = 0$。

$\begin{array}{l} \\ & (\lambda^2 + 1)(\lambda - 1)^2 \\\\ = & \lambda^4 - 2\lambda^3 + 2\lambda^2 - 2\lambda + 1 = 0 \\\\ \implies & y^{(4)} - 2y''' + 2y'' - 2y' + y = 0 \end{array}$ 
