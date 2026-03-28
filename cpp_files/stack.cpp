#include <bits/stdc++.h>  // 包含C++标准库的所有头文件
using namespace std;      // 使用标准命名空间
stack < int > s;          // 声明一个整型栈s
int main()
{
    // 提高输入输出效率，取消与C标准库的同步
	ios::sync_with_stdio(false);
	cin.tie();
	cout.tie();
	int n, x, t;            // 声明整型变量n、x、t
	string s1;             // 声明字符串变量s1
	cin >> t;              // 读取测试用例的数量t
    // 执行t次测试用例
	while (t--)
	{
        // 清空栈，确保每次测试用例开始时栈为空
        while(!s.empty()) s.pop();
		cin >> n;          // 读取操作的数量n
        // 执行n次操作
		for (int i = 1; i <= n; i++) 
		{
			cin >> s1;     // 读取操作命令
            // 处理push命令：将元素x压入栈中
			if (s1 == "push")
			{
				cin >> x;
				s.push(x);
			}
            // 处理pop命令：弹出栈顶元素
			else if (s1 == "pop")
			{
                // 如果栈为空，输出"Empty"
				if (s.empty()) cout << "Empty" << endl;
                // 否则弹出栈顶元素
				else s.pop();
			} 
            // 处理query命令：查询栈顶元素
			else if (s1 == "query")
			{
                // 如果栈为空，输出"Anguei!"
				if (s.empty()) cout << "Anguei!" << endl;
                // 否则输出栈顶元素
				else cout << s.top() << endl;
			}
            // 处理size命令：查询栈中元素个数
			else if (s1 == "size")
			{
				cout << s.size() << endl;
			}
		}
	}
	return 0;              // 程序正常结束
}