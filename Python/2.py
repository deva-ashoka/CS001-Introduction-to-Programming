#Name:Deva Surya Vivek
#Python2
num = int(raw_input('\nEnter an integer to compute corresponding Fibonacci number:'))
initialnum = 1
finalnum = 1
i = 2
fibonacci = 1
while (i <= num):
	if num == 0:
		fibonacci = 1
		break
	elif num == 1:
		fibonacci = 1
		break
	else:
		fibonacci = initialnum + finalnum
		initialnum = finalnum
		finalnum = fibonacci
		i = i + 1
print 'The Fibbonaci number for this integer is:', fibonacci
