#include<stdio.h>

int main()
{
    int starting,ending,n;
    
	printf("Enter starting Number=");
	scanf("%d", &starting);
	
	printf("Enter ending Number=");
	scanf("%d", &ending);
	
	printf("All Numbers between %d and %d are:\n",starting, ending);
	
	for(n=starting;n<=ending;n++)
	  
	  printf("%d\n", n);
    
    return 0;
}
