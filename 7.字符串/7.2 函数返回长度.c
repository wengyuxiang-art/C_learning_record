#include <stdio.h>
#include <string.h>

// size_t：涉及“内存大小”或“数组长度”的返回值
// 模拟strlen
size_t mylen(const char* s)
{
    int cnt =0;
    int idx = 0;
    while(s[idx] != '\0'){
        idx++;
        cnt++;
    }
    return cnt;
}

// argc：Argument Count：参数计数
// argv：Argument Vector：参数矢量/数组
int main(int argc, char const *argv[])
{
    char line[] = "Hello";
    
    // %lu: Long Unsigned, 对应size_t
    printf("strlen=%lu\n", strlen(line));
    printf("mylen=%lu\n", mylen(line));
    // 末尾有0
    printf("sizeof=%lu\n", sizeof(line));


    return 0;
}