class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        words = list(reversed(s.split()))
        return len(words[0])

"""
#expected output = 5
hello = "Hello World"

#expected output = 4
moon = "   fly me   to   the moon  "

#expected output = 6
joy = "luffy is still joyboy"

test = Solution()
last_word_lenght = test.lengthOfLastWord(joy)

print(last_word_lenght)
"""
