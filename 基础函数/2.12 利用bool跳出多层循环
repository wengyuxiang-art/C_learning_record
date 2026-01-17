#include <stdio.h>

int main()
{
    int x;
    int exit = 0;
    int one, two, five;

    x = 2;
    for (one = 1; one < x*10; one++){
        for (two = 1; two < x*10/2; two++){
            for (five = 1; five < x*10; five++){
                if( one + two*2 +five*5 == x*10 ){
                    printf("you can use %d 1 plus %d 2 plus %d five to acquire %d yuan\n", 
                        one, two, five, x);
                    exit = 1;
                    break;
                }
            }
            if (exit) break;

        }
       if (exit) break;

    }
    return 0;
}

