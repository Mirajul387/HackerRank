#include<stdio.h>

int main(){
    int n,k,c=0;
    scanf("%d %d",&n,&k);

    int array[n];

    for (int arr_in = 0; arr_in < n; arr_in++)
    {
        scanf("%d",&array[arr_in]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i<j && (array[i] + array[j])%k==0)
            {
                c++;
            }
            
        }
        
    }
    printf("%d",c);

    return 0;
}
