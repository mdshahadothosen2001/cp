class Solution:
    def addBinary(self, a: str, b: str) -> str:
        max_len = max(len(a), len(b))
        a = a.zfill(max_len)
        b = b.zfill(max_len)
        
        binary = ""
        carry = 0 
        
        for i in range(max_len-1, -1, -1):
            recent_carry = carry
            recent_carry += 1 if a[i] == '1' else 0 
            recent_carry += 1 if b[i] == '1' else 0 
            
            binary = ('1' if recent_carry % 2 == 1 else '0') + binary
            carry = 0 if recent_carry < 2 else 1 
        if carry != 0:
            binary = '1' + binary

        return binary


# Example 1:
# Input: a = "11", b = "1"
# Output: "100"

# Example 2:
# Input: a = "1010", b = "1011"
# Output: "10101"
