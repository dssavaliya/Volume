#include<stdio.h>
struct Masure
{
	float feet;
	float inch;
}d1;
main()
{
	printf("Enter First Distance :\n");
	printf("Enter Feet : ");
	scanf("%f",&d1.feet);
	printf("Enter inch : ");
	scanf("%f",&d1.inch);
	
	
	while(d1.inch>=12.00){
		d1.inch = d1.inch - 12;
		++d1.feet;
	}
	printf("\nFInal Distance = %.1f'.%.1f''",d1.feet,d1.inch);
}
















