#pragma once

typedef struct
{
    char* address;
    int addressLen;
    char* request;
    int requestLen;
    char* protocol;
    int protocolLen;
    int port;
} URLPARTS_T;

void decodeRequest(const char* pRequest, char* pOut, int pOutSize);
void breakUrl(const char* pUrl, URLPARTS_T* pUrlStruct);
