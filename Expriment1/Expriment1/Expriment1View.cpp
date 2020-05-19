
// Expriment1View.cpp : CExpriment1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Expriment1.h"
#endif

#include "Expriment1Doc.h"
#include "Expriment1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CExpriment1View

IMPLEMENT_DYNCREATE(CExpriment1View, CView)

BEGIN_MESSAGE_MAP(CExpriment1View, CView)
	ON_WM_LBUTTONDOWN()
//	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CExpriment1View 构造/析构

CExpriment1View::CExpriment1View()
{
	// TODO: 在此处添加构造代码
}

CExpriment1View::~CExpriment1View()
{
}

BOOL CExpriment1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CExpriment1View 绘制

void CExpriment1View::OnDraw(CDC* pDC)
{
	CExpriment1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CExpriment1View 诊断

#ifdef _DEBUG
void CExpriment1View::AssertValid() const
{
	CView::AssertValid();
}

void CExpriment1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CExpriment1Doc* CExpriment1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CExpriment1Doc)));
	return (CExpriment1Doc*)m_pDocument;
}
#endif //_DEBUG


// CExpriment1View 消息处理程序


void CExpriment1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CView::OnLButtonDown(nFlags, point);
	CString s1 = _T("我是李游");
	CClientDC dc(this);
	dc.TextOutW(300, 400, s1);

}
