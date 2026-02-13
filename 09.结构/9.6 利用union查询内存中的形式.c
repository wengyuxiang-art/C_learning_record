#include <stdio.h>

typedef union{
    int i;
    char ch[sizeof(int)];
} CHI;

int main(int argc, char const *argv[])
{
    CHI chi;
    int i;
    chi.i = 1234;
    for(i=0; i<sizeof(int); i++){
        printf("%02hhX", chi.ch[i]);
        // "%02hhX"
        // %X：16进制；
        // %02X：最小宽度为2，否则前置补0；
        // %02hhX：只读取一个字节
    }
    printf("\n");

    return 0;
}

// 实现逐字节地输出整数的存储形式