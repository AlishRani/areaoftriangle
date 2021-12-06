#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf("enter the value of a\n");
    scanf("%d",&a);
    printf("enter the value of b\n");
    scanf("%d",&b);
    printf("enter the value of c\n"); 
    scanf("%d",&c);
    float s=(a+b+c)/2;
    float area={s*(s-a)*(s-b)*(S-c)}^(1/2);
    printf("area of triangle%f\n",area);
    return 0;
}