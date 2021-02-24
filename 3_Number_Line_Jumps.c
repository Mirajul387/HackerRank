#include<stdio.h>
int main(){
    int x1,v1,x2,v2,x1_c=1,x2_c=1;
    scanf("%d %d %d %d",&x1,&v1,&x2,&v2);


    while (1)
    {
        
        if((x1>x2 && v1>v2) || (x1<x2 && v1<=v2)){
            printf("NO\n");
            break;
        }
        else if (x1==x2)
        {   
            printf("YES\n");
            break;
        }
        x1+=v1;
        x2+=v2;
        int temp = x1-x2;
    }
    
    return 0;
}