#include<stdio.h>
 struct student{
    int x ;
    int  y;
};
struct student edit(struct student s){
          (s.x)++;
          s.y = s.y+5;
          return s;
          
};
void print(struct student s){
      printf("%d %d", s.x, s.y);
};
int main(){
    struct student s = {12,24};
    s = edit(s);
    print(s);
    return 0;
}