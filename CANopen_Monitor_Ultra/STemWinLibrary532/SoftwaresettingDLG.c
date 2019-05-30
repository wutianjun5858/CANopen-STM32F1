/*********************************************************************
*                                                                    *
*                SEGGER Microcontroller GmbH & Co. KG                *
*        Solutions for real time microcontroller applications        *
*                                                                    *
**********************************************************************
*                                                                    *
* C-file generated by:                                               *
*                                                                    *
*        GUI_Builder for emWin version 5.32                          *
*        Compiled Oct  8 2015, 11:59:02                              *
*        (c) 2015 Segger Microcontroller GmbH & Co. KG               *
*                                                                    *
**********************************************************************
*                                                                    *
*        Internet: www.segger.com  Support: support@segger.com       *
*                                                                    *
**********************************************************************
*/

// USER START (Optionally insert additional includes)
// USER END

#include "DIALOG.h"
#include "main.h"
/*********************************************************************
*
*       Defines
*
**********************************************************************
*/
#define ID_WINDOW_0 (GUI_ID_USER + 0x00)
#define ID_TEXT_0 (GUI_ID_USER + 0x01)
#define ID_TEXT_1 (GUI_ID_USER + 0x02)
#define ID_SPINBOX_0 (GUI_ID_USER + 0x03)
#define ID_TEXT_2 (GUI_ID_USER + 0x04)
#define ID_SPINBOX_1 (GUI_ID_USER + 0x05)
#define ID_TEXT_3 (GUI_ID_USER + 0x06)
#define ID_SPINBOX_2 (GUI_ID_USER + 0x07)
#define ID_SPINBOX_3 (GUI_ID_USER + 0x08)
#define ID_SPINBOX_4 (GUI_ID_USER + 0x09)
#define ID_SPINBOX_5 (GUI_ID_USER + 0x0A)
#define ID_SPINBOX_6 (GUI_ID_USER + 0x0B)
#define ID_BUTTON_0 (GUI_ID_USER + 0x0C)
#define ID_BUTTON_1 (GUI_ID_USER + 0x0D)
#define ID_TEXT_4 (GUI_ID_USER + 0x0E)
#define ID_SPINBOX_7 (GUI_ID_USER + 0x0F)


// USER START (Optionally insert additional defines)
#include "stdbool.h"
// USER END

/*********************************************************************
*
*       Static data
*
**********************************************************************
*/

// USER START (Optionally insert additional static data)

//unsigned char data_ch;

int get_param(void);
int save_param(void);
// USER END

/*********************************************************************
*
*       _aDialogCreate
*/

static const GUI_WIDGET_CREATE_INFO _aDialogCreate[] = {
  { WINDOW_CreateIndirect, "setting", ID_WINDOW_0, 0, 0, 854, 480, 0, 0x0, 0 },
  { TEXT_CreateIndirect, "Text", ID_TEXT_0, 0, 0, 854, 40, 0, 0x64, 0 },
  { TEXT_CreateIndirect, "Text", ID_TEXT_1, 380, 150, 150, 50, 0, 0x64, 0 },
  { SPINBOX_CreateIndirect, "ch_spin", ID_SPINBOX_0, 560, 150, 150, 50, 0, 0x0, 0 },
  { TEXT_CreateIndirect, "Text", ID_TEXT_2, 30, 150, 150, 50, 0, 0x64, 0 },
  { SPINBOX_CreateIndirect, "speed_spin", ID_SPINBOX_1, 200, 150, 150, 50, 0, 0x0, 0 },
  { TEXT_CreateIndirect, "Text", ID_TEXT_3, 30, 230, 150, 50, 0, 0x64, 0 },
  { SPINBOX_CreateIndirect, "add0_spin", ID_SPINBOX_2, 200, 230, 100, 50, 0, 0x0, 0 },
  { SPINBOX_CreateIndirect, "add1_spin", ID_SPINBOX_3, 330, 230, 100, 50, 0, 0x0, 0 },
  { SPINBOX_CreateIndirect, "add2_spin", ID_SPINBOX_4, 460, 230, 100, 50, 0, 0x0, 0 },
  { SPINBOX_CreateIndirect, "add3_spin", ID_SPINBOX_5, 590, 230, 100, 50, 0, 0x0, 0 },
  { SPINBOX_CreateIndirect, "add4_spin", ID_SPINBOX_6, 720, 230, 100, 50, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "Done", ID_BUTTON_0, 245, 350, 150, 50, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "Back", ID_BUTTON_1, 479, 350, 150, 50, 0, 0x0, 0 },
  { TEXT_CreateIndirect, "Text", ID_TEXT_4, 30, 70, 150, 50, 0, 0x64, 0 },
  { SPINBOX_CreateIndirect, "DataCh", ID_SPINBOX_7, 200, 70, 100, 50, 0, 0x0, 0 },
  // USER START (Optionally insert additional widgets)
  // USER END
};

/*********************************************************************
*
*       Static code
*
**********************************************************************
*/

// USER START (Optionally insert additional static code)
extern WM_HWIN CreateMainWin(void);
extern WM_HWIN Createsetting(void);
extern WM_HWIN Createstart(void);
extern WM_HWIN CreateAllData(void);

void ParamGet(void);
void SetParam(void);

extern GRAPH_DATA_Handle  pdataGRP;
extern bool isPush;
// USER END

/*********************************************************************
*
*       _cbDialog
*/
static void _cbDialog(WM_MESSAGE * pMsg) {
  WM_HWIN hItem;
  int     NCode;
  int     Id;
  // USER START (Optionally insert additional variables)
  // USER END

  switch (pMsg->MsgId) {
  case WM_INIT_DIALOG:
    //
    // Initialization of 'setting'
    //
    hItem = pMsg->hWin;
    WINDOW_SetBkColor(hItem, GUI_MAKE_COLOR(0x00C0C0C0));
    //
    // Initialization of 'Text'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_0);
    TEXT_SetFont(hItem, GUI_FONT_32_ASCII);
    TEXT_SetTextAlign(hItem, GUI_TA_HCENTER | GUI_TA_VCENTER);
    TEXT_SetTextColor(hItem,GUI_DARKBLUE);
    TEXT_SetText(hItem, "Setting");
    //
    // Initialization of 'Text'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_1);
    TEXT_SetFont(hItem, GUI_FONT_32_ASCII);
    TEXT_SetTextAlign(hItem, GUI_TA_HCENTER | GUI_TA_VCENTER);
    TEXT_SetTextColor(hItem,GUI_DARKBLUE);
    TEXT_SetText(hItem, "Channel:");
    //
    // Initialization of 'ch_spin'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_SPINBOX_0);
    SPINBOX_SetFont(hItem, GUI_FONT_32_ASCII);
    SPINBOX_SetRange(hItem, 0, 255);
    SPINBOX_SetTextColor(hItem, SPINBOX_CI_ENABLED,GUI_DARKBLUE);
    SPINBOX_SetEditMode(hItem, SPINBOX_EM_EDIT);
    //
    // Initialization of 'Text'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_2);
    TEXT_SetFont(hItem, GUI_FONT_32_ASCII);
    TEXT_SetTextColor(hItem,GUI_DARKBLUE);
    TEXT_SetText(hItem, "Speed:");
    TEXT_SetTextAlign(hItem, GUI_TA_HCENTER | GUI_TA_VCENTER);
    //
    // Initialization of 'speed_spin'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_SPINBOX_1);
    SPINBOX_SetFont(hItem, GUI_FONT_32_ASCII);
    SPINBOX_SetRange(hItem, 0, 255);
    SPINBOX_SetTextColor(hItem, SPINBOX_CI_ENABLED,GUI_DARKBLUE);
    SPINBOX_SetEditMode(hItem, SPINBOX_EM_EDIT);
    //
    // Initialization of 'Text'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_3);
    TEXT_SetFont(hItem, GUI_FONT_32_ASCII);
    TEXT_SetTextColor(hItem,GUI_DARKBLUE);
    TEXT_SetTextAlign(hItem, GUI_TA_HCENTER | GUI_TA_VCENTER);
    TEXT_SetText(hItem, "Address:");
    //
    // Initialization of 'add0_spin'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_SPINBOX_2);
    SPINBOX_SetFont(hItem, GUI_FONT_32_ASCII);
    SPINBOX_SetRange(hItem, 0, 255);
    SPINBOX_SetTextColor(hItem, SPINBOX_CI_ENABLED,GUI_DARKBLUE);
    SPINBOX_SetEditMode(hItem, SPINBOX_EM_EDIT);
    //
    // Initialization of 'add1_spin'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_SPINBOX_3);
    SPINBOX_SetFont(hItem, GUI_FONT_32_ASCII);
    SPINBOX_SetRange(hItem, 0, 255);
    SPINBOX_SetTextColor(hItem, SPINBOX_CI_ENABLED,GUI_DARKBLUE);
    SPINBOX_SetEditMode(hItem, SPINBOX_EM_EDIT);
    //
    // Initialization of 'add2_spin'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_SPINBOX_4);
    SPINBOX_SetFont(hItem, GUI_FONT_32_ASCII);
    SPINBOX_SetRange(hItem, 0, 255);
    SPINBOX_SetTextColor(hItem, SPINBOX_CI_ENABLED,GUI_DARKBLUE);
    SPINBOX_SetEditMode(hItem, SPINBOX_EM_EDIT);
    //
    // Initialization of 'add3_spin'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_SPINBOX_5);
    SPINBOX_SetFont(hItem, GUI_FONT_32_ASCII);
    SPINBOX_SetRange(hItem, 0, 255);
    SPINBOX_SetTextColor(hItem, SPINBOX_CI_ENABLED,GUI_DARKBLUE);
    SPINBOX_SetEditMode(hItem, SPINBOX_EM_EDIT);
    //
    // Initialization of 'add4_spin'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_SPINBOX_6);
    SPINBOX_SetFont(hItem, GUI_FONT_32_ASCII);
    SPINBOX_SetRange(hItem, 0, 255);
    SPINBOX_SetTextColor(hItem, SPINBOX_CI_ENABLED,GUI_DARKBLUE);
    SPINBOX_SetEditMode(hItem, SPINBOX_EM_EDIT);
    //
    // Initialization of 'Done'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_BUTTON_0);
    BUTTON_SetFont(hItem, GUI_FONT_32_ASCII);
    BUTTON_SetTextColor(hItem,BUTTON_CI_UNPRESSED,GUI_DARKBLUE);
    BUTTON_SetTextColor(hItem,BUTTON_CI_PRESSED,GUI_RED);
    BUTTON_SetText(hItem, "Done");
    //
    // Initialization of 'Back'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_BUTTON_1);
    BUTTON_SetFont(hItem, GUI_FONT_32_ASCII);
    BUTTON_SetTextColor(hItem,BUTTON_CI_UNPRESSED,GUI_DARKBLUE);
    BUTTON_SetTextColor(hItem,BUTTON_CI_PRESSED,GUI_RED);
    BUTTON_SetText(hItem, "Back");
    //
    // Initialization of 'Text'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_4);
    TEXT_SetFont(hItem, GUI_FONT_32_ASCII);
    TEXT_SetTextColor(hItem,GUI_DARKBLUE);
    TEXT_SetTextAlign(hItem, GUI_TA_HCENTER | GUI_TA_VCENTER);
    TEXT_SetText(hItem, "Data CH:");
    //
    // Initialization of 'Data ch'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_SPINBOX_7);
    SPINBOX_SetFont(hItem, GUI_FONT_32_ASCII);
    SPINBOX_SetRange(hItem, 0, 255);
    SPINBOX_SetTextColor(hItem, SPINBOX_CI_ENABLED,GUI_DARKBLUE);
    SPINBOX_SetEditMode(hItem, SPINBOX_EM_EDIT);
    // USER START (Optionally insert additional code for further widget initialization)
    // USER END
    break;
  case WM_NOTIFY_PARENT:
    Id    = WM_GetId(pMsg->hWinSrc);
    NCode = pMsg->Data.v;
    switch(Id) {
    case ID_SPINBOX_0: // Notifications sent by 'ch_spin'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_MOVED_OUT:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_VALUE_CHANGED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_SPINBOX_1: // Notifications sent by 'speed_spin'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_MOVED_OUT:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_VALUE_CHANGED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_SPINBOX_2: // Notifications sent by 'add0_spin'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_MOVED_OUT:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_VALUE_CHANGED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_SPINBOX_3: // Notifications sent by 'add1_spin'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_MOVED_OUT:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_VALUE_CHANGED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_SPINBOX_4: // Notifications sent by 'add2_spin'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_MOVED_OUT:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_VALUE_CHANGED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_SPINBOX_5: // Notifications sent by 'add3_spin'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_MOVED_OUT:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_VALUE_CHANGED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_SPINBOX_6: // Notifications sent by 'add4_spin'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_MOVED_OUT:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_VALUE_CHANGED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_0: // Notifications sent by 'Done'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        SetParam();
       //  save_param();
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_1: // Notifications sent by 'Back'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        WM_HideWindow(hWinSetting);
       // WM_ShowWindow(hWinMain);
       
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_SPINBOX_7: // Notifications sent by 'Spinbox'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_MOVED_OUT:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_VALUE_CHANGED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    // USER START (Optionally insert additional code for further Ids)
    // USER END
    }
    break;
  // USER START (Optionally insert additional message handling)
  // USER END
  default:
    WM_DefaultProc(pMsg);
    break;
  }
}

/*********************************************************************
*
*       Public code
*
**********************************************************************
*/
/*********************************************************************
*
*       Createsetting
*/
WM_HWIN Createsetting(void);
WM_HWIN Createsetting(void) {
  WM_HWIN hWin;

  hWin = GUI_CreateDialogBox(_aDialogCreate, GUI_COUNTOF(_aDialogCreate), _cbDialog, WM_HBKWIN, 0, 0);
  return hWin;
}

// USER START (Optionally insert additional public code)
unsigned char param[8];
/*
* get nrf24l01 parameter
*/
void ParamGet()
{
//    WM_HWIN hItem;
//    for(int i =0;i<5;i++)
//        nrf_add[i] = RX_ADDRESS[i];
//    nrf_ch = RF_channel;
//    nrf_speed = RF_Speed;
//    
//    hItem = WM_GetDialogItem(hWinSetting, ID_SPINBOX_0);
//    SPINBOX_SetValue(hItem,nrf_ch);
//    
//    hItem = WM_GetDialogItem(hWinSetting, ID_SPINBOX_1);
//    SPINBOX_SetValue(hItem,nrf_speed);
//    
//    hItem = WM_GetDialogItem(hWinSetting, ID_SPINBOX_7);
//    SPINBOX_SetValue(hItem,data_ch);
//    for(int i = 0;i<5;i++)
//    {
//        hItem = WM_GetDialogItem(hWinSetting, ID_SPINBOX_2+i);
//        SPINBOX_SetValue(hItem,nrf_add[i]);
//    }
    
}
//set nrf24l01 parameter
void SetParam()
{
//    WM_HWIN hItem;
// 
//    hItem = WM_GetDialogItem(hWinSetting, ID_SPINBOX_0);
//    nrf_ch = SPINBOX_GetValue(hItem);
//    
//    hItem = WM_GetDialogItem(hWinSetting, ID_SPINBOX_1);
//    nrf_speed = SPINBOX_GetValue(hItem);
//    
//    hItem = WM_GetDialogItem(hWinSetting, ID_SPINBOX_7);
//    data_ch = SPINBOX_GetValue(hItem);
//    
//    for(int i = 0;i<5;i++)
//    {
//        hItem = WM_GetDialogItem(hWinSetting, ID_SPINBOX_2+i);
//        nrf_add[i]=  SPINBOX_GetValue(hItem);
//    }
//    
//    for(int i =0;i<5;i++)
//        RX_ADDRESS[i] = nrf_add[i];
//    RF_channel  = nrf_ch;
//    RF_Speed = nrf_speed;
//    
//    init_NRF24L01_TX();
//    Set_RX_Mode();
}

int  save_param()
{
//    int ret;
//    param[0]= data_ch;
//    param[1]= RF_Speed;
//    param[2]= RF_channel;
//    for(int i=0;i<5;i++)
//    {
//       // param[3+i] = RX_ADDRESS[i];
//    }
//    ret = white_param(param,8);
//    return ret;
//}
//int get_param()
//{
//    read_param(param,8);
//    data_ch  = param[0];
//    RF_Speed= param[1];
//    RF_channel   = param[2];
//    for(int i=0;i<5;i++)
//    {
//      //  RX_ADDRESS[i] = param[3+i];
//    }
    return 0;
}
// USER END

/*************************** End of file ****************************/
