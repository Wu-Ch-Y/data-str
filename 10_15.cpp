#include <iostream>
using namespace std;

class GameCharacter
{
public:
	string name;
	int hp;
	int level;
	// Constructor
	GameCharacter(string n, int h, int l)
	{
		name = n;// 將 n 存入 name
		hp = h;// 將 h 存入 hp
		level = l;// 將 l 存入 level
		if (hp > 100) {
			hp = 100;
		}
	}
	// 受到傷害
	void damage(int value)
	{
		if ((hp - value) < 0) {
			hp = 0;
		}
		else {
			hp = hp - value;
		}// 1. hp 扣掉 value
		// 2. 如果 hp 小於 0 ，將 hp 設為 0
	}

	void heal(int value)
	{
		if ((hp + value) > 100) {
			hp = 100;
		}
		else {
			hp = hp + value;
		}// 1. hp 加上 value
		// 2. 如果 hp 大於 100 ，將 hp 設為 100
	}
	// 升級
	void levelUp()
	{
		level = level + 1;
		hp = 100;// 1. level 加 1
		// 2. hp 回復成 100
	}
	// 顯示角色資料
	void show()
	{
		cout << "name:" <<name<< "hp:" <<hp<< "level"<<level<<endl;// 顯示 name 、 hp 、 level
	}
};



int main()
{
	string n;
	int h, l,choose,number;

	cin >> n >> h >> l;

	GameCharacter GAY (n,h,l);
	while (1) {
		cout << "======選單=======" << "\n" << "1.扣血" << "\n" << "2.回血" << "\n" << "3.升級" << "\n" << "4.Show角色資料" << "\n" << "5.Show全部角色" << "\n" << "0.結束程式" << "請選擇:" << endl;
		cin >> choose;
		if (choose == 1) {
			cin >> number;
			GAY.damage(number);
		}
		else if (choose == 2) {
			cin >> number;
			GAY.heal(number);
		}
		else if (choose == 3) {
			GAY.levelUp();
		}
		else if (choose == 4) {
			GAY.show();
		}
		else if (choose == 0) {
			return 0;
		}
		
	}
	return 0;
}
