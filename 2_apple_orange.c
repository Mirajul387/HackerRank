#include<stdio.h>
int main(){
    int h_start,h_end;//s,t
    int a_tree,o_tree;//a,b
    int apple,orange;//m,n
    int a_c=0, o_c=0;

    scanf("%d %d",&h_start,&h_end);
    scanf("%d %d",&a_tree,&o_tree);
    scanf("%d %d",&apple,&orange);

    int fall_apple[apple],fall_orange[orange];

    for (int i = 0; i < apple; i++){
        scanf("%d",&fall_apple[i]);
    }
    
    for (int i = 0; i < orange; i++){
        scanf("%d",&fall_orange[i]);
    }
        
        // apple
    for (int j = 0; j < apple; j++)
    {
        fall_apple[j]+=a_tree;
        if (fall_apple[j] >= h_start && fall_apple[j] <= h_end)
            {
                a_c++;
            }
        }
        // orange
        for (int j = 0; j < orange; j++)
        {
            fall_orange[j]+=o_tree;
            if (fall_orange[j] <= h_end && fall_orange[j] >= h_start)
            {
                o_c++;
            }    
        }
    printf("%d\n",a_c);
    printf("%d\n",o_c);


    return 0;
}