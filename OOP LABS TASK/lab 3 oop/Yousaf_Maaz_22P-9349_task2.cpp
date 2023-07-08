#include<iostream>
#include<string>
using namespace std;

//structures
struct studentdata
   {
    string studentName;
    int marks[3];
    };

//functions declaration..
void dsiplaydata(studentdata student[3]);
float calculateaverage(studentdata student);
void change_marks(studentdata &student);
//main
int main()
{
            int choice;
            studentdata student[3];
            cout<<"\n-----------------------1--------------------------\n";
            cout<<"Enter student name:\n";
            cin>>student[0].studentName;

            for(int i=0;i<3;i++)
            {
                cout<<"Enter student marks for course"<<i+1<<":";
                cin>>student[0].marks[i];
            }

            cout<<"\n-----------------------2-------------------------\n";
            cout<<"Enter  student name:\n";
            cin>>student[1].studentName;

            for(int i=0;i<3;i++)
            {
                cout<<"Enter student marks for course"<<i+1<<":";
                cin>>student[1].marks[i];
            }
             
             cout<<"\n----------------------3----------------------------\n";
            cout<<"Enter student name:\n";
            cin>>student[2].studentName;

            for(int i=0;i<3;i++)
            {
                cout<<"Enter student  marks  for  course:"<<i+1<<":";
                cin>>student[2].marks[i];
            }



    while (choice!=4)
   {    
        cout<<"\n---------------------------------------------------\n";
        cout<<"\nMenu";
        cout<<"\n1.Display student data\n2.calculate Average marks\n3.change marks.\n\nplease select an option:";
        cin>>choice;

        if (choice==1)
        {
            dsiplaydata(student);
        }
        else if(choice==2)
        {
            int select;
            cout<<"Enter the student no:";
            cin>>select;
            if (select==1)
            {
                cout << "\nAverage marks of student 1: "<< calculateaverage(student[0]) << endl;
            }
            else if (select==2)
            {
                cout << "\nAverage marks of student 2:"<< calculateaverage(student[1]) << endl;
            }
            else if (select==2)
            {
                cout << "\nAverage marks of student 3:"<< calculateaverage(student[3]) << endl;
            }
            else
            cout<<"invaild input";
        }
    else if(choice==3)
    {

                    int studentnumber;
                    cout<<"Enter the student number:";
                    cin>>studentnumber;
                    if(studentnumber==1)
                    {
                        change_marks(student[0]);
                    }


                        

                    else if(studentnumber==1)
                    {
                        change_marks(student[0]);
                    }

                    else  if(studentnumber==2)
                    {
                        change_marks(student[1]);
                    }

                    else  if(studentnumber==3)
                    {
                        change_marks(student[2]);
                    }
                    else
                    cout<<"invaild input";
  }
    
    else{
    cout<<"invaild input";
     cout<<"\n--------------------------------------------\n";
   // break;
    }
}
    

}

//functions 
void dsiplaydata(studentdata student[3])
{
    cout<<"first student name:"<<student[0].studentName;
    cout<<"\ncourse 1 marks:"<<student[0].marks[0];
    cout<<"\ncourse 2 marks:"<<student[0].marks[1];
    cout<<"\ncourse 3 marks:"<<student[0].marks[2];

    cout<<"\nsecond student name:"<<student[1].studentName;
    cout<<"\ncourse 1 marks:"<<student[1].marks[0];
    cout<<"\ncourse 2 marks:"<<student[1].marks[1];
    cout<<"\ncourse 3 marks:"<<student[1].marks[2];

    cout<<"\nThird student name:"<<student[2].studentName;
    cout<<"\ncourse 1 marks:"<<student[2].marks[0];
    cout<<"\ncourse 2 marks:"<<student[2].marks[1];
    cout<<"\ncourse 3 marks:"<<student[2].marks[2];

    return;

}

float calculateaverage(studentdata student)
{
  int i;
  float  sum = 0;
  
  for (i = 0; i < 3; i++) {
    sum += student.marks[i];
  }
  
  return sum / 3;
}

void change_marks(studentdata &student)
{
    
  int course_num;
  float new_mark;

  
  cout << "Enter the course number (1, 2, or 3): ";
  cin >> course_num;
  cout << "Enter the new mark: ";
  cin >> new_mark;
  
  student.marks[course_num - 1] = new_mark;

  cout << "The mark for course " << course_num << " of student "<< "has been updated to " << new_mark << endl;

  //return new_mark;
}





