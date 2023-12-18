#include<stdio.h>
int main()
{
    int x,y,z,n;
    scanf("%d%d%d",&x,&y,&z);
    n=(2*x*y*z*512)/1024;
    printf("%d KB",n);
}