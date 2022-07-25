int main()
{
    int n=0;
    int i=0;
    printf("Please Enter a Number: ");
    scanf("%d",&n);
    do
    {
        n=n/10;
        i++;
    }
    while(n!=0);
    printf("\nThe digits in a given Number are: %d\n",i);
    return 0;
}
