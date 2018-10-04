
#include <iostream>

template<class T>
class MyVector1{
public:
    explicit MyVector1(int initsize=0);
    ~MyVector1();
    int capnum = 5;
    bool empty() const {
        return thesize ==0;
    }

    int size(){
        return this.thesize;
    }

    T* begin(){
        return &vec[0];
    }

    T* end(){
        return &vec[thesize];
    }

    MyVector1<T> &operator=(const MyVector1 &rhs);
    bool operator==(const MyVector1 &rhs);
    bool operator!=(const MyVector1 &rhs);

    T &operator[](const int index);
    void reserve(const int newcap);
    const T& front();
    const T& back();
    void push_back( T &t);

private:
    int thesize;
    T *vec;
    int cap;


};