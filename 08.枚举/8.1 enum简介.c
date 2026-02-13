#include <stdio.h>

// 使得代码比纯数字的易读，但本质上还是0，1，2
enum color {red, yello, green};

int main(int argc, char const *argv[])
{
    // 取-1 是因为它不在合法范围（0, 1, 2）之内
    int color = -1;

    char *colorname = NULL;

    printf("enter color: ");
    scanf("%d", &color);
    switch (color){
        case red: colorname = "red"; break;
        case yello: colorname = "yello"; break;
        case green: colorname = "green"; break;
        default: colorname = "unknown"; break;
    }
    printf("your color is %s\n", colorname);

    return 0;
}
