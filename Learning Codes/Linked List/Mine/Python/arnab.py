class Node:
    def linked_list(self, value):
        self.data = value
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None
    
    def insertAtHead(self, value):
        newNode = Node()
        newNode.linked_list(value)
        newNode.next = self.head
        self.head = newNode

    def deleteFromHead(self):
        if self.head:
            self.head = self.head.next
    
    def insertAtTail(self, value):
        newNode = Node()
        newNode.linked_list(value)

        if self.head is None:
            self.head = newNode
            return
        
        current = self.head
        while current.next:
            current = current.next
        current.next = newNode

    def deleteFromTail(self):
        if self.head is None:
            return

        if self.head.next is None:
            self.head = None
            return

        current = self.head
        while current.next.next:
            current = current.next
        current.next = None

    def insertAtAnyPos(self, pos, value):
        newNode = Node()
        newNode.linked_list(value)

        if pos == 1:
            newNode.next = self.head
            self.head = newNode
            return
        
        current = self.head
        for i in range(pos - 2):
            if current is None:
                return
            current = current.next
        if current is None:
            return
        newNode.next = current.next
        current.next = newNode
    
    def deleteFromAnyPos(self, pos):
        if pos == 1:
            if self.head:
                self.head = self.head.next
            return

        current = self.head
        for i in range(pos - 2):
            if current is None:
                return
            current = current.next
        if current is None or current.next is None:
            return
        current.next = current.next.next

    def search(self, key):
        pos = 1
        current = self.head
        while current:
            if current.data == key:
                print("Found, position No:", pos)
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

# Create a linked list and perform operations
lst = LinkedList()
lst.insertAtHead(5)
lst.insertAtHead(7)
lst.display()
lst.insertAtTail(1)
lst.insertAtTail(2)
lst.display()
lst.insertAtAnyPos(3, 8)
lst.insertAtAnyPos(1, 9)
lst.insertAtAnyPos(7, 4)
lst.display()
lst.deleteFromHead()
lst.display()
lst.deleteFromTail()
lst.display()
lst.deleteFromAnyPos(3)
lst.display()
lst.search(3)
