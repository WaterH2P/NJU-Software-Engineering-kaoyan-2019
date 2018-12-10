---
title: 一元函数微积分学 · 应用
date: 2018-8-2
updated: 2018-11-25
tags: [maths,高数,kaoyan]
mathjax: true

description: 做笔记，喝凉茶，做习题
real-date: 2018-11-25
---

<!-- 
$\begin{array}{l} ( {\rm A} ) \, 1 \qquad & ( {\rm B} ) \, 2 \\\\ ( {\rm C} ) \, 3 \qquad & ( {\rm D} ) \, 4 \end{array}$ 
-->

<!-- 
$\begin{array}{l} \end{array}$
-->

<!-- 
⭐
️ -->

## 一、几何应用

<br>

#### ㊀、极值

<img src="https://github.com/WaterH2P/WaterH2P.github.io/raw/master/img/images/%E6%9E%81%E5%80%BC%E5%88%A4%E5%88%AB%E6%B3%95.jpg" width="70%">

<br>

###### 1、证明判别法二

构造 $\lim\limits_{x \to x_0} \dfrac{ f(x) - f(x_0) }{ (x-x_0)^2 }$ 

由于函数二阶可导，所以 $\lim\limits_{x \to x_0} \dfrac{ f(x) - f(x_0) }{ (x-x_0)^2 } = \dfrac{1}{2} \lim\limits_{x \to x_0} \dfrac{ f'(x) }{x-x_0}$ 

由于 $f'(x_0) = 0$，所以 $\dfrac{1}{2} \lim\limits_{x \to x_0} \dfrac{ f'(x) }{x-x_0} = \dfrac{1}{2} \lim\limits_{x \to x_0} \dfrac{ f'(x) - f'(x_0) }{x-x_0} = \dfrac{1}{2} f''(x_0)$ 

由于 $\dfrac{1}{2} f''(x_0)$ 存在，所以 $\lim\limits_{x \to x_0} \dfrac{ f(x) - f(x_0) }{ (x-x_0)^2 }$ 存在。

则 $x \to x_0$ 时， $\begin{cases} f''(x_0) > 0 \implies \dfrac{ f(x) - f(x_0) }{ (x-x_0)^2 } > 0 \implies f(x) > f(x_0) \\\\ f''(x_0) < 0 \implies \dfrac{ f(x) - f(x_0) }{ (x-x_0)^2 } < 0 \implies f(x) < f(x_0) \end{cases}$ 

<br>

#### ㊁、拐点

凹曲线和凸曲线的分界点

<img src="https://github.com/WaterH2P/WaterH2P.github.io/raw/master/img/images/%E6%8B%90%E7%82%B9%E5%88%A4%E5%88%AB%E6%B3%95.png" width="70%">

<br>

###### 1、证明判别法二

构造 $\lim\limits_{x \to x_0} \dfrac{ f''(x) - f''(x_0) }{x-x_0} = f'''(x_0)$ 

则 $x \to x_0$ 时， $\begin{cases} f'''(x_0) > 0 \implies \begin{cases} x < x_0 \implies f''(x) < 0 \\\\ x > x_0 \implies f''(x) > 0 \end{cases} \\\\ f'''(x_0) < 0 \implies \begin{cases} x < x_0 \implies f''(x) > 0 \\\\ x > x_0 \implies f''(x) < 0 \end{cases} \end{cases}$ 

<br>

#### ㊂、渐近线

<img src="https://github.com/WaterH2P/WaterH2P.github.io/raw/master/img/images/%E6%B8%90%E8%BF%91%E7%BA%BF.png" width="80%">

<br>

#### ㊃、最值点

<img src="https://github.com/WaterH2P/WaterH2P.github.io/raw/master/img/images/%E6%9C%80%E5%80%BC%E7%82%B9.png" width="80%">

<br>

###### sinx 面积

$(0, \pi)$

<img src="https://github.com/WaterH2P/WaterH2P.github.io/raw/master/img/images/sinx%20%E9%9D%A2%E7%A7%AF.png" width="60%">

<br>

#### ㊄、平面图形的面积

<br>

#### ㊅、旋转体的体积

<img src="https://github.com/WaterH2P/WaterH2P.github.io/raw/master/img/images/%E6%97%8B%E8%BD%AC%E4%BD%93%E4%BD%93%E7%A7%AF%201.png" width="60%">

<br>

#### ㊆、⭐平均值

$f(x)$ 在 $[a, \, b]$ 上的平均值 $\overline{f} = \dfrac{ \int_a^b f(x) \, {\rm d}x }{b-a}$ 。

<br>

## 二、逻辑证明

<br>

#### ㊀、中值定理

<br>

#### ㊁、方程根

<img src="./images/方程根.png" width="60%">

⭐罗尔原话

$$
\text{若 } f^{(n)}(x) = 0 \text{ 至多 } k \text{ 个根，则 } f^{(n-1)}(x) = 0 \text{ 至多 } k+1 \text{ 个根}
$$

<br>

## 三、不等式

核心工具是求导研究性态










<br>

## 四、练习题

<br>

#### ㊀、渐近线

曲线 $y = \sqrt{4x^2 + x} \ln \left( 2 + \dfrac{1}{x} \right)$ 的渐近线有 ________ 条。

<br>

#### ㊁、平面图形的面积

设 

$$
g(x) = \lim\limits_{t \to +\infty} \left( \dfrac{xt+1}{xt+2} \right)^{x^3t}, \quad f(x) = \int_0^x g(t) \, {\rm d}t
$$

1️⃣ 证明 $y=f(x)$ 为奇函数，并求其曲线的水平渐近线。2️⃣ 求曲线 $y=f(x)$ 与它所有水平渐近线及 $y$ 轴围成图形的面积。

<br>

#### ㊂、旋转体的体积

设

$$
f(x) = \lim\limits_{n \to \infty} \dfrac{x}{e^{-nx} - (x^2+1)}
$$

求曲线 $y=f(x)$ 与直线 $y=-\dfrac{\pi}{2}$ 所围成平面图形绕 $x$ 轴旋转所成旋转体的体积。

<br>

#### ㊃、中值定理

<br>

###### 1

设 $x>0$，若 $xe^y = e^x - 1$，证明 $0<y<x$。

<br>

###### 2

设 $f(x)$ 在 $[0, \, 1]$ 上连续，$(0, \, 1)$ 内可导，$f(0)=0, \, f(1)=1$。证明存在不同的 $\xi_1, \, \xi_2, \, \xi_3 \in (0, \, 1)$，使 $f'(\xi_1) + f'(\xi_2) + f'(\xi_3) = 3$。

<br>

#### ㊄、方程根

证明 

$$
\ln x - e^x + \int_0^\pi \sqrt{ 1 - \cos 2x } \, {\rm d}x = 0
$$

有且仅有两个根。

<br>

#### ㊅、不等式

已知常数 $k \geq \ln 2 - 1$，证明：

$$
(x-1)(x - \ln^2 x + 2k \ln x - 1) \geq 0
$$










<br>

## 五、参考答案

<br>

#### ㊀、渐近线

$3$ 条，$1$ 条铅垂，$2$ 条倾斜。

<br>

#### ㊁、平面图形的面积

1️⃣ 

$\lim\limits_{t \to +\infty} \left( \dfrac{xt+1}{xt+2} \right)^{x^3t} = {\rm exp} \left\{ \lim\limits_{t \to +\infty} \dfrac{-x^3 t}{xt+2} \right\} = e^{-x^2}$ $\implies$ $\begin{cases} g(x) = e^{-x^2} \\\\ f(x) = \int_0^x e^{-t^2} \, {\rm d}t \end{cases}$ 

$f(x)$ 为奇函数，且水平渐近线为 $y = \dfrac{ \sqrt{\pi} }{2}$ 和 $y = -\dfrac{ \sqrt{\pi} }{2}$ 。

2️⃣ 

$\begin{array}{l} S &= 2 \int_0^{+\infty} \left[ \dfrac{ \sqrt{\pi} }{2} - \int_0^x e^{-t^2} \, {\rm d}t \right] \, {\rm d}x \\\\ &= 2x \left. \left[ \dfrac{ \sqrt{\pi} }{2} - \int_0^x e^{-t^2} \, {\rm d}t \right] \right|_0^{+\infty} + 2 \int_0^{+\infty} x e^{-x^2} \, {\rm d}x \\\\ &= 2 \lim\limits_{x \to +\infty} x \left[ \dfrac{ \sqrt{\pi} }{2} - \int_0^x e^{-t^2} \, {\rm d}t \right] + 1 \\\\ &= 1 \end{array}$ 

- 其中：
   - $\begin{array}{l} \lim\limits_{x \to +\infty} x \left[ \dfrac{ \sqrt{\pi} }{2} - \int_0^x e^{-t^2} \, {\rm d}t \right] &= \lim\limits_{x \to +\infty} \dfrac{ \dfrac{ \sqrt{\pi} }{2} - \int_0^x e^{-t^2} \, {\rm d}t }{ 1/x } \\\\ &= \lim\limits_{x \to +\infty} \dfrac{x^2}{ e^{x^2} } = 0 \end{array}$ 
   - $\begin{array}{l} 2 \int_0^{+\infty} x e^{-x^2} \, {\rm d}x &= -\int_0^{+\infty} e^{-x^2} \, {\rm d}(-x^2) \\\\ &= \left. -e^{-x^2} \right|_0^{+\infty} \\\\ &= 1 \end{array}$ 

<br>

#### ㊂、旋转体的体积

$f(x) = \begin{cases} 0, \quad & x<0 \\\\ -\dfrac{x}{x^2+1}, \quad & x>0 \end{cases}$ 

<img src="./images/旋转体体积 例题.jpg" width="60%">

$\begin{array}{l} V &= \int_0^1 \pi \left( \dfrac{x}{x^2+1} \right)^2 \, {\rm d}x - \dfrac{1}{3} \cdot \pi \cdot \left( \dfrac{1}{2} \right)^2 \\\\ &= \dfrac{\pi^2}{8} - \dfrac{\pi}{4} - \dfrac{\pi}{12} \\\\ &= \dfrac{\pi^2}{8} - \dfrac{\pi}{3} \end{array}$

- 其中
   - 令 $x=\tan t$ 
   - $\begin{array}{l} \int_0^1 \pi \left( \dfrac{x}{x^2+1} \right)^2 \, {\rm d}x &= \pi \int_0^{\pi/4} \dfrac{\tan^2 t}{\sec^4 t} \cdot \sec^2 t \, {\rm d}t \\\\ &= \pi \int_0^{\pi/4} \sin^2 t \, {\rm d}t \\\\ &= \dfrac{\pi^2}{8} - \dfrac{\pi}{4} \end{array}$

<br>

#### ㊃、中值定理

<br>

###### 1

$\begin{array}{l} & e^y = \dfrac{e^x - e^0}{x-0} = e^\xi, \; (0<\xi<x) \\\\ \implies & y = \xi \implies 0<y<x \end{array}$ 

<br>

###### 2

将 $[0, \, 1]$ 三等分为 $(0, \dfrac{1}{3}), \; (\dfrac{1}{3}, \dfrac{2}{3}), \; (\dfrac{2}{3}, 1)$，分别对其使用拉格朗日中值定理。

<br>

#### ㊄、

$$
\int_0^\pi \sqrt{ 1 - \cos 2x } \, {\rm d}x = \int_0^\pi \sqrt{2} \sin x \, {\rm d}x = 2\sqrt{2}
$$

设 $f(x) = \ln x - e^x + 2\sqrt{2}$，$\begin{cases} \lim\limits_{x \to 0} f(x) = -\infty \\\\ f(1) = 2\sqrt{2} - e > 0 \\\\ \lim\limits_{x \to +\infty} f(x) = -\infty \end{cases}$，所以 $f(x)$ 在 $(0, \, 1), \, (1, \, +\infty)$ 至少两个零点。

由于 $f'(x) = \dfrac{1}{x} - e^x = 0$ 求不出解，所以更换方法。

$f''(x) = -\left( \dfrac{1}{x^2} + e^x \right) \not= 0$，所以 $f''(x)$ 至多 $0$ 个零点，所以 $f(x)$ 至多 $2$ 个零点。

综上，所以 $f(x)$ 有且仅有 $2$ 个零点。

<br>

#### ㊅、不等式

$$
(x-1)(x - \ln^2 x + 2k \ln x - 1) \geq 0
$$

令 $f(x) = x - \ln^2 x + 2k \ln x - 1, \; f'(x) = \dfrac{1}{x} \left( x - 2 \ln x + 2k \right)$，令 $g(x) = x - 2 \ln x + 2k$。

1⃣️ 

$x=1$ 时，成立。

2⃣️ 

$\begin{array}{l} \begin{cases} g'(x) = 1 - \dfrac{2}{x} = 0 \implies x = 2 \\\\ g''(x) = \dfrac{2}{x^2} > 0 & \end{cases} \\ & \end{array}$，所以 $x=2$ 是 $g(x)$ 在 $(0, \, +\infty)$ 上的极小值，也是最小值。由于 $g(2) = 2 \left[ k - (\ln 2 - 1) \right] \geq 0$，所以 $g(x) > 0, \; x \not= 2$，所以  $f'(x) > 0, \; x \not= 2$。

$f(1) = 1 - 1 = 0$，所以 $0<x<1$ 时，$f(x)<0$；$x>1$ 时，$f(x)>0$。得证。

