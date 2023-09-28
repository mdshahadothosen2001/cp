from collections import namedtuple
N = int(input())
headers = input()
student = namedtuple('Student',headers)
students = []
for i in range(N):
    students.append(student(*input().split()))
avg = sum(list(map(lambda x: float(x.MARKS),students)))/len(students)
print("%.2f" % avg)


"""
output TESTCASE 01

5
ID         MARKS      NAME       CLASS     
1          97         Raymond    7         
2          50         Steven     4         
3          91         Adrian     9         
4          72         Stewart    5         
5          80         Peter      6   
"""
"""
Sample Output TESTCASE 01

78.00
"""