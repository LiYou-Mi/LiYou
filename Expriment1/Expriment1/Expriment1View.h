
// Expriment1View.h : CExpriment1View ��Ľӿ�
//

#pragma once


class CExpriment1View : public CView
{
protected: // �������л�����
	CExpriment1View();
	DECLARE_DYNCREATE(CExpriment1View)

// ����
public:
	CExpriment1Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CExpriment1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
//	void OnRButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // Expriment1View.cpp �еĵ��԰汾
inline CExpriment1Doc* CExpriment1View::GetDocument() const
   { return reinterpret_cast<CExpriment1Doc*>(m_pDocument); }
#endif

