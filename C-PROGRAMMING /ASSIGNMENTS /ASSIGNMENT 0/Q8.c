//Write a program to convert to input lenght and width of the rectangle and find its perimeter....

#include<stdio.h>
void main(){
	int length;
	int breadth;
	int per;
	printf("The length and breadth of the rectangle is");
	scanf("%d %d",&length,&breadth);
	
	per= 2*(length+breadth);
	printf("%d",per);
}
