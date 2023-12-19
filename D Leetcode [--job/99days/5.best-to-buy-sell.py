from typing import List

class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        n = len(prices)
        buy = prices[0]
        max_profit = 0
        for price in prices:
            if buy>price:
                buy = price
            elif max_profit < (price - buy):
                max_profit = price - buy
        return max_profit

# expected output 0
prices = [7,6,4,3,1]

# expected output 5
prices1 = [7,1,5,3,6,4]

#expected output 2
prices2 = [2,4,1]

test = Solution()

profit = test.maxProfit(prices2)

print(profit)


"""Example 1:

Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: 
initially buy = 7 max_profit = 0
----------------------------
7 1 false: set buy = 7
1 5 true : set max_profit = 4
1 3 true : set max_profit = 2
1 6 true : set max_profit = 5
1 4 true : current profit less than max_profit
Example 2:

Input: prices = [7,6,4,3,1]
Output: 0
Explanation:
initially buy = 7 and max_profit = 0
-------------------------------------
7 6  false: set buy = 6
6 4 false : set buy = 4
4 3 false : set buy = 3
3 1 false : set buy = 1

"""