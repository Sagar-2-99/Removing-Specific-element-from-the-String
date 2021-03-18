#include <iostream>

using namespace std;

char removeX(char b[], char d)
{
    if(b[0]=='\0')
    {
        return 0;
    }
    else if(b[0]!=d)
    {
        removeX(b+1,d);
    }
    else
    {
        int i=1;
        for(; b[i]!='\0'; i++)
        {
            b[i-1]=b[i];
        }
        b[i-1]=b[i];
        removeX(b,d);
    }
}

int main()
{
    while(1)
    {
        cout<<"Enter 1 to continue or any other key to exit"<<endl;
        int c;
        cin>>c;
        if(c==1)
        {
            cout <<"Enter the size of the string you want to enter"<<endl;
            int a;
            cin>>a;
            if(a==0)
            {
                cout<<"Enter the valid length"<<endl;
            }
            else
            {
                char b[a];
                cout<<"Enter the string "<<endl;
                cin>>b;
                cout<<"Enter the symbol you want to remove from the string: "<<endl;
                char d;
                cin>>d;
                removeX(b,d);
                cout<<b<<endl<<endl;
            }
        }
        else
        {
            break;
        }
    }
}
