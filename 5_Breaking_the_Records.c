#include<stdio.h>

int main(){

    int game, break_rec=0, worst_rec=0,c=0;

    scanf("%d",&game);
    int array[game];

    for (int i = 0; i < game; i++)
    {
        scanf("%d",&array[i]);
    }

    //find out the worst records
    for (int i = 0; i < 1; i++)
    {

        int temp1=array[i];
        for (int b_r = i+1; b_r < game; b_r++)
        {
            if(temp1<array[b_r])
            {
            temp1=array[b_r];
            break_rec++;
            }
        }

        int temp2=array[i];
        for (int w_r = i+1; w_r < game; w_r++)
        {
            if(temp2>array[w_r])
            {
            temp2=array[w_r];
            worst_rec++;
            }
        }
   }
   
    printf("%d %d\n",break_rec,worst_rec);
    return 0;
}