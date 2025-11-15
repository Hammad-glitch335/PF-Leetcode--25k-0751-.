#include<stdio.h>
#include<string.h>
void reverse(char *string){
	int length = strlen(string);
	char temp[length];
	for (int i=0;i<length;i++){
		temp[i]=string[length-1-i];
	}
	strcpy(string,temp);
}
int main(){
	char string[]="hello";
	printf("\nBefore reverse : %s ",string);
	reverse(string);
	printf("\nAfter reverse : %s  ",string);
	return 0;
}
