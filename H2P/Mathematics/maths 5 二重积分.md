---
title: 二重积分
date: 2018-8-5
updated: 2018-10-14
tags: [maths,高数,kaoyan]
mathjax: true

description: 做笔记，喝凉茶，看高数
real-date: 2018-10-10
---


## 一、对称性


<br>
####  ㊀ 、普通对称性

1. 概念
   - 若区域 $ D $ 关于 $ y $ 轴对称
      - $ \begin{cases} \iint\limits_D f(x, y) \, {\rm d} \sigma = 2 \iint\limits_{D_1} f(x, y) \, {\rm d} \sigma, & f(x, y) = f(-x, y) \\\\ \iint\limits_D f(x, y) \, {\rm d} \sigma = 0, & f(x, y) = -f(-x, y) \end{cases} $ 
2. 例题
   1. 设平面区域 $ D $ 由曲线 $ y = \sin x \; ( -\dfrac{\pi}{2} \leq x \leq \dfrac{\pi}{2} ) $ ，$ x = -\dfrac{\pi}{2} $ ，$ y = 1 $ 围成，则 $ \iint\limits_D (xy^3 - 1) {\rm d} \sigma = $ \_\_\_\_\_\_\_\_ 。
      - <img src="https://github.com/WaterH2P/WaterH2P.github.io/raw/master/img/images/5-1.1.2.1.png" width="50%">
      - 做辅助线 $ y = -\sin x $ 将区域 $ D $ 划分为关于 $ y $ 轴对称的区域 $ D_2 $ 和关于 $ x $ 轴对称的区域 $ D_1 $ 。
      - $ \begin{array}{l} \iint\limits_D (xy^3 - 1) \, {\rm d} \sigma = \iint\limits_D xy^3 \, {\rm d} \sigma - \iint\limits_D 1 \, {\rm d} \sigma = \iint\limits_{D_1} xy^3 \, {\rm d} \sigma + \iint\limits_{D_2} xy^3 \, {\rm d} \sigma - \pi \end{array} $ 
         - 由于区域 $ D_1 $ 关于 $ x $ 轴对称，且 $ f(x, y) = -f(x, -y) $ ，所以 $ \iint\limits_{D_1} xy^3 \, {\rm d} \sigma = 0 $ 。
         - 由于区域 $ D_2 $ 关于 $ y $ 轴对称，且 $ f(x, y) = -f(-x, y) $ ，所以 $ \iint\limits_{D_2} xy^3 \, {\rm d} \sigma = 0 $ 。
      - 所以 $ \iint\limits_D (xy^3 - 1) \, {\rm d} \sigma = -\pi $ 。


<br>
####  ㊁ 、⭐️轮换对称性（直角坐标系）

1. 积分值与用何字母表示无关
   - $ \int_a^b f(x) \, {\rm d}x = \int_a^b f(t) \, {\rm d}t = \int_a^b f(u) \, {\rm d}u = \cdots $ 
2. 定义
    - 若将 $ D $ 中的 $ x $ 与 $ y $ 对调发现 $ D $ 不变，则 $ \iint\limits_D f(x, y) \, {\rm d}x {\rm d}y = \iint\limits_D f(y, x) \, {\rm d}x {\rm d}y $ 
       - 关于 $ y = x $ 对称
3. 例题
   1. 记平面区域 $ D = \left. \{ (x, y) \right| |x| + |y| \leq 1 \} $ ，计算如下二重积分：1⃣️ $ I_1 = \iint\limits_D \dfrac{ af(x) + bf(y) }{ f(x) + f(y) } {\rm d} \sigma $ ，其中 $ f(t) $ 为定义在 $ (-\infty, +\infty) $ 上的连续正值函数，常数 $ a > 0, b > 0 $ ；2⃣️ $ I_2 = \iint\limits_D ( e^{\lambda x} - e^{- \lambda y} ) {\rm d} \sigma $ ，常数 $ \lambda > 0 $ 。
      - 1⃣️
        - $ x \longleftrightarrow y \implies D \text{ 不变} $ 
          - $ \iint\limits_D \dfrac{ af(x) + bf(y) }{ f(x) + f(y) } {\rm d} \sigma = \iint\limits_D \dfrac{ af(y) + bf(x) }{ f(y) + f(x) } {\rm d} \sigma $ 
        - $ \implies 2I_1 = \iint\limits_D \dfrac{ (a + b)( f(x) + f(y) ) }{ f(x) + f(y) } {\rm d} \sigma = 2(a + b) $ 
        - $ \implies I_1 = a + b $ 
      - 2⃣️
        - $ \iint\limits_D ( e^{\lambda x} - e^{- \lambda y} ) \, {\rm d} \sigma = \iint\limits_D ( e^{\lambda y} - e^{- \lambda x} ) \, {\rm d} \sigma $ 
        - $ \implies \begin{array}{l} 2I_2 & = \iint\limits_D \left[ ( e^{\lambda x} - e^{- \lambda x} ) + ( e^{\lambda y} - e^{- \lambda y} ) \right] {\rm d}\sigma \\\\ & = \iint\limits_D ( e^{\lambda x} - e^{- \lambda x} ) \, {\rm d}\sigma + \iint\limits_D ( e^{\lambda y} - e^{- \lambda y} ) \, {\rm d}\sigma\end{array} $ 
          - 考察 $ g(x, y) = e^{\lambda x} - e^{-\lambda x} $ 
            - 由于积分区域 $ D $ 关于 $ y $ 轴对称
            - 且 $ g(x, y) = -g(-x, y) $ 
            - 所以 $ g(x, y) = e^{\lambda x} - e^{-\lambda x} $ 在积分区域 $ D $ 上是关于 $ x $ 的奇函数
            - $ \implies \iint\limits_D ( e^{\lambda x} - e^{-\lambda x} ) \, {\rm d} \sigma = 0 $ 
        - $ \implies I_2 = 0 $ 


<br>
#### ㊂、例题
1. 设 $ f(x) $ 为恒正的连续函数，证明 $ \int_a^b f(x) {\rm d}x \cdot \int_a^b \dfrac{1}{ f(x) } {\rm d}x \geq (b - a)^2, \quad (a < b) $ 
   - 解法 1⃣️ 
      - 设 $ F(x) = \int_a^x f(t) {\rm d}t \cdot \int_a^x \dfrac{1}{ f(x) } {\rm d}t - (x - a)^2 $ 
      - 则 $ \begin{array}{l} F'(x) & = f(x) \cdot \int_a^x \dfrac{1}{ f(t) } {\rm d}t + \int_a^x f(t) {\rm d}t \cdot \dfrac{1}{ f(x) } - 2(x - a) \\\\ & = \int_a^x \left( \dfrac{ f(x) }{ f(t) } + \dfrac{ f(t) }{ f(x) } \right) {\rm d}t - 2(x - a) \\\\ & \geq \int_a^x 2 \, {\rm d}t - 2(x - a) \\\\ & \geq 2(x - a) - 2(x - a) \\\\ & \geq 0 \end{array} $ 
         - 基本不等式 $ a + b \geq 2 \sqrt{ab}, \quad (a, b > 0) $ 
      - $ \implies F'(x) \geq 0 \implies F(b) \geq F(a) = 0 $ 
      - $ \implies  \int_a^b f(x) \, {\rm d}x \cdot \int_a^b \dfrac{1}{ f(x) } \, {\rm d}x \geq (b - a)^2 $ 
   - 解法 2⃣️ 
      - ㊀：显然，$ \int_a^b \dfrac{1}{ f(x) } \, {\rm d}x = \int_a^b \dfrac{1}{ f(y) } \, {\rm d}y $ 
         - $ \begin{array}{l} \text{左} & = \int_a^b f(x) \, {\rm d}x \cdot \int_a^b \dfrac{1}{ f(y) } \, {\rm d}y \\ & = \iint\limits_D \dfrac{ f(x) }{ f(y) } {\rm d} \sigma \end{array} $ 
      - ㊁： $ \int_a^b  f(x) \, {\rm d}x = \int_a^b f(y) \, {\rm d}y $ 
         - $ \begin{array}{l} \text{左} & = \int_a^b f(y) \, {\rm d}y \int_a^b \dfrac{1}{ f(x) } \, {\rm d}x \\ & = \iint\limits_D \dfrac{ f(y) }{ f(x) } \, {\rm d} \sigma \end{array} $ 
      - $ \text{左} = \dfrac{1}{2} \iint\limits_D \left[ \dfrac{ f(x) }{ f(y) } + \dfrac{ f(y) }{ f(x) } \right] {\rm d}\sigma \geq \dfrac{1}{2} \iint\limits_D 2 {\rm d}\sigma = (b - a)^2 = \text{右} $ 
   - 解法 3⃣️ 
      - 由柯西积分不等式
         - $ \left( \int_a^b f(x) g(x) {\rm d}x \right)^2 \leq \int_a^b f^2(x) \cdot \int_a^b g^2(x) {\rm d}x $ 
      - $ \begin{array}{l} \text{左} & = \int_a^b f(x) {\rm d}x \cdot \int_a^b \dfrac{1}{ f(x) } {\rm d}x \\\\ &= \int_a^b \left( \sqrt{ f(x) } \right)^2 {\rm d}x \cdot \int_a^b \left( \dfrac{1}{ \sqrt{ f(x) } } \right)^2 {\rm d}x \\\\ & \geq \left( \int_a^b \sqrt{ f(x) } \cdot \dfrac{1}{ \sqrt{ f(x) } } {\rm d}x \right)^2 = (b - a)^2 \end{array} $ 
2. 【记住】⭐️计算 $ \int_{-\infty}^{+\infty} e^{-x^2} {\rm d}x $ 
   - <img src="https://github.com/WaterH2P/WaterH2P.github.io/raw/master/img/images/5-1.3.2%20%E9%AB%98%E6%96%AF%E6%9B%B2%E7%BA%BF.png" width="40%">
   - 显然，$ \int_{-\infty}^{+\infty} e^{-x^2} {\rm d}x = \int_{-\infty}^{+\infty} e^{-y^2} {\rm d}y $ 
   - $ \begin{array}{l} I^2 & = \int_{-\infty}^{+\infty} e^{-x^2} {\rm d}x \cdot \int_{-\infty}^{+\infty} e^{-y^2} {\rm d}y \\\\ & = \iint\limits_D e^{ -(x^2 + y^2) } {\rm d} \sigma \\\\ & = \int_0^{2\pi} {\rm d}\theta \int_0^{+\infty} e^{-r^2} r {\rm d}r \\\\ & = 2\pi \cdot ( -\dfrac{1}{2} ) \cdot \left. e^{-r^2} \right|_0^{+\infty} \\\\ & = \pi \end{array} $ 
   - $ \implies I = \sqrt{\pi} $ 


<br>
## 二、计算


<br>
#### ㊀、直角坐标系

1. 概念
   - $ \iint\limits_D f(x, y) {\rm d} \sigma = \iint\limits_D f(x, y) {\rm d}x {\rm d}y $ 
      - 由于定义中 $ {\rm d} \sigma > 0 $ ，所以分部积分中 $ {\rm d}x > 0 \text{  and  } {\rm d}y > 0 $ 
      - 即 $ \int_a^b {\rm d}x $ 中 $ a < b $ 
   - $ X $ 型区域（上下型）
      - $ \int_a^b {\rm d}x \int_{y_1(x)}^{y_2(x)} f(x, y) {\rm d}x $ 
         - 后积先定限（小 $ \to $ 大）
         - 限内画条线（小 $ \to $ 大）
         - 先交下曲线
         - 后交上曲线
      - <img src="https://github.com/WaterH2P/WaterH2P.github.io/raw/master/img/images/5-2.1.2%20X%E5%9E%8B%E4%BA%8C%E9%87%8D%E7%A7%AF%E5%88%86.jpg" width=50%>
2. 例题
   1. 交换 $ \int_{-1}^0 {\rm d}y \int_2^{1 - y} f(x, y) {\rm d}x $ 的积分次序为 \_\_\_\_\_\_\_\_ 。
      - 分析
         - $ {\rm d}x > 0, {\rm d}y < 0 \implies $ 不是二重积分
         - 修改为 $ {\rm d}x >0, {\rm d}y > 0 $ 
            - $ I = -\int_{-1}^0 {\rm d}y \int_{1 - y}^2 f(x, y) {\rm d}x $ 
      - $ I = -\int_1^2 {\rm d}x \int_{1 - x}^0 f(x, y) {\rm d}y $
   2. 已知 $ I = \int_0^2 {\rm d}x \int_0^{ \frac{x^2}{2} } f(x, y) \, {\rm d}y + \int_2^{ 2 \sqrt{2} } {\rm d}x \int_0^{ \sqrt{8 - x^2} } f(x, y) \, {\rm d}y $ ，则 $ I = ( \text{  A  } ) $ 。
      - $ \begin{array}{l} A. \int_0^2 {\rm d}y \int_{ \sqrt{2y} }^{ \sqrt{8 - y^2} } f(x, y) \, {\rm d}x & B.\int_0^2{\rm d}y \int_1^{ \sqrt{ 8 - y^2 } } f(x, y) \, {\rm d}x \\\\ C. \int_0^1 {\rm d}y \int_{ \sqrt{2y} }^{ \sqrt{8 - y^2} } f(x, y) \, {\rm d}x & D.\int_0^2 {\rm d}y \int_{ \sqrt{2y} }^1 f(x, y) \, {\rm d}x \end{array} $ 
   3. 计算 $ \int_{ \frac{1}{4} }^{ \frac{1}{2} } {\rm d}y \int_{ \frac{1}{2} }^{ \sqrt{y} } e^{ \frac{y}{x} } {\rm d}x + \int_{ \frac{1}{2} }^1 {\rm d}y \int_y^{ \sqrt{y} } e^{ \frac{y}{x} } {\rm d}x $ 
      -  换序
         - $ I = \int_{ \frac{1}{2} }^1 {\rm d}x \int_{x^2}^x e^{ \frac{y}{x} } {\rm d}y = \dfrac{3}{8} e - \dfrac{ \sqrt{e} }{2} $ 

<br>

#### ㊁、极坐标系

1. 概念
   - $ {\rm d} \sigma = {\rm d}\theta \cdot r {\rm d}r $ 
   - <img src="https://github.com/WaterH2P/WaterH2P.github.io/raw/master/img/images/5-2.2.1%20%E6%9E%81%E5%9D%90%E6%A0%87%E4%BA%8C%E9%87%8D%E7%A7%AF%E5%88%86.jpg" width=40%>
   - $ \iint\limits_D f(x, y) {\rm d} \sigma = \int_{\alpha}^{\beta} {\rm d} \theta \int_{ r_1(\theta) }^{ r_2(\theta) } f(r \cos \theta, r \sin \theta) r \, {\rm d}r $ 
2. 计算 $ \iint\limits_D (x^2 + y^2) \, {\rm d}x {\rm d}y $ ，其中 $ D $ 由 $ y = -x, x^2 + y^2 = 4, y = \sqrt{2x - x^2} $ 所围成的在第一、二象限的部分。
   - 分析
      - 当被积函数含 $ f(x^2, y^2) $ ，且 $ D $ 为圆的部分时，一般选极坐标系。
         - 首要的是 $ f(x^2, y^2) $ 
      - 否则，一般选直角坐标系。
   - <img src="https://github.com/WaterH2P/WaterH2P.github.io/raw/master/img/images/5-2.2.2.png" width="40%">
   - $ \begin{array}{l} I & = \int_0^{ \frac{\pi}{2} } {\rm d} \theta \int_{2 \cos \theta}^2 r^2 \cdot r {\rm d}r + \int_{ \frac{\pi}{2} }^{ \frac{3 \pi}{4} } {\rm d} \theta \int_0^2 r^2 \cdot r {\rm d}r \\\\ & = \int_0^{ \frac{\pi}{2} } \left( \left. \dfrac{r^4}{4} \right|_{2 \cos \theta}^2 \right) {\rm d} \theta + \dfrac{\pi}{4} \cdot \left. \dfrac{r^4}{4} \right|_0^2 \\\\ & = \int_0^{ \frac{\pi}{2} } \left( 4 - 4 \cos^4 \theta \right) {\rm d} \theta + \pi \\\\ & = 3 \pi - 4 \int_0^{ \frac{\pi}{2} } \cos^4 \theta {\rm d} \theta \\\\ & = \dfrac{9}{4} \pi \end{array} $
   - or
   - $ \begin{array}{l} I & = \int_0^{ \frac{3 \pi}{4} } {\rm d} \theta \int_0^2 r^3 {\rm d}r - \int_0^{ \frac{\pi}{2} } {\rm d}\theta \int_0^{2 \cos \theta} r^3 {\rm d}r \\\\ & = \dfrac{3\pi}{4} \cdot 4 - 4 \int_0^{ \frac{\pi}{2} } \cos^4 \theta {\rm d}\theta \\\\ & = \dfrac{9}{4} \pi \end{array} $ 
3. 计算 $ I = \iint\limits_D \sqrt{ 1 - r^2 \cos 2 \theta } \text{ } r^2 \sin \theta \text{ } {\rm d}r {\rm d}\theta $ ，其中 $ D = \left\lbrace \left. (r, \theta) \right| 0 \leq r \leq \sec \theta, 0 \leq \theta \leq \dfrac{\pi}{4} \right\rbrace $ 。
   - 分析
      - $ r \leq \sec \theta \implies r \cos \theta \leq 1 \implies x \leq 1 $ 
   - $ \begin{array}{l} I & = \iint\limits_{D} \sqrt{ 1 - r^2 \cos^2 \theta + r^2 \sin^2 \theta} \cdot r \sin \theta \cdot r  {\rm d}r \, {\rm d}\theta \\\\ & = \iint\limits_D y \sqrt{1 - x^2 + y^2} \text{ } {\rm d}x {\rm d}y \\\\ & = \dfrac{1}{2} \int_0^1 {\rm d}x \int_0^x \sqrt{1 - x^2 + y^2} \text{ } {\rm d}( 1 - x^2 + y^2 ) \\\\ & = \dfrac{1}{2} \cdot \dfrac{2}{3} \cdot \int_0^1 \left[ \left. (1 - x^2 + y^2)^{ \frac{3}{2} } \right|_{y = 0}^{y = x} \right] {\rm d}x \\\\ & = \dfrac{1}{3} - \dfrac{1}{3} \int_0^1 (1 - x^2)^{ \frac{3}{2} } {\rm d}x = \dfrac{1}{3} - \dfrac{1}{3} \int_0^{ \frac{\pi}{2} } \cos^4 t {\rm d} t \\\\ & = \dfrac{1}{3} - \dfrac{\pi}{16} \end{array} $ 














