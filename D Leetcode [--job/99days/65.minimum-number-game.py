from  typing import List
class Solution:
    def numberGame(self, nums: List[int]) -> List[int]:
        arr = []
        while(nums):
            alice = min(nums)
            nums.remove(alice)
            
            bob = min(nums)
            nums.remove(bob)
            
            arr.append(bob)
            arr.append(alice)
            
        return arr


checker = Solution()
nums = [2,3,4,5]
nums = checker.numberGame(nums)
print(nums)



# Example 1:
# Input: nums = [5,4,2,3]
# Output: [3,2,5,4]
# Explanation: In round one, first Alice removes 2 and then Bob removes 3. Then in arr firstly Bob appends 3 and then Alice appends 2. So arr = [3,2].
# At the begining of round two, nums = [5,4]. Now, first Alice removes 4 and then Bob removes 5. Then both append in arr which becomes [3,2,5,4].

# Example 2:
# Input: nums = [2,5]
# Output: [5,2]
# Explanation: In round one, first Alice removes 2 and then Bob removes 5. Then in arr firstly Bob appends and then Alice appends. So arr = [5,2].
