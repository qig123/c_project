//监测连通性：输入一组数字，如果是连通就忽略，不连通就输出该组数字
#include <stdio.h>
#define N 10000
main()
{
    int i, j, p, q, id[N], sz[N];
    for (i = 0; i < N; i++)
    {
        id[i] = i;
        sz[i] = 1;
    }

    while (scanf("%d %d", &p, &q) == 2)
    {
        for (i = p; i != id[i]; i = id[i])
            ;
        for (j = q; j != id[j]; j = id[j])
            ;
        if (i == j)
        {
            printf("%s", "p q is connect");
            continue;
        }
        else
        {
            printf("%s", "p!=q\n");
        }
        if (sz[i] < sz[j])
        {
            id[i] = j;
            sz[j] += sz[i];
        }
        else
        {
            id[j] = i;
            sz[i] += sz[j];
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
        for (int i = 0; i < 10; i++)
        {
            if (i == 9)
            {
                printf("%d   \n", sz[i]);
            }
            else
            {
                printf("%d   ", sz[i]);
            }
        }
    }
}