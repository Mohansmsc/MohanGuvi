f=int(raw_input())
fac=int(raw_input())
if(f<0):
	print('cant find factorial of given number')
elif(f==0):
	print('factorial of a 0 is 1')
else:
	for i range(1,f+1):
		fac=i*fac
print(fac)
