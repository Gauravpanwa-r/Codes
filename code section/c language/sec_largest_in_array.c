// #include <stdio.h>
// int main()
// {
//    char *str[ ] = { 
// "We will teach you how to...", 
// "Move a mountain", 
// "Level a building", 
// "Erase the past", 
// "Make a million", 
// "...all through C!" 
// } ;
// for(int i=0;i<3;i++)
// {
//     char *temp;
//     temp=str[i];
//     str[i]=str[5-i];
//     str[5-i]=temp;
// }
// for(int j=0;j<6;j++)
// {
//     printf("%s\n",str[j]);
// }
// return 0; 
// }

#include<stdio.h>

void dec(int n){
    if(n==0 || n==1){
        printf("%d",n);
        return;

    }

    dec(n/2);
    printf("%d",n%2);
    }

    int main(){
        dec(5);
    }