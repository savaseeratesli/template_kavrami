#include <iostream>
#include "template.h"

using namespace std;

//Bir fonk birden fazla veri tipinde çalışması için aşırı yükleme yaparız
//Fonk birden fazla veri tipine uygun haline getirmek için template kullanılır
/*
int getMax(int a, int b)
{
	int max;

	a > b ? max = a : max = b;

	return max;

}

double getMax(double a, double b)
{
	double max;

	a > b ? max = a : max = b;

	return max;

}

char getMax(char a, char b)
{
	char max;

	a > b ? max = a : max = b;

	return max;

}

string getMax(string a, string b)
{
	string max;

	a > b ? max = a : max = b;

	return max;

}
*/
/////////////////////////////////////////////////////

template <class Type>//Sadece altındaki func için tanımlı
Type getMax(Type a, Type b)
{
	Type max;
	a > b ? max = a : max = b;
	return max;
}

int main()
{
	/*
	cout << getMax(1, 9) << endl;
	cout << getMax(19.04,21.17) << endl;
	cout << getMax('n', 's') << endl;
	*/

	//Number sınıfından int veri oluşturucam
	Number<int> numberInt(5);
	Number<int> numberInt2(19);

	Number<float> numberFloat(19.4);

	Number<double> numberDouble(20.17);

	cout << numberInt.getData() << endl;
	cout << numberFloat.getData() << endl;
	cout << numberDouble.getData() << endl;

	cout << "Sonuc: " << numberInt + numberInt2 << endl;

	cout << numberInt;
	cout << numberFloat;
	cout << numberDouble;

	Number <int> numberInt3;
	Number <float> numberFloat3;
	Number <double> numberDouble3;

	cout << "Integer,Float,Double Deger Giriniz: " << endl;
	cin >> numberInt3;
	cin >> numberFloat3;
	cin>>numberDouble3;

	cout << numberInt3;
	cout << numberFloat3;
	cout << numberDouble3;

}



