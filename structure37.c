#include<stdio.h>
#include<string.h>

struct studentid
{
    int roll;
    char branch[12];

}sourabh, aman, abhishek, shristy;

int main()
{
    sourabh.roll = 5165;
    strcpy(sourabh.branch, "ENTC b");
    aman.roll = 1165;
    strcpy(aman.branch, "ENTC a");
    abhishek.roll = 5171;
    strcpy(abhishek.branch, "ENTC b");
    shristy.roll = 1175;
    strcpy(shristy.branch, "ENTC a");

printf("\n");
    printf("sourabh roll no. is %d\n", sourabh.roll);
    printf("sourabh branch is %s\n", sourabh.branch);
printf("\n");
    printf("aman roll no. is %d\n", aman.roll);
    printf("aman ranch is %s\n", aman.branch);
printf("\n");
    printf("abhishek roll no. is %d\n", abhishek.roll);
    printf("abhishek branch is %s\n",abhishek.branch);
printf("\n");
    printf("shristy roll no. is %d\n", shristy.roll);
    printf("shristy branch is %s\n", shristy.branch);

    return 0;
}