/*
  Author: Nishant Sood
     Org: Winacro innovations
*/

#include "osKernel.h"

#define QUANTA	10

uint32_t count0,count1,count2;

void Task0(void)
{
	while(1)
	{
		count0++;
		osThreadYield();
	}
	
}


void Task1(void)
{
	while(1)
	{
		count1++;
		osThreadYield();

	}
	
}


void Task2(void)
{
	while(1)
	{
		count2++;
	}
	
}

uint32_t freq;
int main(void)
{
	osKernelInit();
	osKernelAddThreads(&Task0,&Task1,&Task2);
	osKernelLaunch(QUANTA);
}

