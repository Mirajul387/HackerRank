#include<stdio.h>

int main(){
    int cho_bar, birth_d, birth_m, count=0;

    scanf("%d",&cho_bar);
    int arr[cho_bar];

    for (int i = 0; i < cho_bar; i++) 
    {
        scanf("%d",&arr[i]);
    }

    scanf("%d %d",&birth_d, &birth_m);
    
    for (int main_l = 0; main_l < cho_bar; main_l++)
    {
        int sum = 0;
        for (int j = main_l; j < birth_m+main_l; j++)
        {
            sum+=arr[j];
        }
        if (sum==birth_d)
        {
            count++;
        }
    }    
    
    printf("%d",count);

    return 0;
}