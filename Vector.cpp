#include <cstdlib>


template<typename T, size_t capacity>
class Vector {

    size_t size = 0;
    T *buffer;

    class iterator {
        T *v;
        unsigned long long index{};
    public:
        iterator(T *pointer, unsigned long long index) {
            this->v = pointer;
            this->index = index;
        }

        iterator(iterator const &A) {
            this->v = A.v;
            this->index = A.index;
        }

        void operator++() {
            this->v++;
            this->index++;
        };

        iterator operator+(unsigned long long shift) {
            this->v += shift;
            this->index += shift;
            return *this;
        }

        bool operator!=(iterator const &A) {
            if (this->index == A.index) {
                return true;
            } else {
                return false;
            }
        }
    };


public:
    Vector() {
        buffer = new T[capacity];
    }

    ~Vector() {
        delete[]buffer;
    }

    iterator begin() {
        iterator A(buffer, 0);
        return A;
    }

    iterator end() {
        return iterator(&buffer[size], size);
    }

    void push_back(T element) {
        if (size < capacity) {
            buffer[size] = element;
            size++;
        } else {
            //TODO переполнение capacity
        }
    }

    void pop_back() {
        if (size > 0) {
            size--;
        } else {
            //удаление элемента из пустого вектора <=> бездействие
        }
    }

    T &operator[](int index) {
        if (index < size) {
            return buffer[index];
        } else {
            //TODO выход за границы массива
        }
    }
};


