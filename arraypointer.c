#include <stdio.h>
#define N_VALUES 5
int main()
{
    float values[N_VALUES];
    float *vp;

    for (vp = &values[0]; vp < &values[N_VALUES];)
    {
        *(vp++) = 0;
    }

    for (float *vp = &values[0];  vp < &values[N_VALUES];vp++)
    {
        printf("%f\n", *vp);
    }
    system("pause");
    return 0;
}