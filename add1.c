#include<stdio.h>
int get_input()
{
     int a;
     printf("enter the value of a\n");
     scanf("%d",&a);
     return a;
}
int add1(int a)
{
    int b;
    b=a+1;
    return b;
}
void output(int b)
{
    printf("%d",b);
}
int main()
{
    int a,b;
    a=get_input();
    b=add1(a);
    output(b);
}

