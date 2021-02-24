#include<stdio.h>

int main(){
    int year,result=243,rest;
    scanf("%d",&year);

    if (year>=1700 && year<=1917)
    {
        if (year%4==0)
        {
            result+=1;
            rest=(256-result);
            result+=rest;
        }else
        {
            rest=(256-result);
            result+=rest;
        }
        
    }else if (year>=1919 && year<=2700)
    {
        if (year%400==0 || (year%4==0 && year%100!=0))
        {
            result+=1;
            rest=(256-result);
            result+=rest;
        }else
        {
            rest=(256-result);
            result+=rest;
        }
    }else if(year==1918)
    {
        result=215;
        result+=15;
        rest=(256-result);
        result+=rest;
    }

    printf("%d.09.%d",rest,year);
    
    return 0;
}
