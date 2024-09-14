#include <stdio.h>
int main()
{
    int n;
    printf("Enter the n value:");
    scanf("%d", &n);
    printf("the value of n %d\n", n);

    int num = n;
    while (num >= 1)
    {
        printf("%d \n", num);

        num--;
    }

    return 0;
}


/*
Output:-

Enter the n value:10
the value of n 10
10 
9 
8 
7 
6 
5
4
3
2
1
*/