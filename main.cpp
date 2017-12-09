#include<iostream>
#include<string>

using namespace std;

int main()
{
    int input;
    do
    {
        cout<<"\n==MACHINING HELPER==";
        cout<<"\nSelect which type of metal you are using: ";
        cout<<"\n (1).Aluminum";
        cout<<"\n (2).Steel";
        cout<<"\n (3).Other";
        cout<<"\n Answer (1/2/3): ";
        cin>>input;

        if(input=='1')
            {
            cout<<"\nDo you plan on: ";
            cout<<"\n.(A).Changing the shape of something already made?";
            cout<<"\n.(B).Making something new and specific?";
            cout<<"\n.(C).Buying a part?";
            }
        
        if(input=='2')
            {
            cout<<"\nIs it: ";
            cout<<"\n.(D).Sheet?";
            cout<<"\n.(E).Shape?";
            }
    }

    while(input!='3');

return 0;
}
