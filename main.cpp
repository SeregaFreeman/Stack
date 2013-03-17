#include "stacklib.h"
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    Node *stack=NULL;
    int number=0,elements;
    cout<<"Enter number of elements: "<<endl;
    cin>>elements;
    for (int i=0; i<elements; ++i)
    {
        number=-100+rand()%201;
        cout<<"Element:"<<number;
        push(stack,number);
        cout<<endl;
    }

    cout<<endl<<"Element on top: "<<ontop(stack)<<endl;
    cout<<"How many elements do you want to delete?";
    int hm;
    cin>>hm;
    for (int i=0; i<hm; i++)
    {
        cout<<endl<<"Delete the last element: "<<pop(stack);
        cout<<endl<<"Element on top: "<<ontop(stack);
        cout<<endl<<"Is stack empty? "<<endl<<isempty(stack)<<endl;
    }

    clear(stack);
    cout<<endl<<"Stack was cleared";
    cout<<endl<<"Is stack empty now?"<<endl<<isempty(stack);
    return 0;
}
