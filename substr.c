#include "string.h"
#include "stdio.h"

void main()
{
	int i,j=0,st=0,en=0,seq=1;
	char str[100000];
	//char str[]="FORCESABCDEFDIVGHIJKLMNOPQRSTUVWXYZ";
	scanf("%s",str);
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]==65 && j==0)
		{
			st=i;
			j++;
		}
		else
		{
			if(str[i]==90 && j==25)
			{	en=i;
				break;
			}
			if(str[i]==(65+seq) && j>0)
			{
				j++;
				seq++;
			}

		}

	}
	printf("%d\n",en-st+1);
}
