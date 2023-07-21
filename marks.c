#include<stdio.h>
int main()
{
    int a;
    printf("Enter marks:");
    scanf("%d",&a);
    if((a>=90)&&(a<=100))
    {
        printf("grade:A");
    }
    else if((a>=70)&&(a<90))
    {
        printf("grade:B");
    }
    else if((a>=50)&&(a<70))
    {
        printf("grade: c");
    }
    else if(a>100)
    {
        printf("invalid");
    }
    else
    {
        printf("fail");
    }
}
