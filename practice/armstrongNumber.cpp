#include <stdio.h>
#include<math.h>
int main()
{
  int n=100000000;
  for(int i=1;i<=n;i++){
    int nod=0;
    int x=i;
    while(x>0){
      int ld=x%10;
      nod++;
      x/=10;
    }
    int sum=0;
    x=i;
    while(x>0){
      int ld = x%10;
      x/=10;
      sum += pow(ld,nod);
    }
    if(sum==i){
      printf("%d\n",i);
    }
  }
  return 0;
}