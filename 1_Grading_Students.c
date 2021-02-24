#include<stdio.h>

int main(){

    int n,num;
    scanf("%d",&n);
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&num);
        if (num<38)
        {
            printf("%d\n",num);
        }else if (num%5==0)
        {
            printf("%d\n",num);
        }else if (num%5==3)
        {
            printf("%d\n",num+2);
        }else if (num%5==4)
        {
            printf("%d\n",num+1);
        }else
        {
            printf("%d\n",num);    
        }
        
    }
    return 0;
    }