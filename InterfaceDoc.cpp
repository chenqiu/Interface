
// InterfaceDoc.cpp : CInterfaceDoc ���ʵ��
//

#include "stdafx.h"
#include "Interface.h"

#include "InterfaceDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CInterfaceDoc

IMPLEMENT_DYNCREATE(CInterfaceDoc, CDocument)

BEGIN_MESSAGE_MAP(CInterfaceDoc, CDocument)
END_MESSAGE_MAP()


// CInterfaceDoc ����/����

CInterfaceDoc::CInterfaceDoc()
{
	// TODO: �ڴ����һ���Թ������

}

CInterfaceDoc::~CInterfaceDoc()
{
}

BOOL CInterfaceDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: �ڴ�������³�ʼ������
	// (SDI �ĵ������ø��ĵ�)

	return TRUE;
}




// CInterfaceDoc ���л�

void CInterfaceDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: �ڴ���Ӵ洢����
	}
	else
	{
		// TODO: �ڴ���Ӽ��ش���
	}
}


// CInterfaceDoc ���

#ifdef _DEBUG
void CInterfaceDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CInterfaceDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CInterfaceDoc ����
