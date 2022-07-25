int main()
{
    int number=0;
    int reverse=0;
    printf("Please Enter a Number: ");
    scanf("%d",&number);
    while(number!=0)
    {
        reverse=reverse*10+number%10;
        number=number/10;
    }
    printf("\nThe Reverse Number of a Given Number is: %d\n",reverse);
    return 0;
}
