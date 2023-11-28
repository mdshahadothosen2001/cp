import email.utils
import re

pattern = re.compile(r'[a-zA-Z](\w|-|\.)*@[a-zA-Z]*\.[a-zA-Z]{0,3}$')
for _ in range(int(input())):
    t = email.utils.parseaddr(input())
    if pattern.match(t[1]):
        print(email.utils.formataddr(t))

# this code passed 4 of 7 tests
"""n = int(input())

special_char = '-._'
username = False
domain = False
extension = False

for _ in range(n):
    name, user_email = input().split()

    address_sign = user_email.find('@')
    username = True
    for item in user_email[1:address_sign]:
        if (not item.isalnum()) and (item not in special_char):
            status = False
            break
    
    domain = True
    dot_sign = user_email.find('.', address_sign)
    for item in user_email[address_sign+1:dot_sign]:
        if not item.isalnum():
            domain = False
            break
    extension = True
    if len(user_email[dot_sign+1:len(user_email)-1]) > 3:
        extension = False
    for item in user_email[dot_sign+1:len(user_email)-1]:
        if not item.isalnum():
            extension = False
            break

    if username == True and domain == True and extension == True:
        print(name, user_email)"""



"""
Sample Input

2  
DEXTER <dexter@hotmail.com>
VIRUS <virus!@variable.:p>
Sample Output

DEXTER <dexter@hotmail.com>
"""
