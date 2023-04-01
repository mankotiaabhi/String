#include<stdio.h>
void str(char *string,int n){
    for (int i=0;string[i]!=0;i++){
        printf("%c",string[i]);
    }
}
int main(){
    char string[]={'A','b','h','a','y','\0'};
    int n=sizeof(string)/sizeof(char);
    str(string,n);
}