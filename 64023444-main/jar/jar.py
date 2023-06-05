class Jar:
    def __init__(self, capacity=12):
        self.capacity = capacity
        self.size = 0

    def __str__(self):
        return '🍪' * self.size

    def deposit(self, n):
        self.size += n
        if self.size > 12:
            raise ValueError('Too many')

    def withdraw(self, n):
        self.size -= n
        if self.size < 0:
            raise ValueError('Invalid Capacity')

    @property
    def capacity(self):
        return (self._capacity)

    @property
    def size(self):
        return (self._size)

    @capacity.setter
    def capacity(self,capacity):
        self._capacity = capacity

    @size.setter
    def size(self,size):
        self._size = size

jar = Jar(5)
jar.deposit(5)
jar.withdraw(2)
print(jar.size)