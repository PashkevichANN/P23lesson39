#include "test.h"

void test(long long number, bool expected, string test_name) {
	bool actual = check_number(number);
	string msg = test_name + " --> ";
	msg += actual == expected ? "PASS" : "FAIL";
	cout << msg << endl;

}


void run_all_tests() {
	test(11111, true, "test01");
	test(-11111, true, "test02");
	test(1211, false, "test03");
	test(-1141, false, "test04");
	test(0, false, "test05");
	test(3, false, "test06");
	test(-4, false, "test07");
	test(1222, false, "test08");
	test(2221, false, "test09");
	test(2'123'456'789, false, "test10");
	test(-3'123'456'789, false, "test11");







}