#include <bits/stdc++.h>
using namespace std;

class rec{
	protected:
	int h, w;

	public:
	void display(){
		cout << h << " " << w << endl;
	}
};

class rec_area : public rec{
	public:
	void read(){
		cin >> h >> w;
	}
	void display(){
		cout << h * w << endl;
	}
};

int main(){
	rec_area area;
	area.read();
	area.rec :: display();
	area.display();
	return 0;
}
