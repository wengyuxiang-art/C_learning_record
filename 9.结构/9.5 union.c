union  AnElt{
    int i;
    char c;
} elt1, elt2;

elt1.i = 4;
elt2.c = 'a';
elt2.i = 6;

// union后的两个变量（elt1、elt2）共享同一块内存，修改其中一个会影响另一个


