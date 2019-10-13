#include<stdio.h>
#include<conio.h>
#include<string.h>
struct book_details
{
   char name_author[200];
   int book_code;
   char title[200];
   int copies;
   };
struct book_details input()
{
    /*FILE *fp;
    fp=fopen("Book_details.txt","a");
    if(fp==0)
    {
        printf("File not found!");
    }*/
  struct book_details bd;
  printf("\nEnter the book code:");
  scanf("%d",&bd.book_code);
  fflush(stdin);
  printf("\nEnter the book title:");
  gets(bd.title);
  fflush(stdin);
  printf("\nEnter the author of the book:");
  gets(bd.name_author);
  printf("\nEnter number of copies available:");
  scanf("%d",&bd.copies);
  //fprintf(fp,"\n%d\t%s\t%s\t%d",bd.book_code,bd.title,bd.name_author,bd.copies);
  //fclose(fp);
  return bd;
  }
void book_display(struct book_details bd)
{
   printf("\nBook Code:%d",bd.book_code);
   printf("\nBook Title:%s",bd.title);
   printf("\nBook Author:%s",bd.name_author);
   printf("\nNumber of copies available:%d",bd.copies);
   }

/*void program()
{
    exit(0);
}
*/
int main()
{
    /*FILE *fp;
    fp=fopen("Book_details.txt","a");
    if(fp==0)
    {
        printf("File not found!");
    }
    fprintf(fp,"\nBOOK CODE\tTITLE\tAUTHOR\tCOPIES");
    fclose(fp);*/

  struct book_details bdd[50];
  int i,n,c,book_c,book_c2,r,o,t_b=0;
  char book_auth[200],book_title[200],confirm;
  printf("\t\t*****WELCOME TO YOUR LIBRARY SYSTEM!*****\n");
  printf("\nEnter the number of books to register:");
  scanf("%d",&n);
  printf("Register the books:");
    for(i=1;i<=n;i++)
  {
    printf("\nBOOK-%d",i);
    bdd[i]=input();
    }
    do
    {
     welcome: printf("\nEnter one choice:\n1. Display book information\n2. Add a new book\n3. Display all the books in the library of a particular author\n4. Display the number of books of a particular title\n5. Display the total number of books in the library\n6. Issue a book\n7. Exit\n");
	      printf("\nEnter your choice:");
	      scanf("%d",&c);
      switch(c)
      {
	case 1:
		printf("\nEnter the book code:");
		scanf("%d",&book_c);
		for(i=1;i<=n+1;i++)
		{
		  if(book_c==bdd[i].book_code)
		  {
		     book_display(bdd[i]);
		     }
		     }
		 break;

	case 2:
		 bdd[n+1]=input();
		 printf("\nBook inserted with details below:");
		 book_display(bdd[n+1]);
		 break;
	case 3:
		 fflush(stdin);
		 printf("\nEnter the author name:");
		 gets(book_auth);
		 for(i=1;i<=n+1;i++)
		 {
		   r=strcmp(book_auth,bdd[i].name_author);
		    if(r==0)
		    break;
		    }
		     if(r==0)
		     book_display(bdd[i]);
		     else
		     printf("Not found!");
		   break;
	case 4 : fflush(stdin);
		 printf("\nEnter the title of the book:");
		 gets(book_title);
		 for(i=1;i<=n+1;i++)
		 {

		     o=strcmp(book_title,bdd[i].title);
		     if(o==0)

		      break;
		      }
		     if(o==0)
		     book_display(bdd[i]);
		     else
		     printf("Not found!");
		   break;
	case 5:
		 for(i=1;i<=n+1;i++)
		 {
		 t_b+=bdd[i].copies;
		 }
		 printf("\nTotal no. of books in the library are: %d",t_b);
		 t_b=0;
		 break;
	case 6:
		 printf("\nEnter the book code to issue a book:");
		 scanf("%d",&book_c2);
		 for(i=1;i<=n+1;i++)
		 {
		    if(book_c2==bdd[i].book_code)
		    {
		       printf("\nConfirm the details of the book");
		       book_display(bdd[i]);
		       fflush(stdin);
		       printf("\nType Y/N:");
		       scanf("%c",&confirm);
		       if(confirm=='Y'|| confirm=='y')
		       {
			  printf("\nBook Issued!");
			  printf("\nCopies remaining are:%d",bdd[i].copies-1);
			  bdd[i].copies-=1;
			  }
			if(confirm=='N' || confirm=='n')
			goto welcome;
		     }
		   }
		   break;
	 //case 7: program();
	   //     break;
	default:printf("\nINVALID CHOICE!");
            goto welcome;

      }
    }while(c!=7);

    return 0;
    }
