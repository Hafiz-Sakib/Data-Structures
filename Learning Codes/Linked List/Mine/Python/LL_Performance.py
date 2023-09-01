class Node:
    def linked_list(self, value):
        self.data = value
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None
    
    def insetAtHead(self, value):
        newNode = Node(value)
        newNode.next = self.head
        self.head = newNode
    
    def insertAtTail(self, value):
        newNode = Node(value)

        if self.head is None:
            self.head = newNode
            return
        
        current = self.head
        while current.next:
            current = current.next
        current.next = newNode



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


    def search(self, key):
        pos = 1
        current = self.head
        while current.next:
            if current.data == key:
                print("Founded, position No: ", pos)
                return
            current = current.next
            pos += 1
        print("Not found")

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
list.insertAtTail(1)
list.insertAtTail(2)
list.display()
list.insertAtAnyPos(3, 8)
list.insertAtAnyPos(1, 9)
list.insertAtAnyPos(7, 4)
list.display()
list.search(3)
list.display()

