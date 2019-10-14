struct
{
    /* data */
    int a;
    char b;
    float c;
} x; //声明了一个结构变量 x, 包含了三个成员

struct
{
    /* data */
    int a;
    char b;
    float c;
} y[20], *z; //声明了变量y,有20个结构对象..., z一个指向结构变量的指针

typedef struct
{
    /* data */
    int a;
    char b;
    float c;
} Simple;

Simple x2;
Simple y2[20], *z2;

struct SIMPLE
{
    /* data */
    int a;
    char b;
    float c;
};

struct COMPLEX
{
    /* data */
    float f;
    int a[20];
    long *lp;
    struct SIMPLE s;
    struct SIMPLE sa[10];
    struct SIMPLE *p;
};
struct COMPLEX comp;
struct SELF_REF2
{
    int a;
    struct SELF_REF2 *b;
    int c;
};
//结构的初始化
struct INIT_EX
{
    /* data */
    int a;
    short b[10];
    Simple c;
} x = {
    10,
    {1, 2, 3, 4, 5},
    {25, 'x', 1.9}};
//
typedef struct
{
    int a;
    short b[2];
} Ex2;

typedef struct EX
{
    int a;
    char b[3];
    Ex2 c;
    struct EX *d;
} Ex;
Ex x3 = {10, "Hi", {5, {-1, 25}}, 0};
Ex *px = &x;
