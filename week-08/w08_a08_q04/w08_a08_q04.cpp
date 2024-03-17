#include <iostream>
using namespace std;

namespace DBErrors {
	class SQLException {
		public:
			virtual const char* what() const throw() {
				return "SQLException";
			}
	};
	class KeyException : public SQLException {
		public:
			virtual const char* what() const throw() {
				return "KeyException";
			}
	};
	class PrimaryKeyException : public KeyException {
		public:
			virtual const char* what() const throw() {
				return "PrimaryKeyException";
			}
	};
	class ForeignKeyException : public KeyException {
		public:
			virtual const char* what() const throw() {
				return "ForeignKeyException";
			}
	};
}

int main() {
	try {
		throw DBErrors::PrimaryKeyException();
	}
	catch (DBErrors::SQLException &e) { cout << e.what(); }
	catch (DBErrors::KeyException &e) { cout << e.what(); }
	catch (DBErrors::PrimaryKeyException &e) { cout << e.what(); }
	catch (DBErrors::ForeignKeyException &e) { cout << e.what(); }

	return 0;
}