#include<iostream>

int main(int argc, char* argv[])
{

	int cnt = 0;
	int a = 1;

	while (a != 0)
	{
		std::cin >> a;

		if (a % 2 == -1)
		{
			++cnt;
		}
	}

	std::cout << cnt;

	return EXIT_SUCCESS;
}