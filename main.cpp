#include <iostream>
#include <fstream>
#include <string>
#include <map>
using namespace std;

int main()
{
    
    
//    string line;
//    if (myfile1.is_open())
//    {
//        while (getline(myfile1, line))
//        {
//            cout << line << '\n';
//        }
//        myfile1.close();
//    }
//    else cout << "Unable to open file";
    
    string myStr;
//    int myKey = 1;
//    int NumWord = 1;
//    int i;
//

    cout << "Enter words: (enter when done) " << endl;
    map <string, int> tallyMap;
    while (true)
    {
        cin >> myStr;
        if (myStr == "enter")
        {
            break;
        }
        else if (tallyMap.find(myStr) != tallyMap.end())
        {
            tallyMap[myStr]++;
            
        }
        else
        {
            tallyMap[myStr] = 1;
        }
    }
    
    ofstream myfile;
    myfile.open("output.txt");
    myfile << "Words sorted: " << endl << endl << endl;
    for (map <string, int>::const_iterator it = tallyMap.begin();
         it != tallyMap.end(); it++)
    {
        int j = it->second;
        while (j > 0)
        {
            myfile << it->first << endl;
            j--;
        }
    }
    myfile.close();
    return 0;
    
}
