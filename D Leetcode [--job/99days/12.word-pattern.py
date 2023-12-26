class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
        word=s.split()
        p_style=dict()
        p_index_style=dict()
        for i in range(len(pattern)):
            if pattern[i] not in p_style:
                p_style[pattern[i]]=i
        for i in range(len(pattern)):
            if pattern[i] in p_style:
                p_index_style[i]=p_style.get(pattern[i])
        
        s_style=dict()
        s_index_style=dict()
        for i in range(len(word)):
            if word[i] not in s_style:
                s_style[word[i]]=i
        for i in range(len(word)):
            if word[i] in s_style:
                s_index_style[i]=s_style.get(word[i])
        if p_index_style==s_index_style:
            return True
        return False

"""
Example 1:

Input: pattern = "abba", s = "dog cat cat dog"
Output: true
Example 2:

Input: pattern = "abba", s = "dog cat cat fish"
Output: false
Example 3:

Input: pattern = "aaaa", s = "dog cat cat dog"
Output: false
"""
