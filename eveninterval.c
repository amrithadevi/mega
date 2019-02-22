int main()
{
    int i,a;
    scanf("%d", &a);
     printf("Even numbers from 1 to %d are: \n", a);
    for(i=1; i<=a; i++)
    {
        if(i%2 == 0)
        {
            printf("%d\a", i);
        }
    }
