#include<stdio.h>
struct abc{
    int x, y ,z;
    
};
int main(){
    struct abc a ={.y = 36 , .x = 12 , .z = 24};
    printf("%d %d %d", a.x , a.z , a.y);
    return 0;
}