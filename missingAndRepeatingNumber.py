# given a list of unsorted numbers in range (1,n). One number from set is missing and one number occured twice in the list.
# find those missing and repeating number
# so the given list is:
"""one of the simple approach is by using the summation
for ex. list=[1,2,2,4,5] with n=5
so the sum of first n values is: (1+2+3+4+5)->s.

now we can see that:
(1+2+3+4+5) - (1+2+2+4+5) 
here- 1,2,4,5 will be cancelled out and the only number remaining would be: (3 - 2)
or for general: (x - y)= 1, let this be equation 1
which are our missing and repeating numbers

now we need to find x and y-> 
so we'll find the sum of squares of the list and subtract it from the square of natural numbers upto n
and we'll be remain with (3^2 - 2^2)
or (x^2 - y^2)=5
->(x-y)(x+y)=5
->using equation 1
->(x+y)=5/1
so we have two equations: 
x-y=1
and x+y=5
therefore,x=(5+1)/2
x=3
and y=(5-1)/2
y=2
so our answers are 3 and 2
let's code this now
"""
list = [8, 9, 1, 6, 4, 3, 10, 1, 2, 7]
n = 10

sum_of_values_list = 0  # sum of values in the list
sum_of_squares_list = 0  # sum of squares of values in the list
for i in range(n):
    sum_of_values_list += list[i]
    sum_of_squares_list += list[i]*list[i]

sum_of_values_n = (n*(n+1))//2  # sum of values in the range
sum_of_squares_n = (n*(n+1)*(2*n+1))//6  # sum of squares of values in range

# difference between sum of range and sum of list(x-y)
diff_n = sum_of_values_n - sum_of_values_list
diff_s = (sum_of_squares_n - sum_of_squares_list) // diff_n
# difference between sum of squares of range and sum of squares of list, whole divided by above difference[(x^2-y^2)/(x-y)

missing_number = (diff_n + diff_s)//2
repeated_number = (diff_s - diff_n)//2

print("repeating number: ", repeated_number)
print("missing number: ", missing_number)
