//while：先判断再执行
//do-while：先执行后判断

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    //seed random; 基于时间生成随机数
    srand(time(0));
    
    int number = rand() % 100 +1;
    int count = 0;
    int a = 0;
    printf("already!");

    do {
        printf("guess the number:");
        scanf("%d", &a);
        count ++;
        if (a > number) {
            printf("too big!");
        } else if (a < number) {
            printf("too small!";)
        }
    } while (a != number);

    printf("right! you got it just %dth times\n", count);

    return 0;
}
