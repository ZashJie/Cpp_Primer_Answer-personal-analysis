// 在此代码的结尾，b1 和 b2 各包含多少个元素？

StrBlob b1;
{
	StrBlob b2 = { "a", "an", "the" };		// 引用计数为1
	b1 = b2;								// 引用计数为2
	b2.push_back("about");					
}

// b1,b2都包含着4个元素，因为StrBlob类的data成员是一个指向string类型的vector的shared_ptr
// 所以shared_ptr不会拷贝内容，而是共享内存
// 代码的结尾b2被析构了，但不影响b1