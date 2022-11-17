#include <fstream>
#include <iterator>
#include <algorithm>

using namespace std;

int main(int argc, char** argv) {

	if (argc != 4) return -1;

	ifstream ifs(argv[1]);
	ofstream ofs_odd(argv[2]), ofs_even(argv[3]);

	istream_iterator<int> in(ifs), in_eof;
	ostream_iterator<int> out_odd(ofs_odd, " "), out_even(ofs_even, "\n");

	for_each(in, in_eof, [&out_odd, &out_even](const int i)
	{
			*(i & 0x1 ? out_odd : out_even)++ = i;
	});

	return 0;
}
