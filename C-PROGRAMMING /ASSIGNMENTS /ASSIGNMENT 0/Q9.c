//Write a C program to input the base and height of a triangle and calculate its area.

#include<stdio.h>
void main(){
	int base;
	int height;
	int area;
	printf("The base and height of triangle is");
	scanf("%d %d",&base,&height);
	
	area=base*height;
	printf("%d",area);
}
