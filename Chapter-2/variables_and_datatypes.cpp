// { Driver Code Starts
#include<iostream>
using namespace std;

 // } Driver Code Ends

//class name with Solution, template having two public functions helloWorld and printNewLine.
class Solution{
    public:
    void helloWorld()
    {
        cout<<"Hello World"<<endl;
        //Type below cout<<"Hello World"; 
        //cout will output to console
    }
    void printNewLine() {
        cout<<"In printNewLine function() "<<endl;
        cout<<"\n"<<endl;
    }
};

// { Driver Code Starts.
int main()
{
    Solution ob; // object creation. means memory allocated.
    //function call
    ob.helloWorld(); // Object calling Function - Object is being used here. 
    ob.printNewLine();
    ob.helloWorld();
    cout<<endl;
    return 0;
}  // } Driver Code Ends