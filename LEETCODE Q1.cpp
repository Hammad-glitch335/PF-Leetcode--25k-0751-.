
#include<stdio.h>
int* runningSum(int* num, int numsSize) {
    for(int i=1;i<numsSize;i++){
        num[i]+=num[i-1];
    }
    return num;
}
int main(){
    int size;
    printf("\nEnter the size : ");
    scanf("%d",&size);
    int num[size];
    printf("\nEnter nums");
    for(int i=0; i<size;i++){
        scanf("%d",&num[i]);
    }
    int* ptr= runningSum(num, size);
    for(int i=0; i<size;i++){
        printf("%d ",ptr[i]);
    }
}
