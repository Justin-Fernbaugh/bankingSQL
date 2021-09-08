#include <iostream>
#include <sqlite3.h>


using namespace std; 

int main() { 
	int input, deposit, withdrawl;


	cout << "##############" << endl;
	cout << " Banking SQL" << endl;
	cout << "##############" << endl;

	cout << "1. Desposit 2. Withdrawl ";
	cin >> input;
	cout << "input chosen: " << input << endl;

	sqlite3 *db;
	char *zErrMsg = 0;
	int rc;

	rc = sqlite3_open("../SQLite/database.db", &db);

	if( rc ) {
		fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
		return(0);
	} else {
		fprintf(stderr, "Opened database successfully\n");
	}
	sqlite3_close(db);


	return 0;
}