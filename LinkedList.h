//
// Created by utec on 3/09/19.
//

#ifndef LINKEDLIST_LINKEDLIST_H
#define LINKEDLIST_LINKEDLIST_H

#include <cstddef>


template<typename T>
class LinkedList {
    using SIZE = size_t;
    using INDEX = size_t;
    SIZE _size;
public:
    LinkedList() {

    }

    LinkedList(SIZE size) {

    }

    SIZE size() {
        return 0;
    }

    void push(const T&) {

    }

    T& operator[](INDEX) {
        T val;
        return val;
    }

};


#endif //LINKEDLIST_LINKEDLIST_H
