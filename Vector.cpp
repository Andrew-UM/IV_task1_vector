#include <cstdio>

template <typename T, size_t capacity> class Vector
{
    size_t size = 0;
    size_t realCapacity = capacity;
    T *buffer;

    class Iterator
    {
        T *current;

      public:
        explicit Iterator(T *x) : current(x) {}

        T &operator+(int n) { return *(current + n); }

        T &operator-(int n) { return *(current - n); }

        T &operator++() { return *current++; }

        T &operator--() { return *current--; }

        bool operator==(const Iterator &it) { return current == it.current; }

        bool operator!=(const Iterator &it) { return current != it.current; }

        T &operator*() { return *current; }
    };

  public:
    Vector() { buffer = new T[capacity]; }

    ~Vector() { delete[] buffer; }

    void push_back(T element)
    {
        if (size < realCapacity) {
            buffer[size] = element;
            size++;
        } else {
            realCapacity += capacity;
            T *x = new T[realCapacity];
            for (unsigned long long i = 0; i < size; i++) {
                x[i] = buffer[i];
            }
            x[size] = element;
            size++;
            buffer = x;
        }
    }

    void pop_back()
    {
        if (size > 0) {
            size--;
        } else {
            //удаление элемента из пустого вектора <=> бездействие?
        }
    }

    T &operator[](int index)
    {
        if (index < size) {
            return buffer[index];
        } else {
            // TODO выход за границы массива
        }
    }

    Iterator begin() { return Iterator(buffer); }

    Iterator end() { return Iterator(buffer + size); }
};
