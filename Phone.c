#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct phone {
  char model [100];
  char color[100];
  int camera;
 int price;
};

int main() {
    
    struct phone list[8];
    char y[100], x[100];
    int v, u, z, w;
    
    strcpy(list[0].model, "Apple Pro 13");
    strcpy(list[0].color, "Grey");
    list[0].camera = 3;
    list[0].price = 999;
    
    strcpy(list[1].model, "Apple 12");
    strcpy(list[1].color, "Black");
    list[1].camera = 2;
    list[1].price = 749;

    strcpy(list[2].model, "Samsung Galaxy S21 Ultra 5G");
    strcpy(list[2].color, "Black");
    list[2].camera = 3;
    list[2].price = 1200;

    strcpy(list[3].model, "Samsung Galaxy Z Flip3 5G");
    strcpy(list[3].color, "Blue");
    list[3].camera = 2;
    list[3].price = 1000;

    strcpy(list[4].model, "Xiaomi 11T Pro");
    strcpy(list[4].color, "Gray");
    list[4].camera = 3;
    list[4].price = 718;

    strcpy(list[5].model, "Redmi 10");
    strcpy(list[5].color, "White");
    list[5].camera = 5;
    list[5].price = 545;

    strcpy(list[6].model, "Huawey Nova");
    strcpy(list[6].color, "Yellow");
    list[6].camera = 5;
    list[6].price = 399;

    strcpy(list[7].model, "Huawey Nova 9");
    strcpy(list[7].color, "Blue");
    list[7].camera = 4;
    list[7].price = 425;
    
    printf("Model: ");
    scanf("%s", &y);
    
    printf("Color: ");
    scanf("%s", &x);
    
    printf("Min Camera: ");
    scanf("%d", &v);
    printf("Max Camera: ");
    scanf("%d", &u);

    printf("Min Price: ");
    scanf("%d", &z);
    printf("Max Price: ");
    scanf("%d", &w);

    for(int i=0; i<8; i++){
    if((strstr(list[i].model, y))) {
        if((strstr(list[i].color, x))){
                if((list[i].camera >= v && list[i].camera <= u)){
                    if((list[i].price >= z && list[i].price <= w)){
     printf("Model: %s\n", list[i].model);
     printf("Color: %s\n", list[i].color);
     printf("Camera: %d\n", list[i].camera);
     printf("Price: %d\n", list[i].price);
    }
       }
         }
        } else {
        printf("Information not found\n");
        }
       } 
  return 0;
    }

