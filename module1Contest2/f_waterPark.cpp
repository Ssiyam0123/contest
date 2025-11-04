#include<stdio.h>
int main(){
    // your code here
    int w,h;
    scanf("%d %d", &w, &h);
    
    if(60 <= w && 130 >= h){
        printf("YES\n");
    } else printf("NO\n");
    return 0;
}