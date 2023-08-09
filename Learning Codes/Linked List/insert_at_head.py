class Node:
    def linked_list(self, val):
        self.data = val
        self.next = None

def insert_at_head(head, val):
    n = Node()
    n.linked_list(val)
    n.next = head
    head = n
    return head

def display(head):
    tmp = head
    while tmp is not None:
        print(tmp.data, "-->", end=" ")
        tmp = tmp.next
    print("NULL")

head = None
display(head)
head = insert_at_head(head, 1)
head = insert_at_head(head, 10)
head = insert_at_head(head, 100)
head = insert_at_head(head, 1000)
display(head)
