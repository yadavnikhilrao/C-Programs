#include<stdio.h>
#include <conio.h>
// print number is even odd
{
    int num;
    printf("Enter the number \n");
    scanf("%d",&num);
    
    if (num % 2 == 0){
        printf("%d is Even",num);
    }
    else{
        printf("%d is Odd",num);
    }
     return 0;
}