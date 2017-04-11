#!/usr/bin/python

# Note that there is no return statement in function doubler().
# However, function doubler() modifies the gobal variable of y.

def doubler(val):
	global y
	y = 2 * val

y = 10
doubler(y)

print(y)