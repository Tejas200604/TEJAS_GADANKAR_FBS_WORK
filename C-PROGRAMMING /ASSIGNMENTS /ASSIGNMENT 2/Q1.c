//Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the
//desired operations.

#include<stdio.h>
int main(){
	int num1,num2,result;
	char oper;
    printf("enter the numbers");
	scanf("%d %d",&num1,&num2);
	
	printf("enter the operator(+,-,/,*,%)");
	scanf(" %c",&oper);
	
	if(oper=='+')
	{
		result=num1+num2;
	}
	else if(oper=='-'){
		result=num1-num2;
	}
	else if(oper=='*'){
		result=num1*num2;
	}
	else if(oper=='/'){
		result=num1/num2;
	}
	else if(oper=='%'){
		result=num1%num2;
	}
	else{
		printf("enter valid operator");
	}
	printf("result:%d",result);
	return 0;
}
