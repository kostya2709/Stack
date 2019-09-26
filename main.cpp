#include <stdio.h>
#include "Stack_Head.h"


int main()
{
    elem_t x = 6;

    Stack_t stk1 = {};
    Stack_Constructor (stk1);

    Stack_Push (&stk1, 27);
    Stack_Push (&stk1, 29);
    Stack_Push (&stk1, 31);
    Stack_Push (&stk1, 13);
    elem_t xy= Stack_Pop (&stk1);


    Dump (&stk1, __LINE__);

    Stack_OK (&stk1);

    Stack_Destruct (&stk1);

    return 0;
}



