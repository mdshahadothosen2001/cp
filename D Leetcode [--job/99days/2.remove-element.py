from typing import List
class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        while(True):
            if val in nums:
                nums.remove(val)
            else:
                break
        return len(nums)

"""
   
test = Solution()
size = test.removeElement([3,2,2,3],3)
print(size)
#expected output 

"""