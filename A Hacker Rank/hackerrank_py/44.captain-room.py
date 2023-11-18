k = int(input())
room_numbers = list(map(int, input().split()))

def find_captain_room(rooms):
    room_count = {}
    
    # Count occurrences of each room number
    for room in rooms:
        room_count[room] = room_count.get(room, 0) + 1
    
    # Find the room with a count of 1
    for room, count in room_count.items():
        if count == 1:
            return room

captain = find_captain_room(room_numbers)
print(captain)


"""
Sample Input

5
1 2 3 6 5 4 4 2 5 3 6 1 6 5 3 2 4 1 2 5 1 4 3 6 8 4 3 1 5 6 2 
Sample Output

8
"""
