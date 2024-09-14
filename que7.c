#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
    }

    printf("sum of all even numbers %d is: %d\n", n, sum);

    return 0;
}

/*
Output :-

Enter the value of n: 10
sum of all even numbers 10 is: 30
*/