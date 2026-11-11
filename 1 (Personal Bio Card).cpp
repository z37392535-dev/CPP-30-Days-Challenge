// 1 (Personal Bio Card).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string> // string íÌÈ ÅÖÇİÉ ãßÊÈÉ ÇáäÕæÕ áÃäæ İí
using namespace std;



int main()
{
	string name;         //  äÚÑİ ÇáãÊÛíÑ ßäæÚ string
	int age;
	string FavoriteTrack;


	cout << "What is your name ?\n";
	// cin >> name;      åĞå ÇáØÑíŞÉ ÊŞÑÃ ßáãÉ æÇÍÏÉ İŞØ
	getline(cin, name);   //        ÊÚäí ÇŞÑÃ ÇáÓØÑ ßÇãáÇğ (ßá ÇáÇÓã )ã   getline äÓÊÎÏã 

	cout << "How old are you ?\n";
	cin >> age;
	cin.ignore(); //  äÙİäÇ ÇáĞÇßÑÉ åäÇ
	/*cin.ignore();
	áÇ ÊõæÖÚ ÅáÇ İí ÍÇáÉ æÇÍÏÉ İŞØ: ÚäÏãÇ íßæä áÏíßö 
	ÚÇÏíÉ áÑŞã Ãæ ßáãÉ æÇÍÏÉ cin 
	getlineæíÃÊí ÈÚÏåÇ ãÈÇÔÑÉ 
	*/

	cout << "What is Favorite Track ?\n";
	//cin >> FavoriteTrack; 
	getline(cin, FavoriteTrack);

	cout << "*************************\n";
	cout << "Name: " << name << "\n";
	cout << "Age: " << age << "\n";
	cout << "Track: " << FavoriteTrack << "\n";
	cout << "*************************\n";

	return 0;


}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
