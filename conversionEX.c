#include<stdio.h>

int main()
{
    
        char input, q;
        int meterTOcentimeter = 100;
        int meterTOkilometer = 1000;
        int centimeterTOmeter = 0.01;
        int kilometerTOmeter = 0.001;
        int nanometerTOmeter = 0.000000001;
        int meterTOnanometer = 100000000;
        int quantity, output;

    while (2)
    {

    printf(" chosse the type which converssion you want otherwise press q to exit the function:-\n   1.meterTOcentimeter\n   2.meterTOkilometer\n   3.centimeterTOmeter\n   4.kilometerTOmeter\n   5.nanometerTOmeter\n   6.meterTOnanometer\n");
    printf("enter your choice \n");
    scanf(" %c",&input);
    
    switch (input)
    {
    case 'q':
        printf("existing the function\n");
        goto end;
        break;

    case '1' :
        printf("enter the quantity you want to convert\n");
        scanf("%d",&quantity);
        output = quantity*meterTOcentimeter;
        printf("%d meter = %d centimeter\n", quantity,output);
        break;

    case '2' :
        printf("enter the quantity you want to convert\n");
        scanf("%d",&quantity);
        output = quantity*meterTOkilometer;
        printf("%d meter = %d kilometer\n", quantity,output);
        break;

    case '3' :
        printf("enter the quantity you want to convert\n");
        scanf("%d",&quantity);
        output = quantity*centimeterTOmeter;
        printf("%d centimeter = %d meter\n", quantity,output);
        break;    

    case '4' :
        printf("enter the quantity you want to convert\n");
        scanf("%d",&quantity);
        output = quantity*kilometerTOmeter;
        printf("%d kilometer = %d meter\n", quantity,output);
        break;

    case '5' :
        printf("enter the quantity you want to convert\n");
        scanf("%d",&quantity);
        output = quantity*nanometerTOmeter;
        printf("%d nanometer = %d meter\n", quantity,output);
        break;

     case '6' :
        printf("enter the quantity you want to convert\n");
        scanf("%d",&quantity);
        output = quantity*meterTOnanometer;
        printf("%d meter  = %d nanometer\n", quantity,output);
        break;

    default:
        printf("ENTER A VALID CHOICE");
        break;
    }    
     
    }
    end:

    return 0;
}
