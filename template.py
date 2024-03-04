import os

week = input("Week: ").zfill(2)
ftype = input("Assignment type (a/pq): ")
ques = [int(x) for x in input("Questions: ").split()]

curr_path = os.path.join("/Users/aditya/Developer/04-srmist/nptel-noc24-cs44/", f'week-{week}')
if not os.path.isdir(curr_path): 
	os.mkdir(curr_path)
	print("Created directory " + curr_path);

for i in ques:
	if (ftype == "a"):
		file_name = f'w{week}_a{week}_q{str(i).zfill(2)}'
	else:
		file_name = f'w{week}_{ftype}{str(i).zfill(2)}'
	dir_path = os.path.join(curr_path, f'{file_name}')
	os.mkdir(dir_path)
	file_path = os.path.join(dir_path, f'{file_name}.cpp')
	f = open(file_path, "a")
	f.write("""#include <iostream>
using namespace std;

int main() {


	return 0;
}""")

	f.close()
	print(f'Created file ./week-{week}/{file_name}/{file_name}.cpp');
