#include <string>
using namespace std;

string number_It_20_to_string(int number)
{
	string answer;
	
if  (((number/10) < 10)&&((number/10) >2) ){
	int n = number/10;
	switch(n)
	{
	case 1: answer = "двадцать"; break;
	case 2: answer = "двадцать один"; break;
	case 3: answer = "двадцать два"; break;
	case 4: answer = "двадцать три"; break;
	case 5: answer = "четыре"; break;
	case 6: answer = "п€ть"; break;
	case 7: answer = "шесть"; break;
	case 8: answer = "семь"; break;
	case 9: answer = "восемь"; break;
	case 10: answer = "дев€ть"; break;
	default: break;


	return answer;
}





	if (number < 20){
	switch(number)
	{
		case 0: answer = "нуль"; break;
	case 1: answer = "один"; break;
	case 2: answer = "два"; break;
		case 3: answer = "три"; break;
	case 4: answer = "четыре"; break;
		case 5: answer = "п€ть"; break;
	case 6: answer = "шесть"; break;
		case 7: answer = "семь"; break;
	case 8: answer = "восемь"; break;
		case 9: answer = "дев€ть"; break;
	case 10: answer = "дес€ь"; break;
		case 11: answer = "одиннадцать"; break;
	case 12: answer = "двенадцать"; break;
		case 13: answer = "тринадцать"; break;
	case 14: answer = "четырнадцать"; break;
		case 15: answer = "п€тнадцать"; break;
	case 16: answer = "шестьнадцать"; break;
		case 17: answer = "семьнадцать"; break;
	case 18: answer = "восемьнадцать"; break;
		case 19: answer = "дев€тнадцать"; break;
	default: break;
	}
	}
