#include<stdio.h>

int main(){
    int bill_i, d_n_eat, b_charged, sum_result=0, b_actual=0;

    scanf("%d %d",&bill_i,&d_n_eat);
    int bill[bill_i];
    for (int i = 0; i < bill_i; i++)
    {
        scanf("%d",&bill[i]);
    }

    scanf("%d",&b_charged);
    
    for (int i = 0; i < bill_i; i++)
    {
        if (d_n_eat==i)
        {
            continue;
        }else
        {
            sum_result+=bill[i];
        }
        
    }

    b_actual=b_charged-(sum_result/2);

    if (b_actual==b_charged || b_actual==0)
    {
        printf("Bon Appetit\n");
    }else
    {
        printf("%d",b_actual);
    }

    return 0;
}