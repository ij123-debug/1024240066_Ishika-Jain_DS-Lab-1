arr=[]

def create():
    n=int(input("Enter the size of the array"))
    
    for i in range(0,n):
        val=int(input("Enter the element :"))
        arr.append(val)
def display():
    print(arr)
def insert():
    pos=int(input("Enter the position to be inserted"))
    num= int (input("Enter the number to be inserted"))
    arr.insert(pos,num)
    print(arr)
def delete():
    position=int(input("Enter the position of the number to be deleted"))
    arr.pop(position)
    print (arr)
def linearSearch():
    num=int(input("Enter the numebr to be searched"))
    if num in arr:
        print(f"Element found at {arr.index(num)}")
    else:
        print("Element not found")
    
create()
display()
insert()
delete()
linearSearch()
