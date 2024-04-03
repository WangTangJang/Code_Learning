import smtplib
from email.mime.text import MIMEText
from email.header import Header

# QQ邮箱smtp服务器
host_server = 'smtp.qq.com'
# sender_qq为发件人的qq号码
sender_qq = '2811096353'
# pwd为qq邮箱的授权码
pwd = ''
# 发件人的邮箱
sender_qq_mail = '2811096353@qq.com'
# 收件人邮箱
receiver = '1424435163@qq.com'

# 邮件的正文内容
mail_content = '今日存活.........'
# 邮件标题
mail_title = '远程服务器'

# 邮件正文内容
message = MIMEText(mail_content, 'plain', 'utf-8')
# 邮件头部信息
message['From'] = sender_qq_mail
message['To'] = Header(receiver, 'utf-8')
message['Subject'] = Header(mail_title, 'utf-8')

# ssl登录
smtp = smtplib.SMTP_SSL(host_server)
# set_debuglevel(1)可以打印出和SMTP服务器交互的所有信息
smtp.set_debuglevel(1)
# 登录服务器
smtp.login(sender_qq, pwd)
# 发送邮件
smtp.sendmail(sender_qq_mail, receiver, message.as_string())
# 关闭连接
smtp.quit()