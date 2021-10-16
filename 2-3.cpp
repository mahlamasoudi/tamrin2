#include<iostream>
using namespace std;



int main() {




	int h=0,m=0,s = 0,r=0;

	cout << "input Second >> ";
	cin >> s;
	h = s / 3600;
	r = s % 3600;
	m = r / 60;
	s = r % 60;
	

	cout <<h<<":"<<m<<":"<<s<< endl;
	system("pause");
	return 0;

}