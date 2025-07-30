//Accept three sides of a triangle from the user and determine whether the triangle is
//equilateral, isosceles, or scalene.

#include<stdio.h>
int main(){
	int side1,side2,side3;
	
	printf("enter the sides");
	scanf("%d %d %d",&side1,&side2,&side3);
	
	if(side1==side2&&side2==side3){
		printf("triangle is equilateral");
	}
	else if(side1==side2||side2==side3||side3==side1){
		printf("triangle is isosceles");
	}
	else{
		printf("triangle is scalene");
	}
	return 0;
}
