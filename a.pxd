from libcpp.map cimport map
from libcpp.string cimport string


cdef extern from "Test.cpp":
    pass


cdef extern from "Test.h":
    cdef cppclass Test:
        Test() except + # To be able to raise a proper Python exception during instantiation
        Test(map[string, int]) except +
        int getA()
        void printMap()
