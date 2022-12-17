#pragma once
#include <vector>
#include <memory>
#include <string>
#include <initializer_list>
#include <exception> 
#include <stdexcept>

using namespace std;

class StrBlob
{
public:
	using size_type = vector<string>::size_type;

	StrBlob() : data(make_shared<vector<string>>()) {}
	StrBlob(initializer_list<string> il) : data(make_shared<vector<string>>(il)) {}

	size_type size() const
	{
		return data->size();
	}

	bool empty() const
	{
		return data->empty();
	}

	void push_back(const string& s) const
	{
		data->push_back(s);
	}

	void pop_back() const
	{
		check(0, "pop_back 一个空的StrBlob");
		data->pop_back();
	}

	string& front() const
	{
		check(0, "front 一个空的StrBlob");
		return data->front();
	}

	string& back() const
	{
		check(0, "back 一个空的StrBlob");
		return data->back();
	}

	string& front()
	{
		check(0, "front 一个空的StrBlob");
		return data->front();
	}

	string& back()
	{
		check(0, "back 一个空的StrBlob");
		return data->back();
	}

private:
	void check(size_type i, const string& msg) const
	{
		if(i >= data->size()) {
			throw out_of_range(msg);
		}
	}
	shared_ptr<vector<string>> data;
};