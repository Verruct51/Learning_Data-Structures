# Created by 22343019_Alvin Anugerah Pratama

# definisi kelas Node
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
        self.prev = None

# definisi kelas DoubleLinkedList
class DoubleLinkedList:
    def __init__(self):
        self.head = None

    # method untuk menambahkan node di awal linked list
    def add_beginning(self, new_data):
        new_node = Node(new_data)
        if self.head is None:
            self.head = new_node
        else:
            new_node.next = self.head
            self.head.prev = new_node
            self.head = new_node

    # method untuk menampilkan isi dari linked list
    def display(self):
        current_node = self.head
        while current_node is not None:
            print(current_node.data, end=" ")
            print( )
            current_node = current_node.next
    
# membuat objek dari kelas DoubleLinkedList
dll = DoubleLinkedList()

# menambahkan beberapa node ke dalam linked list
dll.add_beginning("gajah")
dll.add_beginning("monyet")
dll.add_beginning("biawak")
dll.add_beginning("kucing")
dll.add_beginning("tikus")

# menampilkan isi dari linked list
print( )
print("Isi dari linked list adalah:")
dll.display()

