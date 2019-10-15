#include <math.h>
#include <stdio.h>
#include <limits.h>
/*找出int,long int,short int,float,double类型所表示的最大值和最小值
思考：关键要知道计算机各种类型数据的编码规则
计算机中的数据都是通过位编码来保存，8位就是一个字节(bit)
int类型，通过sizeof,发现是4字节,32位
int还能区分正负,
根据某种编码，最高位为符号位，所以32位的最大值应该是
11111111,11111111,11111111,11111111
0的表示32个0
1加31个0就是最小值
*/

int main(int argc, char const *argv[])
{
    int intMax = INT_MAX;
    int intMin = INT_MIN;
    int intBit = sizeof(int);
    printf("int max is:%d\n", intMax);
    printf("int min is:%d\n", intMin);
    printf("int bit is:%d\n", intBit);
    system("pause");
    return 0;
}
