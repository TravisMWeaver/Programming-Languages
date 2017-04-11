#include <stdio.h>
#include <stdlib.h>

#define EMERGENCY_TEST red

enum HospitalCodes
{
	blue,
	red,
	orange,
	silver,
	grey,
	amberAlert,
	internalTriage,
	externalTriage,
	rapidResponseTeam,
	clear
};

int main(void)
{
	enum HospitalCodes currentEmergencyCode = EMERGENCY_TEST;
	enum HospitalCodes clearEmergencyCode;

	if(currentEmergencyCode == red)
	{
		printf("Alert(%d): Fire!!!\n", currentEmergencyCode);
	}

	if(currentEmergencyCode == 1)
	{
		printf("Alert(%d): Fire!!!\n", currentEmergencyCode);
	}

	printf("\nSince the above statement printed twice, C enums are coerced to integers starting at index 0.\n");

	/*
	 * Nonsensical enum operation
	 */

	clearEmergencyCode = externalTriage + orange;

	if(clearEmergencyCode == clear)
	{
		printf("\nAlert(%d): All Clear\n", clearEmergencyCode);
	}

	return(EXIT_SUCCESS);
}