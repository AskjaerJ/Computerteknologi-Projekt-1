#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include <assert.h>
#include "array_int_queue.h"
#include "int_queue.h"

// See Catch2's documentation: https://github.com/catchorg/Catch2/blob/devel/docs/tutorial.md#scaling-u

TEST_CASE("array_queue")
{
    Array_int_queue test(10);
    test.enqueue(99);
    test.enqueue(4);
    test.enqueue(-5);
    REQUIRE(test.dequeue() == 99);
    REQUIRE(test.dequeue() == 4);
    REQUIRE(test.dequeue() == -5);
    REQUIRE(test.empty() == true);

    /*Fills up queue*/
    test.enqueue(99);
    test.enqueue(4);
    test.enqueue(-5);
    test.enqueue(99);
    test.enqueue(4);
    test.enqueue(-5);
    test.enqueue(99);
    test.enqueue(4);
    test.enqueue(-5);
    REQUIRE(test.full() == false);
    test.enqueue(99);
    REQUIRE(test.full() == true);
}