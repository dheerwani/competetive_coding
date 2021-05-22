// Initial template for C++

// Program to convert Roman Numerals to Numbers
#include <bits/stdc++.h>
using namespace std;

// Returns decimal value of roman numaral
int romanToDecimal(string &);

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << romanToDecimal(s) << endl;
    }
}// } Driver Code Ends


// User fuunction teemplate for C++

// str given roman number string
// Returns decimal value of roman numaral
int romanToDecimal(string &s) {
    // code here
    unordered_map<char,int> m;
    m['I'] = 1;
    m['V'] = 5;
    m['X'] = 10;
    m['L'] = 50;
    m['C'] = 100;
    m['D'] = 500;
    m['M'] = 1000;
    
    int sum{};
    sum = m[s[0]];
    for(int i=1;i<s.length();i++)
    {
        if(m[s[i]] > m[s[i-1]])
        {
            sum += m[s[i]] - 2*m[s[i-1]];
        }
        else
        {
            sum +=m[s[i]];
        }
    }
 
    return sum;
}