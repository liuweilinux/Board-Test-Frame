
// serialDlg.h : 头文件
//

#pragma once
#include "afxwin.h"
#include "mscomm1.h"
#include "MyButton.h"

// CserialDlg 对话框
class CserialDlg : public CDialogEx
{
// 构造
public:
	CserialDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_SERIAL_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
	CWinThread* pThread;
	
	//void get_state(int boxno);
private:
	CString m_edit_receive;
	CString m_edit_receive2;
	CComboBox m_check_serial;
	CComboBox m_baud_rate;
	CFont m_Font;
	CRect m_rect;

public:
	CMscomm1 m_mscomm;
	DECLARE_EVENTSINK_MAP()

	afx_msg void OnBnClickedButtonbox1();
	afx_msg void OnBnClickedButtonbox02();
	afx_msg void OnBnClickedButtonbox3();
	afx_msg void OnBnClickedButtonbox4();
	afx_msg void OnBnClickedButtonbox5();
	afx_msg void OnBnClickedButtonbox6();
	afx_msg void OnBnClickedButtonbox7();
	afx_msg void OnBnClickedButtonbox8();
	afx_msg void OnBnClickedButtonbox9();
	afx_msg void OnBnClickedButtonbox10();
	afx_msg void OnBnClickedButtonbox11();
	afx_msg void OnBnClickedButtonbox12();
	afx_msg void OnBnClickedButtonbox13();
	afx_msg void OnBnClickedButtonbox14();
	afx_msg void OnBnClickedButtonbox15();
	afx_msg void OnBnClickedButtonbox16();
	afx_msg void OnBnClickedButtonbox17();
	afx_msg void OnBnClickedButtonbox18();
	afx_msg void OnBnClickedButtonbox19();
	afx_msg void OnBnClickedButtonbox20();

	afx_msg void OnBnClickedButtonOpen();
	afx_msg void OnBnClickedButtonClean();
	afx_msg void OnBnClickedButtonClose();
	afx_msg void OnBnClickedButtonupdatestate();

	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnSize(UINT nType, int cx, int cy);

	void OnCommMscomm1();
	void Chekall();
	void showWhiteSmoke(int boxno);
	void open_box(int boxno);
	void get_state(int boxno);
	void showblue(int boxno);
	void select_open_close();
	void showred(int boxno);
	void ChangeSIZE(CWnd * pWnd, int cx, int cy);

	int String2Hex(CString str, CByteArray &senddata);
	int char2Hex(char* str, CByteArray &senddata, int a);
	char ConvertHexChar(char);
	int getDoorStatus();

	char str[11] = { 0 };
	


	CButton m_ctrlHexSend;

	CMyButton m_box1;
	CMyButton m_box2;
	CMyButton m_box3;
	CMyButton m_box4;
	CMyButton m_box5;
	CMyButton m_box6;
	CMyButton m_box7;
	CMyButton m_box8;
	CMyButton m_box9;
	CMyButton m_box10;
	CMyButton m_box11;
	CMyButton m_box12;
	CMyButton m_box13;
	CMyButton m_box14;
	CMyButton m_box15;
	CMyButton m_box16;
	CMyButton m_box17;
	CMyButton m_box18;
	CMyButton m_box19;
	CMyButton m_box20;

	CString m_showcheck;
	CStatic m_showcheckc;
	CButton m_machine_test;
	CButton m_frame_test;
	CStatic m_box1text;
	CStatic m_box2text;
	CStatic m_box3text;
	CStatic m_box4text;
	CStatic m_box5text;
	CStatic m_box6text;
	CStatic m_box7text;
	CStatic m_box8text;
	CStatic m_box9text;
	CStatic m_box10text;
	CStatic m_box11text;
	CStatic m_box12text;
	CStatic m_box13text;
	CStatic m_box14text;
	CStatic m_box15text;
	CStatic m_box16text;
	CStatic m_box17text;
	CStatic m_box18text;
	CStatic m_box19text;
	CStatic m_box20text;

	int state;
	int openbox;
	int boxno;
	int check;
	int frame_check;

	int flag;
	int framestate;
	int boxnum;
	int showboxno;
};