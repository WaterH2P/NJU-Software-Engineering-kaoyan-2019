---
title: 多元函数微分学
date: 2018-10-7
updated: 2018-10-9
tags: [maths,高数,kaoyan]
mathjax: true

description: 做笔记，喝凉茶，看高数
---


## 一、概念


<br>
####  ㊀、极限
1. 概念
  - 设 $ f(x, y) $ 的定义域为 $ D $ ，$ P_0(x_0, y_0) $ 是 $ D $ 的聚点。
  - $ \forall \varepsilon > 0 $ ， $ \exists \delta > 0 $ , 当 $ P(x, y) \in D \bigcap \bigcup\limits^o ( P_0, \delta ) $ 时，恒有 $ | f(x, y) - A | < \varepsilon \implies \lim\limits_{x \to x_0 \atop y \to y_0} f(x, y) = A $ 。

2. 例题
  1. 求 $ I = \lim\limits_{x \to 0 \atop y \to 0} \dfrac{ \sqrt{xy + 1} - 1 }{xy} $ 。
    - 其他教材（ $ P(x, y) \in \bigcup\limits^o ( P_0, \delta ) $ ）
      - $ x = 0 / y = 0 $ 时，极限不存在
      - 所以极限不存在
    - 同济七版教材（考研参考教材）
      - $ I = \lim\limits_{x \to 0 \atop y \to 0} \dfrac{xy}{ xy ( \sqrt{xy + 1} + 1 ) } = \dfrac{1}{2} $ 。


<br>
#### ㊁、连续性
1. 概念
  - 若 $ \lim\limits_{x \to x_0 \atop y \to y_0} f(x, y) = f(x_0, y_0) $ ，则称 $ f(x, y) $ 在 $ (x_0, y_0) $ 处连续。
  - 【注】
    - 若 $ \lim\limits_{x \to x_0 \atop y \to y_0} f(x, y) \not= f(x_0, y_0) $ ，叫不连续，不讨论间断类型。


<br>
#### ㊂、偏导数（必考）
1. 概念
  - $ z = f(x, y) $
  - $ \left. \dfrac{ \partial f }{ \partial x } \right|_{ (x_0, y_0) } = f'_x(x_0, y_0) = \lim\limits_{ \Delta x \to 0 } \dfrac{ f(x_0 + \Delta x, y_0) - f(x_0, y_0) }{\Delta x} $ 。 

2. 例题
  1. 设 $ f(x, y) = e^{ \sqrt{ x^2 + y^6 } } $ ，求 $ f'_x(0, 0) $ ， $ f'_y(0, 0) $ 。
    - ⭐️ 见到 $ f'_x(x_0, y_0), f'_y(x_0, y_0) \implies $ 先写定义再说。
    - $ f'_x(0, 0) = \lim\limits_{\Delta x \to 0} \dfrac{ f(0 + \Delta x, 0) - f(0, 0) }{\Delta x} = \lim\limits_{\Delta x \to 0} \dfrac{ e^{ |\Delta x| } - 1 }{\Delta x} = \lim\limits_{\Delta x \to 0} \dfrac{ |\Delta x| }{\Delta x} $ 
    - $ \implies f'_x(0, 0) $ 不存在
    - $ f'_y(0, 0) = \lim\limits_{\Delta y \to 0} \dfrac{ f(0, 0 + \Delta y) - f(0, 0) }{\Delta y} = \lim\limits_{\Delta y \to 0} \dfrac{ e^{ |\Delta y|^3 } - 1 }{\Delta y} = \lim\limits_{\Delta y \to 0} \dfrac{ |\Delta y|^3 }{\Delta y} = 0 $ 
  2. 设 $ f(x, y) = \begin{cases} \dfrac{1}{xy} \sin (x^2 y), & xy \not= 0 \\[1em] 0, & xy = 0 \end{cases} $ ，则 $ f'_x(0, 1) =  $ \_\_\_\_\_\_\_\_ 。
     - $ f'_x(0, 1) = \lim\limits_{\Delta x \to 0} \dfrac{ f(0 + \Delta x, 1) - f(0, 1) }{\Delta x} = \lim\limits_{\Delta x \to 0} \dfrac{ \dfrac{1}{\Delta x} \sin( (\Delta x)^2 ) - 0 }{\Delta x} = 1 $ 


<br>
## 二、计算（必考）——多元函数微分学


<br>
#### ㊀、链式求导规则
1. 概念
  - 设 $ z = f(u, v, w), u = u(y), v = v(x, y), w = w(x) $ 。
  - <img src="./images/4-2 链式求导关系图.png" width="50%">
  - 称 $ x, y $ 叫自变量，$ u, v, w $ 叫中间变量，$ z $ 叫因变量。
  - $ \dfrac{ \partial z }{ \partial x } = \dfrac{ \partial z }{ \partial v } \dfrac{ \partial v }{ \partial x } + \dfrac{ \partial z }{ \partial w } \dfrac{ {\rm d}w }{ {\rm d}x } \quad ( \text{ 分叉写 } \partial，\text{ 不分叉写 } {\rm d} ) $ 


<br>
#### ㊁、高阶偏导数
1. 【注】
  - 不论 $ z $ 对谁求导，也不论 $ z $ 已经求了几阶导，求导之后的新函数仍与 $ z $ 有相同的复合结构。

2. 例题
  1. 设 $ F(u, v) $ 对其变元 $ u, v $ 具有二阶连续偏导数，并设 $ z = F( \dfrac{y}{x}, x^2 + y^2) $ ，则 $ \dfrac{ \partial^2 z }{ \partial x \partial y } = $ \_\_\_\_\_\_\_\_ 。
    - <img src="./images/4-2.2 高阶偏导数例题1.png" width="50%">
    - $ \dfrac{ \partial z }{ \partial x } = F'_1 \cdot ( - \dfrac{y}{x^2} ) + F'_2 \cdot 2x $ 
    - $ \dfrac{ \partial^2 z }{ \partial x \partial y } = \dfrac{ \partial ( \dfrac{ \partial z }{ \partial x } ) }{\partial y} = - \dfrac{1}{x^2} F'_1 - \dfrac{y}{x^3} F''_{11} + (2 - \dfrac{2y^2}{x^2} ) F''_{12} + 4xy F''_{22} $
  2. 设 $ f(u, v) $ 二阶偏导数连续，$ z = f(x^2y, \cos x \sin y) $ ，求 $ \dfrac{ \partial^2 z }{ \partial x \partial y } $ 。
    - $ 2xf'_1 - \sin x \cos y f'_2 + 2 x^3 y f''_{11} + (2xy \cos x \cos y - x^2 \sin x \sin y)f''_{12} - \sin x \cos x \sin y \ cos y f''_{22} ​$ 


<br>
#### ㊂、多元函数的极最值

1. 概念

  - 一个点没有去心邻域是不可以谈论极值性的。

2. 无条件的极值 $ z = f(x, y) $ 
  1. 必要条件
    - 设 $ z = f(x, y) $ 在点 $ (x_0, y_0) $ 处 $ \begin{cases} 一阶偏导数存在 \\[1em] 取极值 \end{cases} $ ，则 $ f'_x(x_0, y_0) = 0, f'_y(x_0, y_0) = 0 $ 。
    - 【注】
      - 适用于三元及以上（常考 2 -5 元）
  2. 充分条件
    - $ \left. \begin{array}{l} f''_{xx} (x_0, y_0) = A \\[1em]  f''_{xy} (x_0, y_0) = B \\[1em]  f''_{yy} (x_0, y_0) = C \end{array} \right\} \implies \Delta = B^2 - AC \begin{cases} < 0 \begin{cases} A > 0 \implies \text{极小值点} \\[1em] A < 0 \implies \text{极大值点} \end{cases} \\[1em] > 0 \implies \text{不是极值点} \\[1em] = 0 \implies 该法失效，另谋他法 \end{cases} $ 
      - 只适用于二元
  3. 例题
    1. 设函数 $ z = z(x, y) $ 是由方程 $ x^2 - 6xy + 10y^2 - 2yz - z^2 + 32 = 0 $ 确定，讨论函数 $ z(x, y) $ 的极大值与极小值。
      - 无条件极值的解题步骤
        - 函数形式
          - 给出 $ z = z(x, y) $（显式）
          - $ z = z(x, y) $ 由 $ f(x, y, z) = 0 $ 确定（隐式）
        1. 写 $ \begin{cases} z'_x = 0 \\[1em] z'_y = 0 \end{cases} \implies Pi(i = 1, 2, \ldots, n) $ 
        2. 写 $ \begin{cases} \left. z''_{xx} \right|_{P_i} = A_i \\[1em]  \left. z''_{xy} \right|_{P_i} = B_i \\[1em] \left. z''_{xx} \right|_{P_i} = C_i \end{cases} \implies \Delta_i = B_i^2 - A_i C_i $

      - 方程两边对 $ x $ 求偏导 $ 2x - 6y - 2y \cdot z'_x - 2z \cdot z'_x = 0 \implies z'_x = \dfrac{x - 3y}{y + z} $ 
      - 方程两边对 $ y $ 求偏导 $ -6x + 20y -2z - 2y \cdot z'_y - 2z \cdot z'_y = 0 \implies z'_y = \dfrac{-3x + 10y - z}{y + z} $ 
      - $ \begin{cases} z'_x = 0 \\[1em] z'_y = 0 \end{cases} \implies \begin{cases} x = 3y \\[1em] z = y \end{cases} $ 带入方程解得：$ \begin{cases} x = 12 \\[1em] y = 4 \\[1em] z = 4 \end{cases} $ 和 $ \begin{cases} x = -12 \\[1em] y = -4 \\[1em] z = -4 \end{cases} $ 。
      - 解得 $ \begin{cases} z''_{xx} = \dfrac{1}{y + z} - (z'_x)^2 \\[1em] z''_{xy} = - \dfrac{3}{y + z} - \dfrac{ ( 1 + z'_y ) \cdot z'_x }{y + z} \\[1em] z''_{yy} = \dfrac{10}{y + z} - \dfrac{z'_y}{y + z} - \dfrac{ (1 + z'_y) \cdot z'_y }{y + z} \end{cases} \implies B^2 - AC = -\dfrac{1}{4y^2} < 0 $ 

    2. 求二元函数 $ f(x, y) = x^2(2 + y^2) + y \ln y $ 的极值。

       - $ \begin{cases} f'_x = 2x(2 + y^2) = 0 \\[1em] f'_y = 2x^2y + \ln y + 1 = 0 \end{cases} \implies \begin{cases} x = 0 \\[1em] y = \dfrac{1}{e} \end{cases} $ （唯一解）
       - $ \begin{cases} f''_{xx} = 4 + 2y^2 \\[1em] f''_{xy} = 4xy \\[1em] f''_{yy} = 2x^2 + \dfrac{1}{y} \end{cases} \implies \begin{cases} A = 4 + \dfrac{2}{e^2} \\[1em] B = 0 \\[1em] C = e \end{cases} \implies B^2 - AC = -4e - \dfrac{2}{e} < 0 $
       - 极小值 $ f( 0, \dfrac{1}{e} ) = -\dfrac{1}{e} $ 

3. 条件极（最）值

   1. 概念
      - 求目标函数 $ u = f(x, y, z) $ 在约束条件 $ \begin{cases} \varphi(x, y, z) = 0 \\[1em] \psi(x, y, z) = 0 \end{cases} $ 下的极（最）值。
      - 拉格朗日乘数法
        1. 构造辅助函数 $ F(x, y, z, \lambda, \mu) = f(x, y, z) + \lambda \varphi(x, y, z) + \mu \psi(x, y, z), ( \lambda \mu \text{ 均可取 0} ) $ 。
          - $ x, y, z, \lambda, \mu $ 是 5 个独立变量。
        2. 令 $ \begin{cases} F'_x = 0 \\[1em] F'_y = 0 \\[1em] F'_z = 0 \\[1em] F'_{\lambda} = 0 \\[1em] F'_{\mu} = 0  \end{cases} \implies P_i(x_i, y_i, z_i) \implies u(P_i) $ 
        3. 比较 $ u(P_i) $ ，取最大值、最小值。 

    2. 例题
      1. 求函数 $ u = xy + 2yz $ 在约束条件 $ x^2 + y^2 + z^2 = 10 $ 下的最值。
        - 令 $ F(x, y, z, \lambda) = xy + 2yz + \lambda (x^2 + y^2 + z^2 -10 ) $ 
        - $ \begin{cases} F'_x = y + 2 \lambda x = 0 \\[1em] F'_y = x + 2z + 2 \lambda y = 0 \\[1em] F'_z = 2y + 2 \lambda z = 0 \\[1em] F'_{ \lambda } = x^2 + y^2 + z^2 - 10 = 0 \end{cases} $
        - 解 ㊀
          - 1⃣️
            - 若 $ \lambda = 0 \implies y = 0 \implies x = -2z $ 
            - $ \implies z^2 = 2 \implies z = \pm \sqrt{2} $ 
            - $ \implies \begin{cases} ( 2\sqrt{2}, 0, -\sqrt{2} ) \\[1em] ( -2\sqrt{2}, 0, \sqrt{2} ) \end{cases} $ 
          - 2⃣️
            - 若 $ \lambda \not= 0 \implies \begin{cases} x = -\dfrac{1}{2 \lambda}y \\[1em] z = -\dfrac{1}{\lambda}y \end{cases} \implies \begin{cases} z = 2x \\[1em] y = -2 \lambda x \end{cases} $ 
            - 代入 $ F'_y = 0 $ 得 $ \lambda^2 = \dfrac{5}{4} $ 
            - 代入 $ F'_{\lambda} = 0 $ 得 $ x^2 = 1 \implies x = \pm 1 $ 
            - $ \implies \begin{cases} (1, \sqrt{5}, 2) \\[1em] (1, -\sqrt{5}, 2) \\[1em] (-1, \sqrt{5}, -2) \\[1em] (-1, -\sqrt{5}, -2) \end{cases} $ 
          - 将 6 个点代入 $ u = xy + 2yz $ 
            - 得 $ \begin{cases} ( 2\sqrt{2}, 0, -\sqrt{2} ) & \implies u = 0 \\[1em] ( -2\sqrt{2}, 0, \sqrt{2} ) & \implies u = 0 \\[1em] (1, \sqrt{5}, 2) & \implies u = 5 \sqrt{5} \\[1em] (1, -\sqrt{5}, 2) & \implies u = -5 \sqrt{5} \\[1em] (-1, \sqrt{5}, -2) & \implies u = -5\sqrt{5} \\[1em] (-1, -\sqrt{5}, -2) & \implies u = 5 \sqrt{5} \end{cases} $ 
        - 解 ㊁
          - $ xF'_x + yF'_y + zF'_z = xy + 2yz + 10 \lambda = 0 \implies u = -10 \lambda $ 
          - 根据解 ㊀，$ \lambda = 0, \dfrac{ \sqrt{5} }{2}, -\dfrac{ \sqrt{5} }{2} $ 
        - 所以最大值是 $ 5 \sqrt{5} $ ，最小值是 $ -5 \sqrt{5} $ 。

4. 例题

   1. 某公司可通过电台和报纸两种方式做销售某种商品的广告，根据统计资料，销售收入 $ R $ （万元）与电台广告费用 $ x_1 $ （万元）及报纸广告费用 $ x_2 $ （万元）之间的关系有如下经验公式：$ R = 15 + 14x_1 + 32x_2 - 8 x_1 x_2 - 2x_1^2 - 10x_2^2 $ 。1⃣️ 在广告费用不限的情况下，求最优广告策略；2⃣️ 若提供的广告费用为 $ 1.5 $ 万元，求相应的最优广告策略。
      - 令利润函数为：$ \begin{array}{l} z = f(x_1, x_2) & = R - x_1 - x_2 \\[1em] & = 15 + 13x_1 + 31x_2 - 8 x_1 x_2 - 2x_1^2 - 10x_2^2 \end{array} $ 
      - 1⃣️
        - 【非条件极值】
        - $ \begin{cases} f'_{x_1} = 13 - 8x_2 - 4x_1 = 0 \\[1em] f'_{x_2} = 31 - 8x_1 - 20x_2 = 0 \end{cases} $ 
          - 克拉默法则
            - $ \begin{cases} a_{11} x_1 + a_{12} x_2 = b_1 \\[1em] a_{21} x_1 + a_{22} x_2 = b_2 \end{cases} \implies \begin{cases} x_1 = \dfrac{ \begin{vmatrix} b_1 & a_{12} \\ b_2 & a_{22} \end{vmatrix} }{ \begin{vmatrix} a_{11} & a_{12} \\ a_{21} & a_{22} \end{vmatrix} } \\[1em] x_2 = \dfrac{ \begin{vmatrix} a_{11} & b_1 \\ a_{21} & b_2 \end{vmatrix} }{ \begin{vmatrix} a_{11} & a_{12} \\ a_{21} & a_{22} \end{vmatrix} } \end{cases} $ 
          - $ \implies \begin{cases} x_1 = \dfrac{3}{4} = 0.75 \\[1em] x_2 = \dfrac{5}{4} = 1.25 \end{cases} $ 
        - $ \begin{cases} f''_{x_1 x_1} = -4 = A \\[1em] f''_{x_1 x_2} = -8 = B \\[1em] f''_{x_2 x_2} = -20 = C \end{cases} \implies B^2 - AC = -16 < 0 \text{ 且 } A < 0 $ 
        - 所以 $ (0.75, 1.25) $ 为极大值点，根据实际问题，此点为最大值点。
      - 2⃣️
        - 【条件最值】
        - 令 $ F(x_1, x_2, \lambda) = 15 + 13x_1 + 31x_2 - 8 x_1 x_2 - 2x_1^2 - 10x_2^2 + \lambda (x_1 + x_2 - 15) $ 
        - $ \begin{cases} F'_{x_1} = 13 - 8x_2 - 4x_1 + \lambda = 0 \\[1em] F'_{x_2} = 31 - 8x_1 - 20x_2 + \lambda = 0 \\[1em] F'_{\lambda} = x_1 + x_2 - 1.5 = 0  \end{cases} $
        - $ \implies \begin{cases} 4x_1 + 8x_2 + (-1) \lambda = 13 \\[1em] 8x_1 + 20x_2 + (-1) \lambda = 31 \\[1em] x_1 + x_2 + 0 \cdot \lambda = 1.5 \end{cases} $ 
          - $ \begin{vmatrix} 4 & 8 & -1 \\ 8 & 20 & -1 \\ 1 & 1 & 0 \end{vmatrix} = 8 \not= 0 \implies $ 克拉默法则可以使用
        - 所以 $ \begin{cases} x_1 = \dfrac{ \begin{vmatrix} 13 & 8 & -1 \\ 31 & 20 & -1 \\ 1.5 & 1 & 0 \end{vmatrix} }{8} = 0 \\[1em] x_2 = \dfrac{ \begin{vmatrix} 4 & 13 & -1 \\ 8 & 31 & -1 \\ 1 & 1.5 & 0 \end{vmatrix} }{8} = \dfrac{12}{8} = 1.5 \end{cases} $ 


<br>
## 三、考点

1. 偏导数定义
2. 多元函数微分法
   1. 链式法则
3. 多元函数的极最值问题

