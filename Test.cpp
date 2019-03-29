#include "Test.h"
#include <algorithm>
#include <map>
#include <iostream>

using namespace std;

class Afficher{
    public:
        void operator()(pair<string, int> a){
            cout << a.first << " " << a.second << endl;
        }
};

int Test::getA() const{
    return m_a;
}

Test::Test(map<string, int> a){
    dico = a;
}

void Test::printMap() const{
    for_each(dico.begin(), dico.end(), Afficher());
}
