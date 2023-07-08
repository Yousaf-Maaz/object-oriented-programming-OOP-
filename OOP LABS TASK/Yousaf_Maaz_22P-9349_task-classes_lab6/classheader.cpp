#include<iostream>
#include "classheader.h"
using namespace std;




//destructor
Favourite_Songs::~Favourite_Songs() {
    delete[] arr_songs;
}



    // Copy constructor
    Favourite_Songs:: Favourite_Songs(const Favourite_Songs& newone) {
        size = newone.size;
        arr_songs = new string[size];
        for (int i = 0; i < size; i++) {
            arr_songs[i] = newone.arr_songs[i];
        }
    }


    //add song method

void Favourite_Songs::addSong(string song) {
    string* new_songs = new string[size + 1];
    for (int i = 0; i < size; i++) {
        new_songs[i] = arr_songs[i];
    }
    new_songs[size] = song;
    delete[] arr_songs;
    arr_songs = new_songs;
    size++;
}

//delete song method
void Favourite_Songs::deleteSong(string song) {
    int index = -1;
    for (int i = 0; i < size; i++) {
        if (arr_songs[i] == song) {
            index = i;
            break;
        }
    }
    if (index != -1) {
       string* new_songs = new string[size - 1];
        for (int i = 0; i < index; i++) {
            new_songs[i] = arr_songs[i];
        }
        for (int i = index + 1; i < size; i++) {
            new_songs[i - 1] = arr_songs[i];
        }
        delete[] arr_songs;
        arr_songs = new_songs;
        size--;
    }
}

//update song method.
void Favourite_Songs::updateSong(int index, string song)
 {
// if (index >= 0 && index < size){
//      for(int i =0;i<size;i++){
//           if(index==i)
//           {
//             delete[] arr_songs;
// arr_songs[i]=song;
//           }
// }
// }

    if (index >= 0 && index < size) {
        arr_songs[index] = song;
    }
    
}


//print for showing on console method


void Favourite_Songs::printSongs() const {
    for (int i = 0; i < size; i++) {
        cout << arr_songs[i] << endl;
    }
    //delete[] arr_songs;

}

void Favourite_Songs::createBackup() {
    Favourite_Songs backup(*this);//search on google that this use for backup.
    
}

// Constructor
    Favourite_Songs::Favourite_Songs() {
        size = 0;
        arr_songs = nullptr;
    }