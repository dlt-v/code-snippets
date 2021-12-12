from typing import Any, List


class Stack():
    def __init__(self) -> None:
        self.items: List[Any] = []

    def push(self, item: Any) -> None:
        self.items.append(item)

    def pop(self) -> Any:
        return self.items.pop()

    def is_empty(self) -> bool:
        return self.items == []

    def peek(self) -> Any:
        if not self.is_empty():
            return self.items[-1]
        return False

    def get_stack(self) -> List[Any]:
        return self.items


# my_stack = Stack()
# print(my_stack.get_stack())
# my_stack.push('A')
# my_stack.push('B')
# print(my_stack.get_stack())
# print('Item removed:', my_stack.pop())
# print(my_stack.get_stack())
