class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


class LinkedList:
    def __init__(self):
        self.head = None

    def print_list(self):
        cur_node = self.head
        while cur_node:
            print(cur_node.data)
            cur_node = cur_node.next

    def append(self, data):
        new_node = Node(data)
        if self.head is None:
            self.head = new_node
        else:
            last_node = self.head  # mark the first node
            while last_node.next:  # check if there is a next node
                last_node = last_node.next  # if there is, move to the next node
            last_node.next = new_node  # at the end create next node in .next

    def prepend(self, data):
        new_node = Node(data)

        new_node.next = self.head
        self.head = new_node

    def insert_after(self, prev_node, data):
        if not prev_node:
            print('Previous node doesn\'t exist')
        else:
            new_node = Node(data)

            new_node.next = prev_node.next
            prev_node.next = new_node


llist = LinkedList()
llist.append("A")
llist.append("B")
llist.append("C")
llist.prepend("D")


llist.print_list()
