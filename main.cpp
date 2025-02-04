#include <iostream>

int main()
{   // before
        const int x = 10; // x is a constant integer
        x = 20; // Error: x is read-only
    // after
        int y = 10;
        int* const ptr = &y; // ptr is a constant pointer to an integer
        *ptr = 20; // Allowed: the value pointed to by ptr can be modified
        ptr = &x; // Error: ptr is read-only

        /*                  */
        const int* const ptr = &y; // ptr is a constant pointer to a constant integer
        *ptr = 20; // Error: the value pointed to by ptr is read-only
        ptr = &x; // Error: ptr is read-only
}