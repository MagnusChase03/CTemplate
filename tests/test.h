#ifndef TEST_H
#define TEST_H

#include <stdio.h>

#define TEST(expr) do { \
        if (!(expr)) { \
            printf("Test failed: %s\n", #expr); \
        } \
    } while (0)

#endif
