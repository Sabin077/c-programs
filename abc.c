#include<stdio.h>
void main(){
    printf("1. odd or even\n");
     printf("2. prime or composite\n");
      printf("3. enter your choice\n");
      int choice;
      scanf("%d",&choice);
      switch (choice)
      {
      case 1:
         printf("enter the number");
         int a;
         scanf("%d",&a);
         if(a%2==0){
            printf("It is even\n");
         }
         else
         {
            printf("it is odd\n");
         }
         
        break;

        case 2:
            printf("enter the numebr \n");
            int b,count;
            scanf("%d",&b);
            for (int i = 2; i < b; i++)
            {
                if(b%i==0){count=count+1;}
            }
            if (count==0){printf("it is prime\n");}
            else{printf("it is composite\n");}
        break;
      
      default: printf("wrong choice.\n Please try again\n");
        break;
      }
}