# https://www.hackerrank.com/challenges/30-loops/problem

#!/bin/python3

import math
import os
import random
import re
import sys

def printMultiples(number):
    for i in range(1,11):
        print(str(number)+" x "+str(i)+" = "+str(number*i))

if __name__ == '__main__':
    n = int(input())
    printMultiples(n)