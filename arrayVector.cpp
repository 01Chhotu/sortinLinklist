/*Array vector*/
/* #include<bits/stdc++.h>
#include<vector>
using namespace std;
void display(vector<int>  &a){
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int N,i;
    cin>>N;
    vector<int> a[N];
    for(i=0; i<N; i++){
        int n;
        cin>>n;
        for(int j=0; j<n; j++){
            int x;
            cin>>x;
            a[i].push_back(x);
        }
    }
    for(i=0; i<N; i++){
        display(a[i]);
    }
    cout<<a[1][1];
    return 0;
}*/
/* Vector in vector */
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void display(vector<int>  &a){
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int N,i;
    cin>>N;
    vector<vector<int>> a;
    for(i=0; i<N; i++){
        int n;
        cin>>n;
        vector<int> temp;
        for(int j=0; j<n; j++){
            int x;
            cin>>x;
            temp.push_back(x);
        }
        a.push_back(temp);
    }
    a[2].push_back(10);
    for(i=0; i<a.size(); i++){
        display(a[i]);
    }
    cout<<a[0][0];
    return 0;
}