#include<stdio.h>
void minMax(int a[] , int *min , int *max , int length){
    *min = *max = a[0];
    for(int i=1 ; i<length ; i++){
        if(a[i]< *min){
            *min = a[i];
        }
        else if(a[i]> *max){
                *max = a[i];
        }
    }
    printf("value os min and max  = %d  %d", *min , *max);
};

int main(){
    int a[]={45,56,23,78,15};
    int min,max;
    int length = sizeof(a)/sizeof(a[0]);
    minMax(a,&min,&max,length);
    return 0;
}