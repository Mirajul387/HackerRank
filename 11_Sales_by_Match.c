#include<stdio.h>
#include<math.h>

int main(){
    int colour;

    scanf("%d",&colour);
    int pile[colour];

    int temp[colour];
    int indx[colour];
    int n,size=0,pair=0;
    for (int i = 0; i < colour; i++)
    {
        scanf("%d",&pile[i]);
    }

    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < colour; j++)
        {
            if (indx[j]==j)
            {
                printf("j: %d\n",j);
                continue;
            }else if(pile[i]==pile[j])
            {
                printf("ja: %d\n",j);

                temp[size]=pile[j];
                indx[size]=j;
                size++;
            }
            
        }
        printf("\n%d",size);
        pair=floor(size/2);
    }
    // for (int i = 0; i < size; i++)
    // {
    //     printf("%d ",temp[i]);
    // }
    printf("\n%d",pair);


    return 0;
}

//kind of same logic like migratory birds