from typing import List

class Solution:
    def candy(self, ratings: List[int]) -> int:
        candies = [1] * (len(ratings))
        
        for i in range(1, len(ratings)):
            if ratings[i-1] < ratings[i]:
                candies[i] = candies[i-1] + 1 
        
        for i in range(len(ratings)-2, -1, -1):
            if ratings[i] > ratings[i+1]:
                candies[i] = max(candies[i], candies[i+1] + 1)
                
        return sum(candies)


# obj = Solution()

# #expected 7
# ratings = [1,3,2,2,1]

# #expected 11
# ratings = [1,3,4,5,2]

# candies = obj.candy(ratings)
# print(candies)


# Example 1:
# Input: ratings = [1,0,2]
# Output: 5
# Explanation: You can allocate to the first, second and third child with 2, 1, 2 candies respectively.

# Example 2:
# Input: ratings = [1,2,2]
# Output: 4
# Explanation: You can allocate to the first, second and third child with 1, 2, 1 candies respectively.
# The third child gets 1 candy because it satisfies the above two conditions
