#ifndef TEST_H
#define TEST_H

#include <map>
#include <string>

class Test{
    public:
        Test(): m_a(0){}
        Test(std::map<std::string, int> a);
        int getA() const;
        void printMap() const;
    private:
        int m_a;
        std::map<std::string, int> dico;
};

#endif
