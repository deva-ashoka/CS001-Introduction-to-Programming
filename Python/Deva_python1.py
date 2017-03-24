#Name: Deva Surya Vivek
#Assignment 1- Python.
filename= raw_input('Enter the name of the file: ') #Asking the user for a file name that he/she has and storing it in filename.
f = open(filename) #opening the file and storing the text in the file in 'f'
print ('The palindromes in your file are: ')
for line in f:
	str_temp=""
	for word in line:
			if word.isalpha(): #checking if the word in line contains only characters
				str_temp = str_temp + word
			str_temp=str_temp.lower() #changing all the letters to lower case for comparison
	if((str_temp==str_temp[::-1])and(str_temp!="")): #checking if the word is same when reversed as well as if it is only letters
			print(line)

