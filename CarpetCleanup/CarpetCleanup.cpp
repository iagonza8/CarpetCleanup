#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int smallRooms;
	int largeRooms;
	const double smallRoomPrice{ 25 };
	const double largeRoomPrice{ 35 };
	const double taxRate{ .06 };
	const double estimateExpiry{ 30 };

	cout << "Please enter number of small rooms: ";
	cin >> smallRooms;
	cout << "Please enter number of large rooms: ";
	cin >> largeRooms;
	cout << "Estimate for carpet cleaning sevice: " << endl;
	cout << "Number of small rooms: " << smallRooms << endl;
	cout << "Number of large rooms: " << largeRooms << endl;
	cout << "Price per small room: $" << smallRoomPrice << endl;
	cout << "Price per large room: $" << largeRoomPrice << endl;


	return 0;
}
