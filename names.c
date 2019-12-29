#include <stdio.h>
#define N 20
main()
{
	char str1[N];
	int n, i, max=0, j, letter=0, k, flag=1;
	#salammama!!!
	scanf("%d", &n);
	for (i=0;i<n;i++)
	{
		letter=1;
		scanf("%s", str1);
		for (j=0;str1[j]!='\0';j++)
		{
			flag=1;
			for (k=0;k<j;k++)
			{
				if (str1[k]==str1[j])
				{
					flag=1;
					break;
				}
				else
				{
					flag=0;
				}
			}
			if (flag==0)
			letter ++;
		}
		if (letter>=max)
			max=letter;	
	}
		printf("%d", max);
}
