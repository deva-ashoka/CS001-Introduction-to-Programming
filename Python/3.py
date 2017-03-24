#Name:Deva Surya vivek
#Python3
def encrypt(str):
	key = {'a':'z', 'b':'y', 'c':'x', 'd':'w', 'e':'v', 'f':'u', 'g':'t', 'h':'s',
                       'i':'r', 'j':'q', 'k':'p', 'l':'o', 'm':'n', 'n':'m', 'o':'l', 'p':'k',
                       'q':'j', 'r':'i', 's':'h', 't':'g', 'u':'f', 'v':'e', 'w':'d', 'x':'c',
                       'y':'b', 'z':'a', 'A':'Z', 'B':'Y', 'C':'X', 'D':'W', 'E':'V', 'F':'U',
                       'G':'T', 'H':'S', 'I':'R', 'J':'Q', 'K':'P', 'L':'O', 'M':'N', 'N':'M',
                       'O':'L', 'P':'K', 'Q':'J', 'R':'I', 'S':'H', 'T':'G', 'U':'F', 'V':'E',
                       'W':'D', 'X':'C', 'Y':'B', 'Z':'A'}

	
	coded = ''
	
	for line in str:
		for letter in line:
			if letter.isalpha():
				letter = key[letter]
			coded += letter 
	return coded

filename= raw_input('Enter the name of the input file (add .txt after the name): ')
text = open(filename)
output = encrypt(text)

namefile=raw_input('Enter the name of the output file (add .txt after the name): ')
target=open(namefile, 'w')
target.write(output)
target.close()
