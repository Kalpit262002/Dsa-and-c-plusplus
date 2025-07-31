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
// int i;
int main(){
    int p,q,r;
    p=8,q=2,r=6;
    for(r=3;r<=5;r++){
        p=(r^10)^p;
    }
    p=(p&12)+q;
    printf("%d",p+q);
    // int k= 2 || 0;
    // printf("%d",k);
    // printf("%d",i);
    // printf("%d",k);

    // printf("Else");
    // if(i);
    // else{
    //     printf("Else");
    // }
    return 0;
}
