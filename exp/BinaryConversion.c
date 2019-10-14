/*1. 编写主函数：输入需转换的数与转换的进制
2. 编写子函数
（1）函数转换为除16进制以外的进制转换算数编程，使用while 循环实现计算进制的转换，并输出转换后的数字；
（2）函数转换为16进制，用while 函数实现16进制转换的计算并输出16进制转换后的数据；
3. 编写数组，关于16进制的一系列字符
4. 编写主函数加入do while 使函数可以循环。*/

#include <stdio.h>

void binaryConversionNot16(int number, int binary)
{
    int i = 0;

    while (1)
    {
        int temp = number % binary;
        printf("The number  is %d\n", temp);
        number = number / binary;
        i++;
        if (number / binary == 0)
        {
            int t = number % binary;
            printf("The number  is %d\n", t);
            break;
        }
        /* code */
    }
}

int main()
{
    int a[10];
    binaryConversionNot16(10, 2);
    system("pause");
    return 0;
}
