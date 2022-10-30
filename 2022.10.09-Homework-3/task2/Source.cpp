#include<iostream>

int main(int argc, char* argv[])
{

	int cnt = 0;
	int n = 1;

	while (n != 0)
	{
		std::cin >> n;

		if (n % 2 == -1)
		{
			++cnt;
		}
	}

	std::cout << cnt;

	return EXIT_SUCCESS;
}