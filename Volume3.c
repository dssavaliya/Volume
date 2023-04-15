#include<stdio.h>
enum week_days
{
	monday,tuesday,wednesday,thursday,friday,saturday,sunday
};
main()
{	
	int i;
	for(i=monday;i<=sunday;i++)
	{
		printf("%d",i);
	}
}
