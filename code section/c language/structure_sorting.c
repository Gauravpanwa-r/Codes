#include <stdio.h>
#include <string.h>
int main(){
    int cs;
    struct book
    {
        char name[10];
        int price;
        int pages;
        char publisher[10];
        char author[10];
    }b[5];
    for(int i=0;i<5;i++)
    {
        printf("Enter book name \n");
        gets( b[i].name);
        fflush(stdin);
        printf("Enter book publisher \n");
        gets( b[i].publisher);
        fflush(stdin);
        printf("Enter book author \n");
        gets( b[i].author);
        fflush(stdin);
        printf("Enter price of book \n");
        scanf("%d",&b[i].price);
        printf("Enter pages in book \n");
        scanf("%d",&b[i].pages);
        fflush(stdin);
    }
    printf("\n1.SORT BY BOOK NAME\n2.SORT BY AUTHOR NAME\n3.SORT BY PAGES\n4.SORT BY PRICE\n5.SORT BY PUBLISHER");
    scanf("%d",&cs);
    switch(cs)
    {
        case 1:
        for(int j=0;j<=4;j++)
        {   
            struct book temp;
            for(int k=0;k<=4;k++)
            {
            if(strcmp(b[j].name,b[k].name)>0)
            {
                temp=b[j];
                b[j]=b[k];
                b[k]=temp;
            }
            }
        }
        break;
        case 2:
        for(int j=0;j<=4;j++)
        {   
            struct book temp;
            for(int k=0;k<=4;k++){
            if(strcmp(b[j].author,b[k].author)>0)
            {
                temp=b[j];
                b[j]=b[k];
                b[k]=temp;
            }
            }
        }
        break;
        case 3:
        for(int j=0;j<=4;j++)
        {   
            struct book temp;
            for(int k=0;k<=4;k++)
            {
            if(b[j].pages>b[k].pages)
            {
                temp=b[j];
                b[j]=b[k];
                b[k]=temp;
            }
            }
        }
        break;
        case 4:
        for(int j=0;j<=4;j++)
        {   
            struct book temp;
            for(int k=0;k<=4;k++)
            {
            if(b[j].price,b[k].price)
            {
                temp=b[j];
                b[j]=b[k];
                b[k]=temp;
            }
            }
        }
        break;
        case 5:
        for(int j=0;j<=4;j++)
        {   
            struct book temp;
            for(int k=0;k<=4;k++)
            {
            if(strcmp(b[j].publisher,b[k].publisher)>0)
            {
                temp=b[j];
                b[j]=b[k];
                b[k]=temp;
            }
            }
        }
        break; 
    }
    for(int k=0;k<5;k++)
    {
    printf("NAME=%s\nPRICE=%d\nPAGE=%d\nPUBLISHER=%s\nAUTHOR=%s\n",b[k].name,b[k].price,b[k].pages,b[k].publisher,b[k].author);
    }
    return 0; 
}