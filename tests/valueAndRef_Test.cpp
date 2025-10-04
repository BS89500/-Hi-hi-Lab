//
// Created by ybsxm on 9/22/2025.
//

#include "../src/valueAndReference.h"
#include "catch2/catch_test_macros.hpp"
TEST_CASE( "Values and Reference" ) {
    int x = 2;
    addOneReference(x);
    REQUIRE(x == 3);
    REQUIRE(addOne(4) == 5);
}