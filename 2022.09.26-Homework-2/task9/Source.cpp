#include<iostream>

int main(int arg, char* argv[])
{
	int x = 0;
	int y = 0;
	int m = 0;
	int n = 0;

	std::cin >> m >> n >> x >> y;

	if (x > 1)
	{
		std::cout << x - 1 << " " << y << std::endl;
	}
	if (x < m)
	{
		std::cout << x + 1 << " " << y << std::endl;
	}
	if (y > 1)
	{
		std::cout << x << " " << y - 1 << std::endl;
	}
	if (y < n)
	{
		std::cout << x << " " << y + 1 << std::endl;
	}

	return EXIT_SUCCESS;
}