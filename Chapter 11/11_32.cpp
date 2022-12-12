// 使用上一题定义的multimap 编写一个程序，按字典序打印作者列表和他们的作品。
#include <map>
#include <set>
#include <string>
#include <iostream>

using std::string;

int main()
{
	std::multimap<string, string> authors{
		{ "alan", "DMA" },
		{ "pezy", "LeetCode" },
		{ "alan", "CLRS" },
		{ "wang", "FTP" },
		{ "pezy", "CP5" },
		{ "wang", "CPP-Concurrency" } };
	// 装顺序的字典map关联容器
	std::map<string, std::multiset<string>> order_authors;

	// 怎么按照顺序的？
	// multimap定义后自动就是顺序的了
	for (auto author : authors) {
		std::cout << author.first << ":" << author.second << std::endl;
	}

	for (const auto& author : authors) {
		// 选取关键字，插入关键字的值
		
		order_authors[author.first].insert(author.second);
		std::cout << author.first << ":" << author.second << std::endl;
	}
		

	for (const auto& author : order_authors)
	{
		std::cout << author.first << ": ";
		for (const auto& work : author.second)
			std::cout << work << " ";
		std::cout << std::endl;
	}

	return 0;
}