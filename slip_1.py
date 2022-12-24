# Slip no - 1 
"""  Q- 1 Write the Python Progrm to find the apporximate area of the f(x) = sinx on the interval [0,PI] for n = 6 using simson 1/3 rule   """
















""" 
# slip -1
#Q -2  (a : find a value of (f-2) , whare f(x) = x^2 -5x+6 using python )

# def for eqution 
def eqution (x):
    eq = x * x  -5*x  + 6 ;
    return eq

print(eqution(-2)) # ans = 20 

 """

# Q -2 find transpose of the following 

""" import numpy as np

arr1 = np.array([[1, 2, 3], [4, 5, 6] , [7,8,9]])

print(f'Original Array:\n{arr1}')

arr1_transpose = arr1.transpose()

print(f'Transposed Array:\n{arr1_transpose}') """
# as a  refernce code 

#code 
""" pip install numpy """
""" import numpy as np 
arr= np.array([[1,2,2],[2,1,2],[2,2,1]])
tarnsposeOfarr = arr.transpose()
print(f'Transposed Array:\n{tarnsposeOfarr}')
 """
 
 
 # Q- 3  find the length of the string " Mathematics"
""" str = "Mathematics"
print(len(str))
 """
 
 # Q-3 (b : write function for check no is divisible by  2, 3, 5 )\
     
""" num = input(" Enter Number ")
num = int(num)# type converion of string into int 
if(num % 2 == 0 and  num % 3 == 0  and num % 4 == 0):
    print(" divisible")
else:
        print(" Not Divisible")  """
        
"""    B) a) Print the first 10 natural numbers in python. 				           [2]	 """
""" num = input()
num = int(num)# type converion of string into int 
num = range(num+1)# for n number print 

for i in num:
 print(i)    
     """
     
"""     b) Print the list of positive numbers in the range of (2,10)                        		[2]	 """
 
""" num = range(2,10)
for i in num:
    if(i > 0): # for positive 
        print(i)  """
        
        
        