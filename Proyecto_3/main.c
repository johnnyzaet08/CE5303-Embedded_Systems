#include "mongoose.h"

// Función para manejar las peticiones HTTP
static void handle_request(struct mg_connection *nc, int ev, void *ev_data) {
    struct http_message *hm = (struct http_message *) ev_data;

    // Si la ruta es /applyFilter, procesamos la imagen
    if (mg_vcmp(&hm->uri, "/applyFilter") == 0) {
        // TODO: Aquí iría el código para obtener la imagen y el nombre del filtro de la petición,
        // aplicar el filtro y devolver la imagen procesada.
        
        // Por ahora, solo devolvemos una respuesta de prueba
        mg_printf(nc, "HTTP/1.1 200 OK\r\nContent-Length: %d\r\n\r\n%s",
                  (int) strlen("Filter applied!"), "Filter applied!");
    } else {
        mg_printf(nc, "HTTP/1.1 404 Not Found\r\nContent-Length: %d\r\n\r\n%s",
                  (int) strlen("Not Found"), "Not Found");
    }
}

int main(void) {
    struct mg_mgr mgr;
    struct mg_connection *nc;

    mg_mgr_init(&mgr); // Corregido para tomar solo un argumento
    nc = mg_bind(&mgr, "8080", handle_request);

    // Configuramos las opciones del servidor HTTP
    mg_set_protocol_http_websocket(nc);

    printf("Starting web server on port 8080\n");
    for (;;) {
        mg_mgr_poll(&mgr, 1000);
    }
    mg_mgr_free(&mgr);

    return 0;
}

