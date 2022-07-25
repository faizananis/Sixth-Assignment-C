int main()
{
    int n=0;
    int i=0;
    int sum=0;
    printf("Please Enter that how many Odd Numbers of Sum you want: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i*2-1;
    }
    printf("\nThe Sum of all %d Odd Natural Numbers is: %d\n",n,sum);
    return 0;s
}
