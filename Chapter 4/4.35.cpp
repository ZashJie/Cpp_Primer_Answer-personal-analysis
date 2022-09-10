/*

(a) cval = 'a' + 3;
(b) fval = ui - ival * 1.0;
(c) dval = ui * fval;
(d) cval = ival + fval + dval;




(a) 'a'转换成了int型
【错】(b) ival转换成了float型，相乘的结果转换为unsigned int型 
修正：(b) ival 转换为 double，ui 转换为 double，结果转换为 float
(c) ui转换成float，最后转换成double
(d) ival转换成float，结果转换成double，最后转换成char



*/