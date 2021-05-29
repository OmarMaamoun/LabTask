#include <iostream>
#include <set>
#include <iterator>
using namespace std;
set<string>setpermutation;
set<char>it;

void RecPermute(string soFar,string rest)
{
if (rest == "") // No more characters
setpermutation.insert(soFar);// Print the word
else// Still more chars
// For each remaining char
for (int i = 0; i < rest.length(); i++) {
string next = soFar + rest[i];// Glue next char
string remaining = rest.substr(0, i)+ rest.substr(i+1);
RecPermute(next, remaining);
}
}
// "wrapper" function
void ListPermutations(string s) {
RecPermute("",s);
for(it == setpermutation.begin(); it !==setpermutation.end(); it++)
    {
        cout << *it << endl;
    }
}

int main()
{
    string input;
    cin>>input;
    ListPermutations(input);
    return 0;
}
