# write a python program to implement queue using array

#global variables
MAX = 5
#create a list of size MAX
queue = [None]*MAX

#initialize front and rear
front = -1
rear = -1

# function to insert an element in queue
def enqueue():
    global rear
    global front
    Item= int(input("Enter the element to be inserted: \n"))
    if rear == MAX-1:
        print("Queue is full")
    elif front == -1 and rear == -1:
        front = rear = 0
  
    else:
        rear += 1
    queue[rear] = Item
    print("\nValue Inserted\n")
    #print(queue)
        
# function to delete an element from queue
def dequeue():
    global front
    global rear
    if front == -1 and rear == -1:
        print("Queue is empty")
    elif front == rear:
        front = rear = -1
    else:
        front += 1
    print(queue)
    print("\nValue Deleted")


# function to display the queue
def display():
    if front == -1 and rear == -1:
        print("Queue is empty")
    else:
        print(queue)


#peek function to display the front element of the queue
def peek():
    if front == -1 and rear == -1:
        print("Queue is empty")
    else:
        print(queue[front])

# main function
def main():
    while True:
        print('''

1. Insert

2. Delete

3. Display

4. Peek

5. Exit''') #MULTILINE STRING
        choice = int(input("Enter your choice: "))
        if choice == 1:
            enqueue()
        elif choice == 2:
            dequeue()
        elif choice == 3:
            display()
        elif choice == 4:
            peek()
        elif choice == 5:
            break
        else:
            print("Invalid Choice")

#call main function
if __name__ == "__main__":
    main()
