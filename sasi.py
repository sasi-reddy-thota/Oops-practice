
def primeChecker(x):
    if x<=2:
        return bool(x)
    i=2
    temp=True
    while i*i<=x:
        if(x%i==0):
            temp=False
            break
        i=i+1
    return temp

def gcdOfTwoNumbers(x,y):
    if y==0:
        return x
    return gcdOfTwoNumbers(y,x%y)

def lcmOfTwoNumbers(x=1,y=2):
    return (x*y)/gcdOfTwoNumbers(x,y)

def maxElementInArray(x=[1,2,3]):
    print('maxElementInArray')
    max=x[0]
    for i in range(1,len(x)):
        if x[i]>max:
            max=x[i]
    return max
def main():
    print('Please choose the operation:')

    list_operations=['Prime','GCD','LCM','Max Element']

    for i in range(len(list_operations)):
        print(str(i+1)+' '+list_operations[i])

    operation=int(input())

    if operation>4:
        print('please select valid option')
        main()

    print('Selected Operation is: ',list_operations[operation-1])
    list_functions=[primeChecker,gcdOfTwoNumbers,lcmOfTwoNumbers,maxElementInArray]        

    if operation == 1:
        print('Please Enter the Value that you need to check Prime Number or Not')
        x=int(input())
        print('Is it a Prime Number :',list_functions[operation-1](x))
    elif operation in [2,3]:
        print('Please enter the values of first element and second element to check the',list_operations[operation-1])
        x=int(input())
        y=int(input())
        print(list_operations[operation-1],'of x and y is: ',list_functions[operation-1](x,y))
    else:
        print('Please enter the size of an array: ')
        n=int(input())
        x=[None]*n
        for i in range(n):
            x[i]=int(input())
        print('Entered values: ',x)
        print('Max Element in the above array is: ',list_functions[operation-1](x))

main()