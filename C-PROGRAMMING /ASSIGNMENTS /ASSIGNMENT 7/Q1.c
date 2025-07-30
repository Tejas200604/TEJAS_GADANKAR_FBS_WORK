//Search the given number in array...

#include<stdio.h>
int main(){
	int arr[5];
	int i,num,flag=0;
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter the number to search in the array");
	scanf("%d",&num);
	
	for(i=0;i<5;i++){
		if(num==arr[i]){
			flag=1;
			break;
		}
	}
	if(flag=1){
		printf("Number is present.");
	}	
	else{
		printf("Number is absent.");
	}
    return 0;
}
