 #include <stdio.h>
int main()
{
    int x;
    printf("enter a number ");
    scanf("%d", &x);
    if (x > 9 && x < 100 == 1)
    {
        printf("given number is two digit");
    }
    else
        printf("given number is not of two digit");

    return 0;
}