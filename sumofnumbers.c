// 1+2+3+4+5...........+n


#include<stdio.h>
int main(){
    int i,n;
    int sum = 0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum = sum + i;
    }
    printf("%d",sum);
}

// 1+3+5+7+9...........+n

#include<stdio.h>
int main(){
    int i,n;
    int sum = 0;
    scanf("%d",&n);
    for(i=1;i<=n;i=i+2){
        sum = sum + i;
    }
    printf("%d",sum);
}

// 2+4+6+8.........+n
#include<stdio.h>
int main(){
    int i,n;
    int sum = 0;
    scanf("%d",&n);
    for(i=2;i<=n;i=i+2){
        sum = sum + i;
    }
    printf("%d",sum);
}