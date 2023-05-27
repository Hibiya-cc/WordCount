#include <stdio.h>
#include <string.h>
int main(){
    int number=0;
    int i,flag=1;
    char a[10000];
    gets(a);
    int len=strlen(a);
    for(i=0;i<len;i++){
        if(a[i]==' ')flag=1;
        if(a[i]!=' '&&flag==1){
            number++;
            flag=0;
        }
    }
    printf("%d",number);
}
