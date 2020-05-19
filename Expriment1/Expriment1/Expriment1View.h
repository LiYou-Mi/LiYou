
// Expriment1View.h : CExpriment1View 类的接口
//

#pragma once


class CExpriment1View : public CView
{
protected: // 仅从序列化创建
	CExpriment1View();
	DECLARE_DYNCREATE(CExpriment1View)

// 特性
public:
	CExpriment1Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CExpriment1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
//	void OnRButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // Expriment1View.cpp 中的调试版本
inline CExpriment1Doc* CExpriment1View::GetDocument() const
   { return reinterpret_cast<CExpriment1Doc*>(m_pDocument); }
#endif

