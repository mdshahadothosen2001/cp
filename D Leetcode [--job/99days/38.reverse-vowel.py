class Solution:
    def reverseVowels(self, s: str) -> str:
        vowel = ['a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U']
        new_s = list(s)
        left, right = 0, len(new_s)-1
        while(True):
            if left<right and new_s[left] not in vowel:
                left += 1
            if left<right and new_s[right] not in vowel:
                right -= 1
            if left<right and new_s[left] in vowel and new_s[right] in vowel:
                new_s[left], new_s[right] = new_s[right], new_s[left]
                left += 1
                right -= 1
            elif left>=right:
                break
        return ''.join(new_s)

checker = Solution()
s = "a.b,."
result = checker.reverseVowels(s)
print(result)

# Example 1:
# Input: s = "hello"
# Output: "holle"

# Example 2:
# Input: s = "leetcode"
# Output: "leotcede"

# Example 3:
# Input: s = "race car"
# Output: "race car"
