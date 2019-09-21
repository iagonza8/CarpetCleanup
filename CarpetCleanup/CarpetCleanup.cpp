#include <iostream>
using namespace std;

int main()
{
	int smallRooms;
	int largeRooms;
	double total;
	double estimate;
	const double smallRoomPrice{ 25 };
	const double largeRoomPrice{ 35 };
	const double taxRate{ .06 };

	cout << "Please enter number of small rooms: ";
	cin >> smallRooms;
	cout << "Please enter number of large rooms: ";
	cin >> largeRooms;
	cout << "Estimate for carpet cleaning sevice: " << endl;
	cout << "Number of small rooms: " << smallRooms << endl;
	cout << "Number of large rooms: " << largeRooms << endl;
	cout << "Price per small room: $" << smallRoomPrice << endl;
	cout << "Price per large room: $" << largeRoomPrice << endl;
	total = (smallRoomPrice * smallRooms) + (largeRoomPrice * largeRooms);
	cout << "Cost: $" << total << endl;
	cout << "Tax : $" << taxRate * total << endl;
	cout << "========================================" << endl;
	cout << "Total estimate: $" << (taxRate * total) + total << endl;
	cout << "This estimate is valid for 30 days.";
	return 0;
}
