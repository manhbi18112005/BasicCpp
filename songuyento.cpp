#include <bits/stdc++.h>
using namespace std;

bool soNguyenTo(int n)
{
	if (n < 2) // Nếu số n nhỏ hơn 2
	{
		return false;// return false
	}
	else if (n>2)// Nếu số n lớn hơn 2
	{
		if (n % 2 == 0)  // Xét xem n có chia hết cho 2 không?
		{
			return false;// Nếu chia hết, return false.
		}
		for (int i = 3; i < sqrt((float)n); i += 2)  // Xét từ 3 đến căn bậc 2 của số n
		{
			if (n%i == 0)  // Nếu n chia hết cho một số nào đó trong đoạn này
			{
				return false; // return false
			}
		}
	}
	return true; // Sau tất cả các chỗ trên, nó mà không sai thì cuối cùng nó đúng :3
}

int main()
{
	int n;
	cin >> n;
	if (soNguyenTo(n) == true)
	{
		cout << "So " << n << " la so nguyen to.";
	}
	else
	{
		cout << "So " << n << " khong phai la so nguyen to.";
	}
	return 0;
}
