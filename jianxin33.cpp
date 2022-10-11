#include<iostream>
#include<vector>

using namespace std;

struct point
{
    double x,y;
};


int main(){
    vector<point> p(3);
    for (int i = 0; i < 3; i++)
    {
        scanf("%lf,%lf",&p[i].x,&p[i].y);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%lf,%lf",p[i].x,p[i].y);
    }
    return 0;
}