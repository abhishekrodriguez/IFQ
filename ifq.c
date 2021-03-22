#include <stdio.h>
int main()
{
    int sub;
    printf("If you passed in maths choose 1 \n");
    printf("If you passed in science choose 2 \n");
    printf("If you passed in both choose 3 \n");
    printf("Choose your option: \n");
    scanf("%d",&sub);

    if (sub==1)
    {
        printf("You are eligible for 15");
    }
    else if (sub==2)
    {
        printf("You are eligible for 15");
    }
    else if (sub==3)
    {
        printf("You are eligible for 45");
    }
    else
    {
        printf("You are not eligible");
    }

    return 0;
}