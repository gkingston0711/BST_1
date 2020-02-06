#include<iostream>
#include"list.h"
using namespace std;

int main ()
{
    int opt1;
    BST TEST;

    do{

        cout<<"enter 1 to print tree: "<<endl;
        cout<<"enter 2 to add data;"<<endl;
        cin>>opt1;
        cin.ignore(256,'\n');
        if(opt1==1)
        {
            TEST.print_tree();
        }
        if(opt1==2)
        {
            cout<<"what number do you want to add to tree: "<<endl;
            cin>>opt1;
            cin.ignore(256,'\n');

        TEST.add_data(opt1);
        }



    }while(opt1>0);

    return 0;
}
