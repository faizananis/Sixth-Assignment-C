int main()
{
    int n=0;
    int i=0;
    int sum=0;
    printf("Please Enter that How many Even Numbers of Sum you want: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i*2;
    }
    printf("\nThe Sum of all %d Even Numbers is: %d\n",n,sum);
    return 0;
}
