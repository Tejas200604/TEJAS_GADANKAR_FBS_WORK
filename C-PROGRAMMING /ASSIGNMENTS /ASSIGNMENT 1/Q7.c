//Calculating total salary based on basic. If basic <=5000 da, ta and hra will be
//10%,20% and 25% respectively otherwise da, ta and hra will be 15%,25% and 30%
//respectively.

#include<stdio.h>
int main(){
	int basicsalary=5000;
	int totalsalary,da,ta,hra;
	
	if(basicsalary<=5000){
		da=0.1*basicsalary;
		ta=0.2*basicsalary;
		hra=0.25*basicsalary;
		
		totalsalary=basicsalary+da+ta+hra;
		printf("%d",totalsalary);
		}
	
	else{
		da=0.15*basicsalary;
		ta=0.25*basicsalary;
		hra=0.3*basicsalary;
		
		totalsalary=basicsalary+ta+da+hra;
		printf("%d",totalsalary);
	}
}


