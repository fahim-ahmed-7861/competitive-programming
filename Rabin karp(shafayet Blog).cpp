//Implementation of Rabin Carp String Matching Algorithm
//https://github.com/Shafaet/Programming-Contest-Algorithms/blob/master/Useful%20C%2B%2B%20Libraries/rabin-carp.cpp
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

//Returns the index of the first match
//Complexity O(n+m), this is unsafe because it doesn't check for collisons

ll Hash(const string &s, int m, ll B, ll M){
    ll h = 0 , power = 1;
    for(int i = m-1;i>=0;i--){
        h = h + (s[i] * power) % M;
        h = h % M;
        power = (power * B)%M;

     //  cout<<h<<endl;
    }//cout<<endl;
    return h;
}
int match(const string &text, const string &pattern) {
    int n = text.size();
    int m = pattern.size();
    if(n < m)return -1;
    if(m == 0 or n == 0)
        return -1;

    ll B = 347, M = 1000000000+7;

    //Calculate B^(m-1)
    ll power = 1;
    for(int i=1;i<=m-1;i++)
        power = (power * B) % M;


       //cout<<"p:"<<power<<endl;

    //Find hash value of first m characters of text
    //Find hash value of pattern
    ll hash_text = Hash(text, m, B, M);
    ll hash_pattern = Hash(pattern, m, B, M);

    if(hash_text == hash_pattern){  //returns the index of the match
        return 0;
        //We should've checked the substrings character by character here as hash collision might happen
    }
    //cout<<hash_text<<" "<<hash_pattern<<endl;

    for(int i=m;i<n;i++){

        //Update Rolling Hash
        hash_text = (hash_text - (power * text[i-m]) % M) % M;
        hash_text = (hash_text + M) % M; //take care of M of negative value
        hash_text = (hash_text * B) % M;
        hash_text = (hash_text + text[i]) % M;

       // cout<<hash_text<<endl;

        if(hash_text==hash_pattern){
            return i - m + 1; //returns the index of the match
             //We should've checked the substrings character by character here as hash collision might happen
        }
    }
    return -1;
}


int main() {

    string str="helloworld",btr;

    btr=str;


    reverse(str.begin(),str.end());

    cout<<match(str,str)<<endl;

    char ch=' ';

    printf("%d\n",ch);
    return 0;
}
