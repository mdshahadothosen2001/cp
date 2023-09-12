#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'miniMaxSum' function below.
#
# The function accepts INTEGER_ARRAY arr as parameter.
#

def miniMaxSum(arr):
    # Write your code here
    ln=len(arr)
    for i in range(ln):
        if i==0:
            SUM=sum(arr[1:])
            MAX=SUM
            MIN=SUM    
        elif i==ln-1:
            SUM=sum(arr[:i])
            if MAX<SUM:
                MAX=SUM
            if MIN>SUM:
                MIN=SUM            
        else:
            
            SUM=sum(arr[:i])+sum(arr[i+1:])
            if MAX<SUM:
                MAX=SUM
            if MIN>SUM:
                MIN=SUM                
    print(MIN,MAX) 

if __name__ == '__main__':

    arr = list(map(int, input().rstrip().split()))

    miniMaxSum(arr)
