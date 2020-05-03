# https://www.hackerrank.com/challenges/30-running-time-and-complexity/problem

# Enter your code here. Read input from STDIN. Print output to STDOUT
def CheckPrime(n):
    if n == 1:
        print("Not prime")
    elif n == 2:
        print("Prime")
    else:
        i = 2
        while i*i <= n:
            if n % i == 0:
                print("Not prime")
                return 0
            i += 1
        print("Prime")
    return 0

testCase= int(input())
integers = []
for i in range(testCase):
    num = int(input())
    integers.append(num)

for val in integers:
    CheckPrime(val)