class Node:
    def __init__(self, val):
        self.data = val
        self.next = None

def insert_at_tail(head, val):
    n = Node(val)
    if head is None:
        head = n
        return head
    tmp = head
    while tmp.next is not None:
        tmp = tmp.next
    tmp.next = n
    return head

def search(head, key):
    tmp = head
    while tmp is not None:
        if tmp.data == key:
            return True
        tmp = tmp.next
    return False

def display(head):
    tmp = head
    while tmp is not None:
        print(tmp.data, "-->", end=" ")
        tmp = tmp.next
    print("NULL")


head = None
head = insert_at_tail(head, 1)
head = insert_at_tail(head, 10)
head = insert_at_tail(head, 100)
head = insert_at_tail(head, 1000)
display(head)
    
found = search(head, 1100)
if found:
        print("Founded")
else:
        print("Not Founded")
