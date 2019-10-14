#include <stdio.h>

int main()
{
    int a = 112;
    int b = -1;
    float c = 3.14;
    //聲明了一個指針d,并且賦值了
    int *d = &a;
    float *e = &c;
    char ch = 'a';
    char *cp = &ch;
    ch = 'c';
    printf("The number address is %d\n", &ch);
    printf("The number address is %c\n", *((char *)(6422295)));
    system("pause");
    return 0;
}
