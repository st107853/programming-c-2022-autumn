#include<iostream>

int main(int argc, char* argv[])
{
	int c = 1;
	int n = 0;

	std::cin >> n;

	do
	{
		int i = 0;
		int d = c - n;

		do
		{
			std::cout << n - abs(d) << " ";
			++i;
			++d;

		} while (i != n);

		std::cout << std::endl;

		++c;

	} while (c <= n);

	return EXIT_SUCCESS;
}