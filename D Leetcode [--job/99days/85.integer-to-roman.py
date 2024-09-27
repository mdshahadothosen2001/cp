# Solution for 0(n) complexity
# class Solution:
#     def intToRoman(self, num: int) -> str:
#         roman = ""
#         values = {1000:"M", 500:"D", 100:"C", 50:"L", 10:"X", 5:"V", 1:"I"}
#         remainders = ""
#         while(num>0):
#             if num>=1000:
#                 times = num//1000
#                 num = num%1000
#                 remainders += "M" * times
#             elif 1000>num and num>=100:
#                 times = num//100
#                 num = num%100
#                 if times == 9:
#                     times = 0
#                     remainders += "CM"
                
#                 if times >= 5:
#                     times -= 5
#                     remainders += "D"
                
#                 if times == 4:
#                     remainders += "CD"
#                     times = 0
                    
#                 if times >0:
#                     remainders += "C" * times

#             elif 100>num and num>=10:
#                 times = num//10
#                 num = num%10
#                 if times == 9:
#                     remainders += "XC"
#                     times = 0
                
#                 if times >= 5:
#                     times -= 5
#                     remainders += "L"
#                 if times == 4:
#                     remainders += "XL"
#                     times = 0
                    
#                 if times >0:
#                     remainders += "X" * times
                
#             elif 10>num and num>=1:
#                 times = num//1
#                 num = num%1

#                 if times == 9:
#                     remainders += "IX"
#                     times = 0
                
#                 if times >= 5:
#                     remainders += "V"
#                     times -= 5

#                 if times == 4:
#                     remainders += "IV"
#                     times = 0
                    
#                 if times >0:
#                     remainders += "I" * times
                
#         return remainders


# ....................................................................
# Solution for 0(1) complexity
class Solution:
    def intToRoman(self, num: int) -> str:
        values = [1000,900,500,400,100,90,50,40,10,9,5,4,1]
        symbols = "M CM D CD C XC L XL X IX V IV I".split()
        roman = ""
        for i in range(13):
            roman+=symbols[i]*(num//values[i])
            num%=values[i]
        return roman


obj = Solution()
# expected CD
num = 400
roman = obj.intToRoman(num)
print(roman)
