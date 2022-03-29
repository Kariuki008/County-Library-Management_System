/*County Library Management System
By JOHN KARIUKI
08 Feb 2022
MIT License
C89 compiler
*/


#include <stdio.h>
#include <string.h>
#include <windows.h>

struct Patron {
     char name [100];
     char email [50];
     char pasword [30];
     int is_staff;
};
struct Book {
     char title [100];
     char about [150];
     char amount [1000];
     int is_available;
};
//Function declarations
void add_patron();
int menu();
void execute_action(int action);
void save_patron(struct Patron patron);
void view_patrons();
void add_book();
int menu();
void execute_action(int action);
void save_book(struct Book book);
void view_books();



void add_patron() {
printf("enter name: ");
getchar();
gets(patron.name);
printf("Enter Email: ");
gets(patron.email);
printf("Enter initial password: ");
gets(patron.email);
printf("Enter 1 if staff 0 otherwise: ");
scanf("%d",&patron.is_staff);
save_patron(patron);
printf("%s added\n",patron.name);
}
void add_book() {
struct Book book;
printf("Enter title: ");
getchar();
gets(book.title);
printf("Enter about: ");
gets(book.about);
printf("Enter amount: ");
gets(book.title);
printf("Enter 2 if available 0 if otherwise: ");
scanf("%d",&book.is_available);
printf("%s added\n",book.title);
}
int menu()
{
     int action;
        printf("select an action below\n");
        printf("1. Add new Patron\n");
        printf("2. View all Patrons\n");
        printf("3. View all books\n");
        printf("4. Add new book\n");
        printf("Your action\n");
        scanf("%d",&action);
        if(action < 1 || action > 4 );
{
           printf("invalid action. Try Again\n");
        }
        return action;

}
void execute_action(int action){
     switch (action){
        case 1:
          printf("adding a new patron\n");
          break;
          case 2:
           printf("list of all patrons\n");
          break;
          case 3:
           printf("list of all books\n");
          break;
          case 4:
           printf("adding a new book\n");
          break;
         default: printf("Invalid_action.\n");
     }
}

void save_patron(struct Patron patron){
     FILE *fp;
     fp = fopen("patrons","a+b");
     fwrite(&patron,sizeof(struct Patron),1,fp);
     fclose(fp);
}
void view_patrons(){
     FILE *fp;
     struct Patron patron;
     fp = fopen("patrons","r+b");
     printf("%-30s%-30s%-10s\n","NAME","EMAIL","IS STAFF");
     while(!feof(fp)){
        fread(&patron,sizeof(struct Patron),1,fp);
       printf("%-30s",patron.name);
       printf("%-30s",patron.email);
       printf("%-10\n",patron.is_staff);
     }

}
{
     void save_book(struct Book book){
          FILE *fp;
          fp = fopen("books","r+b");
         fwrite(&books,sizeof(struct Book),1,fp);
         fclose(fp);

     }
     void view_books(){
          FILE *fp;
          struct Book book;
          fp = fopen("books","r+b");
          printf("%-30s%-30s%-10s\n","TITLE","ABOUT","IS AVAILABLE");
           while(!feof(fp)){
        fread(&patron,sizeof(struct book),1,fp);
       printf("%-30s",book.title);
       printf("%-30s",book.about);
       printf("%-10\n",book.is_available);

     }
}


int main()
{
     while(1){
        printf("COUNTY LIBRARY SYSTEM\n");
        printf("WELCOME MR JOHN\n");
        execute_action (menu());
        printf("Press any key to continue");
        getch();
        system("cls");
     }
     return 0;
}

