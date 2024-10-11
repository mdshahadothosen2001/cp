
# complexity O(mp)
# m until sum == 1 or repeat n
# p is each digit bit
class Solution:
    def isHappy(self, n: int) -> bool:
        if n == 1:
            return True
        n_set = set()
        while n != 1:
            if n in n_set: return False
            n_set.add(n)
            n = sum([int(i) ** 2 for i in str(n)])
        else:
            return True

obj = Solution()
n = 19
result = obj.isHappy(n)
print(result)

# Example 1:
# Input: n = 19
# Output: true
# Explanation:
# 12 + 92 = 82
# 82 + 22 = 68
# 62 + 82 = 100
# 12 + 02 + 02 = 1

# Example 2:
# Input: n = 2
# Output: false
