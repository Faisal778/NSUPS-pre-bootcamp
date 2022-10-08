#include<iostream>
using namespace std;


int totalDrink(int nl, int k, int l)
{
    return (k*l)/nl;
}
int totalLime(int c, int d)
{
    return c*d;
}
int totalSalt(int p, int np)
{
    return p/np;
}
int findMin(int t_drink, int t_lime, int t_salt)
{
    if (t_drink<=t_lime && t_drink<=t_salt)
        return t_drink;
    else if (t_lime<=t_drink && t_lime <= t_salt)
        return t_lime;
    else if (t_salt<=t_drink && t_salt<= t_lime)
        return t_salt;
    else return 0;
}

int main()
{
    int n,k,l,c,d,p,nl,np;
    cin >>n>>k>>l>>c>>d>>p>>nl>>np;
    int t_drink= totalDrink(nl,k,l);
    int t_lime= totalLime(c,d);
    int t_salt= totalSalt(p,np);
    cout << findMin(t_drink, t_lime, t_salt)/n<<endl;
}
