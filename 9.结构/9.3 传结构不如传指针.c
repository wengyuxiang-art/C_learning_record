// 通过传递指针来读取变量，而非传递变量本身（实际中变量可能过大）

#include <stdio.h>

struct point {
    int x;
    int y;
};

// struct point getstruct(void);
// void output(struct point);
struct point* getstruct(struct point*);
void output(struct point);
void print(const struct point* p);

int main(int argc, char const *argv[])
{
    // struct point y = {0, 0};
    // y = getstruct();
    // output(y);
    struct point z = {0, 0};
    getstruct(&z);
    output(z);
    output(*getstruct(&z));
    print(getstruct(&z));
}

//输入变量的地址并通过地址给p变量
struct point* getstruct(struct point* p)
{
    // 读取变量的地址，并给该地址赋值
    scanf("%d", &p->x);
    scanf("%d", &p->y);
    printf("%d, %d", p->x, p->y);
    
    // 返回变量的地址
    return p;
}

//为此时该地址的值创建副本
//struct point p是普通的结构变量，而非指针
void output(struct point p)
{
    printf("%d, %d", p.x, p.y);
}

//传递指针，打印此时指针所指向的值
void print(const struct point* p)
{
    printf("%d, %d", p->x, p->y);
}