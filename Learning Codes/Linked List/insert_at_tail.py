class Node:
    def __init__(self, val):
        self.data = val
        self.next = None

def insert_at_tail(head, val):
    n = Node(val)
    if head is None:
        head = n
        return
    tmp = head
    while tmp.next is not None:
        tmp = tmp.next
    tmp.next = n

def display(head):
    tmp = head
    while tmp is not None:
        print(tmp.data, "->", end=" ")
        tmp = tmp.next
    print()

if __name__ == "__main__":
    head = None
    insert_at_tail(head, 1)
    insert_at_tail(head, 10)
    insert_at_tail(head, 100)
    insert_at_tail(head, 1000)
    display(head)
