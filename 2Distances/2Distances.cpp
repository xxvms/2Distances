// 2Distances.cpp : Defines the entry point for the console application.
//

#include <iostream>

struct distance
{
	int meters;
};
distance biggerDistance(distance oneDistance_, distance twoDistance_);

int main()
{
	std::cout << "Please provide 1st distance: ";
	distance oneDistance;
	std::cin >> oneDistance.meters;
	std::cout << "Please provide 2nd distance: ";
	distance twoDistance;
	std::cin >> twoDistance.meters;

	distance BD = biggerDistance(oneDistance, twoDistance);

	std::cout << BD.meters << std::endl;

	system("pause");
    return 0;
}
distance biggerDistance(distance oneDistance_, distance twoDistance_)
{
	if (oneDistance_.meters > twoDistance_.meters)
	{
		return oneDistance_;
	}
	else
	{
		return twoDistance_;
	}

}

