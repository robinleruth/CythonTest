# distutils: language=c++
from a cimport Test

def main():
    ptr = new Test() # Create on the heap

    print(ptr.getA())

    cdef Test abc
    print(abc.getA()) # Create on the stack

    dico = {
            b'a': 1, 
            b'b': 2
            }

    cdef Test bcd = Test(dico)
    bcd.printMap()


cdef class PyTest:
    cdef Test *pt_test

    def __cinit__(self, dico):
        self.pt_test = new Test(dico)

    def __dealloc__(self):
        del self.pt_test

    def get_a(self):
        return self.pt_test.getA()

    def print_map(self):
        self.pt_test.printMap()
