#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main(int argc, char argv[])
{
    float numberone;
    float numbertwo;
    char orperator;
    float answer;

    do{
    printf("Enter the numbers for orperation:\n");
    scanf("%f %c %f",&numberone, &orperator, &numbertwo);

    switch(orperator)
    {
        case '+': answer = numberone+numbertwo;
        break;
        case '-': answer = numberone-numbertwo;
        break;
        case '*': answer = numberone*numbertwo;
        break;
        case '/': answer = numberone/numbertwo;
        break;
        default: goto fail;
    }
    printf("%0.9g %c %0.9g = %0.6g\n\n",numberone,orperator,numbertwo,answer);
    }
    while(answer!=0);
    goto exit;
    fail:
        printf("fail.\n");
        exit:
    return 0;
}



