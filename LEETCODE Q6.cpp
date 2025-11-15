#include<stdio.h>
void removeduplicates(int *nums,int size){
	int k=0,j=0;
	for(int i=0;i<size;i++){
		if(nums[i]==nums[i+1]){
			k++;
		}
		if(nums[i]!=nums[i+1]){
			nums[j]=nums[i];
			j++;
		}
	}
	for(int i=j;i<size;i++){
		nums[i]=0;
	}
	printf("\nk=%d ",k);
}
int main(){
	int nums[] = {0,0,1,1,1,2,2,3,3,4};
	int size=sizeof(nums)/sizeof(nums[0]);
	printf("\nArray\n");
	for(int i=0;i<size;i++){
		printf("%d ",nums[i]);
	}
	removeduplicates(nums,size);
	printf("Updated array\n");
	for(int i=0;i<size;i++){
		printf("%d ",nums[i]);
	}
}
