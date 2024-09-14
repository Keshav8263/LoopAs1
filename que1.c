#include <stdio.h>
int main()
{
    int n;
    int i = 1;
    printf("enter the n value:");
    scanf("%d", &n);
    printf("the value of n:%d \n", n);
    while (i < n)
    {
        printf("%d\n", i);
        i++;
    }
}

/*
Output:-

enter the n value:11
the value of n:11
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
*/