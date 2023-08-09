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

def display(head):
    tmp = head
    while tmp is not None:
        print(tmp.data, "-->", end=" ")
        tmp = tmp.next
    print("NULL",end="")

head = None
head = insert_at_tail(head, 1)
head = insert_at_tail(head, 10)
head = insert_at_tail(head, 100)
head = insert_at_tail(head, 1000)
display(head)
