# Created by 22343019_Alvin Anugerah Pratama

import heapq

class PriorityQueue:
    def __init__(self):
        self._queue = []
        self._index = 0

    def push(self, item, priority):
        heapq.heappush(self._queue, (priority, self._index, item))
        self._index += 1

    def pop(self):
        return heapq.heappop(self._queue)[-1]

# contoh penggunaan
q = PriorityQueue()
q.push("Capung", 2)
q.push("Kucing", 3)
q.push("Ayam", 1)

print( )
print("Isi dari priority queue : ")
print(q.pop()) # Item 2
print(q.pop()) # Item 3
print(q.pop()) # Item 1
print( )
