SOCKET sd;

sd=socket();

bind(sd,...);

listen(sd,...); // egy adott portra

while(1)
{
    SOCKET client_sd;

    client_sd = accept(sd,...);

    while(...)
    {
        // kommunikálás
        send(client_sd);
        recv(client_sd);
    }
    closesocket(client_sd);
}
closesocket(sd);