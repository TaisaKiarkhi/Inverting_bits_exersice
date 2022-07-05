#include <iostream>
#include <format>
using namespace std;


int main() {

	int integer{ 0 };
	unsigned int inverted{ 0 };
	unsigned int integer_plus_1{ 0 };

	cout << "Enter an integer: ";
	cin >> integer;
	cout << endl;

	inverted = static_cast<unsigned int>(~integer);
	integer_plus_1 = inverted + 1;

	cout << "__________________________________________________________________________________________________________________________________________________________________________________"<<endl;
	cout << format("Original value: {:^#029b} | unsigned value with inverted bits: {:^#029b} | unsigned inverted + 1: {:^#035b}|\n", integer, inverted, integer_plus_1);

	auto signed_inverted{static_cast<signed int>(~integer)};
	auto signed_plus_1{ signed_inverted + 1 };

	cout << format("Original: {:^035d} | signed inverted: {:^052d} | signed inverted + 1: {:^036d} |\n", integer, signed_inverted, signed_plus_1);
	cout << "__________________________________________________________________________________________________________________________________________________________________________________|" << endl;





	return 0;
}