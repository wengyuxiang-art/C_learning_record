#include <stdio.h>

// 声明结构（初始化）
// 等同于int等
struct date{
    int month;
    int day;
    int year;
};

// 定义变量
int main (int argc, char const *argv[])
{
    struct date today;

    today.month = 07;
    today.day = 31;
    today.year = 2014;

    // %d：十进制
    // %i：整数
    printf("Today's date is %i-%i-%i.\n",
        today.year, today.month, today.day);

    return 0;
}