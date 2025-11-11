#include<stdio.h>
int* transformArray(int* nums, int numsSize) {
	for (int i = 0;i<numsSize;i++){
		if(nums[i]%2==0)
			nums[i]=0;
		else
			nums[i]=1;
	}
	for (int c = 0;c<numsSize-1;c++){
		for( int d=0; d<numsSize-c-1;d++){
			if(nums[d]>nums[d+1]){
				int swap= nums[d];
				nums[d]=nums[d+1];
				nums[d+1]=swap;
			}
		}
	}
	return nums;
}
int main(){
	int size;
	printf("\nEnter size: ");
	scanf("%d",&size);
	int nums[size];
	printf("\nEnter values : ");
	for (int i=0;i<size;i++){
		scanf("%d",&nums[i]);
	}
	int *ptr= transformArray(nums, size);
	for (int i = 0;i<size;i++){
		printf("%d ", ptr[i]);
	}
}
