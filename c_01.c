#include <stdio.h>
int main()
{
    int a,p;
    printf("Enter a number greater than 0: " );

    scanf("%d",&a);
if (a==1)
{
    printf("1 is neither prime nor composite");
    return 0;
}
p=0;
for (int i=2;i<a;i++)
{
    if (a%i==0)
    {
        p++;
    }
if (p==0){
    printf("%d is a prime number." , a);
}
else
{
    printf("%d is not a prime number.", a);
}
return 0;

}
    
}