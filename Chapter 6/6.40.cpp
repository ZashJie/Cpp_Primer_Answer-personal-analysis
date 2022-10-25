int ff(int a, int b = 0, int c = 0);

// 正确

char* init(int ht = 24, int wd, char backgrnd);

// 错误，一旦一个形参被赋予某个值后，那么它之后的形参都要默认值