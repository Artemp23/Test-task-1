#include <iostream>
#include <string>
using namespace std;

void transcript();

int main()

{
    transcript();
    return 0;
}

void transcript()
{
    cout << "Enter word:\n";
    string word;
    getline(cin, word);
    
    //cin >> word;

    int n = word.length();

    char char_array[255];
    strcpy(char_array, word.c_str());
    _strlwr(char_array);

    cout << "You entered: "<< char_array << "\n";

    char char_array2[255];
    memcpy(char_array2,char_array,255);
 
    for (int i = 0; i < n; i++)
    {
        for (int a = 0; a < n; a++)
        {   
           if (char_array[i] == char_array2[a] && i != a)
           {   
               cout << ")";
               break;
            }
           else
           {
               if (a == n-1)
               {cout << "(";}
           }
        }
    }
}