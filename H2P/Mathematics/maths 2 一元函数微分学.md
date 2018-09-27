---
title: 一元函数微分学
date: 2018-9-28
updated: 2018-9-28
tags: [maths,cs,kaoyan]
mathjax: true

description: 做笔记，喝凉茶，看高数
---


### 定义

$lim_{\Delta x \to 0} \dfrac{f(x_0 + \Delta x) - f(x_0)}{\Delta x}$ 记为 $f'(x_0)$ ：（瞬时）变化率。

- $f$ 对 $x$ 的变化率：$\dfrac{ {\rm d} f}{ {\rm d} x} = f'_x$ 。
- $\begin{cases} \lim_{\Delta x \to 0}\dfrac{f(x_0 + \Delta x) - f(x_0)}{\Delta x} & \to \text{增量式} \\ \lim_{x \to x_0}\dfrac{f(x) - f(x_0)}{x - x_0} & \to \text{差值式} \end{cases}$ 
- 【注】
  1. 【左右有别】
    - $lim_{\Delta x \to 0^+} \dfrac{f(x_0 + \Delta x) - f(x_0)}{\Delta x} = f'_+(x_0)$ 右导数
    - $lim_{\Delta x \to 0^-} \dfrac{f(x_0 + \Delta x) - f(x_0)}{\Delta x} = f'_-(x_0)$ 左导数
    - **因此 $f'(x_0)$ 存在 $\iff$ $f'_-(x_0) = f'_+(x_0)$ 。** 
      - 只有单侧极限，不能确定导数存在。

  2. $\Delta x \to $ （广义化）🐶
     - $f'(x_0) = \lim_{🐶 \to 0}\dfrac{f(x_0 + 🐶) - f(x_0)}{🐶}$ 
     - 三个 🐶 一摸一样（凑定义）

  3. 一静一动原则

     - 不可违反此原则

     - $\lim_{2 \Delta x \to 0}\dfrac{f(x_0 + \Delta x) - f(x_0 - \Delta x)}{2 \Delta x} = f'(x_0)$ 就是典型错误

  4. 等价写法（换元法）

     - 令 $x_0 + \Delta x = x \implies \lim_{x \to x_0}\dfrac{f(x) - f(x_0)}{x - x_0} = f'(x_0)$ 。 

- 例题
  - 下列函数中，在 $x = 0$ 处不可导的是 $()$ 。【具体型】
    - $\begin{array}{l} A. f(x) = |x| \sin |x| & B. f(x) = |x| \sin \sqrt{|x|} \\ C. f(x) = \cos |x| & D. f(x) = \cos \sqrt{|x|} \end{array}$ 
    - 分析
      - 只要见到 $f'(x_0)$ $\implies$ 先写导数定义。
        - 当题目给出 $f(x)$ ，写【差值式】。
        - 有界值 $\times$ 无穷小 $=$ 无穷小
  - **设 $f(0) = 0$ ，以下极限存在能确定 $f(x)$ 在点 $x = 0$ 可导的是 $()$ 。**【抽象型】
    - $\begin{array}{l} A. \lim_{h \to 0}\dfrac{f(1 - \cos h)}{h^2} & B. \lim_{h \to 0}\dfrac{f(1 - e^h)}{h} \\ C. \lim_{h \to 0}\dfrac{f(h - \sin h)}{h^2} &  D. \lim_{h \to 0}\dfrac{f(2h) - f(h)}{h}\end{array}$ 
    - 分析
      - 抽象型使用【增量式】
      - $f'(0) = \lim_{🐶 \to 0}\dfrac{f(0 + 🐶) - f(0)}{🐶}$ 
      - $h \to 0$ 时，$1 - \cos h \to 1^-$ 。
        - $\because \cos h \leq 1$ 
        - 天生【单侧极限】
      - $D$ 反例
        - $f(x) = \begin{cases} 1, & x\not= 0 \\ 0, & x = 0 \end{cases}$ 
      - $\begin{cases} f'(0) \cdot n = \exists & \implies f'(0) \exists \\ f'(0) \cdot \infty = \exists & \implies f'(0) \exists = 0 \\ f'(0) \cdot 0 = \exists & \not\implies f'(0) \exists \end{cases}$ 
    - 【注】
      - $🐶 \to 0$ 时，$\dfrac{|🐶|}{🐶}$ 有界，但 $\lim_{🐶 \to 0}\dfrac{|🐶|}{🐶}$ 不存在。
  - 若 $f(x)$ 是可导的偶函数，证明 $f'(x)$ 的奇函数。【记】
    - $\begin{array}{l}f'(x) & = \lim_{\Delta x \to 0} \dfrac{f(x + \Delta x) - f(x)}{\Delta x} \\ f'(-x) & = \lim_{\Delta x \to 0} \dfrac{f(-x + \Delta x) - f(-x)}{\Delta x} \\ & = \lim_{\Delta x \to 0} \dfrac{f(x+(-\Delta x) - f(x)}{\Delta x} \\ & = -\lim_{-\Delta x \to 0} \dfrac{f(x+(-\Delta x) - f(x)}{-\Delta x} \\ & = -f'(x) \end{array}​$ 
    - 若 $f(x)$ 是可导的奇函数，证明 $f'(x)$ 的偶函数。



### 导数计算

##### 基本求导公式

$\begin{array}{l} (\sin x)' = \cos x & (\cos x)' = -\sin x \\ (\tan x)' = \sec^2 x & (\cot x)' = - \csc^2 x \\ (\sec x)' = \sec x \tan x & (\csc x)' = - \csc x \cot x \end{array}$ 

$\begin{array}{l} (\arcsin x)' = \dfrac{1}{ \sqrt{1 - x^2} } & (\arccos x)' = - \dfrac{1}{ \sqrt{1 - x^2} } \\ (\arctan x)' = \dfrac{1}{1 + x^2} & (\arccot x)' = - \dfrac{1}{1 + x^2} \end{array}$

$\begin{array}{l} (\ln(x + \sqrt{x^2 + 1}))' = \dfrac{1}{ \sqrt{x^2 + 1} } \end{array}​$ 

$\begin{array}{l} (\ln(x + \sqrt{x^2 - 1}))' = \dfrac{1}{ \sqrt{x^2 - 1} } \end{array}$ 



##### 基本求导方法

1. 复合函数求导

  - 求函数 $y = (\tan 2x)^{ \cot\frac{x}{2} }$ 的导数。
2. 隐函数求导
  - 显函数：$y = f(x)$ ，隐函数：$F(x, y) = 0$ 。
  - 方法：在 $F(x, y) = 0$ 两边同时对 $x$ 求导，只需注意 $y = y(x)$ 即可（复合求导）。
  - 例题
    - 设 $y = y(x)$ 是由 $\sin xy = \ln \dfrac{x + e}{y} + 1$ 确定的隐函数，求 $y'(0)$ 和 $y''(0)$ 的值。
3. 对数求导法
  - 方法：对于多项相乘、相除、开方、乘方得来的式子，先取对数再求导。
  - 例题
    - 设 $y = (\dfrac{a}{b})^x \cdot (\dfrac{b}{x})^a \cdot (\dfrac{x}{a})^b \quad (a>0, b>0)$ ，求 $y'$ 。
4. 反函数求导

   - 注意写法即可

   - 例题

     - 设函数 $f(y)$ 的反函数 $f^{-1}(x)$ 及 $f'[f^{-1}(x)]$ 与 $f''[f^{-1}(x)]$ 都存在，且 $f'[f^{-1}(x)] \not= 0$ 。证明：$\dfrac{ {\rm d}^2 f^{-1}(x) }{ {\rm d} x^2 } = -\dfrac{ f''[f^{-1}(x)] }{ \{f'[f^{-1}(x)]\}^3 }$ 。

       - $\because x = f(y) \implies y = f^{-1}(x), \quad \therefore \dfrac{ {\rm d}^2 f^{-1}(x) }{ {\rm d} x^2 } = \dfrac{ {\rm d}^2 y }{ {\rm d} x^2 }$ 。

       - $x = f(y)$ 两边对 $x$ 求导，$1 = f'(y) \cdot \dfrac{ {\rm d} y }{ {\rm d} x } \implies \dfrac{ {\rm d} y }{ {\rm d} x } = \dfrac{1}{f'(y)}$ 。

       - $\dfrac{ {\rm d}^2 y }{ {\rm d} x^2 } = \dfrac{ {\rm d} ( \dfrac{ {\rm d} y }{ {\rm d} x } ) }{ {\rm d} x }$ 

         - 由于 $\dfrac{ {\rm d} y}{ {\rm d} x } = \dfrac{1}{f'(y)}$ 是关于 $y$ 的函数，所以 $\dfrac{ {\rm d} y}{ {\rm d} x }$ 只能对 $y$ 求导。 
         - $\begin{array}{l}\dfrac{ {\rm d}^2 y }{ {\rm d} x^2 } & = \dfrac{ {\rm d} ( \dfrac{ {\rm d} y }{ {\rm d} x } ) / {\rm d} y }{ {\rm d} x / {\rm d} y } = \dfrac{ {\rm d} ( \dfrac{1}{f'(y)} ) }{ {\rm d} y } \cdot \dfrac{ {\rm d} y }{ {\rm d} x } \\[1em] & = -\dfrac{ f''(y) }{ [f'(y)]^2 } \cdot \dfrac{1}{f'(y)} \\[1em] & = -\dfrac{ f''(y) }{ [f'(y)]^3 } =-\dfrac{ f''(f^{-1}(x)) }{ \{f'[f^{-1}(x)]\}^3 } \end{array}$ 
     - 求 $y = \dfrac{1}{2}\arctan \sqrt[4]{1 + x^4} + \ln\sqrt[4]{ \dfrac{ \sqrt[4]{1 + x^4} + 1 }{ \sqrt[4]{1 + x^4} - 1} }$ 的反函数的导数。
       - $\dfrac{ {\rm d} y }{ {\rm d} x } = \dfrac{1}{ \dfrac{ {\rm d} x }{ {\rm d} y } } \implies y'_x = \dfrac{1}{x'_y}$ 
       - 令 $u =  \sqrt[4]{1 + x^4}$ ，$y = \dfrac{1}{2} \arctan u + \ln \sqrt[4]{ \dfrac{u + 1}{u - 1} }$ 。
       - $y = \dfrac{1}{2} \arctan u + \dfrac{1}{4}( \ln (u + 1) - \ln(u - 1) )$ 
       - $y'_x = [\dfrac{1}{2} \cdot \dfrac{1}{u^2 + 1} + \dfrac{1}{4}(\dfrac{1}{u + 1} - \dfrac{1}{u - 1})] \cdot u'_x = - \dfrac{u'_x}{u^4 - 1}$ 
       - 将 $u = \sqrt[4]{1 + x^4}$ 代入得： $y'_x = - \dfrac{ \frac{1}{4} (1 + x^4)^{ -\frac{3}{4} } \cdot 4x^3 }{1 + x^4 - 1} = -\dfrac{1}{ x(1 + x^4)^{ \frac{3}{4} } }$ 。
       - 所以 $x'_y = \dfrac{1}{y'_x} = -x(1 + x^4)^{ \frac{3}{4} }$ 。
5. 参数方程求导
   - $\begin{cases} x = x(t) \\ y = y(t) \end{cases}$ ，$t$ 为参数
   - $\dfrac{ {\rm d}y }{ {\rm d}x } = \dfrac{ {\rm d}y / {\rm d}t }{ {\rm d}x / {\rm d}t } = \dfrac{y'_t}{x'_t}$ ，类似于反函数求导，是谁的函数就对谁求导，缺什么补什么。
   - 例题
     - 设函数 $y = f(x)$ 由参数方程 $\begin{cases} x = 2t + t^2 \\ y = \varphi(t) \end{cases} , (t > -1)$ 所确定，其中 $\varphi(t)$ 具有二阶导数，且已知 $\dfrac{ {\rm d}^2 y }{ {\rm d}x^2 } = \dfrac{3}{4(1 + t)}$ ，证明：函数 $\varphi(t)$ 满足方程 $\varphi''(t) - \dfrac{1}{1 + t} \varphi'(t) = 3(1 + t)$ 。
       - $\dfrac{ {\rm d}y }{ {\rm d}x } = \dfrac{ {\rm d}y / {\rm d}t }{ {\rm d}x / {\rm d}t } = \dfrac{\varphi'(t)}{2 + 2t}$ 
       - $\dfrac{ {\rm d}^2 y }{ {\rm d}x^2 } = \dfrac{ {\rm d}(\dfrac{ {\rm d}y }{ {\rm d}x }) }{ {\rm d}x } = \dfrac{ {\rm d}(\dfrac{ {\rm d}y }{ {\rm d}x }) / {\rm d}t }{ {\rm d}x / {\rm d}t } = \dfrac{ \dfrac{ \varphi''(t)(2 + 2t) - 2\varphi'(t) }{(2 + 2t)^2} }{2 + 2t}$ 
       - $\therefore \dfrac{ \varphi''(t)(2 + 2t) - 2\varphi'(t) }{(2 + 2t)^3 } = \dfrac{ \varphi''(t)(1 + 1t) - \varphi'(t) }{4(1 + t)^3 } = \dfrac{3}{4(1 + t)}$ 
       - $\implies \varphi''(t) - \dfrac{1}{1 + t} \varphi'(t) = 3(1 + t)$ 。
     - 设 $\begin{cases} x = t + e^t \\ y = \sin t \end{cases}$ ，则 $\left. \dfrac{ {\rm d}^2 y}{ {\rm d}x^2 } \right|_{t = 0} = \_\_\_\_\_\_$ 。
       - $-\dfrac{1}{8}$ 
6. 高阶导数
  - $\text{高阶导数} \begin{cases} \text{莱布尼兹公式} \\ \text{找规律用数学归纳法} \\ \text{展开式法} \end{cases}$ 
  - 莱布尼兹公式
    - $\begin{cases} (u \pm v)^{(n)} & = u^{(n)} \pm v^{(n)} \\[1em] (uv)^{(n)} & = \sum_{k=0}^{k=n} C_n^k u^{(n - k)} v^{(k)} \\ & = u^{(n)}v + n \cdot u^{(n - 1)}v' + \dfrac{n(n - 1)}{2} \cdot u^{(n - 2)}v'' + ... + uv^{(n)} \end{cases}$ 
    - $(a^x)^{(n)} = a^x(\ln a)^n, \quad (e^x)^{(n)} = e^x$ 
    - $(\sin kx)^{(n)} = k^n \sin( kx + \frac{\pi}{2} \cdot n  )$ 
    - $(\cos kx)^{(n)} = k^n \cos( kx + \frac{\pi}{2} \cdot n  )$ 
    - $(\ln x)^{(n)} = (-1)^{(n - 1)} \cdot \dfrac{(n - 1)!}{x^n}, (x > 0)$ 
    - $[\ln(x + 1)]^{(n)} = (-1)^{(n - 1)} \cdot \dfrac{(n - 1)!}{(1 + x)^n}, (x > -1)$ 
    - $(\dfrac{1}{x + a})^{(n)} = (-1)^n \cdot \dfrac{n!}{ (x + a)^{(n + 1)} }$ 
  - 例题
    - $y = x^2 \sin 2x$ ，求 $y^{(50)}$ 。
      - $\begin{array}{l} y^{(50)} & = x^2 \cdot (\sin 2x)^{(50)} + 50(x^2)' \cdot (\sin 2x)^{(49)} + \dfrac{50 \cdot 49}{2}(x^2)'' \cdot (\sin 2x)^{(48)} \\[1em] & = -2^{50}x^2 \sin 2x + 50 \cdot 2^{50}x \cos 2x + 50 \cdot 49 \cdot 2^{48} \sin 2x \end{array}$ 



### 微分中值定理

##### 十大定理

1. 涉及到 $f(x)$ 的定理

   - 设 $f(x)$ 在 $[a,b]$ 连续，则：

   1. 有界性定理
      - $\exists K > 0$ ，使 $|f(x)| \leq K$ ，$\forall x \in [a, b]$ 。
      - 连续函数在闭区间上有界。
   2. **最值定理**
      - $m \leq f(x) \leq M$ ，其中 $m$ ，$M$ 分别为 $f(x)$ 在 $[a, b]$ 上的最小、最大值。
   3. **介值定理**
      - 当 $m \leq \mu \leq M$ 时，则 $\exists \xi \in [a, b]$ ，使 $f(\xi) = \mu$ 。
   4. **零点定理**
      - 当在 $f(a) \cdot f(b) < 0$ 时，则 $\exists \xi \in (a, b)$ ，使 $f(\xi) = 0$ 。
      - （方程的根）

2. 涉及 $f'(x)$ 的定理

   5. 费马定理
      - 设 $f(x)$ 在 $x = x_0$ 处 $\begin{cases} 1) \text{可导} \\[1em] 2) \text{取极值} \end{cases} \implies f'(x_0) = 0$ 。
      - 《费马大定理》
      - 证明见《高数 18 讲》
   6. **罗尔定理**

      -  设 $f(x)$ 满足以下三条 $\begin{cases} 1) [a, b] \text{ 连续} \\[1em] 2) (a, b) \text{ 内可导} \\[1em] 3) f(a) = f(b) \end{cases} \implies \exists \xi \in (a, b) \text{ 使 } f'(\xi) = 0$ 。
   7. 拉格朗日中值定理
      - 设 $f(x)$ 满足 $\begin{cases}  1) [a, b] \text{上连续} \\[1em] 2) (a, b) \text{内可导}\end{cases}$ ，则 $\exists \xi \in (a, b)$ ，使 $f'(\xi) = \dfrac{f(b) - f(a)}{b - a}$ 。
      - 若 $f(b) = f(a)$ ，则 $f'(\xi) = 0$ ，即为罗尔定理。
   8. 柯西中值定理
      - 设 $f(x)$ ， $g(x)$ 满足 $\begin{cases} 1) [a, b] \text{连续} \\[1em] 2) (a, b) \text{内可导} \\[1em] g'(x) \not= 0 \end{cases}$ ，则 $\dfrac{f'(\xi)}{g'(\xi)} = \dfrac{f(b) - f(a)}{g(b) - g(a)}$ 。
      - 若取 $g(x) = x \implies \dfrac{f(b) - f(a)}{b - a} = \dfrac{f'(\xi)}{1}$ ，即为拉格朗日中值定理。
      - 柯西中值定理 $\implies$ 拉格朗日中值定理 $\implies$ 罗尔定理
   9. 泰勒定理（泰勒公式）
      - 任何可导函数 $ f(x) = \sum a_n x^n $ 。
      1. 带拉格朗日余项的泰勒公式
        - 证明 / 推证某些结果
        - $ f(x) $  $ n + 1 $ 阶可导：
        - $ f(x) = f(x_0) + f'(x_0)(x - x_0) + \dfrac{ f''(x_0) }{ 2! }(x - x_0)^2 + ... + \dfrac{ f^{(n)}(x_0) }{ n! }(x - x_0)^n + \dfrac{ f^{(n + 1)}(\xi) }{ (n + 1)! }(x - x_0)^{n + 1} $ 
          - $ \dfrac{ f^{(n)}(x_0) }{ n! }(x - x_0)^n $ 是通项。
          - $ \dfrac{ f^{(n + 1)}(\xi) }{ (n + 1)! }(x - x_0)^{n + 1} $ 是拉格朗日余项。
          - $ x_0 $ 介于 $ x $ 和 $ x_0 $ 之间。
        - 当 $ x_0 = 0 $ 时，泰勒公式成为麦克劳林公式
          - $ f(x) = f(0) + f'(0)x + \dfrac{ f''(0) }{ 2! }x^2 + ... + \dfrac{ f^{(n)}(0) }{ n! } x^n + \dfrac{ f^{(n + 1)}(\xi) }{ (n + 1)! }x^{n + 1}  $
      2. 带佩亚诺余项的泰勒公式
        - 用于计算
        - $ f(x) $  $ n $ 阶可导：
        - $ f(x) = f(x_0) + f'(x_0)(x - x_0) + \dfrac{ f''(x_0) }{ 2! }(x - x_0)^2 + ... + \dfrac{ f^{(n)}(x_0) }{ n! }(x - x_0)^n + o( (x - x_n)^n ) $ 
   10. 积分中值定理



##### 五大方面的应用

1. 涉及 $f(x)$ 的应用（1-4）

  - 设 $f(x)$ 在 $[a, b]$ 上连续，证明 $\exists \xi \in [a, b]$ ，使 $\int_a^b{f(x) {\rm d} x = f(\xi)(b - a)}$ 。
    - 由于 $f(x)$ 在 $[a, b]$ 上连续，所以存在 $m \leq f(x) \leq M (x \in [a, b])$ ，$m$ 为最小值，$M$ 为最大值。
    - 所以 $\begin{array}{l} & \int_a^b{m} {\rm d}x \leq \int_a^bf(x){\rm d}x \leq \int_a^b{M}{\rm d}x \\[1em] \implies & m(b - a) \leq \int_a^b{f(x)}{\rm d}x \leq M(b - a) \\[1em] \implies & m \leq \dfrac{ \int_a^b{f(x){\rm d}x} }{b - a} \leq M \end{array}$ 。 
    - 所以 $\exists \xi \in [a, b]$ ，使 $f(\xi) = \dfrac{\int_a^b{f(x)}{\rm d}x}{b - a}$ 。

2. 罗尔定理的应用（6）
   - **求导公式逆用法**
     - 分析
       - $F(a) = F(b) \implies F'(\xi) = 0$ 
       - 由 $(uv)' = u'v + uv'$ ，【倒着看】
         - 取 $u = f(x)$ ，$v = x$ ，
           - 记 $F(x) = f(x) \cdot x \implies F'(x) = f'(x) \cdot x + f(x)$ ，
           - 则可证 $f'(\xi) \cdot \xi + f(\xi) = 0$ 。 
         - 取 $u = f(x)$ ，$v = e^x$ ，
           - 记 $F(x) = f(x) \cdot e^x \implies F'(x) = f'(x) \cdot e^x + f(x)e^x$ ，
           - 则可证 $F'(\xi) = f'(\xi) \cdot e^{\xi} + f(\xi) \cdot e^{\xi} = 0 \implies f'(\xi) + f(\xi) = 0$ 。
         - 取 $u = f(x)$ ，$v = e^{\varphi(x)}$ ，
           - 记 $F(x) = f(x) \cdot e^{\varphi(x)} \implies F'(x) = f'(x) \cdot e^{\varphi(x)} + f(x) \cdot e^{\varphi(x)} \cdot \varphi'(x)$ ，
           - 则可证 $F'(\xi) = f'(\xi) \cdot e^{\varphi(\xi)} + f(\xi) \cdot e^{\varphi(\xi)} \cdot \varphi'(\xi) = 0 \implies f'(\xi) + f(\xi) \cdot \varphi'(\xi)$ 。
     - 例题
       - 设 $f(x)$ 在 $[0, 1]$ 上连续，$(0, 1)$ 内可导，$f(1) = 0$ ，证明 $\exists \xi \in (0, 1)$ ，使 $f(\xi) + \xi f'(\xi) = 0$ 。
       - 设 $f(x)$ 在 $[0, 1]$ 上二阶可导，且 $f(1) > 0$ ，$\lim_{x \to 0^+}\dfrac{f(x)}{x} < 0$ ，证明：1⃣️方程 $f(x) = 0$ 在 $(0, 1)$ 内至少有一个实根。2⃣️方程 $f(x)f''(x) + [f'(x)]^2 = 0$ 在 $(0, 1)$ 内至少有两个不同的实根。
         - 1⃣️
         - 由 $\lim_{x \to 0^+}\dfrac{f(x)}{x} < 0$ ，所以 $\exists \xi > 0$ ，当 $0 < x <\xi$ 时，$\dfrac{f(x)}{x} < 0$ ，所以当 $0 < x < \xi$ 时，$f(x) < 0$ 。
           - 【极限保号性】
         - 取 $a \in (0, \xi)$ ，$f(a) < 0$ ，又因为 $f(1) > 0$ ，所以 $\exists c \in (\xi, 1)$ ，使得 $f(c) = 0$ 。 
         - 2⃣️
         - 设 $F(x) = f(x) \cdot f'(x)$ ，$f(0) = \lim_{x \to 0^+}f(x) = \lim_{x \to 0^+}\dfrac{f(x)}{x} \cdot x = 0$ 。
           - 函数极限存在，函数有界，所以 $\lim_{x \to 0^+}\dfrac{f(x)}{x}$ 有界。 
         - 由于 $f(0) = f(c) = 0$ ，所以 $\exists b \in (0, c)$ ，使得 $f'(b) = 0$ 。
         - 所以 $F(0) = F(b) = F(c) = 0$ 。
           - 所以 $\exists \xi_1 \in (0, b)$ ，使得 $F'(\xi_1) = 0$ 。
           - 所以 $\exists \xi_2 \in (b, c)$ ，使得 $F'(\xi_2) = 0$ 。
       - $f(x)$ 在 $[0, 1]$ 上连续，$(0, 1)$ 内可导，且 $f(1) = k \int_0^{ \frac{1}{k} } x e^{1 - x} f(x) {\rm d} x, (k>1)$ ，证明 $\exists \xi \in (0, 1)$ ，使 $f'(\xi) = (1 - \dfrac{1}{\xi}) f(\xi)$ 。
         - $f'(\xi) = (1 - \dfrac{1}{\xi}) f(\xi) \implies f'(\xi) + f(\xi)(\dfrac{1}{\xi - 1}) = 0$ 
           - 令 $F(x) = f(x) \cdot e^{\ln x - x} = f(x) \cdot x \cdot e^{-x}$ 
         - **【证明题中，见到 $\int_a^bf(x){\rm d}x$ 先用积分中值定理试试再说】** 
           - $k \int_0^{ \frac{1}{k} } x e^{1 - x} f(x) {\rm d} x = \eta \cdot e^{1 - \eta} \cdot f(\eta) = f(1) \quad (0 < \eta < \dfrac{1}{k} < 1)$ 
           - $F(1) = f(1) \cdot 1 \cdot e^{-1} = \eta \cdot e^{-\eta} \cdot f(\eta) = F(\eta)$ 
   - 积分还原法
     - 分析
       1. 将欲证结论中的 $\xi$ 改为 $x$。
       2. 积分（令 $c = 0$）
       3. 移项，使等式一端为 $0$ ，则另一端记为 $F(x)$ 。 
     - 例题
       - 证明拉格朗日中值定理：$f'(\xi) = \dfrac{f(b) - f(a)}{b - a}$ 。 
         - $f'(x) = \dfrac{f(b) - f(a)}{b - a}$ 
         - 两边积分
           - $f(x) = \dfrac{f(b) - f(a)}{b - a} \cdot x + c$ ，令 $c = 0$ ，所以 $f(x) = \dfrac{f(b) - f(a)}{b - a} \cdot x$ 。
         - 令 $F(x) = f(x) - \dfrac{f(b) - f(a)}{b - a} \cdot x$ 。
           - $F(a) = \dfrac{f(a)b - f(b)a}{b - a} = F(b)$ 
       - 证明柯西中值定理：$\dfrac{f'(\xi)}{g'(\xi)} = \dfrac{f(b) - f(a)}{g(b) - g(a)}$ 。
         - $f'(x) = \dfrac{f(b) - f(a)}{g(b) - g(a)} g'(x)$ 
         - 两边积分
           - $f(x) = \dfrac{f(b) - f(a)}{g(b) - g(a)} g(x)$
         - 令 $F(x) = f(x) - \dfrac{f(b) - f(a)}{g(b) - g(a)}g(x)$ 
           - $F(a) = ? = F(b)$ 
       - 设 $f(x)，g(x)$ 在 $[a, b]$ 上二阶可导，$g''(x) \not= 0$ ，$f(a) = f(b) = g(a) = g(b) = 0$ 。证明：1⃣️ $g(x) \not= 0 \quad \forall x \in (a, b)$ 。2⃣️  $\exists \xi \in (a, b)$，使 $\dfrac{f(\xi)}{g(\xi)} = \dfrac{f''(\xi)}{g''(\xi)}$ 。
         - 1⃣️
         - 反证法
           - 设 $\exists x_0 \in (a, b)，g(x_0) = 0$ 
         - 2⃣️
         - $\xi \to x \implies f(x)g''(x) = g(x)f''(x)$ 
         - 积分： $\begin{array}{l} \dfrac{f(\xi)}{g(\xi)} = \dfrac{f''(\xi)}{g''(\xi)} & \implies \int f(x)g''(x) {\rm d}x = \int g(x)f''(x) {\rm d}x \\[1em] & \implies f(x)g'(x) - \int g'(x)f'(x){\rm d}x = g(x)f'(x) - \int f'(x)g'(x){\rm d}x \\[1em] & \implies f(x)g'(x) = g(x)f'(x) \end{array}$  
         - 令 $F(x) = f(x)g'(x) - g(x)f'(x)$ 
           - $F(a) = f(a)g'(a) - g(a)f'(a) = 0$
           - $F(b) = f(b)g'(b) - g(b)f'(b) = 0$  

3. 拉格朗日中值定理的应用（7）
   1. 将 $f$ 复杂化
     - 设 $f(x)$ 在 $[a, b]$ 上连续， $(a, b)$ 内可导，证明：$\exists \xi \in (a, b)$ ，使 $bf(b) - af(a) = [f(\xi) + \xi f'(\xi)(b - a)]$ 。
   2. 给出相对高阶的条件 $\implies$ 证明低阶不等式
      - 设 $f''(x) < 0，f(0) = 0$ ，证明：$\forall x_1 \not= x_2 > 0$ ，有 $f(x_1 + x_2) < f(x_1) + f(x_2)$ 。
        - 【多点最好画图】 
        - 设 $0 < x_1 < x_2 < x_1 + x_2$ ，找相邻的点研究
          -  $[0, x_1] \implies f(x_1) - f(0) = f'(\xi_1) \cdot (x_1 - 0) = f'(\xi_1) \cdot x_1$ 
          -  $[x_2, x_1 + x_2] \implies f(x_1 + x_2) - f(x_2) = f'(\xi_2) \cdot (x_1 + x_2 - x_2) = f'(\xi_2) \cdot x_1$ 
          -  因为 $\xi_1 < \xi_2，f''(x) < 0$ ，所以 $f(\xi_1) > f(\xi_2)$ 。
          -  所以 $f(x_1) > f(x_1 + x_2) - f(x_2)$ 。
   3. 给出相对低阶的条件 $\implies$ 证明高阶不等式
      - 设 $f(x)$ 二阶可导，且 $f(2) > f(1)，f(2) > \int_2^3 f(x) {\rm d}x$ ，证明 $\exists \xi \in (1, 3)$ ，使 $f''(\xi) < 0$ 。 
        - $f(2) - f(1) = f'(\xi_1) > 0 \quad \xi_1 \in (1, 2)$ 
        - 【积分中值定理】
          -  $f(2) > \int_x^3 f(x){\rm d}x = f(\eta)(3 - 2) = f(\eta) \quad \eta \in (2, 3)$ 
          - $f(\eta) - f(2) = f'(\xi_2)(\eta - 2) \implies f'(\xi_2) < 0 \quad \xi_2 \in (2, \eta)$ 
        - $f'(\xi_2) - f'(\xi_1) = f''(\xi)(\xi_2 - \xi_1) \implies f''(\xi) < 0 \quad \xi \in (1, 3)$ 
   4. 具体化 $f$，由 $a < \xi < b \implies$ 不等式
      - 设 $0 < a < b < 1$ ，证明：$\arctan b - \arctan a < \dfrac{b - a}{2ab}$ 。
        - 令 $f(x) = \arctan x$ ，在 $[a, b]$ 上根据拉氏定理：
        - $\dfrac {\arctan b - \arctan a}{b - a} = \dfrac{1}{1 + \xi^2} \quad (0 < a < \xi <b < 1)$ 
        - 所以 $\arctan b - \arctan a = \dfrac{b - a}{1 + \xi^2} < \dfrac{b - a}{1 + a^2} < \dfrac{b - a}{b^2 + a^2}$ （分母缩小）
        - 又 $a^2 + b^2 > 2ab$ ，所以 $\arctan b - \arctan a < \dfrac{b - a}{b^2 + a^2} < \dfrac{b - a}{2ab}$ 。
   5. $\xi$ 的具体表达式
      - 设 $f(x) = \arcsin x$ ，$\xi$ 为 $f(x)$ 在 $[0, t]$ 上拉格朗日中值定理的中值点，$0 < t < 1$ ，求极限 $\lim_{t \to 0+}\dfrac{\xi}{t}$ 。
        - $\arcsin t - \arcsin 0 = \dfrac{1}{ \sqrt{1 - \xi^2} } \cdot (t - 0) \quad (0 < \xi < t < 1)$ 
        - $\arcsin t = \dfrac{t}{ \sqrt{1 - \xi^2} } \implies \xi = \sqrt{1 - (\dfrac{t}{\arcsin t})^2}$ 
        - 令 $\arcsin t = u \quad ( t \to 0^+ \implies u \to 0^+ )$
        - 所以 $\lim_{t \to 0^+}\dfrac{\xi}{t} = \lim_{u \to 0^+} \sqrt{ \dfrac{ 1 - (\dfrac{\sin u}{u})^2 }{ (\sin u)^2 } } = \lim_{u \to 0^+}\sqrt{ \dfrac{u^2 - (\sin u)^2}{u^2 \cdot (\sin u)^2} }  = \dfrac{1}{ \sqrt{3} }$ 

4. 柯西中值定理的应用（8）
   - 例题
     - $f(x)$ 在 $[a, b]$ 上连续，在 $(a, b)$ 内可导，且 $f'(x) \not= 0$ 。证明：$\exists \xi, \eta \in (a, b)$ ，使得 $\dfrac{ f'(\xi) }{ f'(\eta) } = \dfrac{ e^b - e^a }{ b - a }e^{-\eta} $ 。
       - 物以类聚，人以群分
       - $ f'(\xi) = \dfrac{ e^b - e^a }{ b - a } \cdot \dfrac{ f'(\eta) }{ e^\eta } $ 
         - $ \dfrac{ f'(\eta) }{ e^\eta } $ 像柯西中值定理
       - 其中 $ \begin{cases} \dfrac{ f'(\eta) }{ e^\eta } & = \dfrac{ f(b) - f(a) }{ e^b - e^a } \quad ( g(x) = e^x ) \\[1em] f'(\xi) & = \dfrac{ f(b) - f(a) }{ b - a } \end{cases} $ 。

5. 泰勒公式的应用——信号 $ f^{(n)}(\xi), n \geq 2^n $ 。
    - 设 $ f(x)  $ 在 $ [0, 1] $ 上二阶可导，且 $ \int_0^1 f(x) {\rm d}x = 0 $，则
      - $ A. $ 当 $ f'(x) < 0 $ 时，$ f(\frac{1}{2}) < 0 $ 
      - $ B. $ 当 $ f''(x) < 0 $ 时，$ f(\frac{1}{2}) < 0 $ 
      - $ C. $ 当 $ f'(x) > 0 $ 时，$ f(\frac{1}{2}) < 0 $ 
      - $ D. $ 当 $ f''(x) > 0 $ 时，$ f(\frac{1}{2}) < 0 $ 
      - 分析
        - $ f(x) = f(\frac{1}{2}) + f'(\frac{1}{2})(x - \frac{1}{2}) + \dfrac{f''(\xi)}{2}(x - \frac{1}{2})^2 $ 
        - 两边积分
          - $ \int_0^1 f(x) {\rm d}x = \int_0^1 f(\frac{1}{2}) {\rm d}x + \int_0^1 f'(\frac{1}{2})(x - \frac{1}{2}) {\rm d}x + \int_0^1 \dfrac{f''(\xi)}{2}(x - \frac{1}{2})^2  $ 
          - $ \int_0^1 f(x) {\rm d}x = f(\frac{1}{2}) + 0 + \int_0^1 \dfrac{f''(\xi)}{2}(x - \frac{1}{2})^2 $ 
          - $ f(\frac{1}{2}) = - \int_0^1 \dfrac{f''(\xi)}{2}(x - \frac{1}{2})^2 $ 
      - $ D $






















