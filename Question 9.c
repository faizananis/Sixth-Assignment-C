int main()
{
    int num1=0;
    int num2=0;
    int i=0;
    int check=0;
    int lcm=1;
    printf("Please Enter the First Number: ");
    scanf("%d",&num1);
    printf("Please Enter the Second Number: ");
    scanf("%d",&num2);
    for(i=2;i<=num1||i<=num2;)
    {
        if(num1%i==0&&num2%i==0)
        {
            num1=num1/i;
            num2=num2/i;
            lcm=lcm*i;
        }
        else if(num1%i==0||num2%i==0)
        {
            if(num1%i==0)
            {
                num1=num1/i;
                lcm=lcm*i;
            }
            else
            {
                num2=num2/i;
                lcm=lcm*i;
            }
        }
        else
        {
            i++;
        }
    }
    printf("\nThe LCM of given Two Numbers is: %d\n",lcm);
    return 0;
}
