from typing import List 


class Solution:
    def hIndex(self, citations: List[int]) -> int:
        h = 1
        sum_of_cited = None
        
        while(True):
            counted = 0

            for cited in citations:
                if h <= cited:
                    
                    counted += 1
            
            if h <= counted:
                sum_of_cited = h
                h += 1
            else:
                break
            
        return sum_of_cited

test = Solution()
citations = [3,0,6,7,8,5]
result = test.hIndex(citations)
print(result)


    # Example 1:
    # Input: citations = [3,0,6,1,5]
    # Output: 3
    # Explanation: [3,0,6,1,5] means the researcher has 5 papers in total and each of them had received 3, 0, 6, 1, 5 citations respectively.
    # Since the researcher has 3 papers with at least 3 citations each and the remaining two with no more than 3 citations each, their h-index is 3.
    
    # Example 2:
    # Input: citations = [1,3,1]
    # Output: 1


            # .......................................................................................
            # h index problem explanation:
            #     firstly find h index.
            #     find value and count those numbers which greater than or equal to h index value.
            #     check counted number greater than or equal to h index number.
            # Here elements are citations means rewrite or republished after some modified by another person.
            
            # .................................
            # for example [3, 0, 6, 7, 8, 5]
            # here length is 6 means author numbers.
            # here each elements are citations numbers like 3 is numbers of citations for author 1.
            
            # .............................................
            # Run loop up to condition false (citations <= len(y))
            # statements:
            #     for 1 citations (1<= x):
            #       y = [3,6,7,8,5] // satified 1<= len(y)
                
            #     for 2 citations (2<=x):
            #         y = [3, 6, 7, 8, 5] //satified 2 <= len(y)
                
            #     for 3 citations (3 <= x):
            #         y = [3, 6, 7, 8, 5] //satified 3 <= len(y)
                    
            #     for 4 citations (4 <= x):
            #         y = [6, 7, 8, 5] //satified 4 <= len(y)
                
            #     for 5 citations (5 <= x):
            #         y = [6, 7, 8, 5] //not satified 5 <= len(y)
            # .................................
            # so h index value is 4
            
            # ............................................................................................
