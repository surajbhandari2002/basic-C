#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {

    int n;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    int sum=0;
    while(n>0) //1056  //105  //10  /1  for 0 cond stop
   {
    int a= n%10;  //4   //1056%10=6  //105%10=5  //10%10=0   //1%10=1

    sum=sum+a;    //4  //4+6=10     //10+5=15    //15+0=15   //15+1=16

    n=n/10;  //1056  //105   //10   //1  // 1/10=0

    }
    printf("%d",sum);
    return 0;
}
