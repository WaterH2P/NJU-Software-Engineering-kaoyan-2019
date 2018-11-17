---
title: 微分方程
date: 2018-8-6
updated: 2018-10-15
tags: [maths,高数,kaoyan]
mathjax: true

description: 做笔记，喝凉茶，看高数
real-date: 2018-10-14
---

## 一、概念

**按类求解，对号入座**

1. 含有未知函数的导数（或者微分）的方程称为**微分方程** 
  - 一般写成 $ F(x, y, y', y'', \ldots, y^{ (n) }) = 0 $ 
2. 阶数：方程中 $ y $ 的最高阶导数的阶数
3. 通解
   - 解中所含独立常数的个数 = 方程的阶数
   - $ \begin{cases} 独立常数 \not= 任意常数 \\ 通解 \not= 全部解 \end{cases} $ 

<br>

## 二、一阶方程的求解

<br>

#### ㊀、变量可分离型

<br>

######  1、概念
- 形如 $ \dfrac{ {\rm  d}y }{ {\rm d}x } = f(x, y) $ 
   - 若 $ f(x, y) = g(x) h(y) $ 
   - $ \dfrac{ {\rm d}y }{ h(y) } = g(x) \, {\rm d}x \implies \int \dfrac{ {\rm d}y }{ h(y) } = \int g(x) \, {\rm d}x $ 

<br>

######  2、例题
1. 微分方程 $ y' + \dfrac{1}{y} e^{y^2 + 3x} = 0 $ 的通解（其中 $ C $ 为任意常数）是 $ ( \text{  C  } ) $ 。
   - $ \begin{array}{l} A. 2e^{3x} + 3e^{y^2} = C & B.2e^{3x} + 3e^{-y^2} = C \\ C. 2e^{3x} - 3e^{-y^2} = C & D.e^{3x} - e^{-y^2} = C \end{array} $ 
2. 微分方程的通解 \_\_\_\_\_\_\_\_ （一定 / 不一定）包含了所有的解，请举例说明。
   - 不一定
   - 如求 $ ( y^2 - 1 ) \, {\rm d}x = (x - 1)y \, {\rm d}y $ 的通解
      - $ \implies \dfrac{1}{2} \ln \left| y^2 - 1 \right|= \ln \left| x - 1 \right| + \ln C_1 \quad ( C_1 > 0 ) $ 
      - $ \implies \sqrt{ \left| y^2 - 1 \right| } = C_1 \left| x - 1 \right| $ 
      - $ \implies \left| y^2 - 1 \right| = C_1^2 (x - 1)^2 $ 
      - $ \implies y^2 - 1 = \pm C_1^2 (x - 1)^2 = C(x - 1)^2 $ 
      - 通解为 $ y^2 = C (x - 1)^2 + 1 \quad ( C \not= 0 ) $ 
         - 考研**只考通解**，不考虑奇解
      - 但是 $ y = \pm 1 $ 也是上述方程的解，成为**奇解**
   - $ \begin{cases} \text{线性} & \text{通解} = \text{全部解} \\ \text{非线性} & \text{通解} \not= \text{全部解} \end{cases} $ 

<br>

#### ㊁、齐次型方程

<br>

######  1、概念
- 形如 $ \dfrac{ {\rm d}y }{ {\rm d}x } = f \left( \dfrac{y}{x} \right) $ 
   - 令 $ y = ux \implies y' = u'x + u \implies u'x + u = f(u) $ 
   - $ \implies \dfrac{ {\rm d}u }{ {\rm d}x } x = f(u) - u $ 
   - $ \implies \dfrac{ {\rm d}u }{ f(u) - u } = \dfrac{ {\rm d}x }{x} $ 

<br>

######  2、例题
1. 求解 $ \left(1 + e^{ -\frac{x}{y} } \right) y \, {\rm d}x + (y - x) \, {\rm d}y = 0 $ 。
   - $ \left(1 + e^{ -\frac{x}{y} } \right) y \, {\rm d}x = (x - y) \, {\rm d}y $ 
   - $ \dfrac{ {\rm d}x }{ {\rm d}y } = \dfrac{x - y}{ \left( 1 + e^{ -\frac{x}{y} } \right) y } = \dfrac{ \dfrac{x}{y} - 1 }{ 1 + e^{ -\frac{x}{y} } } $ 
   - 令 $ \dfrac{x}{y} = u \implies x = uy \implies \dfrac{ {\rm d}x }{ {\rm d}y } = \dfrac{ {\rm d}u }{ {\rm d}y } \cdot y + u $ 
      - $ \begin{array}{l} & \dfrac{ e^u + 1 }{ e^u + u } {\rm d}u = - \dfrac{ {\rm d}y }{y} \\\\ \implies & \int \dfrac{ e^u + 1 }{ e^u + u } {\rm d}u = - \int \dfrac{ {\rm d}y }{y} \\\\ \implies & \ln \left| e^u + u \right| = - \ln |y| + \ln C_1 \\\\ \implies & e^u + u = \dfrac{ \pm C_1 }{y} = \dfrac{C}{y} \end{array} $ 
   - 通解为： $ \left( e^{ \frac{x}{y} } + \dfrac{x}{y} \right) \cdot y = C, \quad (C \not= 0) $ 

<br>

#### ㊂、一阶线性型

<br>

######  1、概念
- 形如 $ y' + p(x)y = q(x) $ ，$ p(x), \, q(x) $ 为已知的连续函数。
   - $ (uv)' = u'v + uv' $ ， 且 $ ( e^🐶 )' = e^🐶 \cdot (🐶)' $ 
      - $ ( e^{ 🐶 } y )' = e^🐶 ( 🐶' + 🐶 y' ) $ 
      -  $ (🐶)' = p(x) \implies 🐶 = \int p(x) \, {\rm d}x $ 
   - $ \begin{array}{l} \implies e^{ \int p(x) \, {\rm d}x } \cdot y' + e^{ \int p(x) \, {\rm d}x } \cdot p(x)y = e^{ \int p(x) \, {\rm d}x } \cdot q(x) \\\\ \implies \left( y \cdot e^{ \int px(x) \, {\rm d}x } \right)' = e^{ \int p(x) \, {\rm d}x } \cdot q(x) \\\\ \implies y = e^{ -\int p(x) \, {\rm d}x } \left[ \int \left( e^{ \int p(x) \, {\rm d}x } \cdot q(x) \right) {\rm d}x + C \right] \end{array} $ 

<br>

######  2、例题
1. 微分方程 $ (y^2 + 1) \, {\rm d}x = y(y - 2x) \, {\rm d}y $ 的通解是 \_\_\_\_\_\_\_\_ 。
   - $ \begin{array}{l} & \dfrac{ {\rm d}x }{ {\rm d}y } = \dfrac{-2y}{y^2 + 1} x + \dfrac{y^2}{y^2 + 1} \\\\ \implies & x' + \dfrac{2y}{y^2 + 1}x = \dfrac{y^2}{y^2 + 1} \\\\ \implies & x = e^{ -\int \frac{2y}{y^2 + 1} {\rm d}y } \left[ \int \left( e^{ \int \frac{2y}{y^2 + 1} {\rm d}y } \cdot \dfrac{y^2}{y^2 + 1} \right) {\rm d}y + C \right] \\\\ \implies & x = e^{ -\ln( y^2 + 1 ) } \left[ \int \left( e^{ \ln( y^2 + 1 ) } \cdot \dfrac{y^2}{y^2 + 1} \right) {\rm d}y + C \right] \\\\ \implies & x = \dfrac{1}{y^2 + 1} \left( \dfrac{y^3}{3} + C \right), \quad \forall C \end{array} $ 

<br>

## 三、二阶方程的求解

<br>

#### ㊀、二阶常系数齐次线性微分方程

<br>

######  1、概念
- 形如 $ y'' + py' + qy = 0 $ 
   - 考虑 $ y = e^{ \lambda x } \implies e^{ \lambda x } ( \lambda^2 + p \lambda + q ) = 0 $ 
   1. 写 $ \lambda^2 + p \lambda + q = 0 \implies \lambda_1, \lambda_2 $ 
   2. $ \begin{cases} \Delta > 0 & \implies \lambda_1 \not= \lambda_2 & \implies y = C_1 e^{ \lambda_1 x } + C_2 e^{ \lambda_2 x } \\\\ \Delta = 0 & \implies \lambda_1 = \lambda_2 = \lambda & \implies y = ( C_1 + C_2 x ) e^{ \lambda x } \\\\ \Delta < 0 & \implies \lambda_{1,2} = \alpha \pm \beta {\rm i} & \implies y = e^{\alpha x} \left( C_1 \cos \beta x + C_2 \sin \beta x \right) \end{cases} $ 

<br>

#### ㊁、二阶常系数非齐次线性微分方程

<br>

######  1、概念
- 形如 $ y'' + py' + qy = f(x) $ 
   1. 当 $ f(x) = e^{\alpha x} P_n(x) $ 时
      - $ y_{ \text{通解} } = y_{ \text{齐次通解} } + y_{ \text{非齐次特解} } $ 
      1. 照搬 ㊀ 求 $ y_{ \text{齐次通解} } $ 
      2. $ y^\ast = e^{\alpha x} \cdot Q_n(x) \cdot x^k $ 
         - $ Q_n(x) $ 为 $ x $ 的 $ n $ 次待定系数的一般多项式
            - 若 $ P_3 (x) = x^3 - 1 $ ，则 $ Q_3(x) = ax^3 + bx^2 + cx + d $ 。
         - $ k $ 值的确定
            1. 看：自由项 $ e^{\alpha x} P_n(x) $ 中的 $ \alpha $ 
            2. 计算： $ \lambda_1, \lambda_2 $ （在上面已经计算过了）
            3. 比较： $ k = \begin{cases} 0 , & \alpha \not= \lambda_1, \alpha \not= \lambda_2 \\ 1, & \alpha = \lambda_1 \text{ 或 } \lambda_2 \\ 2, & \alpha = \lambda_1 = \lambda_2 \end{cases} $ 

<br>

######  2、例题
1. 微分方程 $ y'' + 2y' + y = {\rm sh} x $ 的一个特解应具有的形式（其中 $ a, b $ 为常数）$ ( \text{  C  } ) $ 
   - $ \begin{array}{l} A. a{\rm sh}x \quad & B. a {\rm ch}x \\ C. ax^2e^{-x} + be^x \quad & D.axe^{-x} + be^x \end{array} $ 
      - $ {\rm sh} x = \dfrac{ e^x - e^{-x} }{2}, \quad {\rm ch}x = \dfrac{ e^x + e^{-x} }{2} $ 
   1. $ y'' + 2y' + y = e^x \cdot \dfrac{1}{2} $ 
      - $ \lambda^2 + 2\lambda + 1 = 0 \implies \lambda_1 = \lambda_2 = -1 \implies y_{ \text{齐次通解} } = ( C_1 + C_2 x )e^{-x} $ 
      - 设 $ y_1^{\ast} = e^x \cdot A \cdot x^0 = Ae^x $ 
   2. $ y'' + 2y' + y = e^x \cdot ( -\dfrac{1}{2} ) $ 
      - $ \lambda_1 = \lambda_2 = -1 $ 
      - 设 $ y_2^{\ast} = e^{-x} \cdot B \cdot x^2 = Bx^2 e^{-x} $
   3. $ y^{\ast} = Ae^x + Bx^2e^{-x} $ 
2. 求微分方程 $ y'' + 5y' + 6y = 2e^{-x} $ 的通解。
   - $ \lambda^2 + 5\lambda + 6 = 0 \implies \lambda_1 = -2, \lambda_2 = -3 $ 
      - $ \implies y_{ \text{齐次通解} } = C_1e^{-2x} + C_2e^{-3x} $ 
   - 设 $ y^{\ast} = e^{-x} \cdot A \cdot x^0 = Ae^{-x} $ 
      - 将 $ y^{\ast} $ 代入原方程
      - $ Ae^{-x} - 5Ae^{-x} + 6Ae^{-x} = 2Ae^{-x} = 2e^{-x} \implies A = 1 $ 
      - 所以 $ y^{\ast} = e^{-x} $ 
   - $ y = C_1e^{-2x} + C_2e^{-3x} + e^{-x} $ 

<br>

## 四、⭐️应用

<br>

####  ㊀、例题一
已知曲线 $ y = y(x) $ 经过点 $ (1, e^{-1}) $ ，且在点 $ (x, y) $ 处的切线在 $ y $ 轴上的截距为 $ xy $ ，求该曲线方程的表达式。
   - 切线方程为：$ Y - y = y'( X - x ) $ 
   - 令 $ X = 0 \implies Y = y - xy' = xy $ 
   - $ \begin{array}{l} \implies \dfrac{ {\rm d}y }{y} = \left( \dfrac{1}{x} - 1 \right) {\rm d}x \\\\ \implies \int \dfrac{ {\rm d}y }{y} = \int \left( \dfrac{1}{x} - 1 \right) {\rm d}x \\\\ \implies \ln |y| = \ln |x| - \ln e^x + \ln C_1 \\\\ \implies |y| = \dfrac{ C_1 |x| }{e^x} \\\\ \implies y = C \cdot \dfrac{x}{e^x} \end{array} $ 
   - 过点 $ ( 1, e^{-1} ) \implies C = 1 $ 。
   - 所以曲线方程为 $ y = \dfrac{x}{e^x} $ 。





