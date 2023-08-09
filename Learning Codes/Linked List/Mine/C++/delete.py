class Node:
    def linked_list(self, val):
        self.data = val
        self.next = None

def insert_at_tail(head, val):
    n = Node()
    n.linked_list(val)
    if head is None:
        head = n
        return head  # Return the updated head
    tmp = head
    while tmp.next is not None:
        tmp = tmp.next
    tmp.next = n
    return head  # Return the updated head

def delete_at_position(head, position):
    if head is None:
        print("List is empty. Cannot delete.")
        return None  # Return None if list is empty

    tmp = head
    if position == 1:
        head = head.next
        del tmp
        return head

    i = 1
    while i < position - 1 and tmp is not None:
        tmp = tmp.next
        i += 1

    if tmp is None or tmp.next is None:
        print("Position out of range. Cannot delete.")
        return head

    to_delete = tmp.next
    tmp.next = to_delete.next

    if tmp.next is None:
        del to_delete
        return head

    del to_delete
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

head = delete_at_position(head, 4)
display(head)
