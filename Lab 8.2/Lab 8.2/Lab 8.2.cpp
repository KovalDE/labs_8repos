#include <iostream>
#include <string>
#include <string.h>
using namespace std;
size_t MaxLength(const string s)
{
	int max = 0,tmp=0;

	for (int i = 0;i < s.length();i++)
	{
    if (s[i] == ' ') while(s[i] == ' ')
	{ 
		tmp++;
		i++;
	}
	if (tmp > max)max = tmp;
	tmp = 0;
	}
	return max;	
}
int main()
{
	string str;
	cout << "Enter string:" << endl;
	getline(cin, str);
	cout << "Length of the largest number of spaces: " << MaxLength(str) << endl;
	return 0;
}
