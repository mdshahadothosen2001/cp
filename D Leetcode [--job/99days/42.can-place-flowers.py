from typing import List

class Solution:
    def canPlaceFlowers(self, flowerbed: List[int], n: int) -> bool:
        bed_len = len(flowerbed)
        for index in range(bed_len):
            if n == 0:
                return True
            if bed_len == 0:
                return False
            elif bed_len == 1 and flowerbed[0] == 1:
                return False
            elif bed_len == 1 and flowerbed[0] == 0:
                return True
            
            if index !=0:
                previous = flowerbed[index-1]
            else:
                previous = None
                
            present = flowerbed[index]
            
            if index+1 <bed_len:
                nexts = flowerbed[index+1]
            else:
                nexts = None
            
            
            if present == 0:
                if (previous == 0 or previous is None) and (nexts == 0 or nexts is None):
                    n -= 1
                    flowerbed[index] = 1
                    if n == 0:
                        return True
        return False

checker = Solution()
flowerbed = [1,0,0,0,1]
n = 1

result = checker.canPlaceFlowers(flowerbed, n)
print(result)


# Example 1:
# Input: flowerbed = [1,0,0,0,1], n = 1
# Output: true

# Example 2:
# Input: flowerbed = [1,0,0,0,1], n = 2
# Output: false

# Example 3:
# Input: flowerbed = [1,0,0,0,0,1], n = 2
# Output: false

# Example 4:
# Input: flowerbed = [1,0,1,0,1,0,1], n = 0
# Output: True
