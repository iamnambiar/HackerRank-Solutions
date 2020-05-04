# https://www.hackerrank.com/challenges/30-nested-logic/problem

# Enter your code here. Read input from STDIN. Print output to STDOUT

Da, Ma, Ya = map(int, input().split())
De, Me, Ye = map(int, input().split())

fine = 0
if Ya-Ye<0:
    fine = 0
elif Ya-Ye == 0:
    if Ma-Me < 0:
        fine = 0
    elif Ma-Me == 0:
        if Da-De<=0:
            fine = 0
        else:
            fine = 15 * (Da-De)
    else:
        fine = 500 * (Ma - Me)
else:
    fine = 10000
print(fine);