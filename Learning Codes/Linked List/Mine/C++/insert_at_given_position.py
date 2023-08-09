class Node:
    def linked_list(self, val):
        self.data = val
        self.next = None

def insert_at_tail(head, val):
    n = Node()
    n.linked_list(val)
    if head is None:
        head = n
        return head
    tmp = head
    while tmp.next is not None:
        tmp = tmp.next
    tmp.next = n
    return head

def insert_at_position(head, val, position):
    if position == 1 or head is None:
        n = Node(val)
        n.linked_list(val)
        n.next = head
        head = n
        return head
    n = Node()
    n.linked_list(val)
    tmp = head
    i = 1
    while i < position - 1 and tmp.next is not None:
        tmp = tmp.next
        i += 1
    n.next = tmp.next
    tmp.next = n
    return head

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

head = insert_at_position(head, 500, 2)
display(head)

head = insert_at_position(head, 200, 1)
display(head)
