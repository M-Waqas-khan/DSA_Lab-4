#include <iostream>
#include <string>
using namespace std;
int linearSerach(string invertory[], int size, string target)
{
    for (int i=0; i<size; i++)
    {
        if(invertory[i]==target)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
  string invertory[10];
  int size;
  cout<<" Enter the size of array: ";
  cin>>size;
  for (int i=0; i<size; i++)
  {
    cout<<" Enter the array element at index: "<<i<<"\t";
    cin>>invertory[i];
  }
  size= sizeof(invertory)/sizeof(invertory[0]);
  string target;
  cout<<" Enter the value to be Search: "<<"\t";
  cin>>target;
  int result= linearSerach( invertory, size, target);
  if (result != -1)
  {
    cout<<" Element "<<target<<" found at index "<<result<< endl;
  }
  else
  {
    cout<<" Element "<<target<<" not found in the array "<<endl;
  }  
  return 0;
}