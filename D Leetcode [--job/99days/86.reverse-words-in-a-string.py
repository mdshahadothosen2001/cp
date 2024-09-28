from typing import List 

# O(n) complexity
# class Solution:
#     def reverseWords(self, s: str) -> str:
#         if not s:
#             return s
#         s_list = list(map(str, s.split()))
#         s_list.reverse()
#         s_reversed = s_list[0]
#         for i in range(1,len(s_list)):
#             s_reversed += " "
#             s_reversed += s_list[i]
#         return s_reversed


# simplified code
class Solution:
    def reverseWords(self, s: str) -> str:
        s = s.strip().split()
        s.reverse()
        return ' '.join(s)
    

obj = Solution()
strs = "the sky is blue"
result = obj.reverseWords(strs)
print(result)
