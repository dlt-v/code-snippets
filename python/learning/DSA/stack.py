class Stack:
    def __init__(self):
        self._items = []

    def push(self, item):
        self._items.append(item)

    def pop(self):
        return self._items.pop()

    def peek(self):
        if len(self._items) > 0:
            return self._items[-1]
        else:
            return None

    def get_stack(self):
        return self._items


my_stack = Stack()
print(my_stack.get_stack())
my_stack.push('A')
my_stack.push('B')
print(my_stack.get_stack())
print('Item removed:', my_stack.pop())
print(my_stack.get_stack())
