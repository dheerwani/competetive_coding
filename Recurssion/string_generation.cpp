#include<bits/stdc++.h>
using namespace std;


void solve(char *input,char *output,int i,int j)
{
    if(input[i]=='\0')
    {
        output[j] = '\0';
        cout<<output<<endl;
        return;
    }

    int firstdigit = input[i] - '0';
    char ch = firstdigit + 'A' -1;
    if(firstdigit!=0)
    {
    output[j] = ch ;
    solve(input,output,i+1,j+1);
    }

    if(input[i+1] != '\0')
    {
        int seconddigit = input[i+1] - '0';
        int digit = firstdigit*10 + seconddigit;
        if(digit<=26 && digit!=0)
        {
        char ch = digit + 'A' -1;
        output[j] =ch;
        solve(input,output,i+2,j+1);
        }
    }
}


int main()
{
    char input[1000];
    cin>>input;

    char output[1000];
    solve(input,output,0,0);

    return 0;
}