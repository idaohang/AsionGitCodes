// KmlDlg.cpp : 實作檔
//

#include "stdafx.h"
#include "GPS.h"
#include "KmlDlg.h"

//#include "GPSDlg.h"

CKmlDlg* CKmlDlg::kmlDlg = NULL;

HANDLE	hReadEvent;

// CKmlDlg 對話方塊

IMPLEMENT_DYNAMIC(CKmlDlg, CDialog)
CKmlDlg::CKmlDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CKmlDlg::IDD, pParent)
{
	kmlDlg = this;
}

CKmlDlg::~CKmlDlg()
{

}

void CKmlDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT1, m_directory);
	DDX_Control(pDX, IDC_EDIT2, m_alltxt);
	DDX_Control(pDX, IDC_CHECK76, m_selectall);
	DDX_Control(pDX, IDC_CHECK78, m_hselectall);
	DDX_Control(pDX, IDC_CHECK1, m_check[0]);
	DDX_Control(pDX, IDC_CHECK2, m_check[1]);
	DDX_Control(pDX, IDC_CHECK3, m_check[2]);
	DDX_Control(pDX, IDC_CHECK4, m_check[3]);
	DDX_Control(pDX, IDC_CHECK5, m_check[4]);
	DDX_Control(pDX, IDC_CHECK6, m_check[5]);
	DDX_Control(pDX, IDC_CHECK7, m_check[6]);
	DDX_Control(pDX, IDC_CHECK8, m_check[7]);
	DDX_Control(pDX, IDC_CHECK9, m_check[8]);
	DDX_Control(pDX, IDC_CHECK10, m_check[9]);	
	DDX_Control(pDX, IDC_CHECK11, m_check[10]);	
	DDX_Control(pDX, IDC_CHECK12, m_check[11]);	
	DDX_Control(pDX, IDC_CHECK13, m_check[12]);	
	DDX_Control(pDX, IDC_CHECK14, m_check[13]);
	DDX_Control(pDX, IDC_CHECK15, m_check[14]);	
	DDX_Control(pDX, IDC_CHECK16, m_check[15]);	
	DDX_Control(pDX, IDC_CHECK17, m_check[16]);	
	DDX_Control(pDX, IDC_CHECK18, m_check[17]);	
	DDX_Control(pDX, IDC_CHECK19, m_check[18]);	
	DDX_Control(pDX, IDC_CHECK20, m_check[19]);	
	DDX_Control(pDX, IDC_CHECK21, m_check[20]);	
	DDX_Control(pDX, IDC_CHECK22, m_check[21]);	
	DDX_Control(pDX, IDC_CHECK23, m_check[22]);	
	DDX_Control(pDX, IDC_CHECK24, m_check[23]);	
	DDX_Control(pDX, IDC_CHECK25, m_check[24]);	
	DDX_Control(pDX, IDC_CHECK26, m_check[25]);	
	DDX_Control(pDX, IDC_CHECK27, m_check[26]);	
	DDX_Control(pDX, IDC_CHECK28, m_check[27]);	
	DDX_Control(pDX, IDC_CHECK29, m_check[28]);	
	DDX_Control(pDX, IDC_CHECK30, m_check[29]);	
	DDX_Control(pDX, IDC_CHECK31, m_check[30]);	
	DDX_Control(pDX, IDC_CHECK32, m_check[31]);	
	DDX_Control(pDX, IDC_CHECK33, m_check[32]);	
	DDX_Control(pDX, IDC_CHECK34, m_check[33]);	
	DDX_Control(pDX, IDC_CHECK35, m_check[34]);	
	DDX_Control(pDX, IDC_CHECK36, m_check[35]);	
	DDX_Control(pDX, IDC_CHECK37, m_check[36]);	
	DDX_Control(pDX, IDC_CHECK38, m_check[37]);	
	DDX_Control(pDX, IDC_CHECK39, m_check[38]);	
	DDX_Control(pDX, IDC_CHECK40, m_check[39]);	
	DDX_Control(pDX, IDC_CHECK41, m_check[40]);	
	DDX_Control(pDX, IDC_CHECK42, m_check[41]);	
	DDX_Control(pDX, IDC_CHECK43, m_check[42]);	
	DDX_Control(pDX, IDC_CHECK44, m_check[43]);	
	DDX_Control(pDX, IDC_CHECK45, m_check[44]);	
	DDX_Control(pDX, IDC_CHECK46, m_check[45]);	
	DDX_Control(pDX, IDC_CHECK47, m_check[46]);	
	DDX_Control(pDX, IDC_CHECK48, m_check[47]);	
	DDX_Control(pDX, IDC_CHECK49, m_check[48]);	
	DDX_Control(pDX, IDC_CHECK50, m_check[49]);	
	DDX_Control(pDX, IDC_CHECK51, m_check[50]);	
	DDX_Control(pDX, IDC_CHECK52, m_check[51]);	
	DDX_Control(pDX, IDC_CHECK53, m_check[52]);	
	DDX_Control(pDX, IDC_CHECK54, m_check[53]);	
	DDX_Control(pDX, IDC_CHECK55, m_check[54]);	
	DDX_Control(pDX, IDC_CHECK56, m_check[55]);	
	DDX_Control(pDX, IDC_CHECK57, m_check[56]);	
	DDX_Control(pDX, IDC_CHECK58, m_check[57]);	
	DDX_Control(pDX, IDC_CHECK59, m_check[58]);	
	DDX_Control(pDX, IDC_CHECK60, m_check[59]);	
	DDX_Control(pDX, IDC_CHECK61, m_check[60]);
	DDX_Control(pDX, IDC_CHECK62, m_check[61]);	
	DDX_Control(pDX, IDC_CHECK63, m_check[62]);	
	DDX_Control(pDX, IDC_CHECK64, m_check[63]);	
	DDX_Control(pDX, IDC_CHECK65, m_check[64]);	
	DDX_Control(pDX, IDC_CHECK66, m_check[65]);	
	DDX_Control(pDX, IDC_CHECK67, m_check[66]);	
	DDX_Control(pDX, IDC_CHECK68, m_check[67]);	
	DDX_Control(pDX, IDC_CHECK69, m_check[68]);	
	DDX_Control(pDX, IDC_CHECK70, m_check[69]);
	DDX_Control(pDX, IDC_CHECK71, m_check[70]);	
	DDX_Control(pDX, IDC_CHECK72, m_check[71]);	
	DDX_Control(pDX, IDC_CHECK73, m_check[72]);	
	DDX_Control(pDX, IDC_CHECK74, m_check[73]);
	DDX_Control(pDX, IDC_CHECK75, m_check[74]);	
	DDX_Control(pDX, IDC_COMBO1, m_color);
}


BEGIN_MESSAGE_MAP(CKmlDlg, CDialog)
	ON_BN_CLICKED(IDC_BPLAYER, OnBnClickedBplayer)
	ON_BN_CLICKED(IDOK, OnBnClickedOk)
	ON_BN_CLICKED(IDC_CHECK76, OnBnClickedCheck76)
	ON_BN_CLICKED(IDC_CHECK78, OnBnClickedCheck78)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()


// CKmlDlg 訊息處理常式

BOOL CKmlDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	for(int i=0;i<NumOfCheckBox;i++)
	{
		m_check[i].ShowWindow(SW_HIDE);
	}
	m_alltxt.ShowWindow(SW_HIDE);	

	isConvertFinish = false;
	m_color.SetCurSel(0);

	return TRUE;  // return TRUE unless you set the focus to a control
	// EXCEPTION: OCX 屬性頁應傳回 FALSE
}
UINT ConvertToKml(LPVOID pParam)
{	
	CKmlDlg::kmlDlg->convert_all_file();
	//AfxEndThread(0);	
	return 0;
}

UINT ContinueToConvert(LPVOID pParam)
{
	CKmlDlg::kmlDlg->SetConvertFinish(false);
	WaitForSingleObject(hReadEvent,INFINITE);
	if(hReadEvent)
	{	
		CloseHandle(hReadEvent);
		hReadEvent = NULL;
	}	
	if(CKmlDlg::kmlDlg->NoOfFile < CKmlDlg::kmlDlg->NumOfFile)	
	{
		CKmlDlg::kmlDlg->OnBnClickedOk();	
	}
	else 
	{
		CKmlDlg::kmlDlg->SetConvertFinish(true); 
		CKmlDlg::kmlDlg->OnBnClickedCheck76(); 
		CKmlDlg::kmlDlg->NoOfFile = 0;
	}

	return 0;
}



void CKmlDlg::OnBnClickedBplayer()
{
	CString fileName;

	CFileDialog dlgFile(true, _T("*.txt"), NULL, OFN_FILEMUSTEXIST | OFN_HIDEREADONLY, _T("*.txt|*.txt||"), this);

//	dlgFile.GetOFN().lpstrFile = fileName.GetBuffer(MyMaxPath);
//	dlgFile.GetOFN().nMaxFile = MyMaxPath;	
	INT_PTR nResult = dlgFile.DoModal();
//	fileName.ReleaseBuffer();

	if(nResult != IDOK)
	{
		return;
	}
	fileName = dlgFile.GetPathName();

	m_directory.SetWindowText(fileName);
	sPath = Utility::GetFilePath(fileName) + "\\";

	for(int i=0;i<NumOfCheckBox;i++)
	{
		m_check[i].SetCheck(0);
	}

	int s = m_selectall.GetCheck();
	if(m_selectall.GetCheck() == BST_UNCHECKED)
		GetDatFile();
	else if(m_selectall.GetCheck() == BST_CHECKED)
		GetAllDatFile();

	NoOfFile = 0;
	m_hselectall.SetCheck(BST_CHECKED);
}

void CKmlDlg::GetDatFile()
{
	for(int i=0;i<NumOfCheckBox;i++)
	{
		m_check[i].ShowWindow(1);
	}
	num=0;
//	CString sFilterName = sPath + sPathName; // 完整的路徑以及可用 "?" 或 "*" 表示的檔案名稱, 例如 "*.*" 表示所有檔案
	CString sFilterName = sPath+"*.txt"; 
	
	HANDLE hFind = NULL;
	WIN32_FIND_DATA fd;
	//CString sTemp = "  ";
	if ((hFind = ::FindFirstFile ((LPCTSTR) sFilterName, &fd)) != INVALID_HANDLE_VALUE)
	{
		if (!(fd.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)) // 檢查所搜尋到的是否為目錄名稱
		{
			FileName[num] = fd.cFileName;
			FilePath[num] = sPath + fd.cFileName; // fd.cFileName只有檔名, 請自行合併路徑後使用
			if(num<NumOfCheckBox)
			m_check[num].SetWindowText(FileName[num]);			
			while (::FindNextFile(hFind, &fd))
			{
				num++;
				if (!(fd.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY))
				{
					FileName[num] = fd.cFileName;
					FilePath[num] = sPath + fd.cFileName;
					if(num<NumOfCheckBox)
					{
						m_check[num].SetWindowText(FileName[num]);
					//	break;
					}
				}
			}
		}
		FindClose(hFind);
	}
	NumOfFile = num+1;
	for(int i=0;i<NumOfFile;i++) m_check[i].SetCheck(BST_CHECKED);	
	for(int i=NumOfFile;i<NumOfCheckBox;i++)m_check[i].ShowWindow(0);
	
}

void CKmlDlg::GetAllDatFile()
{
	char msg[300];
	num=0;
//	CString sFilterName = sPath + sPathName; // 完整的路徑以及可用 "?" 或 "*" 表示的檔案名稱, 例如 "*.*" 表示所有檔案
	CString sFilterName = sPath+"*.txt"; 	
	HANDLE hFind = NULL;
	WIN32_FIND_DATA fd;
	//CString sTemp = "  ";
	if ((hFind = ::FindFirstFile ((LPCTSTR) sFilterName, &fd)) != INVALID_HANDLE_VALUE)
	{
		if (!(fd.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)) // 檢查所搜尋到的是否為目錄名稱
		{
			FileName[num] = fd.cFileName;
			FilePath[num] = sPath + fd.cFileName; // fd.cFileName只有檔名, 請自行合併路徑後使用				
			while (::FindNextFile(hFind, &fd))
			{
				num++;
				if (!(fd.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY))
				{
					FileName[num] = fd.cFileName;
					FilePath[num] = sPath + fd.cFileName;						
				}
			}
		}
		FindClose(hFind);
	}	
	NumOfFile = num+1;
	CString MSG;
	sprintf_s(msg, sizeof(msg), "Total (#%d) txt files selected.\r\n\r\n",NumOfFile);
	MSG = msg;
	for(int i=0;i<NumOfFile;i++)
	{		
		int x = i%10;
		if(i!=0 && !x)
			sprintf_s(msg, sizeof(msg), "%s \r\n",FileName[i]);
		else
			sprintf_s(msg, sizeof(msg), "%s ",FileName[i]);		
		MSG += msg;
	}
	m_alltxt.SetWindowText(MSG);
}

void CKmlDlg::OnBnClickedOk()
{
	memset(&msg_gpgga, 0, sizeof(GPGGA));
	isConvertFinish = false;

	hReadEvent = CreateEvent(NULL, TRUE, FALSE, NULL);
	if(!ResetEvent(hReadEvent))
	{
		DWORD error = GetLastError();
	}

	CString fileName;	
	m_directory.GetWindowText(fileName);
	if(fileName.IsEmpty())
	{
		int ret = AfxMessageBox("您尚未選擇任何txt檔", MB_YESNOCANCEL | MB_ICONQUESTION);		
	}

	if(m_selectall.GetCheck() == BST_UNCHECKED)
	{
        int numbers = 0;
		for(int i=0; i<NumOfCheckBox; ++i)
		{
			if(m_check[i].GetCheck() == BST_CHECKED)
			{
				FileName[numbers] = FileName[i];
				FilePath[numbers] = FilePath[i];
				numbers++;
			}
		}
		NumOfFile = numbers;
	}

	if(!NumOfFile) 
	{
		return;
	}

	for(int i=0; i<NumOfCheckBox; ++i) 
	{
		m_check[i].SetCheck(BST_UNCHECKED);	
		m_check[i].SetWindowText(FileName[i]);
	}

	for(int i=NumOfFile; i<NumOfCheckBox; ++i)
	{
		m_check[i].ShowWindow(SW_HIDE);
	}
	AfxBeginThread(ConvertToKml, 0);	
}

void CKmlDlg::convert_all_file()
{
	int i;
	CString temp;
	for(i=0;i<NumOfFile;i++)
	{
		CFileException ef;
		try
		{		        
			if(!Fsource.Open(FilePath[i],CFile::modeRead,&ef))
			{
				ef.ReportError();
				continue;
			}
			IsFSourceOpen = true;

			kml_filename = FileName[i];
			int find = kml_filename.Find(".");
			kml_filename = kml_filename.Mid(0,find);   

			Convert();
			
			temp.Format("%s OK",FileName[i]);
			m_check[i].SetWindowText(temp);
			m_check[i].SetCheck(BST_CHECKED);	
		}
		catch(CFileException *fe)
		{
			fe->ReportError();
			fe->Delete();
		}	
	}
}

void CKmlDlg::OnBnClickedCheck76()
{
	char nmea[100];
	CString temp;
	for(int i=0;i<NumOfCheckBox;i++)m_check[i].ShowWindow(0);	
	m_alltxt.ShowWindow(1);	
	CString fileName;

	m_directory.GetWindowText(fileName);
	if(fileName.IsEmpty())	
	{
		return;	
	}

	if(m_selectall.GetCheck() == BST_UNCHECKED)
	{
		m_alltxt.ShowWindow(0);
		if(isConvertFinish)
		{
			for(int i=0;i<NumOfFile;i++)
			{
				m_check[i].ShowWindow(1);
				m_check[i].SetCheck(BST_CHECKED);
				fileName = "OK ";
				fileName+=FileName[i];
				m_check[i].SetWindowText(fileName);
			}

			for(int i=NumOfFile;i<NumOfCheckBox;i++)
			{
				m_check[i].ShowWindow(0);
			}
		} //if(IsConvertFinish)
		else
		{
			GetDatFile();
		} //if(IsConvertFinish)
	} //if(m_selectall.GetCheck() == BST_UNCHECKED)
	else if(m_selectall.GetCheck() == BST_CHECKED)
	{
		for(int i=0;i<NumOfCheckBox;i++)
		{
			m_check[i].ShowWindow(0);
		}
		m_alltxt.ShowWindow(1);	
		if(isConvertFinish)
		{
			sprintf_s(nmea, sizeof(nmea), "Total (#%d) txt files selected.\r\n\r\n", NumOfFile);
			temp = nmea;
			temp += "Successful";					
			m_alltxt.SetWindowText(temp);
		}
		else
		{
			GetAllDatFile();
		}
	} //else if(m_selectall.GetCheck() == BST_CHECKED)
}


void CKmlDlg::OnBnClickedCheck78()
{
	m_alltxt.ShowWindow(0);	
	CString fileName;
	m_directory.GetWindowText(fileName);
	if(fileName == "")	return;	
	else
	{
		if(m_hselectall.GetCheck() == BST_UNCHECKED)
		{
			for(int i=0;i<NumOfFile;i++){m_check[i].SetCheck(BST_UNCHECKED);m_check[i].ShowWindow(1);m_check[i].SetWindowText(FileName[i]);}
			for(int i=NumOfFile;i<NumOfCheckBox;i++)m_check[i].ShowWindow(0);				
		}
		else if(m_hselectall.GetCheck() == BST_CHECKED)
		{
			for(int i=0;i<NumOfFile;i++){ m_check[i].SetCheck(BST_CHECKED);m_check[i].ShowWindow(1);m_check[i].SetWindowText(FileName[i]);}		
			for(int i=NumOfFile;i<NumOfCheckBox;i++)m_check[i].ShowWindow(0);					
		}
	}
}




int CKmlDlg::GET_NMEA_SENTENCE(CFile& file, unsigned char* buffer)
{
	unsigned char nmea[2];
	unsigned int   length=0;
	int nBytesRead = 0;
    do
	{
		memset(nmea,0,2);
		nBytesRead = file.Read(nmea,1);		
		*(buffer+length) = nmea[0];
		length += nBytesRead;
		if(nBytesRead == 0 || *(buffer+length-1)=='\n' && *(buffer+length-2)=='\r' || length == 200)
			break;		
	}while(1);
	return length;
}

bool CKmlDlg::NMEA_PROC(const char* buffer,int offset)
{
	U08 MsgType;		

#if 0
	for(int i = offset-1 ; i >0 ; i-- )
	{
		if (buffer[i] == 13 || buffer[i] == 10 )
			offset--;
	}
#endif
	for(int i = offset-1 ; i >0 ; i-- )
	{
		if (buffer[i] == '*' )
		{
			offset = i+3;
			break;
		}
	}

	MsgType=nmea.MessageType(buffer,offset);
	
	switch(MsgType)
	{
	case MSG_ERROR:
		return false;
		break;	
	case MSG_GGA:
		nmea.ShowGPGGAmsg(msg_gpgga,buffer,offset);		
		return true;	
        break;	
//	case MSG_RMC:
//		nmea.ShowGPRMCmsg(msg_gprmc,buffer,offset);		
//		return true;	
//		break;	
	default :
		break;
	}
	return false;	
}

void CKmlDlg::Convert()
{
	int    nBytesRead;
	UINT   retCode = 0;	
	U08    nmea[200];
	CString temp;
	ULONGLONG  dwBytesRemaining = Fsource.GetLength();
	U08 is_gga;

	int write_count = 0;
	int file_tail = 0;
	U32 color;

	int color_index = m_color.GetCurSel();
	//Red;Yellow;Blue;Green;
	if (color_index==0)
		color = 0x0000ff;
	else if (color_index == 1)
		color = 0x00FFFF;
	else if (color_index == 2)
		color = 0xff0000;
	else if (color_index == 3)
		color = 0x00ff00;

	while(dwBytesRemaining)
	{	
		CString tmp_file ;
		tmp_file.Format("%s%d%s",kml_filename,file_tail,".kml");

		
		kml.init(tmp_file,color);
		while(dwBytesRemaining)
		{
			memset(nmea,0,200);		
			nBytesRead = GET_NMEA_SENTENCE(Fsource,nmea);						
			is_gga = NMEA_PROC((const char*)nmea,nBytesRead-1);			    	
			dwBytesRemaining-=nBytesRead;	
			if (is_gga) 
			{
				WriteToFile();

				write_count++;
				if ( write_count > 65000)
				{
					write_count = 0;
					file_tail++;
					break;
				}
			}
		}
		kml.finish();

	}	
	//char title[]="    </coordinates>\r\n  </LineString>\r\n</Placemark>\r\n</kml>";
	//Fnmea.Write(title,sizeof(title)-1);
	//switch(m_selectall.GetCheck())
	//{
	//case BST_UNCHECKED:
	//	m_alltxt.ShowWindow(0);			
	//	temp = "OK ";
	//	temp += FileName[NoOfFile-1];
	//	m_check[NoOfFile-1].SetWindowText(temp);

	//	break;
	//case BST_CHECKED:
	//	m_alltxt.ShowWindow(1);
	//	sprintf((char*)nmea,"Total (#%d) txt files selected.\r\n\r\n",NumOfFile);
	//    temp = nmea;
	//	temp += "Coverting";
	//	for(int i=0;i<NoOfFile;i++)
	//		temp+=" . ";
	//	m_alltxt.SetWindowText(temp);

	//	break;
	//default:
	//	break;
	//}	
	Fsource.Close();
	//Fnmea.Close();
	IsFSourceOpen = false;	
	if(!SetEvent(hReadEvent))	DWORD error = GetLastError();
}
bool Is_Fixed(U16 ggaIndicator)
{
	U08 gpsInd, gnssInd;

	if(ggaIndicator > 0xFF)
	{
		gpsInd = ggaIndicator >> 8;
		gnssInd = ggaIndicator & 0xFF;
	}
	else
	{
		gpsInd = ggaIndicator & 0xFF;
		gnssInd = 0xFF;
	}

	return (gpsInd == 49 || gpsInd == 50 || gpsInd==54 || 
			gpsInd == 'A' || gpsInd == 'D' || gpsInd == 'E' ||
			gnssInd == 49 || gnssInd == 50 || gnssInd==54 || 
			gnssInd == 'A' || gnssInd == 'D' || gnssInd == 'E');
}
void CKmlDlg::WriteToFile()
{	
	if(Is_Fixed(msg_gpgga.GPSQualityIndicator))
	{
		lon = (int)(msg_gpgga.Longitude / 100);	
		lon += double(msg_gpgga.Longitude - (int)(msg_gpgga.Longitude / 100) * 100) / 60;	
		if(msg_gpgga.Longitude_E_W == 'W')
		{
			lon *= -1;
		}
		lat = (int)(msg_gpgga.Latitude / 100);	
		lat += (double)(msg_gpgga.Latitude - (int)(msg_gpgga.Latitude / 100) * 100) / 60;	
		if(msg_gpgga.Latitude_N_S == 'S')
		{
			lat *= -1;
		}
		kml.push_one_point(lon, lat);
	}
	else if (msg_gprmc.Status == 'A')
	{
		lon = int(msg_gprmc.Longitude / 100);	
		lon += (double)(msg_gprmc.Longitude - (int)(msg_gprmc.Longitude / 100) * 100) / 60;	
		if(msg_gprmc.Longitude_E_W == 'W')
		{
			lon *= -1;
		}
		lat = (int)(msg_gprmc.Latitude / 100);	
		lat += (double)(msg_gprmc.Latitude - (int)(msg_gprmc.Latitude / 100) * 100) / 60;	
		if(msg_gprmc.Latitude_N_S == 'S')
		{
			lat *= -1;
		}
		kml.push_one_point(lon, lat);
	}}

void CKmlDlg::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此加入您的訊息處理常式程式碼和 (或) 呼叫預設值

	CDialog::OnLButtonDown(nFlags, point);
}

BOOL CKmlDlg::PreTranslateMessage(MSG* pMsg)
{
	// TODO: 在此加入特定的程式碼和 (或) 呼叫基底類別

	return CDialog::PreTranslateMessage(pMsg);
}

BOOL CKmlDlg::OnCommand(WPARAM wParam, LPARAM lParam)
{
	if(wParam ==  IDC_CHECK1 ||	wParam ==  IDC_CHECK2 ||
	   wParam ==  IDC_CHECK3 ||	wParam ==  IDC_CHECK4 ||
	   wParam ==  IDC_CHECK5 || wParam ==  IDC_CHECK6 ||
	 wParam ==  IDC_CHECK7 ||
	 wParam ==  IDC_CHECK8 ||
	 wParam ==  IDC_CHECK9 ||
	 wParam ==  IDC_CHECK10 ||
	 wParam ==  IDC_CHECK11 ||
	 wParam ==  IDC_CHECK12 ||
	 wParam ==  IDC_CHECK13 ||
	 wParam ==  IDC_CHECK14 ||
	 wParam ==  IDC_CHECK15 ||
	 wParam ==  IDC_CHECK16 ||
	 wParam ==  IDC_CHECK17 ||
	 wParam ==  IDC_CHECK18 ||
	 wParam ==  IDC_CHECK19 ||
	 wParam ==   IDC_CHECK20 ||
	 wParam ==  IDC_CHECK21 ||
	 wParam ==  IDC_CHECK22 ||
	 wParam ==   IDC_CHECK23 ||
	 wParam ==   IDC_CHECK24 ||
	 wParam ==   IDC_CHECK25 ||
	 wParam ==   IDC_CHECK26 ||
	 wParam ==   IDC_CHECK27 ||
	 wParam ==  IDC_CHECK28 ||
	 wParam ==   IDC_CHECK29 ||
	 wParam ==   IDC_CHECK30 ||
	 wParam ==   IDC_CHECK31 ||
	 wParam ==   IDC_CHECK32 ||
	 wParam ==  IDC_CHECK33 ||
	 wParam ==   IDC_CHECK34 ||
	 wParam ==   IDC_CHECK35 ||
	 wParam ==  IDC_CHECK36 ||
	 wParam ==   IDC_CHECK37 ||
	 wParam ==   IDC_CHECK38 ||
	 wParam ==   IDC_CHECK39 ||
	 wParam ==   IDC_CHECK40 ||
	 wParam ==   IDC_CHECK41 ||
	 wParam ==  IDC_CHECK42 ||
	 wParam ==   IDC_CHECK43 ||
	 wParam ==   IDC_CHECK44 ||
	 wParam ==  IDC_CHECK45 ||
	 wParam ==   IDC_CHECK46 ||
	 wParam ==   IDC_CHECK47 ||
	 wParam ==   IDC_CHECK48 ||
	 wParam ==   IDC_CHECK49 ||
	 wParam ==   IDC_CHECK50 ||
	 wParam ==  IDC_CHECK51 ||
	 wParam ==   IDC_CHECK52 ||
	 wParam ==   IDC_CHECK53 ||
	 wParam ==   IDC_CHECK54 ||
	 wParam ==  IDC_CHECK55 ||
	 wParam ==  IDC_CHECK56 ||
	 wParam ==   IDC_CHECK57 ||
	 wParam ==   IDC_CHECK58 ||
	 wParam ==  IDC_CHECK59 ||
	 wParam ==   IDC_CHECK60 ||
	 wParam ==   IDC_CHECK61 ||
	 wParam ==   IDC_CHECK62 ||
	 wParam ==   IDC_CHECK63 ||
	 wParam ==   IDC_CHECK64 ||
	 wParam ==   IDC_CHECK65 ||
	 wParam ==   IDC_CHECK66 ||
	 wParam ==   IDC_CHECK67 ||
	 wParam ==   IDC_CHECK68 ||
	 wParam ==  IDC_CHECK69 ||
	 wParam ==   IDC_CHECK70 ||
	 wParam ==   IDC_CHECK71 ||
	 wParam ==   IDC_CHECK72 ||
	 wParam ==  IDC_CHECK73 ||
	 wParam ==   IDC_CHECK74 ||
	 wParam ==   IDC_CHECK75)
	{
		m_hselectall.SetCheck(BST_UNCHECKED);

	}

	return CDialog::OnCommand(wParam, lParam);
}
