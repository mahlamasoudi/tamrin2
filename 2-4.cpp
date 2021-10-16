#include<iostream>
using namespace std;

int main()
{
	int n;
	float score = 0, max=-1, min=100, miangin=0;

	cout << "number of students >> ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "score of student" << i + 1 << " >>";
		cin >> score;
		if (score > max)
			max = score;
		if (score < min)
			min = score;
		miangin += score;

	}

	cout << "miangin >>" << miangin/n << endl;
	cout << "max >>" << max << endl;
	cout << "min >>" << min << endl;
	
	system("pause");
	return 0;


}