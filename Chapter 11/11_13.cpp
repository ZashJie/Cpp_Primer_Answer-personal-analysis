//
// 在上一题的程序中，至少有三种创建pair的方法。编写此程序的三个版本，分别采用不同的方法创建pair。解释你认为哪种形式最易于编写和理解，为什么？
// 
// vec.push_back(make_pair(str, i));
// 
// vec.push_back({str, i});				该种方法最方便
// 
// vec.push_back(pair<string, int>(str, i>);	该种方法最易理解
// 
// 
//