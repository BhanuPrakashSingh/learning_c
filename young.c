#include <stdio.h>

int main() {
	int Ram, Shyam, Ajay;
	printf("Enter the age of Ram, Shyam and Ajay : \n");
	scanf("%d%d%d",&Ram,&Shyam,&Ajay);
	if(Ram > Shyam && Ram > Ajay)
	    printf("Ram is youngest.\n");
	else if(Shyam > Ram && Shyam > Ajay)
	    printf("Shyam  is youngest.\n");
	else 
	    printf("Ajay is youngest.\n");
	return 0;
}