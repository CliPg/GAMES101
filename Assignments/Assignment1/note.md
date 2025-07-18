- viewing transformation
  - view/camera transformation
  - projection transformation
    - orthographic projection(正交投影)
    - perspective projection(透视投影)


做viewing transformation的步骤
1. view/camera transformation
   把照相机的挪到原点，镜头对准-z方向，上面朝y轴
\[
T_{view} = \begin{bmatrix} 
1 & 0 & 0 & -x_e \\ 
0 & 1 & 0 & -y_e \\ 
0 & 0 & 1 & -z_e \\ 
0 & 0 & 0 & 1 
\end{bmatrix}
\]

2. 做透视投影
![在这里插入图片描述](https://i-blog.csdnimg.cn/direct/a735e87a119e426da12a8d2736bbbc67.png)
近端保持不变，远端做缩放

\[
M_{persp\rightarrow ortho} = 
\begin{pmatrix}
near & 0 & 0 & 0 \\
0 & near & 0 & 0 \\
0 & 0 & near + far & -near·far \\
0 & 0 & 1 & 0
\end{pmatrix}
\]

3. 做正交投影
   平移&正则化（-1~1）
   ![在这里插入图片描述](https://i-blog.csdnimg.cn/direct/fc5388d27c6a4f1eb1a1fcdb092e98b5.png)