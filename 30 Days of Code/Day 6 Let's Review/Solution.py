# https://www.hackerrank.com/challenges/30-review-loop/problem

# Enter your code here. Read input from STDIN. Print output to STDOUT

testCase = int(input())
names = []
for i in range(testCase):
    name = input()
    names.append(name)

for name in names:
    evenIndex = ""
    oddIndex = ""
    for i in range(len(name)):
        if i%2 == 0:   
            evenIndex += name[i]
        else:
            oddIndex += name[i]

    print(evenIndex, oddIndex)
