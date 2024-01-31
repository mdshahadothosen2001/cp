class Solution:
    def hammingWeight(self, n: int) -> int: 
        number_of_1_bits = 0
        
        for bit_index in range(31, -1, -1):
            
            bit_value = (n >> bit_index) & 1
            if bit_value == 1:
                number_of_1_bits += 1
            
        return number_of_1_bits


# n = 0b00000000000000000000000000011100
# checker = Solution()

# result = checker.hammingWeight(n)
# print(result)
    

# Example 1:
# Input: n = 00000000000000000000000000001011
# Output: 3
# Explanation: The input binary string 00000000000000000000000000001011 has a total of three '1' bits.

# Example 2:
# Input: n = 00000000000000000000000010000000
# Output: 1
# Explanation: The input binary string 00000000000000000000000010000000 has a total of one '1' bit.

# Example 3:
# Input: n = 11111111111111111111111111111101
# Output: 31
# Explanation: The input binary string 11111111111111111111111111111101 has a total of thirty one '1' bits.
