#include<iostream>
using namespace std;

int main()
{ 
	int n,x=1,y=1,z=0;
	cout << "input n >> ";
	cin >> n;
	cout << x <<" "<<y;
	for (int i = 2; i < n; i++)
	{
		z = x + y;
		cout <<" "<< z;
		x = y;
		y = z;
	}
	cout << endl;


	system("pause");
	return 0;
}