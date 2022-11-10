//使用stack处理括号化的表达式。当你看到一个左括号，将其记录下来。
// 当你在一个左括号之后看到一个右括号，从stack中pop对象，直至遇到左括号
// ，将左括号也一起弹出栈。然后将一个值（括号内的运算结果）push到栈中，
// 表示一个括号化的（子）表达式已经处理完毕，被其运算结果所替代。
//
#include <iostream>
#include <string>
#include <stack>
#include <cctype>

using namespace std;

string calc(string l, string r, string op)
{
	string s;
	if (op == "-")
		s = to_string(stoi(l) - stoi(r));
	if (op == "+")
		s = to_string(stoi(l) + stoi(r));
	if (op == "*")
		s = to_string(stoi(l) * stoi(r));
	if (op == "/")
		s = to_string(stoi(l) / stoi(r));
	return s;
}

int main()
{
	string s("1+2*(7*4)");
	stack<string> stack;
	for (auto iter = s.begin(); iter != s.end();)
	{
		if (*iter == '(')
		{
			stack.push(string(1, *iter));
			++iter;
			while (*iter != ')')
			{
				stack.push(string(1, *iter));
				++iter;
			}
		}
		else if (*iter == ')')
		{
			string r = stack.top(); stack.pop();
			string op = stack.top(); stack.pop();
			string l = stack.top(); stack.pop();
			stack.pop(); // '(' 弹出
			stack.push(calc(l, r, op));
			++iter;
		}
		else
		{
			++iter;
		}

	}

	while (!stack.empty())
	{
		cout << stack.top() << endl;
		stack.pop();
	}
	return 0;
}