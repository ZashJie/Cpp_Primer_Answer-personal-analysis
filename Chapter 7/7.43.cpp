class NoDefault {
public:
	NoDefault(int x) { }
};

class C {
public:
	C():def(0) { }
private:
	NoDefault def;
};