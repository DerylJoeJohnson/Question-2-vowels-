#include<stdio.h>
#include<conio.h>
void main()
{	clrscr();
	char ch[200];
	int i,c1,c2,c3;
	c1=c2=c3=0;
	printf("\n Enter the Sentence :\n");
	gets(ch);
	for(i=0;ch[i]!='\0';i++)
	{	if((ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'||ch[i]=='A'||ch[i]=='E'||ch[i]=='I'||ch[i]=='O'||ch[i]=='U'))
		{	++c1;
		}
		else if((ch[i]>='a'&& ch[i]<='z'||ch[i]>='A'&& ch[i]<='Z'))
		{	++c2;
		}
		else if(ch[i]==' ')
		{	++c3;
		}
	}
	printf("\nThe count of vowels in the string : %d",c1);
	printf("\nThe count of consonants in the string : %d",c2);
	printf("\nThe spaces used equals : %d",c3);
	getch();
}