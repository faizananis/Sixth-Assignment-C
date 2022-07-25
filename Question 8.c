int main()
{
    int n=0;
    int i=0;
    int check=0;
    printf("Please Enter a Number to check it is prime or not: ");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            check++;
        }
    }
    if(check==1)
    {
        printf("The Given Number %d is a Prime Number.",n);
    }
    else
    {
        printf("The Given Number %d is not a Prime Number.",n);
    }
    return 0;
}
