#include <string>
using namespace std;

string number_It_20_to_string(int number)
{
	string answer = "";

	if (number>999){

		int n = number / 1000;
		switch(n)
		{
		case 1: answer += "������"; break;
		case 2: answer += "��� ������"; break;
		case 3: answer += "��� ������"; break;
		case 4: answer += "������ ������"; break;
		case 5: answer += "���� �����"; break;
		case 6: answer += "����� �����"; break;
		case 7: answer += "���� �����"; break;
		case 8: answer += "������ �����"; break;
		case 9: answer += "������ �����"; break;
		default: break;
		}
		answer += " ";
		number = number - number/1000*1000;
	}


	if (number>99){

		int n = number / 100;
		switch(n)
		{
		case 1: answer += "���"; break;
		case 2: answer += "������"; break;
		case 3: answer += "������"; break;
		case 4: answer += "���������"; break;
		case 5: answer += "�������"; break;
		case 6: answer += "��������"; break;
		case 7: answer += "�������"; break;
		case 8: answer += "���������"; break;
		case 9: answer += "���������"; break;
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
		case 2: answer += "��������"; break;
		case 3: answer += "��������"; break;
		case 4: answer += "�����"; break;
		case 5: answer += "���������"; break;
		case 6: answer += "����������"; break;
		case 7: answer += "���������"; break;
		case 8: answer += "�����������"; break;
		case 9: answer += "���������"; break;
		default: break;
		}


		answer += " ";
		switch(nmod)
		{
		case 1: answer += "����"; break;
		case 2: answer += "���"; break;
		case 3: answer += "���"; break;
		case 4: answer += "������"; break;
		case 5: answer += "����"; break;
		case 6: answer += "�����"; break;
		case 7: answer += "����"; break;
		case 8: answer += "������"; break;
		case 9: answer += "������"; break;
		default: break;
			return answer;
		}
	} 




	if (number < 20){
		switch(number)
		{
		case 0: if (answer == "") {answer = "����";}; break;
		case 1: answer = "����"; break;
		case 2: answer = "���"; break;
		case 3: answer = "���"; break;
		case 4: answer = "������"; break;
		case 5: answer = "����"; break;
		case 6: answer = "�����"; break;
		case 7: answer = "����"; break;
		case 8: answer = "������"; break;
		case 9: answer = "������"; break;
		case 10: answer = "������"; break;
		case 11: answer = "�����������"; break;
		case 12: answer = "����������"; break;
		case 13: answer = "����������"; break;
		case 14: answer = "������������"; break;
		case 15: answer = "����������"; break;
		case 16: answer = "������������"; break;
		case 17: answer = "�����������"; break;
		case 18: answer = "�������������"; break;
		case 19: answer = "������������"; break;
		default: break;
		}
	}
	return answer;
}
