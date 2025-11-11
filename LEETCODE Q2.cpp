#include<stdio.h>
int* shuffle(int* nums, int numsSize, int mid);
int main(){
	int size;
	printf("\nEnter the size : ");
	scanf("%d",&size);
	int nums[size];
	printf("\nEnter values : ");
	for (int i=0;i<size;i++){
		scanf("%d",&nums[i]);
	}
	int mid = size/2;
	int *ptr= shuffle(nums, size, mid);
	for (int i=0;i<size;i++){
		printf("%d ", ptr[i]);
	}
}
int* shuffle(int* nums, int numsSize, int mid){
	static int newarr[100];//i have to give some value to it, otherwise it wont run so i am assuming 100
	for (int i=0,j=0;i<numsSize;i++){
		newarr[j++]=nums[i];
		newarr[j++]=nums[mid+i];
	}
	return newarr;
}
