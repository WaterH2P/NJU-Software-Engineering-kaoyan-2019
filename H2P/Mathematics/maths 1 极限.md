---
title: 极限
date: 2018-9-21
updated: 2018-9-28
tags: [maths,cs,kaoyan]
mathjax: true

description: 做笔记，喝凉茶，看高数
---


### x函数极限

$\lim_{x \to x_0}f(x) = A​$ 

- $\forall \varepsilon > 0$，$\exists \delta > 0$，当 $0 < |x - x_0| < \delta$ 时，$|f(x) - A| < \varepsilon$ 。 

$\lim_{x \to \infty}f(x) = A$ 

- $\forall \varepsilon > 0$，$\exists X > 0$，当 $|x| > X$ 时，$|f(x) - A| < \varepsilon$ 。 

$\lim_{x \to \infty}f(x) = \infty$

- $\forall M > 0$，$\exists X > 0$，当 $|x| > X$ 时，$|f(x)| > M$ 。 



### 数列极限

$\lim_{n \to \infty}x_n = A$ 

- $\forall \varepsilon > 0$，$\exists N > 0$，当 $n > N$ 时，$|x_n - A| < \varepsilon$ 。 



### 极限三大性质

##### 唯一性

- $x \to x_0$ 左右有别
  - $x \to x_o^+$ 
  - $x \to x_0^-$ 

##### 局部有界性

- 若 $\lim_{x \to x_0}f(x) = A$ ，则 $\exists M > 0$ ，$\delta >0$ ，当 $0 < |x - x_0| < \delta$ 时，恒有 $|f(x)| < M$ 。
- 例题
  - $f(x) = \dfrac{|x| \sin(x - 2)}{x (x - 1) (x - 2)^2}$ 在 $(A)$ 内有界。
    - $A.(-1,0)$  $B.(0,1)$  $C.(1,2)$  $D.(2,3)$ 
- 讨论 $f(x)$ 在指定区间 $I$ 上的有界性：
  - 若 $I$ 为 $[a,b]$ ，用“连续函数 $f(x)$ 在 $[a,b]$ 上必有界”。
  - 若 $I$ 为 $(a,b)$ ，
    - $$\left. \begin{array} \text{\lim_{x \to a^+}f(x) 存在} & \implies & \text{f(x) 在 a 的右邻域有界} \\ \lim_{x \to b^-}f(x) 存在 & \implies & \text{f(x) 在 b 的左邻域有界} \\ & & \text{f(x) 在 (a,b) 内连续} \end{array} \right \} \implies f(x) 在 (a,b) 内有界 $$ 
    - 通常 $f(x)$ 在 $(a,b)$ 内连续必成立
      - 初等函数在其定义区间内必连续



##### 局部保号性

- 若 $\lim_{x \to x_0}f(x) = A > 0$ ，则 $x \to x_0$ 时，$f(x) >0$ 。
- 若 $\lim_{x \to x_0}f(x) = A < 0$ ，则 $x \to x_0$ 时，$f(x) <0$ 。
- 脱帽法



### 函数极限的计算

- 七种未定式： $\dfrac{0}{0}$ , $\dfrac{\infty}{\infty}$ , $\infty \times 0$ ; $\infty - \infty$ ; $\infty^0$ , $0^0$ , $1^\infty​$ 。
- 洛必达法则
  1. 若 $\lim_{x \to x_0}f(x) = 0(\infty)$ ，$\lim_{x \to x_0}g(x) = 0(\infty)$ ；
  2. 且 $lim_{x \to x_0} \dfrac{f'(x)}{g'(x)} 存在$ ，则 $lim_{x \to x_0} \dfrac{f(x)}{g(x)} = lim_{x \to x_0} \dfrac{f'(x)}{g'(x)}$ 。
- 常用等价无穷小 $(x \to 0)$
  - $\sin x$ ~ $\arcsin x$ ~ $\tan x$ ~ $\arctan x$ ~ $e^x - 1$ ~ $\ln(1 + x)$  ~ $x$
  - $(1 + x)^\alpha - 1$ ~ $\alpha x$ $\implies$ $(1 + 🐶)^\alpha - 1$ ~ $\alpha 🐶$ $(🐶 \to 0)$  
- 解题思路
  - $\dfrac{0}{0}​$ , $\dfrac{\infty}{\infty}​$ , $\infty \times 0​$
    - 化简
      - 恒等变形
        - 有理化
          - 见根号差：$\sqrt{a} - \sqrt{b}$ 
        - 提取公因式
        - 添项
      - 等价无穷小替换
        - $x \to 🐶$ 
      - 及时提出 极限不为0 的因式
    - 例题
      - $lim_{x \to 1^-}\ln x \times ln(1 - x)​$ 
        - $\lim_{x \to 1}\ln x$ = $\lim_{x \to 1}\ln(1 + x - 1)$ ~ $\lim_{x \to 1}x-1$ 
  - $\infty - \infty$ 
    - 有分母，则通分
      - $\lim_{x \to 0}(\dfrac{e^x + xe^x}{e^x - 1} - \dfrac{1}{x})$ 
    - 没有分母，创造分母
      - 倒代换
        - 令 $x = \dfrac{1}{t}$ 
      - $\lim_{x \to +\infty}[x^2(e^{\frac{1}{x} - 1} - x)]$ 
  - $\infty^0$ , $0^0$ , $1^\infty$ 
    - $U(x)^{V(x)} = e^{V(x) \ln U(x)}$ 
    - 例题
      - $\lim_{x \to \infty}(x + \sqrt{1 + x^2})^\frac{1}{x}$ 
        - $(\ln (x + \sqrt{1 + x^2}))' = \dfrac{1}{ \sqrt{1 + x^2} }$ 
      - $\lim_{ x \to \frac{\pi}{4} }(\tan x)^{ \dfrac{1}{\cos x - \sin x} }$ 
        - $1^\infty \implies \lim u^v = e^{\lim v\ln u} = e^{\lim v(u - 1)}$ 
- 泰勒公式
  - 任何可导函数 $f(x) = \sum a_nx^n$ 
  - $x \to 0$
    - $sinx = x - \dfrac{1}{3!}x^3 + o(x^3)$ 
      - $x - \sin x$ ~ $\dfrac{1}{6}x^3$  $\quad and \quad$  $x + \sin x$ ~ $2x$ 
        - $x^2 - {\sin^2 x}$ ~ $\dfrac{1}{3}x^4$ 
    - $arcsinx = x + \dfrac{1}{6}x^3 + o(x^3)$ 
    - $tanx = x + \dfrac{1}{3}x^3 + o(x^3)$ 
      - $x - \tan x$ ~ $-\dfrac{1}{3}x^3$ 
    - $arctanx = x - \dfrac{1}{3}x^3 + o(x^3)$ 
    - $cosx = 1 - \dfrac{1}{2!}x^2 + \dfrac{1}{4!}x^4 + o(x^4)$ 
    - $\ln(1 + x) = x - \dfrac{x^2}{2} + \dfrac{x^3}{3} - \dfrac{x^4}{4} + o(x^4)$ 
    - $e^x = 1 + x + \dfrac{x^2}{2!} + \dfrac{x^3}{3!} + o(x^3)$ 
    - $\dfrac{1}{1 - x} = 1 + x + x^2 + x^3 + o(x^3) (\mid x \mid < 1)$ 
    
  - 解题思路
    - $\dfrac{A}{B}$ 型
      - 见到 $\dfrac{A}{B}$ 型，用【上下同阶】原则
        - 若分母（分子）是 $x^k$ ，则分子（分母）展开至 $x^k$ 。
      - $\lim_{x \to 0}\dfrac{\arcsin x - \arctan x}{x^3}$ 
    - $A - B$ 型
      - 见到 $A - B$ 型，用【幂次最低】原则

        - 将 $A, B$ 分别展开至系数不想等的 $x$ 的最低次幂为止。
      - 当 $x \to 0$ 时，$\cos x - e^{ -\frac{x^2}{2} }$ 与 $cx^k$ 为等价无穷小，求 $c, k$ 。
      - 设 $f(x)$ 在 $x = 0$ 的某邻域内有定义，且 $\lim_{x \to 0} \dfrac{f(x) \tan x - \sin 4x}{x^3} = 0$ ，计算 $\lim_{x \to 0} \dfrac{f(x) - 4}{x^2}$ 。



### 数列极限的计算

1. 若 $\lbrace x_n \rbrace$ 易于连续化，转化为函数极限计算。
   - 依据：若 $\lim_{x \to +\infty}f(x) = A$ ，则 $\lim_{n \to \infty}f(n) = A$ 。【归结定理】
   - $\lim_{n \to \infty}(n \times \tan \dfrac{1}{n})^{n^2}​$ 
     - $1^\infty$ 
2. 若 $\lbrace x_n \rbrace$ 不易于连续化，用【夹逼准则】或【定积分定义】。
   - 当分子分母都在变化的时候
     - 只改分母，不动分子
     - $\lim_{n \to \infty}(\dfrac{1}{n^2 + n + 1} + \dfrac{2}{n^2 + n + 2} + ... + \dfrac{n}{n^2 + n + n})$ 
       - $\sum_{i=1}^n \dfrac{i}{n^2 + n + n} \leq 原式 \leq \sum_{i=1}^n \dfrac{i}{n^2 + n + 1}$ 
   - 抓【隐蔽】条件：函数天生的有界性
     - $\lim_{n \to \infty}\sqrt[n]{n \arctan n}$ 
       - $\dfrac{\pi}{4} < \lim_{n \to \infty}\arctan n < \dfrac{\pi}{2}$ 
       - $\lim_{n \to \infty}(n \times \dfrac{\pi}{4})^\dfrac{1}{n} < \lim_{n \to \infty}\sqrt[n]{n \arctan n} < \lim_{n \to \infty}(n \times \dfrac{\pi}{2})^\dfrac{1}{n}​$ 
3. 若 $\{x_n\}$ 由递推式 $x_n = f(x_{n-1})$ 给出，用【单调有界准则】。
   - 若 $\{x_n\}$ 单调增且有上界或者单调减且有下界 $\implies \lim_{n \to \infty}x_n 存在 \iff {x_n} 收敛$ 。 
   - 设 $x_1 = 1, x_{n+1} = 1+ \dfrac{x_n}{1 + x_n} (n = 1, 2, ...)$ ，证明 $\{x_n\}$ 收敛并求 $\lim_{n \to \infty} x_n$ 。
     - 先证存在，再求极限。
     1. 【数学归纳法】$\implies$ $\{x_n\}$ 单调增
     2. 根据递推式证明有界：$x_n < 2$ ，从而数列收敛，极限存在设为 $A$ 。
     3. **对递推式两边取极限**，$\lim_{n \to \infty}x_n = \lim_{n \to \infty}(1 + \dfrac{ x_{n - 1} }{1 + x_{n - 1} }) \quad \implies \quad A = 1 + \dfrac{A}{1 + A}​$ 。 



### 极限的应用

1. 基本常识
   - 任何初等函数在其定义区间内连续，故考研中之研究两类特殊的点：
     - 分段函数的分段点（可能间断）
     - 无定义点（必然间断）
2. 连续的定义
   - 若 $\lim_{x \to x_0}f(x) = f(x_0)$ ，则 $f(x)$ 称在 $x = x_0$ 处连续。
   - 【注】
     - $\lim_{x \to x_0^+}f(x) = \lim_{x \to x_0^-}f(x) = f(x_0)$ 三者相等才连续。
3. 间断的定义
   - 连续的对立事件
   - 设 $f(x)$ 在 $x = x_0$ 点的某去心邻域有定义【双侧定义】
   - $(1) \lim_{x \to x_0^+}f(x) \quad (2) \lim_{x \to x_0^-}f(x) \quad (3) f(x)$ 
     - 第一类间断点 $(1)、(2)$ 均存在，且
       - $(1) \not= (2)$ ：$x_0$ 为跳跃间断点
       - $(1) = (2) \not= (3)$ ：$x_0$ 为可去间断点
     - 第二类间断点 $(1)、(2)$ 至少一个不存在（目前考研只考 $(1)、(2)$ 均不存在）
       - 若不存在 $=\infty \implies$ 无穷间断点
       - 若不存在 $=$ 振荡 $\implies$ 振荡间断点
     - 【注】
       - 单侧定义不讨论间断性
       - 若出现左右一边是振荡间断，一边是无穷间断，应分侧讨论（超纲）
   - 求函数 $F(x) = \begin{cases} \dfrac{x(\pi + 2x)}{2 \cos x}, & x \leq 0 \\ \sin\dfrac{1}{x^2 -1}, & x > 0 \end{cases}$ 的间断点，并判断它们的类型。
     1. 分段点：$x = 0$ 
     2. 无定义点
        - $x > 0$ 时，分母不为 $0$ ，$x = 1$ 。
        - $x < 0$ 时，$x_k = -k \pi - \dfrac{\pi}{2}, (k = 0, 1, ...)$ 。
          - $x_0 = -\dfrac{\pi}{2}$ ，$\lim_{ x \to -\frac{\pi}{2} }\dfrac{x(\pi + 2x)}{2 \cos x}$ 是 $\dfrac{0}{0}​$ 。