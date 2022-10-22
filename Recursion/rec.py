# python recursion example
def display(x):
    if x<1:
        return
    else:
        print(x)
        display(x-1)
        print(x)
n=3
display(n)

# factorial of a numbr


# indirect recursion
'''def fact1(x):
    if x<=1:
        return 1
    else:
        return x*fact2(x-1)
def fact2(x):
    if x<=1:
        return 1
    else:
        return x*fact1(x-1)
n=int(input("Enter the fact value: "))
r=fact1(n)
print("Result " + str(r))'''


# tail and non tail
'''def printf(a):
    if a < 1:
        return
    else:
        print(a)
        printf(a//2)
        print(a)

n = 10
printf(n)'''

