
// InterfaceView.cpp : CInterfaceView ���ʵ��
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
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CInterfaceView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CInterfaceView ����/����

CInterfaceView::CInterfaceView()
{
	// TODO: �ڴ˴���ӹ������

}

CInterfaceView::~CInterfaceView()
{
}

BOOL CInterfaceView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CInterfaceView ����

void CInterfaceView::OnDraw(CDC* /*pDC*/)
{
	CInterfaceDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CInterfaceView ��ӡ


void CInterfaceView::OnFilePrintPreview()
{
	AFXPrintPreview(this);
}

BOOL CInterfaceView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CInterfaceView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CInterfaceView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
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


// CInterfaceView ���

#ifdef _DEBUG
void CInterfaceView::AssertValid() const
{
	CView::AssertValid();
}

void CInterfaceView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CInterfaceDoc* CInterfaceView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CInterfaceDoc)));
	return (CInterfaceDoc*)m_pDocument;
}
#endif //_DEBUG


// CInterfaceView ��Ϣ�������
