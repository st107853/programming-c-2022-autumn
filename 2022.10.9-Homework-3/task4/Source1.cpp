#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int a = 1;
	int b = 0;
	int c = 0;
	int d = 0;

	std::cin >> n;

	do
	{
		c = 0;
		d = 0;
		b = 1;
		do
		{
			std::cout << abs(a + c - ((a + c) / n) * 2 * n) << " ";
			++c;
			++d;
			++b;
		} while (d < n);
		
		std::cout << std::endl;
		++a;
	} while (a <= n);

	return EXIT_SUCCESS;
}