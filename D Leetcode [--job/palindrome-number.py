class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x < 0 or (x > 0 and x%10 == 0):  
            return False
        test = 0
        while x > test:
            test = test * 10 + x % 10
            x = x // 10	
        return True if (x == test or x == test // 10) else False