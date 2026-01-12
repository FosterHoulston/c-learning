#include <stdio.h>
#include <stdbool.h>

int main(){

  float gpa = 2.5;
  float price = 25.50;
  double temperature = 10.141592653512354;
  char grade = 'A';
  char name[] = "Foster";
  char food[] = "Pizza";
  bool isOnline = false;


  printf("Your gpa is %.1f\n", gpa);
  printf("The price is $%f\n", price);
  printf("The temperature is %.15f\n", temperature);
  printf("Your grade is %c\n", grade);
  printf("Hello %s\n", name);
  printf("Your favorite food is %s\n", food);
  printf("%d is online\n", isOnline);

  if (isOnline){
    printf("They are online.");
  } else{
    printf("They are not online.");
  }

  return 0;
}
