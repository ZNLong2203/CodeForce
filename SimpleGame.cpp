#include<iostream>
#include<math.h>
using namespace std;

int check(int crect_x,int crect_y,int w,int h, int cir_x,int cir_y,int r) {
	int dis_x = abs(cir_x - crect_x);
	int dis_y = abs(cir_y - crect_y);
	if(dis_x > (r + w/2)) {
		return 0;
	}
	if(dis_y > (r + h/2)) {
		return 0;
	}
	if(dis_x <= (w/2)) {
		return 1;
	}
	if(dis_y <= (h/2)) {
		return 1;
	}
	int dx=dis_x-w/2;
    int dy=dis_y-h/2;
    if(dx*dx+dy*dy<=(r*r)) {
    	return 1;
	}	else return 0;
}

int main() {
	int rect_x,rect_y,w,h,cir_x,cir_y,r;
	cin >> rect_x >> rect_y >> w >> h;
	cin >> cir_x >> cir_y >> r;
	int crect_x = rect_x+w/2;
	int crect_y = rect_y-h/2;
	if(check(crect_x,crect_y,w,h,cir_x,cir_y,r)==1) {
		cout << "YES";
	}	else cout << "NO";
}
