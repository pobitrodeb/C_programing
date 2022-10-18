#include<stdio.h>
int main(){
 int b,g,c;
 scanf("%d%d%d",&b,&g,&c);
 if(b>g && b>c)
    printf("b");
    else if(g>b && g>c)
    printf("g");
 else
    printf("c");

}
