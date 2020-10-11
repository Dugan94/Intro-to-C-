#include <iostream>
#include <fstream>
#include <iomanip>
#include <algorithm>
#include <string>
using namespace std;

int main() 
{
    string largestTwt;
    string fname; 
    string tmp;
    ifstream inFile;
    ifstream Input;
    ofstream Output;
    int longestLine = 0;      // The longest line so far in the file
    int lineCount = 0;        // Number of tweets (lines) in the file
    bool openFailed = false;  // Assume success
    int IDcount = 0; 
    int Hashtags = 0;
    int currentSize = 0;
    int lengthTotal = 0; 
    int largestLength = 0; 
    int largestTweet = 0; 
    int largestHash = 0;
   
    //inFile.open("allTweets.txt");

    // This do-while loop will set a boolean variable 'openFailed'
    // if the user gives us a bad filename, then continue to ask again.
    do {
        cout << "Filename to open?";

        // Wait for input of the filename
        getline(cin, fname);

        cout << "The filename is:" << fname << endl;
        cout << "Analysis for file allTweets.txt:" << endl;

        // Open the file
        inFile.open(fname.c_str());

        if (inFile.fail()) {
            cout << "Invalid filename, try again." << endl;
            openFailed = true;
        } 
    } while (openFailed);

       
        // The getline() inside the while() will
        // return FALSE when the end of the
        // file is reached.
        while (getline(inFile, tmp))
        {
         lineCount++;
          
        int c = count(tmp.begin(), tmp.end(), '@');
        IDcount += c;
        int d = count(tmp.begin(), tmp.end(), '#');
        Hashtags += d; 
        cout << tmp << endl;
            cout << tmp << " : length " << tmp.length()
                    << endl; 

        //Length
        int currentSize = tmp.size();
        lengthTotal += currentSize; 
        if (currentSize >= largestLength){
            largestLength = currentSize;
            largestTweet = lineCount;
            largestHash = Hashtags;
            largestTwt = tmp; 
        
        }
        
            // Output the results
        cout << "Longest tweet: " << largestLength << endl; 
        cout << "Total number of tweets: " << largestTweet << endl;
        cout << "Twitter IDs: " << IDcount << endl;
        cout << "Twitter Hashtag: " << Hashtags << endl;
        cout << "Largest Tweet: " << largestTwt << endl;
        cout << "Hashtags in longest Tweet: " << largestHash << endl;
        cout << "Total Tweets: " << lineCount << endl; }
        
    
        // Then close the file.
        inFile.close();
       
        return 0;


} 
 



     





       
 


        
        

