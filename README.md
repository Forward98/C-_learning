# C-_learning
C++学习

拉取项目到本地后在src同级目录下新建build和bin文件夹

1. vscode多文件编译运行步骤：
(1) 在build路径下执行cmake -G "MinGW Makefiles" ..
(2) 继续执行mingw32-make.exe
(3) cd到bin目录下执行可执行文件.\myprint.exe

2. vscode多文件编译调试步骤：
(1) 直接在待调试处打上断点，如果程序有更新，保存后直接F5调试即可

3. 解决vscode一打开自动编译的问题：
取消勾选 Cmake: Configure On Open

4. 解决commit后无法同步到github上的问题：
运行下列命令：
git config --global --unset http.proxy
git config --global --unset https.proxy

2023.12.25 update:
1. class_learn: 类和类的成员的构造和析构顺序
2. class_learn2：基类和派生类的构造和析构顺序
3. class_learn3：类的初始化列表


2024.01.13 update:
1. virtual function learning.
2. git learning
3. 本地新建分支，然后push到远程仓库
    git check -b dev
    做一次提交
    git push origin HEAD

4. 合并分支，需要本地先合并好分支，然后删掉不用的分支，然后再git push, 同步到远程仓库

 
2014.01.28 update：
1. 给电脑重装了系统，在开了梯子的情况下没有办法拉取仓库，使用了这个教程的方法：
https://blog.csdn.net/weixin_46191137/article/details/133739981












