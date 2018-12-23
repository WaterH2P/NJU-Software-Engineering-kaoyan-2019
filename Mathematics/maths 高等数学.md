《微积分Ⅱ》

- 定理 5.2.2 （P14）
    - 若二阶混合偏导数 $f''_{xy}(x,y)$ 与 $f''_{yx}(x,y)$ 在 $(x,y)$ 处皆连续，则 $f''_{xy}(x,y)$ = $f''_{yx}(x,y)$，即混合偏导数与求导的次序无关。
- 定理 5.2.3 （P16）
    - 设函数 $f(x,y)$ 在 $(x,y)$ 处可微，则函数 $f(x,y)$ 在 $(x,y)$ 处连续。
- 定理 5.2.4 （P16）
    - 设函数 $z = f(x,y)$ 在 $(x,y)$ 处可微，则函数 $f(x,y)$ 在 $(x,y)$ 处可偏导，且 $${\rm d}z = \dfrac{\partial  z}{\partial x}{\rm d}x + \dfrac{\partial z}{\partial y}{\rm d}y$$ 。
    - 其中，$\dfrac{\partial z}{\partial x} = f'_x(x,y)$ ，$\dfrac{\partial z}{\partial y} = f'_y(x,y)$ 。
- 定义 5.2.3 （连续可微）（P18）
    - 若函数 $f(x,y)$ 在 $(x,y)$ 的某邻域内可偏导，且 $f'_x(x,y)$ ， $f'_y(x,y)$ 在 $(x,y)$ 处连续，则称函数 $f(x,y)$ 在 $(x,y)$ 处**连续可微**。
    - 偏导连续 $\Longrightarrow$ 可微，可微 不一定 偏导连续
    - 不连续 $\Longrightarrow$ 不可微，不连续 不一定 不可导



### 复合函数的偏导数

##### 链式法则

- 定理 5.3.1 （链式法则1）（P25）
  - 设函数 $u = \varphi (x)$ ， $v = \psi (x)$ 都在点 $x$ 处可导，函数 $z = f(u,v)$ 在对应点 $(u,v)$ 处可微，则复合函数 $z = f( \varphi (x), \psi (x) )$ 在点 $x$ 处可导，且有公式 $$\dfrac{ {\rm d}z }{ {\rm d}x } = \dfrac{\partial  z}{\partial u}\dfrac{ {\rm d}u }{ {\rm d}x } + \dfrac{\partial  z}{\partial v}\dfrac{ {\rm d}v }{ {\rm d}x } $$ 。
- 定理 5.3.2 （链式法则2）（P25）
  - 设函数 $u = \varphi (x, y)$ ， $v = \psi (x, y)$ 在点 $(x, y)$ 处可偏导，函数 $z = f(u, v)$ 在对应的点 $(u, v)$ 处可微，则复合函数 $z = f( \varphi (x, y), \psi (x, y) )$ 在点 $(x, y)$ 处可偏导，且有公式  $$\dfrac{ \partial  z }{ \partial  x } = \dfrac{ \partial z }{ \partial u }\dfrac{ \partial u }{ \partial  x } + \dfrac{ \partial  z }{ \partial v }\dfrac{ \partial  v }{ \partial  x } $$ ， $$\dfrac{ \partial  z }{ \partial  y } = \dfrac{ \partial  z }{ \partial u }\dfrac{ \partial u }{ \partial  y } + \dfrac{ \partial  z }{ \partial v }\dfrac{ \partial  v }{ \partial  y } $$ 。
- 定理 5.3.3 （链式法则3）（P26）
  - 设函数 $u = \varphi (x, y)$ ， $v = \psi (x ,y)$ 都在点 $(x, y)$ 处可偏导，函数 $z = f(x, y, u, v)$ 在对应点 $(x, y, u, v)$ 处可微，则复合函数 $$z(x, y) = f(x, y, \varphi (x, y), \psi(x, y))$$ 在点 $(x, y)$ 处可偏导，且有公式 $$\dfrac{ \partial  z }{ \partial  x } = \dfrac{ \partial f }{ \partial x } +  \dfrac{ \partial  f }{ \partial u }\dfrac{ \partial u }{ \partial  x } + \dfrac{ \partial  f }{ \partial v }\dfrac{ \partial  v }{ \partial  x } $$ ， $$\dfrac{ \partial  z }{ \partial  y } = \dfrac{ \partial f }{ \partial y } +  \dfrac{ \partial  f }{ \partial u }\dfrac{ \partial u }{ \partial  y } + \dfrac{ \partial  f }{ \partial v }\dfrac{ \partial  v }{ \partial  y } $$ 。
  - 公式右端的 $\dfrac{ \partial f }{ \partial x }$ ， $\dfrac{ \partial f }{ \partial y }$ 不能写成 $\dfrac{ \partial  z }{ \partial  x }$，$\dfrac{ \partial  z }{ \partial  y }$ 前者表示 $f$ 作为 $x, y, u, v$ 的四元函数对 $x$ 或 $y$ 求偏导，后者表示 $z$ 作为 $x, y$ 的二元（复合）函数对 $x$ 或 $y$ 求偏导。




