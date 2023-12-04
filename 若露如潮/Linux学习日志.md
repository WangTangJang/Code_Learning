# Linux的学习笔记

2023年11月13日

*小狼毫输入法的词库不随心意*.

*成功续领了阿里云服务器6个月*。

*就是笔记本直接放在身上，压得小腹不舒服，遗憾*。

*以SSH连接远程服务器，十分方便*.

## 命令

- ls 巡视领土【查看当前目录下文件】
- cd 游走 【跳转目录】
- wc 点兵【统计数量】
- head -n 【查看头n行】
- tail -n 【查看尾n行】
- mkdir 【创建目录】
  - -p 无论指定的创建目录路径存不存在都直接创建
- whoami
  - 作用显示当前登录的用户名
  - 常见于输出日志的时候.
- netstat -tunlp
  - 显示 tcp，udp 的端口和进程等相关情况
- kill -9 PID
  - 其中-9是SIGKILL的标识符
  - SIGKILL中的SIG是Signal的缩写
  - `还有就是:CHATGPT真好用!`
- tcpdump port []
  - 查看端口网络
- du -sh 路径
  - 查看路径文件/文件夹的大小
  - -s 显示出文件夹的总大小，不加的话会显示文件夹内每个文件的大小
- find 路径 参数 参数值
  - 根据名称时，参数：-name
    - 其后的参数值便是文件名
  - 根据类型时，参数：-type
    - 其后参数值f是查看所有文件
    - 其后参数值d是查看所有文件夹
- service 服务名 stop|start|restart
  - 操作一个服务
- killall + 进程名称
  - 杀死一个进程
- reboot
  - 重启，**暂时不想使用**。
  - -w ,模拟重启，主要用于做测试用的。
- uptime
  - 查看电脑运行时间。
- uname
  - 查看系统信息
  - -a 查看详细信息
  - 主要用于查看内核版本
- netstat
  - 查看网络链接
  - -t 查看tcp连接
  - -n 以id地址形式显示Local Address
  - -l 表示监听状态
  - -p 显示PID/Program
- man
  - 查看手册
  - 使用中文的方法ubuntu
    - sudo apt install manpages-zh
    - sudo vim ~/.bashrc【设置别名】
      - 插入alias cman='man -M /usr/share/man/zh_CN'

## 知识点

- 文档类型分为两种-0
  - “文件” 以“-”表示
  - “文件夹” 以“d”表示
- var文件夹存放“可变化的文件”（variable files）
- ctrl+u; ctrl+k
  -删除光标前和光标后的内容。
- 运行文件之后加个“&”可以在后台运行

## VIM

- ggvGd
  - gg 回到顶部
  - v 进入视图模式
  - G 划到最后
  - d 删除
  - 全部删除
- 调用外部命令
  - :! + 命令
- 显示行号
  - set nu
- 查看已经打开的文件
  - files
  
## 不解之处

- etc/passwd是存放用户，但是里面除了root用户外，还有大量的其他用户，那些用户是什么？什么又是用户？
