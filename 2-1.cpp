#include<iostream>
#include<string>
using namespace std;

int main()
{
	int x,sum=0;
	string str = "";
	while (str != "exit")
	{
		cout << "input number >> ";
		cin >> x;
		sum += x;

		cout << "write exit for stoping and no for continue >> ";
		cin >> str;
	}

	cout << "this is the sumatiom of numbers >>" << sum << endl;


	system("pause");
	return 0;
}