#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    long long eye , mouth,bodyes ,results = 0;
    cin >> eye >> mouth >> bodyes;
    if (eye == 0 || mouth == 0 || bodyes == 0)
    {
        cout << 0;
        return 0;
    }
    long long mn = min({eye,mouth,bodyes});
    eye -= mn;
    mouth-=mn ;
    bodyes-=mn;
    results+=mn;
    mn = min(eye/2,bodyes);
    results+= mn;
    cout<<results;

    
    return 0;
}
