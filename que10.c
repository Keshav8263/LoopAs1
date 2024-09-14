#include <stdio.h>
int main()
{
    int a;
    int count = 0;
    printf("Enter the n value:");
    scanf("%d", &a);
    printf("the value of n %d\n", a);
    while (a > 0)
    {
        a = a / 10;
        count++;
    }
    printf("The count number of : %d", count);
}
/*
Output:

Enter the n value:12345
the value of n 12345
The count number of : 5
*/
