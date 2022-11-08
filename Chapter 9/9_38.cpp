#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector<int> vec;
	for (int i = 0; i < 100; i++) {
		
		cout << "capacity:" << vec.capacity() << "; size:" << vec.size() << endl;
		vec.push_back(1);
	}

	return 0;
}

/*
capacity:0; size:0
capacity:1; size:1
capacity:2; size:2
capacity:3; size:3
capacity:4; size:4
capacity:6; size:5
capacity:6; size:6
capacity:9; size:7
capacity:9; size:8
capacity:9; size:9
capacity:13; size:10
capacity:13; size:11
capacity:13; size:12
capacity:13; size:13
capacity:19; size:14
capacity:19; size:15
capacity:19; size:16
capacity:19; size:17
capacity:19; size:18
capacity:19; size:19
capacity:28; size:20
capacity:28; size:21
capacity:28; size:22
capacity:28; size:23
capacity:28; size:24
capacity:28; size:25
capacity:28; size:26
capacity:28; size:27
capacity:28; size:28
capacity:42; size:29
capacity:42; size:30
capacity:42; size:31
capacity:42; size:32
capacity:42; size:33
capacity:42; size:34
capacity:42; size:35
capacity:42; size:36
capacity:42; size:37
capacity:42; size:38
capacity:42; size:39
capacity:42; size:40
capacity:42; size:41
capacity:42; size:42
capacity:63; size:43
capacity:63; size:44
capacity:63; size:45
capacity:63; size:46
capacity:63; size:47
capacity:63; size:48
capacity:63; size:49
capacity:63; size:50
capacity:63; size:51
capacity:63; size:52
capacity:63; size:53
capacity:63; size:54
capacity:63; size:55
capacity:63; size:56
capacity:63; size:57
capacity:63; size:58
capacity:63; size:59
capacity:63; size:60
capacity:63; size:61
capacity:63; size:62
capacity:63; size:63
capacity:94; size:64
capacity:94; size:65
capacity:94; size:66
capacity:94; size:67
capacity:94; size:68
capacity:94; size:69
capacity:94; size:70
capacity:94; size:71
capacity:94; size:72
capacity:94; size:73
capacity:94; size:74
capacity:94; size:75
capacity:94; size:76
capacity:94; size:77
capacity:94; size:78
capacity:94; size:79
capacity:94; size:80
capacity:94; size:81
capacity:94; size:82
capacity:94; size:83
capacity:94; size:84
capacity:94; size:85
capacity:94; size:86
capacity:94; size:87
capacity:94; size:88
capacity:94; size:89
capacity:94; size:90
capacity:94; size:91
capacity:94; size:92
capacity:94; size:93
capacity:94; size:94
capacity:141; size:95
capacity:141; size:96
capacity:141; size:97
capacity:141; size:98
capacity:141; size:99
*/