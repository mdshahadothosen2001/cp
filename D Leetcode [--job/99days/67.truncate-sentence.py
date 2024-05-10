class Solution:
    def truncateSentence(self, s: str, k: int) -> str:
        ans = ""
        index = 0
        for i in s.split():
            if index<k:
                ans += i + " "
            index += 1 

        if ans[-1] == " ":
            ans = ans[:-1]
        return ans

s = "eET YZfz Y VHpNQunwl HQU F gD LOqW snNPzZA Ts av Wbbm h p Sbv BnOSq"

chekcer = Solution()
ans = chekcer.truncateSentence(s, 2)
print(ans)
# expected "eET YZfz"



# Example 1:
# Input: s = "Hello how are you Contestant", k = 4
# Output: "Hello how are you"
# Explanation:
# The words in s are ["Hello", "how" "are", "you", "Contestant"].
# The first 4 words are ["Hello", "how", "are", "you"].
# Hence, you should return "Hello how are you".

# Example 2:
# Input: s = "What is the solution to this problem", k = 4
# Output: "What is the solution"
# Explanation:
# The words in s are ["What", "is" "the", "solution", "to", "this", "problem"].
# The first 4 words are ["What", "is", "the", "solution"].
# Hence, you should return "What is the solution".

# Example 3:
# Input: s = "chopper is not a tanuki", k = 5
# Output: "chopper is not a tanuki"
