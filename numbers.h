#include <string>
using namespace std;

string number_It_20_to_string(int number)
{
	string answer;
	
if  (((number/10) < 10)&&((number/10) >2) ){
	int n = number/10;
	switch(n)
	{
	case 1: answer = "��������"; break;
	case 2: answer = "�������� ����"; break;
	case 3: answer = "�������� ���"; break;
	case 4: answer = "�������� ���"; break;
	case 5: answer = "������"; break;
	case 6: answer = "����"; break;
	case 7: answer = "�����"; break;
	case 8: answer = "����"; break;
	case 9: answer = "������"; break;
	case 10: answer = "������"; break;
	default: break;


	return answer;
}





	if (number < 20){
	switch(number)
	{
		case 0: answer = "����"; break;
	case 1: answer = "����"; break;
	case 2: answer = "���"; break;
		case 3: answer = "���"; break;
	case 4: answer = "������"; break;
		case 5: answer = "����"; break;
	case 6: answer = "�����"; break;
		case 7: answer = "����"; break;
	case 8: answer = "������"; break;
		case 9: answer = "������"; break;
	case 10: answer = "�����"; break;
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
