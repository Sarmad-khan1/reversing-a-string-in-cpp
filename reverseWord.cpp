#include <iostream>
using namespace std;
void reverseWord(string word);
int main()
{
string word;
cout<<"Enter a string: ";
cin>>word;
	reverseWord(word);
	
}
void reverseWord(string word)
{
	for(int i=word.length() - 1; i >= 0; i--)
	cout<<" "<<word[i];
}