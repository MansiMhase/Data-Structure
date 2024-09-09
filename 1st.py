C = []
F = []
B = []

n1 = int(input("Number of students who play cricket: "))
n2 = int(input("Number of students who play football: "))
n3 = int(input("Number of students who play badminton: "))

i = 1
while i < n1:
    roll = int(input("Enter student roll number who plays cricket: "))
    if roll not in C:
        C.append(roll)
        i += 1

i = 1
while i < n2:
    roll = int(input("Enter student roll number who plays football: "))
    if roll not in F:
        F.append(roll)
        i += 1

i = 1
while i < n3:
    roll = int(input("Enter student roll number who plays badminton: "))
    if roll not in B:
        B.append(roll)
        i += 1

print("Cricket:", C)
print("Football:", F)
print("Badminton:", B)

def intersection(l1, l2):
    return list(set(l1) & set(l2))

def union(l1, l2):
    return list(set(l1) | set(l2))

def difference(l1, l2):
    return list(set(l1) - set(l2))

def menu():
    while True:
        print("\nMenu:")
        print("1. List of students who play both cricket and football")
        print("2. List of students who play either cricket but not badminton")
        print("3. List of students who play neither cricket nor badminton")
        print("4. List of students who play cricket and football but not badminton")
        print("5. Exit")

        ch = int(input("Enter your choice: "))
        
        if ch == 1:
            p = intersection(C, F)
            print("Students who play both cricket and football:", p)
        elif ch == 2:
            p = difference(C, B)
            print("Students who play cricket but not badminton:", p)
        elif ch == 3:
            # Combine all students from the cricket, football, and badminton lists
            allstud = set(C) | set(F) | set(B)

            # Students who play any of the sports (cricket, football, or badminton)
            stud_play_something = set(C + F + B)

            # Students who don't play any sport (if there are missing roll numbers)
            stud_play_nothing = list(allstud - stud_play_something)

            print("Students who play neither cricket nor badminton:", stud_play_nothing)
        elif ch == 4:
            p1 = intersection(C, F)
            p2 = difference(p1, B)
            print("Students who play cricket and football but not badminton:", p2)
        elif ch == 5:
            break
        else:
            print("Invalid choice. Please enter a valid option.")

menu()

u = union(C, B)
d = difference(u, intersection(C, B))
print("Students who play only cricket or badminton:", d)

e = difference(F, u)
print("Students who play only football:", e)

f = intersection(C, F)
g = difference(f, B)
print("Students who play only cricket and football but not badminton:", g)
