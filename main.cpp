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

    auto current = A.begin();
    //current = current + 2;
    current.operator++();
    auto last = A.end();
    /*for(auto current : A){
        std::cout << A[current];
    }*/

}