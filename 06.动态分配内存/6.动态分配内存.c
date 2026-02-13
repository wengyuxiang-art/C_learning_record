//动态内存分配: int *a = (int*)malloc(n*sizeof(int));
//malloc返回的是void*，需要强制转换为相应类型的指针
//必须释放内存


#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int number;
    int* a;

    printf("enter the number: ");
    scanf("%d", &number);

    // 给指针分配一个相应大小的内存，并强制转换类型为int,
    // 返回的是这块内存的首地址
    a = (int*)malloc(number*sizeof(int));
    
    //用malloc得到一块空间交给a后，就可以将a当作数组使用
    //a[i] = *(a + i)

    //最后必须释放内存
    free(a); 

    return 0;                       
}