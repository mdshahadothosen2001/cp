class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        while(True):
            if val in nums:
                nums.remove(val)
            else:
                break
        return len(nums)

"""
for test 1:

class Solution:
    def removeElement(self, lists, val):
        while(True):
            if val in lists:
                lists.remove(val)
            else:
                break
        return len(lists)
   
test = Solution()
size = test.removeElement([3,2,2,3],3)
print(size)


"""