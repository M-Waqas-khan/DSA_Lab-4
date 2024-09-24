#include <iostream>
using namespace std;
int main()
{
    
   int search;
    cout<<"Enter value to Search : ";
    cin>>search;
    bool found=false;

    int numbers[10]={10,19,16,18,20,25,67,39,44,23};
    for (int i = 0; i < 10; i++)
    {
        if (numbers[i] == search)
        {
            cout<<"*****Search Found***** "<<endl;
            found=true;
        }
    }
    if(found==false)
    {
        cout<<"*****Search not Found*****"<<endl;
            
    }
}