arr = []

def create():
    global arr
    n = int(input("Enter number of elements: "))
    arr = []
    for i in range(n):
        val = int(input(f"Enter element {i+1}: "))
        arr.append(val)

def display():
    if not arr:
        print("Array is empty")
    else:
        print("Array elements:", arr)

def insert():
    pos = int(input("Enter position (0-based index): "))
    val = int(input("Enter value: "))
    if pos < 0 or pos > len(arr):
        print("Invalid position!")
    else:
        arr.insert(pos, val)

def delete():
    pos = int(input("Enter position (0-based index) to delete: "))
    if pos < 0 or pos >= len(arr):
        print("Invalid position!")
    else:
        arr.pop(pos)

def linear_search():
    key = int(input("Enter element to search: "))
    if key in arr:
        print(f"Element found at position {arr.index(key)}")
    else:
        print("Element not found!")

while True:
    print("\nMENU")
    print("1. CREATE")
    print("2. DISPLAY")
    print("3. INSERT")
    print("4. DELETE")
    print("5. LINEAR SEARCH")
    print("6. EXIT")
    
    choice = int(input("Enter choice: "))
    
    if choice == 1:
        create()
    elif choice == 2:
        display()
    elif choice == 3:
        i
