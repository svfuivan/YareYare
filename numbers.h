#include <string>
using namespace std;

string number_It_20_to_string(int number)
{
	string answer = "";

	if (number>999){

		int n = number / 1000;
		switch(n)
		{
		case 1: answer += "тысяча"; break;
		case 2: answer += "две тысячи"; break;
		case 3: answer += "три тысячи"; break;
		case 4: answer += "четыре тысячи"; break;
		case 5: answer += "пять тысяч"; break;
		case 6: answer += "шесть тысяч"; break;
		case 7: answer += "семь тысяч"; break;
		case 8: answer += "восемь тысяч"; break;
		case 9: answer += "девять тысяч"; break;
		default: break;
		}
		answer += " ";
		number = number - number/1000*1000;
	}


	if (number>99){

		int n = number / 100;
		switch(n)
		{
		case 1: answer += "сто"; break;
		case 2: answer += "двести"; break;
		case 3: answer += "триста"; break;
		case 4: answer += "четыреста"; break;
		case 5: answer += "пятьсот"; break;
		case 6: answer += "шестьсот"; break;
		case 7: answer += "семьсот"; break;
		case 8: answer += "восемьсот"; break;
		case 9: answer += "девятьсот"; break;
		default: break;
		}
		answer += " ";
		number = number - number/100*100;
	}





	if  ((number < 100)&&(number >19) ){
		int n = number/10;
		int nmod = number%10;

		switch(n)
		{
		case 2: answer += "двадцать"; break;
		case 3: answer += "тридцать"; break;
		case 4: answer += "сорок"; break;
		case 5: answer += "пятьдесят"; break;
		case 6: answer += "шестьдесят"; break;
		case 7: answer += "семьдесят"; break;
		case 8: answer += "восемьдесят"; break;
		case 9: answer += "девяносто"; break;
		default: break;
		}


		answer += " ";
		switch(nmod)
		{
		case 1: answer += "один"; break;
		case 2: answer += "два"; break;
		case 3: answer += "три"; break;
		case 4: answer += "четыре"; break;
		case 5: answer += "пять"; break;
		case 6: answer += "шесть"; break;
		case 7: answer += "семь"; break;
		case 8: answer += "восемь"; break;
		case 9: answer += "девять"; break;
		default: break;
			return answer;
		}
	} 




	if (number < 20){
		switch(number)
		{
		case 0: if (answer == "") {answer = "нуль";}; break;
		case 1: answer = "один"; break;
		case 2: answer = "два"; break;
		case 3: answer = "три"; break;
		case 4: answer = "четыре"; break;
		case 5: answer = "пять"; break;
		case 6: answer = "шесть"; break;
		case 7: answer = "семь"; break;
		case 8: answer = "восемь"; break;
		case 9: answer = "девять"; break;
		case 10: answer = "десять"; break;
		case 11: answer = "одиннадцать"; break;
		case 12: answer = "двенадцать"; break;
		case 13: answer = "тринадцать"; break;
		case 14: answer = "четырнадцать"; break;
		case 15: answer = "пятнадцать"; break;
		case 16: answer = "шестьнадцать"; break;
		case 17: answer = "семьнадцать"; break;
		case 18: answer = "восемьнадцать"; break;
		case 19: answer = "девятнадцать"; break;
		default: break;
		}
	}
	return answer;
}
