#include <stdio.h>

enum color {red, yello, green, NumColors};
//可以指定值 enum color {red=1, yellow, green=5, NumColors};

int main(int argc, char const *argv[])
{
    int color = -1;

    // 定义数组指针以方便查询
    char *ColorNames[NumColors] = {
        "red", "yellow", "green",
    };
    char *colorname = NULL;

    printf("enter color: ");
    scanf("%d", &color);

    if(color >=0 && color < NumColors){
        colorname = ColorNames[color];
    } else {
        colorname = "unknown";
    }
    printf("your color is %s\n", colorname);

    return 0;
}