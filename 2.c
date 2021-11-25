#include <stdio.h>
#include <string.h>
 
struct employee 
{
     char name[30];
     char surname[30];
     char number[100];
};
 
int main() 
{
     int i, j;
     char n[100];
     struct employee record[3];
 
     // 1st employee's record
    
     strcpy(record[0].name, "Aziz");
     strcpy(record[0].surname, "Abdullaev");
     strcpy(record[0].number, "998992058693");
 
     // 2nd employee's record         
     
     strcpy(record[1].name, "Jahongir");
     strcpy(record[1].surname, "Karimov");
     strcpy(record[1].number, "998901287945");
 
     // 3rd employee's record
     strcpy(record[2].name, "Sarvar");
     strcpy(record[2].surname, "Zahidov");
     strcpy(record[2].number, "998914578212");

    printf("Enter surname of employee: \n");
    scanf("%s", n);

     for(i=0; i<3; i++){
        if(strcmp(record[i].surname, n)==0) {
            printf(" Phone number of %s is: %s\n\n", record[i].surname, record[i].number);
        }
     }

     return 0;
}