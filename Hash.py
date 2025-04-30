def hash_fun(key,size):
    return key%size

def insert_linear(key,name,hash_table,size):
    index=hash_fun(key,size)
    i=0
    while hash_table[(index+i)%size] is not None:
        i+=1
    hash_table[(index+i)%size]=(key,name)

def search_linear(key,hash_table,size):
    comparisons=0
    index=hash_fun(key,size)
    i=0
    while hash_table[(index+i)%size]is not None:
        comparisons+=1
        if hash_table[(index+i)%size][0]==key:
            print(f"Found at index {(index + i) % size} in {comparisons} comparisons.")
            return True
        i+=1
        if i==size:
            break
    print("Not found. Comparisons made:",comparisons)
    return False

def insert_quadratic(key,name,hash_table,size):
    index=hash_fun(key,size)
    i=0
    while hash_table[(index+i*i)%size]is not None:
        i+=1
    hash_table[(index+i*i)%size]=(key,name)

def search_quadratic(key,hash_table,size):
    comparisons=0
    index=hash_fun(key,size)
    i=0
    while hash_table[(index + i * i) % size] is not None:
        comparisons += 1
        if hash_table[(index + i * i) % size][0] == key:
            print(f"Found at index {(index + i * i) % size} in {comparisons} comparisons.")
            return True
        i += 1
        if i == size:
            break
    print("Not found. Comparisons made:", comparisons)
    return False

size = int(input("Enter size for hash table: "))
linear_table = [None] * size
quadratic_table = [None] * size

while True:
    print("\n1. Insert using Linear Probing")
    print("2. Search using Linear Probing")
    print("3. Insert using Quadratic Probing")
    print("4. Search using Quadratic Probing")
    print("5. Display Linear Hash Table")
    print("6. Display Quadratic Hash Table")
    print("7. Exit")
    choice = int(input("Enter your choice: "))

    if choice == 1:
        key = int(input("Enter phone number: "))
        name = input("Enter name: ")
        insert_linear(key, name, linear_table, size)
    elif choice == 2:
        key = int(input("Enter phone number to search: "))
        search_linear(key, linear_table, size)
    elif choice == 3:
        key = int(input("Enter phone number: "))
        name = input("Enter name: ")
        insert_quadratic(key, name, quadratic_table, size)
    elif choice == 4:
        key = int(input("Enter phone number to search: "))
        search_quadratic(key, quadratic_table, size)
    elif choice == 5:
        for i in linear_table:
            print(i)
    elif choice == 6:
        for i in quadratic_table:
            print(i)
    elif choice == 7:
        break
