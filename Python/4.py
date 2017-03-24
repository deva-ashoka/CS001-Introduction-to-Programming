#Name:Deva Surya Vivek
#Python4
i = 0
add = 0
s = []
c = 1
while (c == 1):
	check = str (raw_input ("\nType: \n\t'E' followed by number to add to the queue (space between 'E' and number) \n\t 'D' to delete one entry and display the deleted entry \n\t 'P' to print the queue\n\t Anything else to quit program:\t"))
	for i in check :
		if ((check[0] == 'E')|(check[0] == 'e')):
			for i in range (2, (len(check))):
				add = 10 * add + int(check[i])
			s.append (add)
			add = 0
			break
		elif ((check[0] == 'D')|(check[0] == 'd')):
			print '\nThe deleted number is', s[0]
			del s[0]
			break
		elif ((check[0] == 'P')|(check[0] == 'p')):
			print '\nThe queue is', s
			break
		else:
			c = 0
			break

		
