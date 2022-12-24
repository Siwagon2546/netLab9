#include <iostream>

using namespace std;

int main()
{
    int age,height,bounty;
    string CH[7] ={"Zoro","Sanji","Usopp","Chopper","Franky","Brook","Jinbe"},character;
    cout<<"Enter your age: ";
    cin>>age;
    if (age <= 25)
    {
        cout<<"Enter your height: ";
        cin>>height;
        if (height<100)
        {
        character=CH[3];
        }
        else if (height<180)
        {
        character=CH[2];
        }
        else
        {
        cout<<"Enter your bounty: ";
        cin>>bounty;
        if (bounty>1100000000)
        {
            character=CH[0];
        }
        else
        {
            character=CH[1];
        }
        }
        
    }
    else if(age <=60)
    {
        cout<<"Enter your bounty: ";
        cin>>bounty;
        if(bounty>500000000)
        {
            character=CH[6];
        }
        else
        {
            character=CH[4];
            
        }
    }
    else
    {
    character=CH[5];
    }
    cout<<"Your character = "<<character;
}
    


/*
"Enter your age: "
"Enter your height: "
"Enter your bounty: "
"Your character = "
"Zoro"
"Sanji"
"Usopp"
"Chopper"
"Franky"
"Brook"
"Jinbe"
*/
