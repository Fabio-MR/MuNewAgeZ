#pragma once

#define MAX_WIN_WIDTH 640
#define MAX_MAIN_VIEWPORT 400

enum eReconnectStatus
{
	RECONNECT_STATUS_NONE = 0,
	RECONNECT_STATUS_RECONNECT = 1,
	RECONNECT_STATUS_DISCONNECT = 2,
};

enum eReconnectProgress
{
	RECONNECT_PROGRESS_NONE = 0,
	RECONNECT_PROGRESS_CONNECTED = 1,
	RECONNECT_PROGRESS_JOINED = 2,
	RECONNECT_PROGRESS_CHAR_LIST = 3,
	RECONNECT_PROGRESS_CHAR_INFO = 4,
};

void InitReconnect();
void ReconnectMainProc();
void ReconnectDrawInterface();
void ReconnectSetInfo(DWORD status,DWORD progress,DWORD CurWait,DWORD MaxWait);
void ReconnecGameServerLoad();
void ReconnecGameServerAuth();
void ReconnectOnCloseSocket();
void ReconnectOnMapServerMove(char* address,WORD port);
void ReconnectOnMapServerMoveAuth(BYTE result);
void ReconnectOnConnectAccount(BYTE result);
void ReconnectOnCloseClient(BYTE result);
void ReconnectOnCharacterList();
void ReconnectOnCharacterInfo();
void ReconnectViewportDestroy();
BOOL ReconnectCreateConnection(char* address,WORD port);
void ReconnectGetAccountInfo();
void ReconnectCheckConnection();
void ReconnectCloseSocket();
void ReconnectMenuExitGame();
void ReconnectServerConnect();
