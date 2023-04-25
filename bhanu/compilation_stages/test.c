//Understanding Compilation stages
#include <stdio.h>
#include "test.h"


int main()
	{
#if YES
		printf("MAX:%d\n",MAX);
#else
		printf("sum=%d\n",SUB(a,b));
#endif
		return 0;
	}
