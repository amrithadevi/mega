int main()
{
    int num, orilNum, rem, result = 0;

    printf("Enter a three digit integer: ");
    scanf("%d", &num);

    oriNum= num;

    while (oriNum != 0)
    {
        rem = orilNum%10;
        result += remr*remr*rem;
        orilNum /= 10;
    }

    if(result == num)
        printf("%d yes",num);
    else
        printf("%d no",num);

    return 0;

  
}
