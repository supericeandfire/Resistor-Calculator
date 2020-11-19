#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main()
{
int i,ret;
char c[40],q[5]={"quit"};
     printf("Welcome to the\n");
     printf("  Resistor Color Code Program\n\n");

printf("****************INSTRUCTION****************\n");
printf("Color Code:\n");
printf(" Black\t[b]\t= 0\tGreen\t[g]\t= 5\n");
printf(" Brown\t[br]\t= 1\tBlue\t[bl]\t= 6\n");
printf(" Red\t[r]\t= 2\tViolet\t[v]\t= 7\n");
printf(" Orange\t[o]\t= 3\tGray\t[gr]\t= 8\n");
printf(" Yellow\t[y]\t= 4\tWhite\t[w]\t= 9\n");
printf("Tolerance Code:\n");
printf(" Gold\t[go]\t= 5%%\tSilver\t[s]\t= 10%%\n\n");
    
while(1)
{
    printf("Input the color code,separated with '-'\n");
    printf("*Type in quit to exit program\n");
    printf("Color Code -> ");
    scanf("%s",&c[40]);
    for(i=0;i<5;i++)
    {printf("%c !",q[i]);}
    ret=strcmp(c,q);
printf("break=%d",ret);
    if(ret==0)
    {
        printf("break=%d",ret); 
        break;}
    colorcode(c);
    printf("\n\n\n");
}

return 0;
}

void colorcode(char c[])
{
printf("%s",c);
}


