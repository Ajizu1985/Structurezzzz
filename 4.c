#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Publish {
  char name[100];
  char author[100];
  int pages;
  int year;
};

int main() {
    
    struct Publish book[15];
    char y[100];
    int z;
    
    strcpy(book[0].name, "ACCA");
    strcpy(book[0].author, "BPP");
    book[0].pages=350;
    book[0].year=2021;

    strcpy(book[1].name, "Development economics");
    strcpy(book[1].author, "Todaro M., Smith S.");
    book[1].pages=625;
    book[1].year=2020;

    strcpy(book[2].name, "Python: Basics");
    strcpy(book[2].author, "Chen D.");
    book[2].pages=120;
    book[2].year=2012;

    strcpy(book[3].name, "Macroeconomics");
    strcpy(book[3].author, "Bernanke B.");
    book[3].pages=223;
    book[3].year=2015;

    strcpy(book[4].name, "The war of the wolrds");
    strcpy(book[4].author, "Wells H.");
    book[4].pages=257;
    book[4].year=1923;
    
    strcpy(book[5].name, "Adventures of Sherlock Holmes");
    strcpy(book[5].author, "Conan Doyle A.");
    book[5].pages=725;
    book[5].year=1899;

    strcpy(book[6].name, "Poirot");
    strcpy(book[6].author, "Christie A.");
    book[6].pages=1200;
    book[6].year=1905;

    strcpy(book[7].name, "The War and the Peace");
    strcpy(book[7].author, "Tolstoy L.");
    book[7].pages=534;
    book[7].year=1835;

    strcpy(book[8].name, "Anna Karenina");
    strcpy(book[8].author, "Tolstoy L.");
    book[8].pages=1725;
    book[8].year=1845;

    strcpy(book[9].name, "Evgeny Onegin");
    strcpy(book[9].author, "Pushkin A.");
    book[9].pages=645;
    book[9].year=1832;
    
    strcpy(book[10].name, "Tale about Tzar Saltan");
    strcpy(book[10].author, "Pushkin A.");
    book[10].pages=123;
    book[10].year=1836;

    strcpy(book[11].name, "Imitations of the Quran");
    strcpy(book[11].author, "Pushkin A.");
    book[11].pages=234;
    book[11].year=1842;

    strcpy(book[12].name, "Caucasus");
    strcpy(book[12].author, "Pushkin A.");
    book[12].pages=2;
    book[12].year=1846;

    strcpy(book[13].name, "Tale of the Fishman and the Golden Fish");
    strcpy(book[13].author, "Pushkin A.");
    book[13].pages=378;
    book[13].year=1856;

    strcpy(book[14].name, "Mermaid");
    strcpy(book[14].author, "Pushkin A.");
    book[14].pages=12;
    book[14].year=1857;

    printf("Author: ");
    scanf("%s", y);
    
    printf("Year of publication: ");
    scanf("%d", &z);
    
    for(int i=0; i<15; i++){
    if((strcmp(book[i].author, y)) && (book[i].year<z)){
    {
   printf("Publication of %s before %d\n", book[i].author, book[i].year);
  }
    }
    }
  return 0;
}
