#include<iostream>
#include<vector>

using namespace std;

struct Point
{
    int x,y;
    Point(){};
    Point(int x_,int y_):x(x_),y(y_){};
};

vector<int> rect(Point p1,Point p2,Point p3){
    int xmin,xmax,ymin,ymax;
    vector<int> rec;
    xmin=min(p1.x,p2.x,p3.x);
    xmax=max(p1.x,p2.x,p3.x);
    ymin=min(p1.y,p2.y,p3.y);
    ymax=max(p1.y,p2.y,p3.y);
    rec.push_back(xmin);
    rec.push_back(xmax);
    rec.push_back(ymin);
    rec.push_back(ymax);
    return rec;
}

int count(vector<int> rec,Point p1,Point p2,Point p3){
    
}


int main(){

    return 0;
}