//在buildMap中，如果进行如下改写，会有什么效果？
trans_map[key] = value.substr(1);
//改为
trans_map.insert({ key, value.substr(1) });

// 原本只会保留转换规则最后一次添加的规则
// 如果改为insert的话，则保留第一次添加规则