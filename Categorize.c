#include<stdio.h>
int main()
{
    float fig;
    scanf("%f",&fig);
    if(fig<=150)
    {
        printf("The person is Dwarf.");
    }
    else if(fig<=165)
    {
        printf("The person is average heighted.");
    }
    else if(fig<=195)
    {
        printf("The person is taller.");
    }
    else
    {
        printf("Abnormal height.");
    }
    
    
    
    
}