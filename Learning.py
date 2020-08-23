#the operation: Print sth.
print('HaPPy') #Function
#declarartion
x=1 #Assignment statement
x=x+1 #Assignment with expression   called increment
print(x**2)
#The operation: exit from the program when u use python interpreter
exit()
quit()
#power
x**2=9
#Remainder (%)
#plus can add numbers and strings but not both togetther
d='Hello'+'Mayor'  #Result: HelloMayor
#Conversion between integer and floating point and string too.
x=2
z=float(x)
s='146'
f=int(s)
#To know which type python consider for sth.
type(x)
x is integer
#To read the data from the user
n=input('who are you?\n') # Who are you is output and it is astring...\n for new line
#comma means spACE
print('hello',2) #hello 2
#To open a file
open()
#converting the user input to interger
int (n)
#if condition for true or false Q. (one way if yes only)
if x<10:
    print('')
#if else condition for 2 ways (if the answer is yes or no)
if x==10:
    print('')
else:
    print('')
#multi-way condition
if :
    Print
elif:

else: #The last else can be removed
#for checking
try:
except:
#Individual Function... No output till you call it
def f(variable):
    ...
    return
#built-in function to tell us the greatest ans smallest
max()
min()
#To enter a maths module
import math
math.log10()...log()....sin()....pi..sqrt()..pow(,)
#Built-in Function
randiant(low,high)
random.randiant() #choose a random num. bet 0 to 1
choice()
#for iteration variable
while condition:
#use this to end an infinite loop
break #Helpful in testing and go out from the loop
#to skip sth. in the loop but not to exit and repeat this again
continue
line[0]=='h' #the first letter in the line
#Definite loop for list of things
friends = ['Joseph', 'Glenn', 'Sally']
for friend/itervar (iteration variable) in friends:
print('Happy New Year:', friend)
print('Done!')
#To choose the largest numbers
largest = None #The absent of the value
print('Before:', largest)
for itervar in [3, 41, 12, 9, 74, 15]:
if largest is None or itervar > largest :
largest = itervar
print('Loop:', itervar, largest)
print('Largest:', largest)
#string
fruit='banana'
letter=fruit[1]   #a
#len function which tells us how many items are in its argument
len(fruit)   #6
length = len(fruit)
>>> last = fruit[length-1] or fruit[-2]
#string slice # frist include but 2nd not
fruit[3:4]  #if both are 3 the result is empty
#if i didnt put any number the whole world would be written
#logical operation for string
"a" in 'banana'
True
#greater and less than operation used for string to compare between
#lower and uppercaSse
a.lower() #to make all the uppercase lowercase
#a function called dir which lists the methods available for an object
#to know how to make the methods
help.(str)
#to know the number of index
fSruit.find'('a',3) #1 #by adding 2nd arg. start from 3 index
#when the string isnt found the result =-1
replace('a',x) #bxnxnx
#One common task is to remove white space (spaces, tabs, or newlines) from the
#beginning and end of a string using the strip method: #lstrip #rstrip from riht and left only
a='  here  '
a.strip()
'here'
#Some methods such as startswith return boolean values
a.startswith('h') #false
#The following example uses %d to format an integer, %g to format a floating-point
#number (don’t ask why), and %s to format a string:
'In %d years I have spotted %g %s.' % (3, 0.1, 'camels')
'In 3 years I have spotted 0.1 camels.'
#To read or write a file we need to call that's used for storing data
a=open(filename,mode) #mode=r to read/ w to written
# return a handle to manipulate the file
#To read as one string
a.read()/write()/close()
#as many strings
use for loop
#There is condition called
if not...:
#list=array and can include anything
b=['f','','']
#replacement
b[0]=5
#find
b[0]  #5
#to know the number of indices in list
range(len())  #from 0 to n-1 as a list
#The + operator concatenates lists:
 a = [1, 2, 3]
 b = [4, 5, 6]
 c = a + b
 print(c)
[1, 2, 3, 4, 5, 6]
#the * operator repeats a list a given number of times:
 [0] * 4
[0, 0, 0, 0]
#slice list
t[0:2]
#to create a list from a scratch
a.list()
# to add elements
a.append('book')
#book
book in a   #true
#change the order
a.sort()
#add 2 lists
t1.extend(t2) #t2 will be added on t1
#bui;lt in func. for list
sum()
len()
max()
min()
#create list from string
a="a b c"
stuff=a.split()   #return a list it will be separated as there is a space due to the empty argument and it is called an delimiter character
stuff=['a','b','c']
stuff=a.split(;)
or c=list()
#to delete sth.
b=stuff.pop(1)   #return the deleted one and modify the list
b=stuff.pop()  #delete the last element
del stuff[1]   #if you dont need the removed value
del stuff[0:2] #delete more than one
t.remove('b') #if i dont know the index but the character
#double split
a=stuff[1]
b=a.split()
#convert from list to string
delimiter=''
delemiter.join(t)
#to modify
set(list) #to delete the repeated
