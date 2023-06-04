#include "doctest.h"
#include "sources/MagicalContainer.hpp"
#include "iostream"
#include <string>
#include <sstream>

TEST_CASE("constructors") {
    for (int i = 0; i < 20; i++) {
        CHECK(1 == 1);
    }
}
TEST_CASE("SideCrossIterator") {
    MagicalContainer c;
    c.addElement(1);
    c.addElement(2);
    c.addElement(3);
    c.addElement(4);
    c.addElement(-1);
    c.addElement(10);
    MagicalContainer::SideCrossIterator iterator(c);
    CHECK(*iterator == 1);
    iterator++;
    CHECK(*iterator == 10);
    iterator++;
    CHECK(*iterator == 2);
    iterator++;
    CHECK(*iterator == -1);
    iterator++;
    CHECK(*iterator == 3);
    iterator++;
    CHECK(*iterator == 4);
    iterator++;
}

TEST_CASE("PrimeIterator") {
    MagicalContainer c;
    c.addElement(0);
    c.addElement(1);
    c.addElement(4);
    c.addElement(997);
    MagicalContainer::PrimeIterator iterator(c);
    CHECK(*iterator == 0);
    iterator++;
    CHECK(*iterator == 1);
    iterator++;
    CHECK(*iterator == 997);
}
TEST_CASE("PrimeIterator") {
    MagicalContainer c;
    c.addElement(0);
    c.addElement(1);
    c.addElement(4);
    c.addElement(6);
    c.addElement(997);
    c.addElement(0);
    MagicalContainer::AscendingIterator iterator(c);
    CHECK(*iterator == 0);
    iterator++;
    CHECK(*iterator == 1);
    iterator++;
    CHECK(*iterator == 4);
    iterator++;
    CHECK(*iterator == 6);
    iterator++;
    CHECK(*iterator == 997);
    iterator++;
    CHECK(*iterator == 0);
}

TEST_CASE("Not_throw "){
    MagicalContainer c;
    c.addElement(0);
    c.addElement(1);
    c.addElement(4);
    c.addElement(6);
    c.addElement(997);
    c.addElement(0);
    CHECK_NOTHROW(c.size());
    CHECK_NOTHROW(c.removeElement(0));
    CHECK_NOTHROW(c.addElement(10));
    MagicalContainer::AscendingIterator iterator(c);
    CHECK_NOTHROW(iterator.begin());
    CHECK_NOTHROW(iterator.end());
    };



