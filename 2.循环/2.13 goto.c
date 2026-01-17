#include <stdio.h>
int main()
{
    int x;
    int one, two, five;

    scanf("%d", &x);
    for (one = 1; one < x*10; one++){
        for (two = 1; two < x*10/2; two++){
            for (five = 1; five < x*10; five++){
                if( one + two*2 +five*5 == x*10 ){
                    printf("you can use %d 1 plus %d 2 plus %d five to acquire %d yuan\n", 
                        one, two, five, x);
                    goto out;
                }
            }

        }

    }
out:
    return 0;
}
