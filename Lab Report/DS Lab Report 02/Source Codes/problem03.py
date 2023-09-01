class Node:
    def __init__(self, value):
        self.data = value
        self.next = None
class LinkedList:
    def __init__(self):
        self.head = None

    def insertAtAnyPos(self, pos, value):
        newNode = Node(value)

        if self.head == None:
            self.head = newNode
            return
        
        if pos == 1:
            newNode.next = self.head
            self.head = newNode
            return
        
        current = self.head
        for i in range(pos - 2):
            current = current.next
        newNode.next = current.next
        current.next = newNode

    def display(self):
        current = self.head
        while current:
            print(current.data, end=" -> ")
            current = current.next
        print("None")

list = LinkedList()
list.insertAtAnyPos(3, 25)
list.insertAtAnyPos(1, 50)
list.insertAtAnyPos(2, 75)
list.display()