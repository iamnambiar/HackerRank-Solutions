# https://www.hackerrank.com/challenges/30-arrays/problem

#!/bin/python3

import math
import os
import random
import re
import sys



if __name__ == '__main__':
    n = int(input())

    arr = list(map(int, input().rstrip().split()))
    for element in arr[::-1]:
        print(element, end=' ')
