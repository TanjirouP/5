// 5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int menu = 0;
	cout << "Переводчик\n\n[1] Русские слова\n[2] Английские слова\n\n[3] Выход\n";
	cin >> menu;
	if (menu == 1)
	{
		system("cls");
		cout << "1. привет\n2. здравствуйте, привет\n3. извини(те)\n4. пожалуйста(прошу); угождать\n5. спасибо.\n6. пожалуйста, не за что\n7. как жаль\n8. до свидания\n9. люди\n10. мужчина\n11. женщина\n12. ребенок\n13. мальчик\n14. девочка\n15. парень\n";
		int rus;
		cout << "Выберите слово - ";
		cin >> rus;
		switch (rus)
		{
		case 1:
			system("cls");
			cout << "hi [хай]";
			break;
		case 2:
			system("cls");
			cout << "hello [хэлОу]";
			break;
		case 3:
			system("cls");
			cout << "sorry [сOри]";
			break;
		case 4:
			system("cls");
			cout << "please [пли:з]";
			break;
		case 5:
			system("cls");
			cout << "thank you [сэнк ю]";
			break;
		case 6:
			system("cls");
			cout << "you are wel­come [ю: а уЭлкэм]";
			break;
		case 7:
			system("cls");
			cout << "what a pity [уот э пИти]";
			break;
		case 8:
			system("cls");
			cout << "goodbye [гудбAй]";
			break;
		case 9:
			system("cls");
			cout << "peo­ple [пи:пл]";
			break;
		case 10:
			system("cls");
			cout << "man [мэн]";
			break;
		case 11:
			system("cls");
			cout << "woman [уУмэн]";
			break;
		case 12:
			system("cls");
			cout << "child [чайлд]";
			break;
		case 13:
			system("cls");
			cout << "boy [бой]";
			break;
		case 14:
			system("cls");
			cout << "girl [гё:рл]";
			break;
		case 15:
			system("cls");
			cout << "guy [гaй]";
			break;
		default:
			break;
		}
	}
	else if (menu == 2)
	{
		system("cls");
		cout << "1. hi\n2. helloy\n3. sorry\n4. please\n5. thank you\n6. you are wel­come\n7. what a pity\n8. goodbye\n9. peo­ple\n10. man\n11. woman\n12. child\n13. boy\n14. girl\n15. guy\n";
		int eng;
		cout << "Выберите слово - ";
		cin >> eng;
		switch (eng)
		{
		case 1:
			system("cls");
			cout << "привет";
			break;
		case 2:
			system("cls");
			cout << "здравствуйте, привет";
			break;
		case 3:
			system("cls");
			cout << "извини";
			break;
		case 4:
			system("cls");
			cout << "пожалуйста";
			break;
		case 5:
			system("cls");
			cout << "спасибо";
			break;
		case 6:
			system("cls");
			cout << "пожалуйста, не за что";
			break;
		case 7:
			system("cls");
			cout << "как жаль";
			break;
		case 8:
			system("cls");
			cout << "до свидания";
			break;
		case 9:
			system("cls");
			cout << "люди";
			break;
		case 10:
			system("cls");
			cout << "иужчина";
			break;
		case 11:
			system("cls");
			cout << "женщина";
			break;
		case 12:
			system("cls");
			cout << "ребенок]";
			break;
		case 13:
			system("cls");
			cout << "мальчик";
			break;
		case 14:
			system("cls");
			cout << "девочка";
			break;
		case 15:
			system("cls");
			cout << "мальчик";
			break;
		default:
			break;
		}
	}
	else if (menu == 3)
	{

		system("taskkill /f /IM VsDebugConsole.exe");


	}
}

