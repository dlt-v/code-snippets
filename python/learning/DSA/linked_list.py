
class Node:
    def __init__(self, data: str) -> None:
        self.data: str = data
        self.next: None | Node = None


class LinkedList:
    def __init__(self) -> None:
        self.head: None | Node = None

    def print_list(self) -> None:
        # now we know for sure self.head exists and is a Node
        cur_node: Node | None = self.head
        while cur_node:
            print(cur_node.data)
            cur_node = cur_node.next

    def append(self, data: str) -> None:
        new_node = Node(data)
        if self.head is None:
            self.head = new_node
        else:
            last_node: Node = self.head  # mark the first node
            while last_node.next:  # check if there is a next node
                last_node = last_node.next  # if there is, move to the next node
            last_node.next = new_node  # at the end create next node in .next

    def prepend(self, data: str) -> None:
        new_node: Node = Node(data)

        new_node.next = self.head
        self.head = new_node

    def insert_after(self, prev_node: Node, data: str) -> None:
        if not prev_node:
            print('Previous node doesn\'t exist')
        else:
            new_node: Node = Node(data)

            new_node.next = prev_node.next
            prev_node.next = new_node

    def delete_node(self, key: str) -> None:
        cur_node = self.head

        if cur_node and cur_node and cur_node.data == key:
            self.head = cur_node.next
            cur_node = None
            return

        prev: Node | None = None
        while cur_node and cur_node.data != key:
            prev = cur_node
            cur_node = cur_node.next

        if cur_node is None:
            return
        if prev is None:
            pass
        else:
            prev.next = cur_node.next
            cur_node = None

    def delete_node_at_pos(self, pos: int):
        if self.head:
            cur_node = self.head
            if pos == 0:
                self.head = cur_node.next
                cur_node = None
                return

            prev: Node | None = None
            count = 0
            while cur_node and count != pos:
                prev = cur_node
                cur_node = cur_node.next
                count += 1

            if cur_node is None:
                return

            if prev is None:
                pass
            else:
                prev.next = cur_node.next
                cur_node = None


llist = LinkedList()
llist.append("A")
llist.append("B")
llist.append("C")
llist.append("D")

llist.print_list()
