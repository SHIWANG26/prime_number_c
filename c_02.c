#include <stdio.h>
int main()
{
    int Num, Sum = 0;
    printf("The first ten natural numbers is: \n");
    for (Num = 1; Num <= 10; Num++)
    {
        Sum=Sum+Num;
        printf("%d \n", Num);
    }
    printf("The sum of first ten natural numbers are- %d", Sum);
    return 0;
}