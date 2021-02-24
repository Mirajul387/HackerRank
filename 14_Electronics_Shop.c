#include<stdio.h>

int main(){

    int budget,n_keybord,n_drives;
    scanf("%d %d %d",&budget,&n_keybord,&n_drives);
    int keyboard[n_keybord];
    int drives[n_drives];
    int temp[n_drives*n_keybord];
    int size=0;
    int large=0;

    for (int i = 0; i < n_keybord; i++)
    {
        scanf("%d",&keyboard[i]);
    }
    
    for (int i = 0; i < n_drives; i++)
    {
        scanf("%d",&drives[i]);
    }

    for (int i = 0; i < n_keybord; i++)
    {
        for (int j = 0; j < n_drives; j++)
        {
            temp[size] = keyboard[i]+drives[j];
            size++;
        }
        
    }
    int flag=0;
    for (int i = 0; i < (n_keybord*n_drives); i++)
    {
        if (temp[i]>large && temp[i]<=budget)
        {
            large=temp[i];
            flag=1;
        }
    }
    if (flag!=1)
    {
        printf("-1\n");
    }else
    {
        printf("%d\n",large);
    }
    
    return 0;
}