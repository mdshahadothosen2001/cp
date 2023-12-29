class Solution:
    def isValid(self, s: str) -> bool:
        brackets = {"(":")", "[":"]", "{":"}"}
        bracket_stack = []
        for i in range(len(s)):
            if len(bracket_stack)==0:
                bracket_stack.append(s[i])
            else:
                item = bracket_stack.pop()
                if item in brackets and brackets.get(item) == s[i]:
                    pass
                else:
                    bracket_stack.append(item)
                    bracket_stack.append(s[i])
        if len(bracket_stack)==0:
            return True
        else:
            return False

"""

Example 1:
Input: s = "()"
Output: true

Example 2:
Input: s = "()[]{}"
Output: true

Example 3:
Input: s = "(]"
Output: false


Example 4:
Input: s = "{[]}"
Output: true

Example 2:
Input: s = "{[()]"
Output: false
"""
