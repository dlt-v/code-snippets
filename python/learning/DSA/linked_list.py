
from typing import List


class Node:
    def __init__(self, data: str | int) -> None:
        self.data: str | int = data
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

    def append(self, data: str | int) -> None:
        new_node = Node(data)
        if self.head is None:
            self.head = new_node
        else:
            last_node: Node = self.head  # mark the first node
            while last_node.next:  # check if there is a next node
                last_node = last_node.next  # if there is, move to the next node
            last_node.next = new_node  # at the end create next node in .next

    def prepend(self, data: str | int) -> None:
        new_node: Node = Node(data)

        new_node.next = self.head
        self.head = new_node

    def insert_after(self, prev_node: Node, data: str | int) -> None:
        if not prev_node:
            print('Previous node doesn\'t exist')
        else:
            new_node: Node = Node(data)

            new_node.next = prev_node.next
            prev_node.next = new_node

    def delete_node(self, key: str | int) -> None:
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

    def len_iterative(self) -> int:
        count: int = 0
        if self.head:
            cur_node = self.head
            while cur_node:
                count += 1
                cur_node = cur_node.next
        return count

    def len_recursive(self, node: Node | None) -> int:
        if node is None:
            return 0
        return 1 + self.len_recursive(node.next)

    def swap_nodes(self, key_1: str | int, key_2: str | int) -> None:
        if key_1 == key_2:
            return

        prev_1 = None
        curr_1: Node | None = self.head

        while curr_1 and curr_1.data != key_1:  # find the key_1 and the previous node
            prev_1 = curr_1
            curr_1 = curr_1.next

        prev_2 = None
        curr_2 = self.head
        while curr_2 and curr_2.data != key_2:  # find the key_2 and the previous node
            prev_2 = curr_2
            curr_2 = curr_2.next

        if not curr_1 or not curr_2:  # if the looked for nodes cannot be found, return
            return

        if prev_1:  # set node1's previous node's pointer to the second node
            prev_1.next = curr_2
        else:
            self.head = curr_2

        if prev_2:  # set node2's previous node's pointer to the first node
            prev_2.next = curr_1
        else:
            self.head = curr_1

        # now swap the nodes' next pointers
        curr_1.next, curr_2.next = curr_2.next, curr_1.next

    def reverse_iterative(self) -> None:
        previous_node = None  # the last element of the list should point to nothing
        current_node = self.head  # we start from the first node

        while current_node:  # while current node exists
            next_node = current_node.next  # we store the next node in a variable
            # we assign the pointer to previous node - "reverse arrows"
            current_node.next = previous_node
            # we move along the linked list and repeat the steps
            previous_node = current_node
            current_node = next_node
        # at the end we set the head of the linked list to the last node
        # since current_node at this point in time is None, we know that
        # previous_node is in fact the last element
        self.head = previous_node

    def reverse_recursive(self) -> None:
        # implement the base case
        def _reverse_recursive(current_node: Node | None, previous_node: Node | None) -> Node | None:
            if not current_node:  # if current node doesn't exist, collapse the callstack
                return previous_node
            # change
            next_node: None | Node = current_node.next
            current_node.next = previous_node

            previous_node = current_node
            current_node = next_node

            return _reverse_recursive(current_node, previous_node)

        self.head = _reverse_recursive(
            current_node=self.head, previous_node=None)

    def remove_duplicates(self) -> None:
        if self.head:
            current_node: Node | None = self.head
            previous: None | Node = None
            duplicate_values: List[int | str] = []

            while current_node:
                # If data is already in array:
                if current_node.data in duplicate_values and previous:
                    previous.next = current_node.next
                    current_node = None
                else:
                    # Have not encountered element before.
                    duplicate_values.append(current_node.data)
                    previous = current_node
                current_node = previous.next

    def nth_to_last(self, n: int) -> int | str | bool:
        list_length: int = self.len_iterative()

        current_node: Node | None = self.head

        while current_node:
            if list_length == n:
                return current_node.data
            list_length -= 1
            current_node = current_node.next

        return False


llist = LinkedList()
llist.append(1)
llist.append(6)
llist.append(1)
llist.append(4)
llist.append(2)
llist.append(2)
llist.append(4)

print("Original Linked List")
# llist.print_list()
print(llist.nth_to_last(1))
