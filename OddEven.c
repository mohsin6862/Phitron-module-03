// print even and odd number like bellow
// 1 - Even
// 2 - Odd
// 3 - Even
// 4 - Odd

#include<stdio.h>
int main (){
    int i,n;
    scanf("%d",&n);
    for ( i=1;i<=n;i++){
        if (i%2==0){
            printf("%d - Even\n",i);
        }
        else{
            printf("%d - Odd\n",i);
        }
    }
}