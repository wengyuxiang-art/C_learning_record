#include <stdio.h>

// 函数声明
int isprime(int i)  

// 输出m到n之间所有的质数，以及在最后输出质数的总数
int main()
{
    int m, n;
    int i;
    int count = 0;

    scanf("%d %d", &m, &n);
    for (i = m; i <= n; i++){
        if (isprime(i)){
            printf("%d ", i);
            count++;
        }
    }
    printf("\ntotal %d primes\n", count);
    return 0;
}

// 函数定义
// 判断是否为质数
int isprime(int i)  
{       
    int ret = 1;
    int k;
    for (k = 2; k < i-1; k++){
        if (i%k == 0){
            ret = 0;
            break;
        }
    }
    return ret;
}