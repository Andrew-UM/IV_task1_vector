#include "Vector.cpp"
#include <iostream>

int main() {

    Vector<int, 5> A;

    A.push_back(0);
    A.push_back(1);
    A.push_back(2);
    A.push_back(3);
    A.push_back(4);
    A.push_back(5);
    A.push_back(6);
    A.push_back(7);
    A.push_back(8);
    A.push_back(9);
    A.push_back(10);
    A.push_back(11);
    A.push_back(12);

    A.pop_back();

    for (auto x: A) {
        std::cout << x << std::endl;
    }
}