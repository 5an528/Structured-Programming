#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    string sentence;
    string word1 = "a";
    string word2 = "an";
    string word3 = "the";
    cout<<"Input the sentence --> "<<endl;
    getline(cin, sentence);

    size_t count1 = sentence.find(word1);
    if (count1 != string::npos)
        cout << "A occurrence is " << count1 << endl;

    size_t count2 = sentence.find(word2);
    if (count2 != string::npos)
        cout << "An occurrence is " << count2 << endl;

    size_t count3 = sentence.find(word3);
    if (count3 != string::npos)
        cout << "the occurrence is " << count3 << endl;

    return 0;
}
