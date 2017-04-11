#!/usr/bin/python

# Note that as arr1 is passed to changeList(), the values are being changed
# within the function, not from the return of the function. As a result, this
# behavior is indicative of a side effect. 

def changeList(arr):
	arr[0] = 9
	arr[1] = 8
	arr[2] = 7
	arr[3] = 6
	arr[4] = 5

	return arr

arr1 = [1, 2, 3, 4 , 5]
arr2 = changeList(list(arr1))

print(arr1)
print(arr2)