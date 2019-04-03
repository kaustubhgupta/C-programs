#include<stdio.h>
main()
{
    int low=0,up=0,sp=0,num=0;
    char ch;
    FILE *fp;
    fp=fopen("Test_Doc.txt","r");
    if(fp==0)
        printf("File Not Found!");
        printf("\n\nKaustubh\nF-70\n");
    while((ch=fgetc(fp))!=EOF)
    {
        if(ch>='a' && ch<='z')
            low++;
        else if(ch>='A' && ch<='Z')
            up++;
        else if(ch>='0' && ch<='9')
            num++;
        else
            sp++;
    }
    printf("\n\nNumber of Lower Case Characters: %d\nNumber of Upper Case Characters: %d\nNumber of integers: %d\n Number of Special Characters And Spaces: %d",low,up,num,sp);
    return 0;




}
