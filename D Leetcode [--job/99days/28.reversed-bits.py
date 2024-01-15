class Solution:
    def reverseBits(self, n: int) -> int:
        reversed_bits = 0
        for bit_index in range(32):
            if n >> bit_index & 1:
                reversed_bits |= 1 << 31-bit_index
        return reversed_bits


"""
Example 1:

Input: n = 00000010100101000001111010011100
Output:    964176192 (00111001011110000010100101000000)
Explanation: The input binary string 00000010100101000001111010011100 
represents the unsigned integer 43261596, 
so return 964176192 which its binary representation is 00111001011110000010100101000000.
Example 2:

Input: n = 11111111111111111111111111111101
Output:   3221225471 (10111111111111111111111111111111)
Explanation: The input binary string 11111111111111111111111111111101 
represents the unsigned integer 4294967293, 
so return 3221225471 which its binary representation 
is 10111111111111111111111111111111.
"""
