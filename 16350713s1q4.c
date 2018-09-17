#include <stdio.h>
int main (void)
{
	int sp, dp; //declaring systolic and diastolic measurements
				//sp = systolic pressure
				//dp = diastolic pressure
	
	printf("enter the systolic measurement: ");
	scanf("%d", &sp);
	
	printf("enter the diastolic measurement: ");
	scanf("%d", &dp);
	
	//if sp is 140 or more - high blood pressure, regardless of your dp.
	//if dp is 90 or more - high blood pressure, regardless your sp.
	if(sp>=140 && dp >=40 && dp<=100)
		printf ("high blood pressure", sp);
	
	else if(dp>=90 && sp>=70 && sp<=190)
		printf ("high blood pressure", dp);
	
	//if sp is 120 or more but less than or equal to 140 - pre high pressure, regardless of dp.
	//if dp is 80 or more but less than or equal to 90 - pre high pressure, regardless of sp.
	else if(sp>=120 && sp<= 140 && dp >=40 && dp<=100)
		printf ("pre high blood pressure", sp);
	
	else if(dp>=80 && dp<=90 && sp>=70 && sp<=190)
		printf ("pre high blood pressure", dp);
	
	//if sp is 90 or more but less than or equal to 120 - ideal, regardless of dp.
	//if dp is 60 or more but less than or equal to 80 - ideal, regardless of sp.
	else if(sp>=90 && sp<=120 && dp >=40 && dp<=100)
		printf ("ideal blood pressure", sp);
	
	else if(dp>=60 && dp<=80 && sp>=70 && sp<=190)
		printf ("ideal blood pressure", dp);
	
	//if sp is 90 or less - low blood pressure, regardless of your dp.
	//if dp is 60 or less - low blood pressure, regardless of your sp.
	else if(sp<=90 && dp >=40 && dp<=100)
		printf ("low blood pressure", sp);
	
	else if(dp<=60 && sp >=70 && dp<=190)
		printf ("low blood pressure", sp);
		
	
	
return 0;

}
	