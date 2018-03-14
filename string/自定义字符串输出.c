#include<stdio.h>
#include<string.h>
void fit(char *, int);


int main(void)
{
	char mesg[] = "things shloud be as simple as possible,"
		"but not simpler.";
	puts(mesg);
	fit(mesg, 38);
	puts(mesg);
	puts("Let's look at the some more of the string.");
	puts("mesg+39");
	return 0;
}

void fit(char *string, int size)
{
	if (strlen(string) > size)
		string[size] = '\0';
}