#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int hf = 0;
	int mf = 0;
	int sf = 0;
	int hs = 0;
	int ms = 0;
	int ss = 0;
	int sum = 0;

	cin >> hf >> mf >> sf >> hs >> ms >> ss;

	sum = (hs - hf) * 3600 + (ms - mf) * 60 + ss - sf;

	cout << sum << endl;

	return EXIT_SUCCESS;
}