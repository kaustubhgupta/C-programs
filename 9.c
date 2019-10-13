#include<stdio.h>
main()
{
    char ch,st[1];
    FILE *fp1;
    FILE *fp2;
    fp1=fopen("Test_Doc.txt","r");
    if(fp1==0)
        printf("File Not Found!");
    fp2=fopen("Copied.txt","w");
    if(fp2==0)
        printf("File Not Found!");
        printf("\n\nKaustubh\nF-70\n");

    while((ch=fgetc(fp1))!=EOF)
    {
        st[0]=ch;
        fwrite(st,1,sizeof(st),fp2);
        st[0]='\0';
    }
    printf("File Copied!");
    return 0;

}
