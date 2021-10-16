#include<iostream>
using namespace std;

int main()
{
	int h=0, m=0, s=0,total;

	cout << "input Hour,Minute and Second >> ";
	cin >> h >> m >> s;
	total = (h * 3600) + (m * 60) + (s);
	cout << total << " second" << endl;
	system("pause");
	return 0;


}