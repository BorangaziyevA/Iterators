#include<iostream>
#include<string>
#include<vector>
#include<iterator>
#include<fstream>

using namespace std;

void main()
{



	string s;
	string s2;
	cin >> s; 
	s2 = s;

	reverse(s2.begin(), s2.end());

	if (s == s2)
	{
		cout << "DA" << endl;
	}





	//ofstream fout("1.txt");

	//ostream_iterator<int> of(fout, " ");

	//vector<int> v = { 1,2,3,4,5,6,7,8,9 };

	//for (size_t i = 0; i < v.size(); i++)
	//{
	//	fout << v[i] << "\t";
	//}





	//ifstream fin("1.txt");

	//istream_iterator<int> is_first(fin);

	//istream_iterator<int> is_end;
	//
	//vector<int> S(is_first, is_end);

	//for (size_t i = 0; i < S.size(); i++)
	//{
	//	cout << S[i];
	//}

	system("pause");
}