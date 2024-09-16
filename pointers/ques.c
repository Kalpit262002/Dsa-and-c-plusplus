// #include<stdio.h>
// #include<conio.h>
// void main(){
//     int k=4;
//     int *const p=&k;
//     int r=3;
//     // p=&k;   //error here
//     printf("%d\n",p);
//     printf("%d",&k);
// }

#include<stdio.h>
#include<conio.h>
int i;
int main(){
    int k= i++;
    printf("%d",k);
    printf("%d",i);
    printf("%d",k);
    // printf("Else");
    if(i);
    else{
        printf("Else");
    }
    return 0;
}
