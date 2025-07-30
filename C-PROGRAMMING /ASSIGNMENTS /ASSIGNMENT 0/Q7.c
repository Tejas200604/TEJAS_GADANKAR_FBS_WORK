//Write a program to convert given minutes into hours and seconds....

void main(){
	int min=2547;
	int hr;
	int sec;
	
	hr=min/60;
	sec=min*60;
	printf("%d,%d,%d",hr,min,sec);
}
