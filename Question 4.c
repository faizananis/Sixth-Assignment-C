int main()
{
    int n=0;
    int i=0;
    int sum=0;
    printf("Please Enter that how many Squares of Sum you want: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i*i;
    }
    printf("\nThe Sum of all %d Squares of Natural Numbers is: %d\n",n,sum);
    return 0;
}
