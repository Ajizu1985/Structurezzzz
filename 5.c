#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Car {
  char color[100];
  char number[100];
    char owner[100];
  char model[100];
};

int main() {
    
    struct Car features[4];
    char y[100], z[100], x[100];
    
    strcpy(features[0].color, "White");
    strcpy(features[0].number, "C524DB");
    strcpy(features[0].owner, "Zakhidov Sarvar");
    strcpy(features[0].model, "Chevrolet Nexia");

    strcpy(features[1].color, "Black");
    strcpy(features[1].number, "B355CD");
    strcpy(features[1].owner, "Abdullaev Aziz");
    strcpy(features[1].model, "Chevrolet Tracker");

    strcpy(features[2].color, "White");
    strcpy(features[2].number, "B845BG");
    strcpy(features[2].owner, "Karimov Jakhangir");
    strcpy(features[2].model, "Chevrolet Cobalt");

    strcpy(features[3].color, "Dark Green");
    strcpy(features[3].number, "C007EB");
    strcpy(features[3].owner, "Bogomolov Egor");
    strcpy(features[3].model, "Range Rover");

    printf("Model: ");
    scanf("%s", &x);

    for(int i=0; i<4; i++){
        if(strstr(features[i].model, x)) {
   printf("State registration Number: %s\n", features[i].number);
   printf("Owner: %s\n", features[i].owner); 
   printf("Color: %s\n", features[i].color);
    }
    }
    
    printf("State registration number: ");
    scanf("%s", &y);

    for(int i=0; i<4; i++){
        if(strstr(features[i].number, y)) {
   printf("Model: %s\n", features[i].model);
   printf("Owner: %s\n", features[i].owner); 
   printf("Color: %s\n", features[i].color);
   }
    }
    
    printf("Color: ");
    scanf("%s", &z);

    for(int i=0; i<4; i++){
        if(strstr(features[i].color, z)) {
    printf("Model: %s\n", features[i].model);
    printf("Owner: %s\n", features[i].owner); 
    printf("State registration Number: %s\n", features[i].number);
     }
    }

  return 0;
           }
