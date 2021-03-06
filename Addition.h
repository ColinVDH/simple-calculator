/*
*Name: Junhao Wang, Colin Vandenhof, Teshaun Murray
*MacID: wangjh2, vandencm, murrayts
*Student Number: 1215428, 1231644, 1227515
*Description: addition class header.
*/
#include <string>
#include <iostream>
#include "ArithmeticExpression.h"
using namespace std;


//Adds two expression
class Addition: public ArithmeticExpression {
private:
public:
	Addition(string ls, string rs, string branch="");//declare constructor, branch initialized to empty string by default.
	~Addition(); //declare destructor
	string evaluate(); //declare evaluate function
	void print();//declare print function

};
