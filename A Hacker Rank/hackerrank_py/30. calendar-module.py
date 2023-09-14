import calendar

m,d,y = map(int, input().split())

day = calendar.weekday(y, m, d)

if day == 0:
    print("MONDAY")
elif day == 1:
    print("TUESDAY")
elif day == 2:
    print("WEDNESDAY")
elif day == 3:
    print("THURSDAY")
elif day == 4:
    print("FRIDAY")
elif day == 5:
    print("SATURDAY")
elif day == 6:
    print("SUNDAY")

"""Smaple input: 08 05 2015
   Sample output: WEDNESDAY"""


#print(calendar.TextCalendar(firstweekday=6).formatyear(2015))
"""Display Full calendar of 2015 year """
