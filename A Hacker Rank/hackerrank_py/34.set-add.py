N = int(input())
s = set("")
for _ in range(N):
    country = input()
    s.add(country)
print(len(s))


"""
Note: diplay distinct country number

sample input:
4
Bangladesh
UK
US
UK

sample output:
3
"""