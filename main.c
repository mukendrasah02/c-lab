#include<stdio.h>
int main()
{
    float u,b=0.0,sc=0.0,tb=0.0;

    printf("enter the unit consumed");
    scanf("%f",&u);

    if(u<=100)
    {
        printf("bill is %f",u*2);
    }
    else if(u<=200)
    {
        b=(100*2)+(u-100)*3;
        printf("your bill is %f",b);
    }
    else if(u<=300)
    {
        b=(100*2)+(100*3)+(u-100)*5;
        printf("your bill is %f",b);
    }
    else
    {
        b=(100*2)+(100*3)+(100*5)+(u-300)*7;
        printf("your bill is %f",b);
    }

    if(b>2000)
    {
        sc=b*0.1;
        printf("your super charge is %f",sc);
    }
    tb=b+sc;

    printf("\nYour total bill is %f",tb);
    return 0;
}
