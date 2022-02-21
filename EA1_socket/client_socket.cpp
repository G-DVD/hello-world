SOCKET sd;

// a socket létrehozása (socket)
sd = socket();

// a kapcsolat felépítése (connect) benne:struktúrák, byete sorrend
connect(sd,...);

while(x)
{
    // kommunikáció: send és recv
    send(sd,...);
    recv(sd,...);
}

// a kapcsolat bontása
closesocket(sd);