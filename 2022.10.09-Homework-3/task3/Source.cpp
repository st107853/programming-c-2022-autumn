#include<iostream>

int main(int argc, char* argv[])
{
	int c = 1;
	int n = 0;

	std::cin >> n;

	do
	{
		int i = 0;

		do
		{
			std::cout << i + c << ' ';
			++i;

		} while (i != n);

		std::cout << std::endl;

		++c;

	} while (c <= n);

	return EXIT_SUCCESS;
}