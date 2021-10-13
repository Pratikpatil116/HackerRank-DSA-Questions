#include <bits/stdc++.h>
using namespace std;
struct node{
    int h[26],n,f;
};
node null;
vector<node>trie;
void add(string &A){
    int i,j,p,q,act=0;
    for(i=0;i<A.size();i++){
        p=A[i]-'a';
        if(!trie[act].h[p]){
            trie[act].h[p]=trie.size();
            trie.push_back(null);
        }
        act=trie[act].h[p];
        trie[act].n++;
    }
}
int findi(string &A){
    int i,j,p,q,act=0;
    for(i=0;i<A.size();i++){
        p=A[i]-'a';
        if(!trie[act].h[p])return 0;
        act=trie[act].h[p];
    }
    return trie[act].n;
}
int main(){
    int i,j,p,q,N;
    string A,B;
    null.n=null.f=0;
    for(i=0;i<26;i++)null.h[i]=0;
    trie.push_back(null);
    cin>>N;
    for(i=0;i<N;i++){
        cin>>A>>B;
        if(A=="add")add(B);
        else cout<<findi(B)<<"\n";
    }
}
