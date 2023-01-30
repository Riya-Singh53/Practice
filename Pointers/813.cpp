#include <iostream>

using namespace std;
void myStery(char* s1, const char* s2){
    while(*s1 != '\0'){
        ++s1;
    }
    for(; (*s1=*s2); ++s1, ++s2){
        ;
    }
}

int main()
{
    char s1[80];
    char s2[80];
    cin>>s1>>s2;
    myStery(s1, s2);
    cout << s1  << endl;
    return 0;
}
