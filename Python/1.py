#Name:Deva Surya Vivek
#Python1
nums = [int(i) for i in raw_input("Type the list of numbers (seperated by space): ").split()]
print 'The prime numbers are:',
for num in nums:
	j=2
	if (num > 2) & (num < 10000):
		while (j <= (num - 1)):
			if (num % j) == 0:
				break
			else:
				j = j + 1
		if (j == num):
			print num,
	
				
