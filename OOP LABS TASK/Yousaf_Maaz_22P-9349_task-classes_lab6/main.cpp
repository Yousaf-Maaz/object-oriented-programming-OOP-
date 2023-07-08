#include<iostream>
   #include<string>
   #include "classheader.h"
   using namespace std;
   

   
int main() 
{
        
        Favourite_Songs song__lists;
        int choice = 0;



    while (choice != 6) 
        {
                cout<<"---------------------------------------------\n";    
                cout << "Choose operation:\n";
                cout<< "1. Add a song\n";
                cout<< "2. Update a song\n";
                cout<< "3. Delete a song\n";
                cout<< "4. Print your favourite songs\n";
                cout<< "5. Create backup\n";
                cout<< "6. Exit" << endl;
                cout<<"---------------------------------------------\n"; 
                cin >> choice;
                
                
                
                
                
                switch (choice)
                {
                    case 1: 
                    {
                    string song;
                    cout<<"---------------------------------------------\n"; 
                    cout << "Enter the name of the song you want to add to your list: ";
                    cin.ignore();
                    getline(cin, song);
                    song__lists.addSong(song);
                    break;
                    }


                        case 2: 
                        {
                        int i;
                        cout<<"---------------------------------------------\n"; 
                        cout << "Enter the index number of the song you want to update: ";
                        cin >> i;
                        string song;

                        cout << "Enter the new name of the song: ";
                        cin.ignore();
                        getline(cin, song);
                        song__lists.updateSong(i, song);
                        break;
                        }



                            case 3: 
                            {
                            string song;
                            cout<<"---------------------------------------------\n"; 
                            cout << "Enter the name of the song you want to delete: ";
                            cin.ignore();
                            getline(cin, song);
                            song__lists.deleteSong(song);
                            break;
                            }



                                case 4:
                                {
                                song__lists.printSongs();
                                break;
                                }


                                    case 5:
                                    {
                                    song__lists.createBackup();
                                    break;
                                    }


                                        case 6: 
                                        {
                                        cout << "Exiting program." << endl;
                                        cout<<"---------------------------------------------\n"; 
                                        break;
                                        }
                                        default:
                                        cout << "Invalid choice. Please choose a number between 1 and 6." << endl;
                                        break;
                    
                    
                   }
                
                
            }
                
                
                
return 0;

 }



