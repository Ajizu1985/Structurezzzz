
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Publish {
  char name[50];
  char author[50];
  int year;
};

int main() {
    
    struct Publish book[4];
    int z;
    
    strcpy(book[0].name, "ACCA");
    strcpy(book[0].author, "BPP");
    book[0].year=2021;

    strcpy(book[1].name, "Development economics");
    strcpy(book[1].author, "Todaro M., Smith S.");
    book[1].year=2020;

    strcpy(book[2].name, "Python: Basics");
    strcpy(book[2].author, "Chen D.");
    book[2].year=2012;

    strcpy(book[3].name, "Macroeconomics");
    strcpy(book[3].author, "Bernanke B.");
    book[3].year=2015;
    
    printf("Year of publication: ");
    scanf("%d", &z);
    
    for(int i=0; i<4; i++){
    if(book[i].year==z){
   // printf("%d", book[i].year);
    {
   printf("Book name: %s\n", book[i].name);
   printf("Book author: %s\n", book[i].author);
   printf("Publication date: %d\n", book[i].year);
  }
    }
    }
  return 0;
}
