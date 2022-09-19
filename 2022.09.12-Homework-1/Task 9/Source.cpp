#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int x = 0;

	cin >> x;

	int sq = x * x; // x^2
	int tet = sq * sq; // x^4 

	cout << 1 + x + sq + tet/x + tet << endl;

	return EXIT_SUCCESS;
}