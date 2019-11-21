#include <stdio.h>
#include <stdlib.h>
#include<string.h>

void main(void)
{
	char str[100];
	int i;
	FILE *fp;
	
	fp =fopen("sample.txt", "r");
	for(i=0;i<3;i++)
	{
		
		//printf(" input a world : ");
		//scanf("%s", &str);		
		fscanf(fp, "%s", str);
		printf("%s\n",str);
	}
	fclose(fp);
	return 0;
	
	
}
