#include<stdio.h>
int main(){
    // your code here
    int x,y;
    scanf("%d %d", &x, &y);

    if(x<y) printf("OLD\n");
    else if(x>y) printf("NEW\n");
    else printf("SAME");
    return 0;
}