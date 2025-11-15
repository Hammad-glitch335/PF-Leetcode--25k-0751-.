#include<stdio.h>
void movezero(int size, int *nums){
	int zero=0,nonzero=0;
	for(int i=0;i<size;i++){
		if(nums[i]==0){
			zero++;
		}
		else{
			nonzero++;
		}
	}
	int zeroarray[zero];
	int nonzeroarr[nonzero];
	int j=0,k=0,z=0;
	for(int i=0;i<size;i++){
		if(nums[i]==0){
			zeroarray[j]=nums[i];
			j++;
		}
	}
	for(int i=0;i<size;i++){
		if(nums[i]!=0){
			nonzeroarr[k]=nums[i];
			k++;
		}
	}
	for(int i=0;i<nonzero;i++){
			nums[i]=nonzeroarr[i];
	}
	for(int i=nonzero;i<nonzero+zero;i++){
			nums[i]=zeroarray[z];
	}
}
int main(){
	int nums[] = {0,1,0,3,12};
	int size=sizeof(nums)/sizeof(nums[0]);
	movezero(size,nums);
	printf("\nUpdated array is: \n");
	for(int i=0;i<size;i++){
		printf("%d ",nums[i]);
	}
	return 0;
}
