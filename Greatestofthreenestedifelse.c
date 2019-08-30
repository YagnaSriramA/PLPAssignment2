#include <stdio.h>
main()
{
	int firstvalue, secondvalue, thirdvalue; //declaring three values
	printf("Enter the three values\n");
	scanf("%d%d%d",&firstvalue,&secondvalue,&thirdvalue); //taking in the values from the user
	if(firstvalue>secondvalue)
	{
		if(firstvalue>thirdvalue)
		{
			printf("%d is the greatest number",firstvalue); //because its greater than second and third values
		}
		else
		{
			printf("%d is the greatest number",thirdvalue); //because its greater than second value but not greater than the third value
		}
	}
	else
	{
			if(secondvalue>thirdvalue)
		{
			printf("%d is the greatest number",firstvalue); //because its already evident that first value is greater than second value and if second value is greater than third value, its obvious that the first value is the greatest among all the three values
		}
		else
		{
			printf("%d is the greatest number",thirdvalue); //because the first value is only greater than the second balue but not greater than the third value
		}
	}
	
}
