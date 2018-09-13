//Authors: Robert DeValentine
#include <iostream>
#include <string>

using namespace std; 

int main()
{
    
    // declaring the variables    
    string name1;
    string noun1;
    string noun2;
    string verb1;
    string verb2;
    string adjective1;
    string cnt;
    int age;
    int num2;

    // intro prompt
    cout<<"Welcome to madlibs to begin first press any key then enter to continue:";
    
    cin>>cnt;

    cout<<"To play the game enter the type of word when prompted to then press enter to continue";
    cout<<endl;

    //collecting the variables from cl
    
    cout<<"Please enter a proper name:";
    cin>>name1;
    cout<<endl;

    cout<<"Please enter a singular noun:";
    cin>>noun1;
    cout<<endl;

    cout<<"Please enter a numerical whole number > 1:";
    cin>>num2;
    cout<<endl;

    cout<<"Please enter a person's numerical whole age:";
    cin>>age;
    cout<<endl;

    cout<<"Please enter an action verb:";
    cin>>verb2;
    cout<<endl;

    cout<<"Please enter the present tense of your favorite weather verb:";
    cin>>verb1;
    cout<<endl;
    
    cout<<"Please enter a silly word that is plural:";
    cin>>noun2;
    cout<<endl;

    cout<<"Please enter an adjective:";
    cin>>adjective1;
    cout<<endl;

    //outputting the mad libs
    
    cout<<name1;
            
    cout<<" why is it always ";
    
    cout<<verb1;
    
    cout<<"? You asked but were soon scared by the large veiny";
    
    cout<<endl;

    cout<<noun1;
          
    cout<<" that you saw as you turned arround. Come with me if you want to ";
    
    cout<<verb2;

    cout<<"!";

    cout<<endl;

    cout<<"It screams. It is your destiny to find the ";

    cout<<num2;

    cout<<" ";

    cout<<adjective1;

    cout<<" ";

    cout<<noun2;

    cout<<" and save the world.";

    cout<<endl;

    cout<<"It yells. But I'm only ";

    cout<<age;

    cout<<" years old! You worry to yourself.";

    cout<<endl;
    
    cout<<"Thanks for playing.";

    cout<<endl;



  return 0;
}
