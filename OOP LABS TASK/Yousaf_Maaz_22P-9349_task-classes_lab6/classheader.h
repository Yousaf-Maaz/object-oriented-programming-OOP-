#include <string>
using std::string;



class Favourite_Songs {
//by default private.
    int size;
    string* arr_songs;
public:
    Favourite_Songs();//constructor because of some error created...
    Favourite_Songs(const Favourite_Songs& newone);//copy constructor 
    ~Favourite_Songs();//destructor
    
    void addSong(string song);//for addition song 
    void deleteSong(string song);//deletion
    void updateSong(int index, string song);//for updating 
    void printSongs() const;//shows all and constant because for not change by user and good programming practice
    void createBackup();//for backup the name using copyconstructor 
    //In backup method some help is taken from github thats why i used *this... 
    

};