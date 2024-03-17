#include <iostream>

namespace DBErrors {
	class SQLException {};
	class KeyException : public SQLException {};
	class PrimaryKeyException : public KeyException{};
	class ForeignKeyException : public KeyException {};

	class DBCon {
		public:
			static void print_err(int eno = 0) {
				try {
					if (eno == 0) throw PrimaryKeyException();
					else if (eno < 0) throw ForeignKeyException();
					else if (eno > 0 && eno < 10) throw KeyException();
					else throw SQLException();
				}
				catch (KeyException &) { std::cout << "DBErrors::KeyException"; }
			}
	};
}

int main() {
	try {
		// DBErrors::DBCon::print_err(-10);
		// DBErrors::DBCon::print_err(0);
		// DBErrors::DBCon::print_err(7);
		DBErrors::DBCon::print_err(20);
	}
	catch (DBErrors::PrimaryKeyException &) {
		std::cout << "DBErrors::PrimaryKeyException&";
	}
	catch (DBErrors::ForeignKeyException &) {
		std::cout << "DBErrors::ForeignKeyException&";
	}
	catch (DBErrors::SQLException &) {
		std::cout << "DBErrors::SQLException&";
	}
	

	return 0;
}