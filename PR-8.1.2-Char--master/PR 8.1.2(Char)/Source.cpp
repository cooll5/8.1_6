#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

char* Change(char* s)
{
	char* t = new char[strlen(s)];
	char* p;
	int pos1 = 0,
		pos2 = 0;
	*t = 0;

	while (p = strchr(s + pos1, 'a'))
	{
		if (s[p - s + 1] == 'b')
		{
			if (s[p - s + 2] == 'c')
			{
				pos2 = p - s + 3;
				strncat(t, s + pos1, pos2 - pos1 - 3);
				strcat(t, "**");
				pos1 = pos2;
			}
			else {
				break;
			}
		}
		else {
			break;
		}
	}


	strcat(t, s + pos1);
	strcpy(s, t);

	return t;
}

int main()
{
	char Str[101];
	char ModStr[101];

	cout << "Enter string:" << endl;
	cin.getline(Str, 50);

	Change(Str);
	strcpy(ModStr, Str);


	cout << "Modified string:" << ModStr << endl;


	return 0;
}