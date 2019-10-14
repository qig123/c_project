
//监测连通性：输入一组数字，如果是连通就忽略，不连通就输出该组数字
#include <stdio.h>
#define N 10000
main()
{
    int i, p, q, t, id[N];
    for (i = 0; i < N; i++)
    {
        id[i] = i;
    }

    while (scanf("%d %d", &p, &q) == 2)
    {
        if ((id[p] == id[q]))
        {
            //
            printf("%s", "p q is connect");
            continue;
        }
        else
        {
            printf("%s", "p!=q\n");
        }
        for (t = id[p], i = 0; i < N; i++)
        {
            if (id[i] == t)
            {
                id[i] = id[q];
            }
        }
        printf("%d %d\n", p, q);
        for (int i = 0; i < 10; i++)
        {
            if (i == 9)
            {
                printf("%d   \n", id[i]);
            }
            else
            {
                printf("%d   ", id[i]);
            }
        }
    }
}