








































Refresh

Time (IST)	Status	Lang	Test Cases	Code
2021-10-05 20:06:27	Correct	cpp	-	View
2021-06-06 15:51:35	Correct	cpp	-	View
C++ (g++ 5.4)
Average Time:
15m
Your Time:
2m




Custom Input
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


string reverseWord(string str);


int main() {

	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;

	cout << reverseWord(s) << endl;
	}
	return 0;

}

// } Driver Code Ends


//User function Template for C++

string reverseWord(string str){
    int low=0,high=str.length()-1;

    while(low<high)
    {
        swap(str[low],str[high]);
        low++;
        high--;
    }
    return str;
}
