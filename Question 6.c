int main()
{
    int n=0;
    int i=0;
    int fact=1;
    printf("Please Enter that which Number of Factorial you want: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("\nThe Factorial of a given Number %d is: %d\n",n,fact);
    return 0;
}
