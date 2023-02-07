#include "httpd.h"
#include <stdlib.h>

int main(int c, char** v)
{
    const char* port = getenv("SERVER_PORT");
    serve_forever(port);
    return 0;
}

void route()
{
    ROUTE_START()

    ROUTE_GET("/")
    {
        printf("HTTP/1.1 200 OK\r\n\r\n");
        printf("This is version 3.\n");
    }

    ROUTE_GET("/healthz")
    {
        printf("HTTP/1.1 400 Bad Request\r\n\r\n");
        printf("Not Healthy\n");
    }

    ROUTE_END()
}
