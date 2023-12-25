class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool:
        if len(s) == 1 and len(t)==1:
            return True
        if len(s) != len(t):
            return False
        occurs_s = dict()
        occurs_t = dict()
        for i in range(len(s)):
            if s[i] in occurs_s:
                if t[i] != occurs_s.get(s[i]):
                    return False
            else:
                if t[i] in occurs_t:
                    if s[i] != occurs_t.get(t[i]):
                        return False
                occurs_s[s[i]]=t[i]
                occurs_t[t[i]]=s[i]
        return True

#for the tests just remove the comment quate

"""

valid_isomorphic_strings = [['egg', 'add'], ['paper', 'title'],  ['ab', 'ca'], 
['abc', 'def'], ['listen', 'silent'], ['hello', 'holla'], ['abcd', 'wxyz'], 
['noon', 'deed'], ['carry', 'bunny'],[' ', '1'], [' ', ' '], ['a', ' '], 
['fof', 'bab'], ["aab", "xxz"], ["aba", "xyx"]]

invalid_isomorphic_strings = [
    ["badc", "baba"],
    ['foo', 'bar'],
    ["aab", "xyz"],
    ['abadef', 'ghijkl'],
    ['hello', 'hi'],
    ['python', 'java'],
    ['abcd', 'ab'],
    ['carry', 'carrying'],
    ['paper', 'pen'],
    ['abc', 'abcabc'],
    ['moon', 'mooon'],
    ['abca', 'abef'],
    ['xyz', 'xyzxyz'],
    ['hello', 'hell'],
    ['abca', 'efgh'],
    ['carry', 'cary'],
    ['paper', 'pencil'],
    ['abcd', 'aabbccdd'],
    ['abc', 'abcd'],
    ['abcdef', 'abcde'],
    ['hello', 'olleh'],
    ['noon', 'noonn'],
    ['abcd', 'abcdabcd'],
    ['abc', 'ab'],
    ['abcd', 'abcde'],
    ['abc', 'abcd'],
    ['xyz', 'xy'],
    ['carry', 'caryy'],
    ['abcd', 'dc'],
    ['abcdea', 'fedcba'],
    ['abc', 'ac'],
    ['abcd', 'abcdabc'],
    ['moon', 'moonn'],
    ['abcd', 'abc'],
    ['abcdef', 'fedcb'],
    ['abc', 'abab'],
    ['carry', 'car'],
    ['paper', 'paperss'],
    ['xyz', 'xyxy'],
    ['hello', 'helllo'],
    ['noon', 'noonn'],
    ['abcb', 'abcf'],
    ['abcdef', 'fedcb'],
    ['hello', 'helloo'],
    ['carry', 'caryyy'],
    ['abc', 'abcabcabc'],
    ['abcd', 'abcfgh'],
    ['abc', 'ababab'],
    ['xyy', 'xyx'],
    ['carry', 'caryyyy'],
]


test=Solution()

print("valid tests")
for w in valid_isomorphic_strings:
    result=test.isIsomorphic(w[0],w[1])
    print(result)

print("invalid tests")
for w in invalid_isomorphic_strings:
    result=test.isIsomorphic(w[0],w[1])
    print(result)
#"""
