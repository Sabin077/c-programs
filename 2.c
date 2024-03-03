#include <stdio.h>  
int main()  
{  
    int a,b,c;
    printf("enter 3 number\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
        printf("highest =%d",a);
    else if(b>a && b>c)
        printf("highest =%d",b);
     else
        printf("highest =%d",c);
}  