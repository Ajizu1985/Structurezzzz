#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Employee {
  char surname[100];
  char name [100];
  char duty [100];
  int  daily_salary;
  int worked_days;
  int monthly_salary;
  int bonus;
  int monthly_salary_with_bonus;
};

int main() {
    
    struct Employee data[4];
    char y[100];
    
    strcpy(data[0].surname, "Zakhidov");
    strcpy(data[0].name, "Sarvar");
    strcpy(data[0].duty, "Deputy of the IFRS Unit");
    data[0].daily_salary= 275000;
    data[0].worked_days = 30;
    data[0].monthly_salary = data[0].daily_salary * data[0].worked_days;
    data[0].bonus = data[0].monthly_salary * 0.1;
    data[0].monthly_salary_with_bonus = data[0].monthly_salary + data[0].bonus;

    strcpy(data[1].surname, "Abdullaev");
    strcpy(data[1].name, "Aziz");
    strcpy(data[1].duty, "Chief specialist");
    data[1].daily_salary = 250000;
    data[1].worked_days = 20;
    data[1].monthly_salary = data[1].daily_salary * data[1].worked_days;
    data[1].bonus = data[1].monthly_salary * 0.1;
    data[1].monthly_salary_with_bonus = data[1].monthly_salary + data[1].bonus;

    strcpy(data[2].surname, "karimov");
    strcpy(data[2].name, "Jakhangir");
    strcpy(data[2].duty, "Head of corporate governance unit");
    data[2].daily_salary = 300000;
    data[2].worked_days = 25;
    data[2].monthly_salary = data[2].daily_salary * data[2].worked_days;
    data[2].bonus = data[2].monthly_salary * 0.1;
    data[2].monthly_salary_with_bonus = data[2].monthly_salary + data[2].bonus;

    strcpy(data[3].surname, "Bogomolov");
    strcpy(data[3].name, "Egor");
    strcpy(data[3].duty, "Leading specialist");
    data[3].daily_salary = 240000;
    data[3].worked_days = 15;
    data[3].monthly_salary = data[3].daily_salary * data[3].worked_days;
    data[3].bonus = data[3].monthly_salary * 0.1;
    data[3].monthly_salary_with_bonus = data[3].monthly_salary + data[3].bonus;

    printf("Employee: ");
    scanf("%s", &y);

    for(int i=0; i<4; i++){
        if(strcmp(data[i].surname, y)==0) {
   printf("Surname: %s\n", data[i].surname);
   printf("Name: %s\n", data[i].name); 
   printf("Duty: %s\n", data[i].duty);
   printf("Salary received last month: %d\n", data[i].monthly_salary);
   printf("Salary and bonuses received last month: %d\n", data[i].monthly_salary_with_bonus );
    }
    }
    
  return 0;
           }
