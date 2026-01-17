#include <stdio.h>

int main()
{
    int number;
    int sum = 0;
    int count = 0;

      
    scanf("%d", &number);
    while (number != -1) {
        sum += number;
        count ++;
        scanf("%d", &number);
    }
        
    //涉及除法注意转换成浮点
    printf("%f\n", 1.0*sum/count);

    return 0;
}
