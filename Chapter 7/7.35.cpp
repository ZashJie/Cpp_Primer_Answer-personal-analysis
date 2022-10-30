typedef string Type;
Type initVal();
class Exercise {
public:
    // 重新定义了同样的名字
    typedef double Type;
    Type setVal(Type);
    Type initVal();
private:
    int val;
};
Type Exercise::setVal(Type parm) {
    val = parm + initVal();
    return val;
}