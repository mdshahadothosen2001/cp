from typing import List 

class Solution:
    def jump(self, nums: List[int]) -> int:
        jumps = 0
        current = 0
        farthest = 0
        
        for i in range(len(nums)-1):
            farthest = max(farthest, nums[i]+i)
            
            if i == current:
                current = farthest
                jumps += 1
                
        return jumps

test = Solution()
nums = [2,3,1,1,4]
result = test.jump(nums)
print(result)




# Example 1:
# Input: nums = [2,3,1,1,4]
# Output: 2
# Explanation: The minimum number of jumps to reach the last index is 2. Jump 1 step from index 0 to 1, then 3 steps to the last index.

# Example 2:
# Input: nums = [2,3,0,1,4]
# Output: 2

# ----------------------------------------------------------------------------------------------------------
# EXPLANATION OF STATEMENTS USED EXAMPLE OF [2,3,1,1,4]

# -------------------------------------
# elements  : 2   3   1   1   4
# indices   : 0   1   2   3   4 
# -------------------------------
# Run loop up to n-1.
# here n=5 so that loop run 4 times, 0 index to 3 index. 
# farthest will be hold maximum value of previous farthest or elements + index.
# current value change if previous current value equal to the index that means loop number.
# if current value change then jumps value also change by increament otherwise no jumps no change.
# initially

# case start from here: 
# -----------------------
# current = jumps = farthest = 0
# ----------------------------------------
# index = 0:
#    farthest = max(0, 2 + 0)
#    current = 2 // previous current equal to index so current changed
#    jumps += 1

# index = 1:
#    farthest = max(2, 3 + 1)
#    // previous current is 2 not equal to index is 1 so no changed

# index = 2:
#    farthest = max(4, 1 + 2)
#    current = 4 // previous current is 2 equal to index is 2 so current changed
#    jumps += 1

# index = 3:
#    farthest = max(4, 1 + 3)
#    // previous current is 4 not equal to index is 3 so no changed
# ---------------------------------------------------------------------
# finally we reach n-1 with 2 steps
# ----------------------------------------------------------------------------------------------------------