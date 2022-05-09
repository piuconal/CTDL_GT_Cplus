#include <bits/stdc++.h>
#include <fcntl.h>
#include <windows.h>
using namespace std;
#define FOR(i, l, r) for (int i = l; i <= r; i++)
#define FOD(i, r, l) for (int i = r; i >= l; i--)

void PiuConal()
{
	HANDLE piu = GetStdHandle(STD_OUTPUT_HANDLE);
	FOR(i, 1, 58)
	{
		if (i % 2)
		{
			SetConsoleTextAttribute(piu, 13);
			cout << "➢";
			Sleep(10);
		}
		else
		{
			SetConsoleTextAttribute(piu, 10);
			cout << "➢";
			Sleep(10);
		}
	}
	cout << '\n';

	SetConsoleTextAttribute(piu, 2);
	cout << "  ⋆";
	SetConsoleTextAttribute(piu, 7);
	cout << "	   !";
	SetConsoleTextAttribute(piu, 2);
	cout << "        ⋆\n";
	Sleep(10);

	SetConsoleTextAttribute(piu, 2);
	cout << "  ⋆.⋆";
	SetConsoleTextAttribute(piu, 12);
	cout << "    ooooo";
	SetConsoleTextAttribute(piu, 2);
	cout << "    ⋆.⋆";
	SetConsoleTextAttribute(piu, 9);
	cout << "    ☪ Call me: PiuConal\n";
	Sleep(10);

	SetConsoleTextAttribute(piu, 2);
	cout << "  ⋆..⋆";
	SetConsoleTextAttribute(piu, 12);
	cout << "  oo";
	SetConsoleTextAttribute(piu, 5);
	cout << "***";
	SetConsoleTextAttribute(piu, 12);
	cout << "oo";
	SetConsoleTextAttribute(piu, 2);
	cout << "  ⋆..⋆";
	SetConsoleTextAttribute(piu, 9);
	cout << "     ☏ 0971.11.06.02\n";
	Sleep(10);

	SetConsoleTextAttribute(piu, 2);
	cout << "  ⋆..";
	SetConsoleTextAttribute(piu, 12);
	cout << "oooo";
	SetConsoleTextAttribute(piu, 13);
	cout << " (O) ";
	SetConsoleTextAttribute(piu, 12);
	cout << "oooo";
	SetConsoleTextAttribute(piu, 2);
	cout << "..⋆";
	SetConsoleTextAttribute(piu, 9);
	cout << "      ✑ tronghieu2628@gmail.com\n";
	Sleep(10);

	SetConsoleTextAttribute(piu, 2);
	cout << "   ⋆.⋆.⋆";
	SetConsoleTextAttribute(piu, 12);
	cout << "ooo ooo";
	SetConsoleTextAttribute(piu, 2);
	cout << "⋆.⋆.⋆\n";
	Sleep(10);

	SetConsoleTextAttribute(piu, 2);
	cout << "     ⋆   ";
	SetConsoleTextAttribute(piu, 5);
	cout << "-{v}-";
	SetConsoleTextAttribute(piu, 2);
	cout << "   ⋆\n";
	Sleep(10);
	cout << "           ⋆\n";
	Sleep(10);

	FOR(i, 1, 58)
	{
		if (i % 2)
		{
			SetConsoleTextAttribute(piu, 13);
			cout << "➢";
			Sleep(10);
		}
		else
		{
			SetConsoleTextAttribute(piu, 10);
			cout << "➢";
			Sleep(10);
		}
	}
	cout << '\n';
	SetConsoleTextAttribute(piu, 7);
}

struct SinhVien
{
	int ma;
	char ten[150];
};
// tạo cấu trúc danh sách liên kết đơn
struct Node
{
	SinhVien *data;
	Node *pNext;
};

struct SingleList
{
	Node *pHead;
};
// khởi tạo danh sách liên kết đơn
void Initialize(SingleList *&list)
{
	list = new SingleList;
	list->pHead = NULL;
}
// nhập thông tin sinh viên 
SinhVien *NhapSinhVien()
{
	SinhVien *sv = new SinhVien;
	cout << "Nhập MSV:";
	cin >> sv->ma;
	cin.ignore();
	cout << "Nhập họ và tên:";
	gets(sv->ten);
	return sv;
}
// tạo node sinh viên
Node *CreateNode(SinhVien *sv)
{
	Node *pNode = new Node;
	if (pNode != NULL)
	{
		pNode->data = sv;
		pNode->pNext = NULL;
	}
	else
	{
		cout << "Cập nhật bộ nhớ thất bại!";
	}
	return pNode;
}
// thêm node vào cuối danh sách
void InsertLast(SingleList *&list, SinhVien *sv)
{
	Node *pNode = CreateNode(sv);
	if (list->pHead == NULL)
	{
		list->pHead = pNode;
	}
	else
	{
		Node *pTmp = list->pHead;

		while (pTmp->pNext != NULL)
		{
			pTmp = pTmp->pNext;
		}
		pTmp->pNext = pNode;
	}
}
// hiển thị danh sách
void PrintList(SingleList *list)
{
	Node *pTmp = list->pHead;
	if (pTmp == NULL)
	{
		cout << "Danh sach rong";
		return;
	}
	while (pTmp != NULL)
	{
		SinhVien *sv = pTmp->data;
		cout << sv->ma << "\t" << sv->ten << "\n";
		pTmp = pTmp->pNext;
	}
}
// sắp xếp
void SortList(SingleList *&list)
{
	for (Node *pTmp = list->pHead; pTmp != NULL; pTmp = pTmp->pNext)
	{
		for (Node *pTmp2 = pTmp->pNext; pTmp2 != NULL; pTmp2 = pTmp2->pNext)
		{
			SinhVien *svTmp = pTmp->data;
			SinhVien *svTmp2 = pTmp2->data;
			if (svTmp2->ma < svTmp->ma)
			{
				int ma = svTmp->ma;
				char ten[150];
				strcpy(ten, svTmp->ten);

				svTmp->ma = svTmp2->ma;
				strcpy(svTmp->ten, svTmp2->ten);
				svTmp2->ma = ma;
				strcpy(svTmp2->ten, ten);
			}
		}
	}
}
// xóa
void RemoveNode(SingleList *&list, int ma)
{
	Node *pDel = list->pHead;
	if (pDel == NULL)
	{
		cout << "Danh sach rong!";
	}
	else
	{
		Node *pPre = NULL;
		while (pDel != NULL)
		{
			SinhVien *sv = pDel->data;
			if (sv->ma == ma)
				break;
			pPre = pDel;
			pDel = pDel->pNext;
		}
		if (pDel == NULL)
		{
			cout << "khong tim thay MSSV: " << ma;
		}
		else
		{
			if (pDel == list->pHead)
			{
				list->pHead = list->pHead->pNext;
				pDel->pNext = NULL;
				delete pDel;
				pDel = NULL;
			}
			else
			{
				pPre->pNext = pDel->pNext;
				pDel->pNext = NULL;
				delete pDel;
				pDel = NULL;
			}
		}
	}
}

int main()
{
	PiuConal();

	SingleList *list;
	Initialize(list);
	SinhVien *sv1 = NhapSinhVien();
	InsertLast(list, sv1);
	SinhVien *sv2 = NhapSinhVien();
	InsertLast(list, sv2);
	SinhVien *sv3 = NhapSinhVien();
	InsertLast(list, sv3);
	PrintList(list);

	SortList(list);
	cout << "\nSau khi sắp xếp:\n";
	PrintList(list);

	cout << "\nXóa sinh viên có MSV: ";
	int ma;
	cin >> ma;
	RemoveNode(list, ma);
	cout << "\nSau khi xóa:\n";
	PrintList(list);
	return 0;
}