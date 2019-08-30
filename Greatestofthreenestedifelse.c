#include <stdio.h>
main()
{
	int firstvalue, secondvalue, thirdvalue;
	printf("Enter the three values\n");
	scanf("%d%d%d",&firstvalue,&secondvalue,&thirdvalue);
	if(firstvalue>secondvalue)
	{
		if(firstvalue>thirdvalue)
		{
			printf("%d is the greatest number",firstvalue);
		}
		else
		{
			printf("%d is the greatest number",thirdvalue);
		}
	}
	else
	{
			if(secondvalue>thirdvalue)
		{
			printf("%d is the greatest number",firstvalue);
		}
		else
		{
			printf("%d is the greatest number",thirdvalue);
		}
	}
	
}
