c=input()
x=['a','e','i','o','u','A','E','I','O','U']

if c.isnumeric() :
	print("invalid")
elif c in x:
	print("vowel")
else:
	print("consonent")
