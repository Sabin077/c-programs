#include<stdio.h>
void main(){
    printf("enter a characeter\n");
    char c=getchar();
    switch (c)
    {
    case 'a': 
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("it is vowel");
        break;


        
    
    default:
        printf("consontent");
        break;
    }
}   