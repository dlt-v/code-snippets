class Stack():
    def __init__(self):
        self.items = []

    def push(self, item):
        self.items.append(item)				

    def pop(self):
        return self.items.pop()
    
    def is_empty(self):
        return self.items == []
    
    def peek(self):
        if not self.is_empty():
            return self.items[-1]
        
    def get_stack(self):
        return self.items


# my_stack = Stack()
# print(my_stack.get_stack())
# my_stack.push('A')
# my_stack.push('B')
# print(my_stack.get_stack())
# print('Item removed:', my_stack.pop())
# print(my_stack.get_stack())
