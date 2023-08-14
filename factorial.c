int factorial(int num)
{
    if(num <= 1)
    {
        return 1;
    }
    else
    {
        return num * factorial(num-1);
    }
}
int main()
{
    int num;
    while(1)
    {
        scanf("%d", &num);
        printf("Factorial of %d is: ", num);
        printf("%d\n", factorial(num));
    }
    return 0;
}
