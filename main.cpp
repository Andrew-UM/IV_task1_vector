#include <iostream>
#include "Vector.cpp"


int main() {

    Vector<int, 5> A;
    A.push_back(0);
    A.push_back(1);
    A.push_back(2);
    A.push_back(3);
    A.push_back(4);

    A.pop_back();

    for (auto x: A) {
        std::cout << x << std::endl;
    }
}