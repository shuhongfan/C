#include <stdio.h>

int main(){
    int a,b,c,m;
    scanf("%d,%d,%d",&a,&b,&c);
    if(a>b){
        if(a>c) m=a;
    } else {
        if(b>c) m=b;
        else    m=c;
    }
    printf("m=%d",m);
}