#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int isOdd(num)
{
	return num % 2;
}

int main()
{
	int integer;
  int startNum;
	startNum = 295147;
	integer = floor(random() * startNum);
	
	int newInt = integer % 2;
	int i = 0;
	while (i == 0)
	{
		newInt = integer % 2;
		if(newInt == 0) {
			integer = integer / 2;
		}

		if(newInt == 1) {
			integer = integer * 3 + 1;
		}

		if(integer == 1) {
			printf("Finished! Started with %d\n", integer);
			break;
		}

		printf("%d\n", integer);
	}


	return 0;
}
