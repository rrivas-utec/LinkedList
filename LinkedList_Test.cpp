//
// Created by utec on 3/09/19.
//

#include "catch.hpp"
#include "LinkedList.h"

TEST_CASE("Create LinkList") {
    SECTION ("Verify Size") {
        LinkedList<int> ll;
        REQUIRE(ll.size() == 0);
    }
    SECTION ("Verify Size, initial size = 2") {
        LinkedList<int> ll(2);
        REQUIRE(ll.size() == 2);
    }
}

TEST_CASE("Add values") {
    SECTION ("Verify Adding 1 value") {
        LinkedList<int> ll;
        ll.push(10);
        REQUIRE(ll[0] == 10);
    }
}
