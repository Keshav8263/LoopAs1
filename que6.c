#include <stdio.h>

int main()
{
    int n;
    int sum = 0;
    printf("Enter the n value: ");
    scanf("%d", &n);
    printf("The value of n: %d \n", n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d \n", i);
        sum += i;
    }

    printf("Sum: %d\n", sum);
    return 0;
}

/*
Output:-

Enter the n value: 20
The value of n: 20 
1 
2 
3 
4 
5 
6 
7 
8 
9 
10
11
12
13
14
15
16
17
18
19
20
Sum: 210
*/