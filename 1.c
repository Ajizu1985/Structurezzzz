#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Student {
  int id;
  char surname [100];
  char name [100];
  int  Math;
  int  Macroeconomics;
  int  IT;
  int Microeconomics;
  float average_marks;
};

int main() {
    
    struct Student list[4];
    int y;
    
    list[0].id = 1;
    strcpy(list[0].surname, "Abdullaev");
    strcpy(list[0].name, "Dilshod");
    list[0].Math = 5;
    list[0].Macroeconomics = 5;
    list[0].IT = 4;
    list[0].Microeconomics = 5;
    list[0].average_marks = ((list[0].Math) + (list[0].Macroeconomics) + (list[0].IT) + (list[0].Microeconomics))/4;

    list[1].id = 2;
    strcpy(list[1].surname, "Abdurakhimov");
    strcpy(list[1].name, "Ne'mat");
    list[1].Math = 3;
    list[1].Macroeconomics = 3;
    list[1].IT = 4;
    list[1].Microeconomics = 5;
    list[1].average_marks = ((list[1].Math) + (list[1].Macroeconomics) + (list[1].IT) + (list[1].Microeconomics))/4;

    list[2].id = 3;
    strcpy(list[2].surname, "Rejepova");
    strcpy(list[2].name, "Dilbar");
    list[2].Math = 5;
    list[2].Macroeconomics = 5;
    list[2].IT = 5;
    list[2].Microeconomics = 5;
    list[2].average_marks = ((list[2].Math) + (list[2].Macroeconomics) + (list[2].IT) + (list[2].Microeconomics))/4;

    list[3].id = 4;
    strcpy(list[3].surname, "Karimova");
    strcpy(list[3].name, "Khafiza");
    list[3].Math = 4;
    list[3].Macroeconomics = 4;
    list[3].IT = 5;
    list[3].Microeconomics = 5;
    list[3].average_marks = ((list[3].Math) + (list[3].Macroeconomics) + (list[3].IT) + (list[3].Microeconomics))/4;

    printf("Student id: ");
    scanf("%d", &y);

    for(int i=0; i<4; i++){
        if(list[i].id==y) {
    printf("Surname: %s\n", list[i].surname);
    printf("Name: %s\n", list[i].name);
    printf("Average marks: %f\n", list[i].average_marks);
    }
    }
    
  return 0;
           }