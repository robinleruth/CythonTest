#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include "Test.h"


using namespace std;


int main(){
    map<string, int> b;
    b["a"] = 1;
    b["b"] = 2;
    Test a = Test(b);
    a.printMap();
    return 0;
}
