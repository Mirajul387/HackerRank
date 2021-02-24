#include<stdio.h>
int main(){
    int num,rotations,queries;
    scanf("%d %d %d",&num, &rotations, &queries);
    int n_arr[num];
    int q_arr[queries];
    int i,j,k;
    int n_temp[num];

    for (i = 0; i < num; i++)
    {
        scanf("%d",&n_arr[i]);
    }
    for (i = 0; i < queries; i++)
    {
        scanf("%d",&q_arr[i]);
    }

    int count=num-1;
    int indx=0;
    for ( i = 0; i < num; i++)
    {
        n_temp[indx]=n_arr[count];
        if (count==0)
        {
            break;
        }
        indx++;
        count--;
    }
    

    // for ( i = 0; i < rotations; i++)
    // {
    //     int last=n_arr[num-1];//last index of the array
    //     printf("last(%d): %d\n",i,last);

    //     for ( j = num-1; j > 0; j--)
    //     {
    //         printf("n_arr[j-1] : %d\n",n_arr[j-1]);
    //         n_arr[j]=n_arr[j-1];
    //         printf("n_arr[%d]: %d\n",j,n_arr[j]);
    //     }
    //     n_arr[0]=last;//put the last index to first index
    //     printf("n_arr[0]: %d\n",n_arr[0]);

    // }

    // for ( i = 0; i < queries; i++)
    // {
    //     printf("%d\n",n_arr[q_arr[i]]);
    // }
    for ( i = 0; i < num; i++)
    {
        printf("%d ",n_temp[i]);
    }
    
    return 0;
}