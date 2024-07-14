#include<bits/stdc++.h>
using namespace std;

bool check(char a){
    if((a>='a'&&a<='z')||(a>='A'&&a<='Z')||(a>='0'&&a<='9')){
        return 1;
    }
    return 0;
}

char small_char(char c){
    if(c>='a'&&c<='z'){
        return c;
    }
    else{
        c=c+32;
        return c;
    }
}

int pallindrome(char ar[]){
    int i;
    for(i=0;ar[i]!='\0';i++){
    }
    int k=0;
    int z=i-1;
    while(k<=z){
        if(check(ar[z])&&check(ar[k])){

            if(small_char(ar[z])!=small_char(ar[k])){
            cout<<"Not a pallindrome";
            return 0;
        }
        else{
           z--;
        k++;
        }
        }
        else{
            if(check(ar[z])!=1&&check(ar[k])!=1){
                z--;
                k++;
            }
            else if(check(ar[z])!=1){
                z--;
            }
            else if(check(ar[k])!=1){
                k++;
            }
        }
        
    }
    cout<<"It is a pallindrome";
            return 0;
}

int main(){

    char arr[100]={'N','2',' ','i','&','n','J','A','?','a','&',' ','j','n','I','2','n'};
    pallindrome(arr);
    
    return 0;
}