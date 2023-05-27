//#include <iostream>
//using namespace std;
//
//int Index[100001], inorder[100001], postorder[100001], n;
//
//void getPreOrder(int inStart, int inEnd, int postStart, int postEnd)
//{
//	if (inStart > inEnd || postStart > postEnd) return;
//	int rootIndex = Index[postorder[postEnd]];
//	int leftSize = rootIndex - inStart;
//	int rightSize = inEnd - rootIndex;
//	cout << inorder[rootIndex] << ' ';
//
//	getPreOrder(inStart, rootIndex - 1, postStart, postStart + leftSize - 1);
//	getPreOrder(rootIndex + 1, inEnd, postStart + leftSize, postEnd - 1);
//}
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> inorder[i];
//		Index[inorder[i]] = i;
//	}
//	for (int i = 1; i <= n; i++)
//		cin >> postorder[i];
//
//	getPreOrder(1, n, 1, n);
//	return 0;
//}