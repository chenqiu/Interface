
// InterfaceDoc.h : CInterfaceDoc ��Ľӿ�
//


#pragma once


class CInterfaceDoc : public CDocument
{
protected: // �������л�����
	CInterfaceDoc();
	DECLARE_DYNCREATE(CInterfaceDoc)

// ����
public:

// ����
public:

// ��д
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);

// ʵ��
public:
	virtual ~CInterfaceDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};


