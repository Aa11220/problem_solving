#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//here we ignore the 2nd constrain caz if you only have one eye it can make a statue so why waste 2 in one statue 
//about the anser we here see min from the components and remove it from each component to make min number of status 
//then turn to frist condation caz you here have to use 2 eyes so you make the min between body and half numbers of eyes
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
