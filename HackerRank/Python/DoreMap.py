#Taking no of rows and columns
row,col=input().split()

#loop to print first half of doremap
for i in range(1,int(row)//2+1):
	# the string with .|. pattern (row number)*2-1 times
	# means for first row its only one, for second three, for third it's five and so on
	string=".|."*(i*2-1)
	
	#print the string with .|. pattern at center of charcters'-', with total length of columns characters
	print(string.center(int(col),"-"))

#At center print WELCOME surrounded by '-' with total length of columns characters
print("WELCOME".center(int(col),"-"))

#repeat the above loop but in reverse order
for i in range(int(row)//2,0,-1):
	string=".|."*(i*2-1)
	print(string.center(int(col),"-"))