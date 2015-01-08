#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{  string needle, haystack[51],a = "que";
    int i = 0;
    
    cout << "Enter String to be found:" <<endl;
    cin >> needle;
    cout << "Enter array of strings." << endl; 
    cout << "(write";
    cout << " stop to terminate filling the array)";
    
    while (a != "stop"){
        cin >> haystack[i];
        a = haystack[i];
        i++;
    }
    
    for (i = 0; i < 50; i++){
        a = haystack[i];
        if (a == needle){
            cout << "The was detected on";
            cout << " position " << i ;
            cout << " on the haystack"<< endl;
            break;
        }
    }
    if (a != needle){
        cout << "No such string found." << endl;
    }
   
   return 0;
}
