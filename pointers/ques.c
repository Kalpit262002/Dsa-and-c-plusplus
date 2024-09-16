#include<stdio.h>
#include<conio.h>
void main(){
    int k=4;
    int *const p=&k;
    int r=3;
    // p=&k;   //error here
    printf("%d\n",p);
    printf("%d",&k);
}
