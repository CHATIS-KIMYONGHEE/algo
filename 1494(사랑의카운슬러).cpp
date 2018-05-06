#include <iostream>
#include <vector>
using namespace std;

struct XY {//ÁÂÇ¥
	int x;
	int y;
	int start;
};
struct VAL { //º¤ÅÍ
	int start;
	int end;
	int x;
	int y;
};
int main() {
	vector <VAL> vector_val;
	VAL temp;
	XY xy[20];
	VAL val[400];
	int test_case = 0;
	int min = 100000;
	//cin >> test_case;
	//for (int i = 0; i < test_case; i++) {
		int N, X, Y;
		cin >> N;
		for (int j = 0; j < N; j++) {
			cin >> X >> Y;
			xy[j].x= X;
			xy[j].y = Y;
			xy[j].start = j;
		}
		
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				if (i != j) {
					temp.start = xy[i].start;
					temp.end= xy[j].start;
					temp.x = xy[i].x - xy[j].x;
					temp.y = xy[i].y - xy[j].y;
					vector_val.push_back(temp);
					
				}

			}
		}
		int total_num = 0; //°æ¿ìÀÇ ¼ö...
		int temp_num = N-1;
		while (temp_num>1) {
			total_num = temp_num * (temp_num - 2);
			temp_num = temp_num - 2;
		}
		for (int i = 0; i < N / 2; i++) { // N/2´Â ¼± °¹¼ö
			
		}
	//}
	
		system("pause");
	return 0;
}