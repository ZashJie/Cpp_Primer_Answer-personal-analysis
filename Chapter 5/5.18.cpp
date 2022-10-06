

//(a)
do { // 应该添加花括号
    int v1, v2;
    cout << "Please enter two numbers to sum:" ;
    if (cin >> v1 >> v2)
        cout << "Sum is: " << v1 + v2 << endl;
}while (cin);

    
//(b)
int ival;
do {
        // . . .
} while (ival = get_response()); // 应该将ival 定义在循环外

//(c)
int ival = get_response();
do {
        ival = get_response();
} while (ival); // 应该将ival 定义在循环外

