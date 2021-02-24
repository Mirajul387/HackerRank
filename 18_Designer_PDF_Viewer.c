#include<stdio.h>

int main(){
    int arr[26];
    char alp[10];

    // for (int i = 0; i < 26; i++)
    // {
    //     scanf("%d",&arr[i]);
    // }

    gets(alp);


    int i=0;
    while (alp[i] =='\0')
    {
        printf("%c ",alp[i]);
        i++;
    }
    

    // printf("%s ",alp);
    
    return 0;
}