
// InterfaceView.cpp : CInterfaceView 类的实现
//

#include "stdafx.h"
#include "Interface.h"

#include "InterfaceDoc.h"
#include "InterfaceView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CInterfaceView

IMPLEMENT_DYNCREATE(CInterfaceView, CView)

BEGIN_MESSAGE_MAP(CInterfaceView, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CInterfaceView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CInterfaceView 构造/析构

CInterfaceView::CInterfaceView()
{
	// TODO: 在此处添加构造代码

}

CInterfaceView::~CInterfaceView()
{
}

BOOL CInterfaceView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CInterfaceView 绘制

void CInterfaceView::OnDraw(CDC* /*pDC*/)
{
	CInterfaceDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CInterfaceView 打印


void CInterfaceView::OnFilePrintPreview()
{
	AFXPrintPreview(this);
}

BOOL CInterfaceView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CInterfaceView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void CInterfaceView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}

void CInterfaceView::OnRButtonUp(UINT nFlags, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CInterfaceView::OnContextMenu(CWnd* pWnd, CPoint point)
{
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
}


// CInterfaceView 诊断

#ifdef _DEBUG
void CInterfaceView::AssertValid() const
{
	CView::AssertValid();
}

void CInterfaceView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CInterfaceDoc* CInterfaceView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CInterfaceDoc)));
	return (CInterfaceDoc*)m_pDocument;
}
#endif //_DEBUG


// CInterfaceView 消息处理程序
