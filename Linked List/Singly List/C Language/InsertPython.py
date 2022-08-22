# Create a node
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


class LinkedList:

    def __init__(self):
        self.head = None

    # Insert at the beginning
    def insertAtBeginning(self, new_data):
        new_node = Node(new_data)

        new_node.next = self.head
        self.head = new_node
    # Print the linked list
    # insert at the end

    def insertAtEnd(self, new_data):
        new_node = Node(new_data)

        if self.head is None:
            self.head = new_node
            return

        ptr = self.head
        while (ptr.next != None):
            ptr = ptr.next
        ptr.next = new_node

    # insert at any position
    def insertAtPosition(self, new_data, position):
        new_node = Node(new_data)
        ptr = self.head
        if position == 1:
            new_node.next = self.head
            self.head = new_node
            return
        i=1
        while(i!=position-1):
            ptr = ptr.next
            i+=1
        new_node.next = ptr.next
        ptr.next = new_node

    # delete first node
    def deleteFirstNode(self):
        if self.head is None:
            return
        self.head = self.head.next
    
    # delete last node
    def deleteLastNode(self):
    
        ptr = self.head
        while(ptr.next.next != None):
            ptr = ptr.next
        ptr.next = None

    def printList(self):
        temp = self.head
        while (temp):
            print(str(temp.data) + " ", end="")
            temp = temp.next


if __name__ == '__main__':

    llist = LinkedList()
    llist.head = Node(10)
    second = Node(20)
    third = Node(30)
    fourth = Node(40)
    llist.head.next = second
    second.next = third
    third.next = fourth
    fourth.next = None
    llist.printList()

    llist.insertAtBeginning(50)
    llist.insertAtEnd(82)
    llist.insertAtPosition(100, 3)
    print("\n")
    llist.printList()
    llist.printList()
    llist.deleteFirstNode()
    llist.deleteLastNode()
    print("\n")
    llist.printList()




   
