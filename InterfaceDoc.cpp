
// InterfaceDoc.cpp : CInterfaceDoc 类的实现
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


// CInterfaceDoc 构造/析构

CInterfaceDoc::CInterfaceDoc()
{
	// TODO: 在此添加一次性构造代码

}

CInterfaceDoc::~CInterfaceDoc()
{
}

BOOL CInterfaceDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: 在此添加重新初始化代码
	// (SDI 文档将重用该文档)

	return TRUE;
}




// CInterfaceDoc 序列化

void CInterfaceDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: 在此添加存储代码
	}
	else
	{
		// TODO: 在此添加加载代码
	}
}


// CInterfaceDoc 诊断

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


// CInterfaceDoc 命令
