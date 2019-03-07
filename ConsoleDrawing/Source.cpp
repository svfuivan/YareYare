#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

void main()
{
	int x,y;
    //cin >> x >> x;
	x = 15;
	y = 40;

 
    vector < vector <char> > map(x, vector <char> (y) );

	for (int i = 0; i < x; i++){    
        for (int j = 0; j < y; j++) 
        {
            map[i][j]='*';
			if (i==0 || j == 0 || i == x-1 || j == y-1){
				map[i][j]='+';
			}
		}
	}

	
	
	cout << endl;
	srand( time(0) );
	int xTarg = rand() % x +0;
	int yTarg = rand() % y +0;
	cout << xTarg << ' ' << yTarg;
	cout << endl;

	int temp = xTarg-2;
	for (temp; temp<xTarg+3;temp++){
		map[temp][yTarg-3]='G';
	}
	temp = xTarg-2;
	for (temp; temp<xTarg+3;temp++){
		map[temp][yTarg+3]='G';
	}

	temp = yTarg-2;
	for (temp; temp<yTarg+3;temp++){
		map[xTarg-2][temp]='G';
	}

	temp = yTarg-2;
	for (temp; temp<yTarg+3;temp++){
		map[xTarg+2][temp]='G';
	}

	//for (
	map[xTarg][yTarg]='G';
	//map[yTarg][xTarg]='1';



	//11 12 13 14
	//21 22 23 24
	//31 32 33 34


	for (int i = 0; i < x; i++){    
        for (int j = 0; j < y; j++) 
        {
            cout <<(map[i][j]);
		}cout << endl;
	}


	/*for(int i = 0; i < 8; i++)
	{
		for (int k = 0; k < 21; k++)
				cout << "*";

		cout << endl;
	}*/

	cout << endl << endl;

	system("pause");
}