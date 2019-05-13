#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n[3]={1,2,3};
    int *ptr, i;
    ptr = n;
    for(i=0;i<3;i++)
    {
        printf("\n%d\n",n[i]);
        //printf("\n%d\n",*(ptr+i));
    }
    for(i=0;i<3;i++)
    {
        printf("\n%d\n",*(ptr+i));
    }
}
