//#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

using namespace std;
int Count(char* str)
{
	if (strlen(str) < 3)
		return 0;
	int k = 0;
	for (int i = 0; str[i] != 0; i++)
		if (str[i] == '+' && str[i+1] == '-' && str[i+2] == '=')
			k++;
	return k;
}
char* Change(char* str)
{
	char* tmp = new char[strlen(str) * 4 / 3 + 1];
	char* t = tmp;
	tmp[0] = '\0';
	int i = 0;
	while (str[i] != 0)
	{
		if (str[i] == '+' || str[i] == '-' || str[i] == '=')
		{
			
			 strcat_s(t,sizeof(t)+1, "**");
			t += 2;
			i += 1;
		}
		else
		{
			*t++ = str[i++];
			*t = '\0';
		}
	}
	*t++ = str[i++];
	*t++ = str[i++];
	*t = '\0';
	 strcpy_s(str,101, tmp);
	 return tmp;
}
int main()
{
	char str[101];
	cout << "Enter string:" << endl;
	cin.getline(str, 100);
	cout << "String contained " << Count(str) << " groups of '+ - ='" << endl;
	char* dest = new char[151];
	 dest=Change(str);
	cout << "Modified string (param) : " << str << endl;
	cout << "Modified string (result): " << dest << endl;
	
	return 0;
}
