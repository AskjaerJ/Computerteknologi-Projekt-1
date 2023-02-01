#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include <assert.h>

extern "C"
{
#include "array_int_queue.h"
#include "int_queue.h"
}

// See Catch2's documentation: https://github.com/catchorg/Catch2/blob/devel/docs/tutorial.md#scaling-up

// For testing purposes only

TEST_CASE("array_queue")
{
    Array_int_queue

}


TEST_CASE("linked_queue")
{
    // Test inserting random values into queue and check size
    int valuesToInsert[4] = {-5,10,0,5};
    queue qq;
    init_queue(&qq);
    int queueSize = 0;
    REQUIRE(empty(&qq) == 1);
    for (int i = 0; i < 4; ++i)
    {
        enqueue(&qq, valuesToInsert[i]);
        REQUIRE(qq.size == ++queueSize);
    }

    // Test empty function with empty queue
    queue q;
    init_queue(&q);
    REQUIRE(empty(&q) == 1);

    // Test empty function with non-empty queue
    queue q1;
    init_queue(&q1);
    enqueue(&q1, 5);
    REQUIRE(empty(&q1) == 0);
    dequeue(&q1);
    REQUIRE(empty(&q1) == 1); 

    // Test enqueue then dequeue
    enqueue(&q1,-5);
    enqueue(&q1,10);
    enqueue(&q1,0);
    enqueue(&q1,5);
   

    REQUIRE(-5 == dequeue(&q1));
    REQUIRE(10 == dequeue(&q1));
    REQUIRE(0 == dequeue(&q1));
    REQUIRE(5 == dequeue(&q1));

}

