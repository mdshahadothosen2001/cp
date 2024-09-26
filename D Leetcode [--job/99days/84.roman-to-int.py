# 57ms runtime, 16.4MB
# class Solution:
#     def romanToInt(self, s: str) -> int:
#         romanList = {'I':1,'V':5,'X':10,'L':50,'C':100,'D':500,'M':1000}
#         s = s.replace("IV", "IIII").replace("IX", "VIIII").replace("XL", "XXXX").replace("XC", "LXXXX").replace("CD", "CCCC").replace("CM", "DCCCC")
#         return sum(map(lambda x: romanList[x], s))


# 49ms runtime, 16.7MB
class Solution:
    def romanToInt(self, s: str) -> int:
        romanList = {'I':1,'V':5,'X':10,'L':50,'C':100,'D':500,'M':1000}
        int_value = 0 
        for i in range(len(s)):
            if i + 1 < len(s) and romanList[s[i]] < romanList[s[i + 1]]:
                int_value -= romanList[s[i]]
            else:
                int_value += romanList[s[i]]
        return int_value



# obj = Solution()
# # expected 1994
# s = "MCMXCIV"
# output = obj.romanToInt(s)
# print(output)



# Example 1:
# Input: s = "III"
# Output: 3
# Explanation: III = 3.


# Example 2:
# Input: s = "LVIII"
# Output: 58
# Explanation: L = 50, V= 5, III = 3.


# Example 3:
# Input: s = "MCMXCIV"
# Output: 1994
# Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.
