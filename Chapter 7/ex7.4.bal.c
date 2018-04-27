#include <stdio.h>
#define MAXVAL 1000
int main(int argc, char* argv[])
{
	printf("Enter as many as %d values, ^D to end: ", MAXVAL);

	/* This algorithm imposes an upper limit of 1000 to input integers
	   int values[MAXVAL];
	   int value;
	   int maxVal = 0;
	   while (scanf("%d", &value) == 1)
	   {
	        values[value]++;
	        maxVal = value > maxVal ? value : maxVal;
	   }
	   printf("Value\tFreq.\n");
	   for (int i = 0; i <= maxVal; i++)
	        if (values[i] != 0)
	                printf("%4d\t%4d\n", i, values[i]);
	 */

	/* No predefined upper limit - set only by the system.
	        Note: Array still only holds MAXVAL amount of integers */
	int values[MAXVAL];
	int frequencies[MAXVAL];
	int value, index = 0;
	while (scanf("%d", &value) == 1)
	{
		// Boolean to check if the value has already been documented
		int foundVal = 0;
		for (int i = 0; i <= index; i++)
			if (values[i] == value) // Checks if value already in values array
			{
				foundVal = 1; // If it is, flag boolean and
				frequencies[i]++; // increment frequency
			}
		if (!foundVal) // If it isn't,
		{
			values[index] = value; // add it to the values array
			frequencies[index] = 1; // and set the frequency to 1
			index++;                                // increment index to increase threshold
		}
	}
	printf("Value\tFreq.\n");
	for (int i = 0; i < index; i++)
		if (frequencies[i] != 0)
			printf("%4d\t%4d\n", values[i], frequencies[i]);
	return 0;
}
