
// Expriment1View.cpp : CExpriment1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
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
ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CExpriment1View ����/����

CExpriment1View::CExpriment1View()
{
	// TODO: �ڴ˴���ӹ������
	CString s;
}

CExpriment1View::~CExpriment1View()
{
}

BOOL CExpriment1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CExpriment1View ����

void CExpriment1View::OnDraw(CDC* pDC)
{
	CExpriment1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CExpriment1View ���

#ifdef _DEBUG
void CExpriment1View::AssertValid() const
{
	CView::AssertValid();
}

void CExpriment1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CExpriment1Doc* CExpriment1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CExpriment1Doc)));
	return (CExpriment1Doc*)m_pDocument;
}
#endif //_DEBUG


// CExpriment1View ��Ϣ�������


void CExpriment1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CExpriment1Doc* pDoc = GetDocument();
	CView::OnLButtonDown(nFlags, point);
	pDoc->count++;
}


void CExpriment1View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CExpriment1Doc* pDoc = GetDocument();
	CView::OnRButtonDown(nFlags, point);
	CString s;
	s.Format( _T("%d"),pDoc->count);
	CClientDC DC(this);
	DC.TextOutW(200, 200, s);

}
