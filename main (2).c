//////////////////////////
//	Project Stationery  //
//////////////////////////

#include <stdio.h>

int main()
{
	int i=0;
			
	unsigned long proc_id;
	
	asm ("mfpir %0" : "=r" (proc_id));

	printf("Core%d: Welcome to CodeWarrior!\r\n", proc_id>>5);

	asm("sc"); // generate a system call exception to demonstrate the ISR
		
	while (1) { i++; } // loop forever
//change again
}

