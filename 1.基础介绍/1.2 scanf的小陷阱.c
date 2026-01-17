#include <stdio.h>

int main()
{
    // 定义变量
    int a = 0;
    int b = 0;

    // 需输入12，23；输入12 23会读取失败
    scanf("%d, %d", &a, &b);

    // scanf中，空格表示跳过并丢弃接下来的所有空白字符（包括空格、制表符和换行符），
    //直到遇到第一个【非空白字符】为止，因此运行以下代码会卡住
    // scanf("%d %d ", &a, &b);

    printf("%d %d\n",a ,b);
  
    return 0;
}
