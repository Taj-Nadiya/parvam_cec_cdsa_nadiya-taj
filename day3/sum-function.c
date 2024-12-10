#include<stdio.h>
int sum(int a, int b){
    return a+b;
}
int main(){
    int op1, op2, add;
    printf("enter any numbers:");
    scanf("%d %d", &op1, &op2);
    add = sum(op1, op2); //fumnction call
    printf("sum of %d & %d: %d",op1,op2,add);
}
