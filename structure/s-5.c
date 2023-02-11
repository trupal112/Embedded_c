#include <stdio.h>
struct student {
  char firstname[64];
  char lastname[64];
  char id[64];
  int score;
};
void displayDetail(struct student std) {
  printf("Firstname: %s\n", std.firstname);
  printf("Lastname: %s\n", std.lastname);
  printf("ID: %s\n", std.id);
  printf("Score: %d\n", std.score);
};
  
int main(void) {
  
 
  struct student stdArr[3];

  int i;
  
  for (i = 0; i < 3; i++) {
    printf("Enter detail of student #%d\n", (i+1));

    printf("\nEnter First Name: ");
    scanf("%s", stdArr[i].firstname);
  
    printf("\nEnter Last Name: ");
    scanf("%s", stdArr[i].lastname);
  
    printf("\nEnter ID: ");
    scanf("%s", stdArr[i].id);
  
    printf("\nEnter Score: ");
    scanf("%d", &stdArr[i].score);
  }
  
  for (i = 0; i < 3; i++) {
    printf("\nStudent #%d Detail:\n", (i+1));
    displayDetail(stdArr[i]);
  }
  
  return 0;
}

