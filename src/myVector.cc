
#include "../include/myVector.h"

template<class T>
MyVector1<T>::MyVector1(int initsize)
    :thesize(initsize),cap(initsize+capnum){
    vec = new T[cap];
    // assert(vec != NULL);
}
template<class T>
MyVector1<T>::~MyVector1(){
    delete []vec;
    this->thesize = 0;

}

template<class T>
MyVector1<T>& MyVector1<T>::operator=(const MyVector1 &rhs){
    if(this != &rhs){
        delete []vec;
        this->thesize = rhs.thesize;
        this->cap = rhs.cap;
        this->vec = new T[this->cap];

        for (int i=0; i<this->cap; i++){
            this->vec[i] = rhs.vec[i];
        } 
    }

    return *this;
}

template<class T>
bool MyVector1<T>::operator==(const MyVector1 &rhs){
    if(this->thesize == rhs.thesize){
        int count = 0;
        for (int i=0; i<this->thesize; i++){
            if(this->vec[i] == rhs.vec[i]){
                count++;
            }
        }
        if(count == thesize){
            return true;
        }
    }
    return false;
}

template<class T>
bool MyVector1<T>::operator!=(const MyVector1 &rhs){
    return !(*this == rhs);
}

template<class T>
T &MyVector1<T>::operator[](const int index){
    if (index<0 || index>=thesize){
        std::cout<<"error = index is out" <<std::endl;
        return this->vec[index];;
    }

    return this->vec[index];
}
template<class T>
void MyVector1<T>::reserve(const int newcap){
    if (newcap <= cap){
        if ( newcap < cap/2){
            T *newarr = new T[newcap];
            int newsize = newcap>thesize ? thesize : newcap;
            for (int i=0; i != newsize; i++){
                newarr[i] = this->vec[i];
            }
            delete []this->vec;
            this->cap = newcap;
            this->vec = newarr;
        }
        return ;
    }
    T *newarr = new T[newcap];
    for (int i=0; i != thesize; i++){
        newarr[i] = this->vec[i];
    }
    delete []this->vec;
    this->cap = newcap;
    this->vec = newarr;
}

template<class T>
const T& MyVector1<T>::front(){
    if(!this->empty()){
        return this->vec[0];
    }
}
template<class T>
const T& MyVector1<T>::back(){
   if( !this->empty()){
       return this->vec[this->thesize-1];
   } 
}

template<class T>
void MyVector1<T>::push_back( T &t){
    if(thesize == cap){
        this->reserve(2*cap);
    }
    this->vec[thesize++] = t;
}
