#include <stdio.h>
#include <string.h>

// src (Source)：源, 数据出处
// dst (Destination)：目的地, 数据去处
char* mycpy(char* dst, const char* src)
{
    // int idx = 0;
    // while (src[idx]){
    //     dst[idx] = src[idx];
    //     idx++;
    // }
    // dst[idx] = '\0';
    // return dst;
    
    // 存储dst的初始地址
    char* ret = dst;
    while (*src ){
        *dst++ =*src++;
    }
    // 现在ret到了0位，跳出循环，dst在最后一个位置且无值，需要手动附0
    *dst = '\0';
    return ret;
}

int main(int argc, char const *argv[])
{
    char s1[] = "abc";
    char s2[] = "Abc";
    strcpy(s1, s2);
    mycpy(s1, s2);

    return 0;
}