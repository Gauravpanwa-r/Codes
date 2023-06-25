#include <stdio.h>
int main()
{
    struct blood_donor
    {
        char name[20];
        char address[40];
        int age;
        int blood_type;
    }bd[24];
    for(int i=0;i<25;i++)
    {
        printf("NAME :\n");
        scanf("%s",&bd[i].name);

        printf("ADDRESS:\n");
        scanf("%s",&bd[i].address);

        printf("AGE :\n");
        scanf("%d",&bd[i].age);

        printf("BLOOD GROUP :");
        scanf("%d",&bd[i].blood_type);
    }
    FILE *ptr;
    ptr=fopen("blooddonor.c","r");
    for(int j=0;j<24;j++)
    fprintf(ptr,"NAME:%s\nADDRESS:%s\nAGE:%d\nBLOOD GROUP:%d\n",&bd[j].name,&bd[j].address,bd[j].age,bd[j].blood_type);
    return 0;
}
