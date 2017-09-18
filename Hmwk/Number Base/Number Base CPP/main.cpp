/* 
 * File: 
 * Author: Jose Morales
 * Purpose:
 * Created on September 18, 2017, 11:59 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void convert(int,char[],int,int);
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    const int SIZE = 36;    //Size of the array.
    char array[SIZE] = {0}; //Set the array to store Base amounts
    int base;               //Base the user picks
    int num;                //Number to convert
    
    //Let the User choose a base for the program
    cout<<"Insert a Number:";
    cin>>num;
    cout<<"Insert a Base:";
    cin>>base;
    
    //Used to convert into string.
    convert(SIZE,array,num,base);
    
    //Set the char values from 0-9
    for(int c=0;c<10;c++){
        array[c] = c+48;
    }
    
    //Set the char values from A-Z
    for(int c=10;c<36;c++){
        array[c] = c+55;
    }
    
    //Test the array
    for(int c=0;c<SIZE;c++){
        //cout<<array[c]<<endl;
    }
    return 0;
}
void convert(int SIZE,char a[],int num,int base){
    int total=0;
    int test = 0;
    total=num/base;
    test= num%base;
    cout<<"Show Answer:"<<total<<endl;
    cout<<"Show MOD:"<<test<<endl;
}