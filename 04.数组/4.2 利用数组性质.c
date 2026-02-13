#include <stdio.h>

int main()
{
    // 定义数组大小
    const int number = 10;  
    int x;
    
    // 定义数组
    int count[number];      
    int i;

    // 初始化数组
    for (i=0; i<number; i++){ 
        count[i] = 0;
    }

    // 数组记录0-9的个数
    scanf("%d", &x);
    while (x != -1){
        if (x >=0 && x<=9){
            count[x]++;     
        }
        scanf("%d", &x);
    }
    
    // 输出
    for (i=0; i<number; i++){
        printf("%d: %d\n", i, count[i]);
    }
    return 0;
}