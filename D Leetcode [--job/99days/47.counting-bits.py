from collections import Counter
from typing import List

class Solution:
    def countBits(self, n: int) -> List[int]:
        counted = []
        def binNums(self, n:int):
            if n==0:
                return [0]
            elif n>0:
                binBit = []
                while(n!=0):
                    div = n//2
                    remainder = n%2
                    binBit += [remainder]
                    n = div
                return binBit[::-1]
            
        def oneCount(self, binBit):
            oneBit = Counter(binBit)
            oneBit = oneBit.get(1)
            if oneBit is None:
                return 0
            return oneBit
        
        for i in range(n+1):
            binBit = binNums(self, i)
            oneBit = oneCount(self, binBit)
            counted += [oneBit]
        return counted
    
checker = Solution()
n = 5
result = checker.countBits(n)
print(result)

# Example 1:
# Input: n = 2
# Output: [0,1,1]
# Explanation:
# 0 --> 0
# 1 --> 1
# 2 --> 10

# Example 2:
# Input: n = 5
# Output: [0,1,1,2,1,2]
# Explanation:
# 0 --> 0
# 1 --> 1
# 2 --> 10
# 3 --> 11
# 4 --> 100
# 5 --> 101
