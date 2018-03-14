n=input()
if(n>0):
	for i in range(2,n):
		if(n%i==0):
			print("not a prime number")
			break
		else:
			print("Is a prime number")
else:
	print("enter correct number")
