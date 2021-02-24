#include<stdio.h>

int main(){
    int num,rotations,queries;
    scanf("%d %d %d",&num, &rotations, &queries);
    int n_arr[num];
    int q_arr[queries];
    int i,j,k;

    for (i = 0; i < num; i++)
    {
        scanf("%d",&n_arr[i]);
    }
    for (i = 0; i < queries; i++)
    {
        scanf("%d",&q_arr[i]);
    }

    for ( i = 0; i < rotations; i++)
    {
        int last=n_arr[num-1];
        int count = 3;

        for ( j = num-1; j > 0; j--)
        {
            n_arr[j]=n_arr[j-1];
        }
        n_arr[0]=last;
    }

    for ( i = 0; i < queries; i++)
    {
        printf("%d\n",n_arr[q_arr[i]]);
    }
    
    return 0;
}