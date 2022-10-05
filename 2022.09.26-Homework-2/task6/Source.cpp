#include<iostream>

int main(int arg, char* argv[])
{
	int l = 0;
	int c = 0;
	int lf = 0;
	int cf = 0;

	std::cin >> l >> c >> lf >> cf;

	if ((l == lf) || (c == cf) || (l - lf == c - cf) || (l - lf + c - cf == 0))
	{
		std::cout << "YES";
	}
	else
	{
		std::cout << "NO";
	}

	return EXIT_SUCCESS;
}