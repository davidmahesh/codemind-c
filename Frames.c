#include <stdio.h>
int main()

{
    int l,b,perimeter,wc,cost;
    scanf("%d%d%d",&l,&b,&wc);
    perimeter=2*(l+b);
    cost=perimeter*wc;
    printf("%d",cost);
    
    
}