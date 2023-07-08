#include<iostream>
#include<string>
#include<cstring>
using namespace std;
void showAvailableRooms();
void bookRoom();
int floors=4;
   int rooms=5;
   int business_class_rooms=10000;
   int economy_class_rooms=6000;
   int hotelrooms[4][5];

int main()
{
int select;
while (select != 3)
{
 
        cout << "Select an option: " << endl;
        cout << "1. Book a room" << endl;
        cout << "2. Show available rooms" << endl;
        cout << "3. Exit the program" << endl;
        cin >> select;

        switch (select) 
        {
            case 1:
                bookRoom();
                break;
            case 2:
                showAvailableRooms();
                break;
            case 3:
                break;
            default:
                cout << "Invalid option. " << endl;
                break;
        }
} 

    return 0;
}
 void showAvailableRooms() {
    cout << "Available Rooms: " << endl;
    for (int floor = 0; floor < 4; floor++) {
        for (int room = 0; room < 5; room++) {
            if (hotelrooms[floor][room] == 0) {
                cout << "Floor " << floor + 1 << ", Room " << room + 1 << ": -" << endl;
            }
            else {
                cout << "Floor " << floor + 1 << ", Room " << room + 1 << ": *" << endl;
            }
        }
    }
}

void bookRoom() {
    int floor, room, days;
    cout << "Enter the floor number you wants man: ";
    cin >> floor;
    floor--;
    cout << "Enter the room number you wanna plz: ";
    cin >> room;
    room--;
    cout << "Enter the number of days you want to stay here: ";
    cin >> days;

    if (floor<=2) {
        hotelrooms[floor][room] = days;
        int total_cost = business_class_rooms * days;
        cout << "Floor " << floor + 1 << ", Room " << room + 1 << " successfully booked for " << days << " days" << endl;
        cout << "Your total cost is " << total_cost << " Rs." << endl;
    }
     else if(floor>2){
        int total_cost=economy_class_rooms*days;
        cout << "Your total cost is " << total_cost << " Rs." << endl;
    }
    else {
        cout << "Room is already booked." << endl;
    }
}