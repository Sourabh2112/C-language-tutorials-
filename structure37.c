#include<stdio.h>

struct studentid
{
    int roll;
    char branch [12];

}sourabh, aman, abhishek, shristy;

int main()
{
    sourabh.roll = 5165;
    sourabh.branch[0] = 'entc b';
    aman.roll = 1165;
    aman.branch[1] = 'entc a';
    abhishek.roll = 5171;
    abhishek.branch[2] = 'entc b';
    shristy.roll = 5165;
    shristy.branch[3] = 'entc a' ;
printf("\n");
    printf("sourabh roll no. is %d\n", sourabh.roll);
    printf("sourabh branch is %c\n", sourabh.branch);
printf("\n");
    printf("aman roll no. is %d\n", aman.roll);
    printf("aman branch is %c\n", aman.branch);
printf("\n");
    printf("abhishek roll no. is %d\n", abhishek.roll);
    printf("abhishek branch is %c\n",abhishek.branch);
printf("\n");
    printf("shristy roll no. is %d\n", shristy.roll);
    printf("shristy branch is %c\n", shristy.branch);

    return 0;
}