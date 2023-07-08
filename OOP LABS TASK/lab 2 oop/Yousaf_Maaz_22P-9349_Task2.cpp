#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main()
{
  string  input;
  char  A;
  string vowel={'a','e','i','o','u','A','E','I','O','U'};
  int vowel_count=0;
  int consonant_count=0;
  int chartercounter;
  
for(int i=0 ; ;i++)//I use for loop we also use while 
{
    cout<<"-------------------------------------------------------\n";
    cout<<"(A) Count the number of vowels in the string\n";
    cout<<"(B) Count both the vowels and consonants in the string\n";
    cout<<"(C) Display the most frequent character in the string.\n";
    cout<<"(D) Concatenate another string with the existing string.\n"; 
    cout<<"(E) Exit the program.\n";
    cout<<"-------------------------------------------------------\n";
    cout<<("Enter a words : ");
    cin>>input;
    chartercounter=input.length();
    cout<<"Enter which you want:\n";
    cin>>A;

       if(A=='A' || A=='a')
       {
          cout<<"--------\n";
             for(int j=0 ;j<chartercounter;j++)
             {
                for(int k=0 ;k<10;k++)
                  {
                     if(input[j]==vowel[k]) 
                         vowel_count++;
                  }
 
            }

              cout<<vowel_count<<" is the number vowel letter\n\n\n";
       }
else if(A=='B' || A=='b')
{
 for(int j=0 ;j<chartercounter;j++)
   {
    if(input[j]=='a' || input[j]=='e' || input[j]=='i' || input[j]=='o' || input[j]=='u')
    vowel_count++;
    else
    consonant_count++;
   }
    cout<<vowel_count<<" is the number vowel letter "<<consonant_count<< " is consonant\n";
}
else if(A=='C' || A=='c')
 {
     char alphabet=input[0];
        int count=1;
        int count_max=1;
    for(int i=0;i<chartercounter;i++)
    {
        count=1;
        for(int j=i+1;j<chartercounter;j++)
            {
                if(input[i]==input[j])
                count++;
            }
            if(count>count_max)
            {
                count_max=count;
                alphabet=input[i];
            }
            
     }
            cout<<"\nThe most occuring word is- "<<alphabet << " -which occurs "<<count_max<<" times\n";
            
}

else if(A=='D' || A=='d')  
   {
            string secondone;//for comparision add second one
            cout<<"\nEnter a new word:\n";
            cin>>secondone;
            input.append(secondone);//concatenated function from striing libary.
            cout<<"\nconcatenated string is --"<<input<<"\n";
            
            
    }    
else if(A=='E' || A=='e')
{
  return 0;
}

else
cout<<"wrong option enter sorry please try again and select the given options\n";
}
  return 0;
}