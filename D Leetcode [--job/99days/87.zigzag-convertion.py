# complexity O(nm)
class Solution:
    def convert(self, s: str, numRows: int) -> str:
        if numRows == 1:
            return s
        
        zigzag = ""
        for row in range(numRows):
            increment = 2*(numRows -1)
            for i in range(row, len(s), increment):
                zigzag += s[i]

                if row>0 and row<numRows-1 and i + increment - 2 * row < len(s):
                    zigzag += s[i + increment - 2 * row]
        return zigzag



# complexity O(n)
class Solution:
    def convert(self, s: str, numRows: int) -> str:
        if numRows == 1:
            return s
        
        rows = [''] * numRows
        curr_row = 0
        going_down = False
        
        for char in s:
            rows[curr_row] += char
            if curr_row == 0 or curr_row == numRows - 1:
                going_down = not going_down

            curr_row += 1 if going_down else -1

        return ''.join(rows)

obj = Solution()
s = "PAYPALISHIRING"
numRows = 3
result = obj.convert(s, numRows)
print(result)


# Example 1:
# Input: s = "PAYPALISHIRING", numRows = 3
# Output: "PAHNAPLSIIGYIR"

# Example 2:
# Input: s = "PAYPALISHIRING", numRows = 4
# Output: "PINALSIGYAHRPI"
# Explanation:
# P     I    N
# A   L S  I G
# Y A   H R
# P     I

# Example 3:
# Input: s = "A", numRows = 1
# Output: "A"
