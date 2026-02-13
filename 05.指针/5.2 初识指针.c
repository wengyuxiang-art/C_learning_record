#include <stdio.h>

// 函数只是去执行一些动作（比如打印内容或修改内存）
// 执行完就结束，不会return一个具体的数值
void f(int *p);
void g(int k);

int main(void)
{
    int i = 6;
    
    // i在内存中的具体地址
    // 通过%p取指针
    printf("&i=%p\n", &i);
    
    // 传入i的地址，并调整i
    f(&i);

    // 输出调整后i的值
    g(i);

    return 0;
}


// f只有*p一个变量，但能通过地址去调整变量i
void f(int *p)
{
    // p的值是i的地址（&i）
    printf("p=%p\n", p);
    
    // *p是i的值
    printf("*p=%d\n",*p);
    
    // 通过指针修改i的值
    *p = 26;
}

// 将i的值给k（副本），调整g只会调整k，不会影响i
void g(int k)
{
    printf("k=%d\n", k);
}

