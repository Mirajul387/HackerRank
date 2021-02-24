#include<stdio.h>

int main(){
    int e_1st_a,e_2nd_a;
    scanf("%d %d",&e_1st_a,&e_2nd_a);

    int first_array[e_1st_a],second_array[e_2nd_a];
    int i, j, sum=0, lcm;

    for ( i = 0; i < e_1st_a; i++)
    {
        scanf("%d",&first_array[i_a]);
    }
    
    for ( i = 0; i < e_2nd_a; i++)
    {
        scanf("%d",&second_array[ii_a]);
    }

    for ( i = 0; i < e_1st_a; i++)
    {
        for ( j = 0; i < e_1st_a; i++)
        {
            sum += first_array[i];
        }   
    }

    return 0;
}