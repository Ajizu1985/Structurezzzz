#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct list {
  char surname[50];
  char name[50];
  char number[50];
};

int main() {
    
    int n=3;
    struct list surname[n];
    
    
    strcpy(surname[0].surname, "Abdullaev");
    strcpy(surname[0].name, "Aziz");
    strcpy(surname[0].number, "+99899-5674567");

    strcpy(surname[1].surname, "Karimov");
    strcpy(surname[1].name, "Jakhangir");
    strcpy(surname[1].number, "+99891-4563567");

    strcpy(surname[2].surname, "Zakhidov");
    strcpy(surname[2].name, "Sarvar");
    strcpy(surname[2].number, "+99891-4583436");
    
    for(int i=0; i<n; i++){
        printf("Enter surname: ");
        fgets(surname, sizeof(surname), stdin);
    printf("Phone number: %s\n", surname[i].number);
  }
  return 0;
}