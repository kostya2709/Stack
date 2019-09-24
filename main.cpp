#include <stdio.h>
#include "Stack_Head.h"


int main()
{
    elem_t x = 6;
    printf ("%d\n", x);
    Stack_t stk1 = {};
    Stack_Constructor ( stk1 );

    Stack_Push (&stk1, 27);
    Stack_Push (&stk1, 29);
    Stack_Push (&stk1, 31);
    Stack_Push (&stk1, 13);
    elem_t xy= Stack_Pop (&stk1);


    printf ("%d, stack.data[2]= %d, stack.name = %s\n", stk1.size, stk1.data[0], stk1.name);
    Dump (&stk1, __LINE__);
    return 0;
}



