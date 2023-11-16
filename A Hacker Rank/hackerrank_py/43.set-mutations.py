# Enter your code here. Read input from STDIN. Print output to STDOUT
size_of_a = int(input())
a = set(map(int, input().split()))

n = int(input())

for _ in range(n):
    test_case, test_case_number = map(str, input().split())
    test_case_element = set(map(int, input().split())) 

    if "intersection_update" == test_case:
        a.intersection_update(test_case_element)
    elif "update" == test_case:
        a.update(test_case_element)
    elif "difference_update" == test_case:
        a.difference_update(test_case_element)
    elif "symmetric_difference_update" == test_case:
        a.symmetric_difference_update(test_case_element)

print(sum(a))

"""
Sample Input

 16
 1 2 3 4 5 6 7 8 9 10 11 12 13 14 24 52
 4
 intersection_update 10
 2 3 5 6 8 9 1 4 7 11
 update 2
 55 66
 symmetric_difference_update 5
 22 7 35 62 58
 difference_update 7
 11 22 35 55 58 62 66
Sample Output

38

"""