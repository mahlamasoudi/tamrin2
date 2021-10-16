#include<iostream>

using namespace std;

int main()
{
	int r=0;
	srand(time(0));

	while (r != 6)
	{
		r = rand() % 6 + 1;
		cout << r<<endl;
	}
	cout << "you win !" << endl;
	r = rand() % 6 + 1;
	cout << r << endl;
	r = rand() % 6 + 1;
	cout << r << endl;




	system("pause");
	return 0;
}