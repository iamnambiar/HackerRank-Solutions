# https://www.hackerrank.com/challenges/30-binary-numbers/problem

#!/bin/python3

import math
import os
import random
import re
import sys



if __name__ == '__main__':
    n = int(input())
    binaryNumber = []
    count, temp = 0, 0
    while n > 0:
        remainder = int(n % 2)
        binaryNumber.append(remainder)
        if remainder == 1:
            temp += 1
            if temp > count:
                count = temp
        else:
            temp = 0
        n = int(n / 2)
    
    print(count)
