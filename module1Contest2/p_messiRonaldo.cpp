#include<stdio.h>
int main(){
    // your code here
    int a,b,x,y;
    scanf("%d %d %d %d",&a, &b, &x, &y);
    int messi = ((2*a) + b);
    int ronaldo = ((2*x) + y);
    if(messi == ronaldo) {printf("EQUAL\n");}
    else if(messi > ronaldo) {printf("MESSI\n");}
    else if(ronaldo > messi) {printf("RONALDO\n");}
    return 0;
}