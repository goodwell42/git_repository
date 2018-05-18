#include <stdio.h>

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
typedef int Status;					
/* Status是函数的类型，其值是函数结果状态代码，如OK等 */

#define MAXSIZE 20 					/*储存空间初始分配量*/
typedef int ElemType;				/*Elemtype类型根据实际情况而定*/
typedef struct 
{
	ElemType data[MAXSIZE];			/*数组存储数据元素，最大MAXSIZE*/
	int length;						/*线性表当前长度*/
}SqList;

/*获得元素操作*/
/* 初始条件：顺序线性表L已经存在，1 <= i <= ListLength(L) */
/* 操作结果：用e返回L中第i个数据元素的值 */
Status GetElem (SqList L, int i, ElemType *e) {
	if (L.length == 0 || i < 1 || i > L.length)
	{
		return ERROR;
	}
	*e = L.data[i-1];
	return OK;
}

/*插入操作*/
/* 初始条件：顺序线性表L已经存在，1 <= i <= ListLength(L) */
/* 操作结果：在L中第i个位置之前插入新的数据元素e，L的长度加1 */
Status ListInsert(SqList *L, int i, ElemType e) {
	int k; 
	if (L->length == MAXSIZE)		/*顺序线性表已经满了*/
	{
		return ERROR;
	}
	if (i < 1 || i > L->length + 1)	/*当i不在范围内时*/
	{
		return ERROR;
	}
	if (i <= L->length)				/*若插入数据位置不在表尾*/
	{
		for (k = L->length - 1; k >= i - 1; k--)
		{
			L->data[k+1] = L->data[k];
		}
	}
	L->data[i-1] = e;
	L->length++;
	return OK;
}

/*删除操作*/

int main(int argc, char const *argv[])
{
	

	return 0;
}
