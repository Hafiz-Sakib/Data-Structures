class Node:
    def __init__(self, value):
        self.data = value
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None
    
    def insetAtHead(self, value):
        newNode = Node(value)
        newNode.next = self.head
        self.head = newNode

    def display(self):
        current = self.head
        while current:
            print(current.data, end=" -> ")
            current = current.next
        print("None")


list = LinkedList()
list.insetAtHead(5)
list.insetAtHead(7)
list.display()