print('欢迎使用数字小游戏')
print('该作品开源，欢迎登陆我的GitHub查看')
print('游戏规则：由裁判给出指定数字及一个数字范围，该范围需要将指定数字包含在内；')
print('游戏参与者在给定的范围内随意猜测数字，如果猜中了即为“中奖”')
print('确认了解规则后将开始游戏')
print('请不要输入数字以外的文本，否则会报错')
a = input('请输入指定数字')
ab = int(a)
b = input('范围中的上限')
ac = int(b)
c = input('范围中的下限')
ae = int(c)
print('请记住上面输入的这三组数')
d = input('请输入你猜测的数字')
ad = int(d)
while ad != ab:
	if ad > ac:
		print('别乱打')
	elif ad > ab:
		print('你没中奖')
	elif ad < ab:
		print('你没中奖')
	elif ad < ae:
		print('别乱打')
	else:
		print('你中奖了')
print('你中奖了')