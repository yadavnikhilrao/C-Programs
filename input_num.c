// Print a number to take input by the user

# include<stdio.h>
int main()
{
    int number;
    printf("Enter a number:\n");

    // read and store input
    scanf("%d",&number);

    // show input
    printf("You entered: %d", number);
    return 0;
}