
#include <stdio.h>
#include <stdlib.h>
#include <sqlite3.h> 
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
    sqlite3 *db;
    char *zErrMsg = 0;
    int rc;
    string sqlstr;

    /* Open database */
    rc = sqlite3_open("test.db", &db);

    if (rc != 0) {
        fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
        return 1;
    } else {
        fprintf(stdout, "Opened database successfully\n");
    }

    /* Create SQL statement for the 'datos' table */
    sqlstr = "CREATE TABLE datos ( id_dato INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL,"\
        "Segundos INTEGER NOT NULL,"\
        "Temperatura REAL NOT NULL,"\
        "Humedad REAL NOT NULL,"\
        "Humedad_suelo REAL NOT NULL,"\
        "Velocidad_viento REAL NOT NULL,"\
        "Direccion_viento REAL NOT NULL,"\
        "Precipitacion REAL NOT NULL,"\
        "Intensidad_luz REAL NOT NULL);";
    rc = sqlite3_exec(db, sqlstr.c_str(), 0, 0, &zErrMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error creating 'datos' table: %s\n", zErrMsg);
        sqlite3_free(zErrMsg);
        sqlite3_close(db);
        return 2;
    } else {
        fprintf(stdout, "'datos' table created successfully\n");
    }

    sqlstr = "CREATE TABLE IF NOT EXISTS promedios (id_promedio INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL,"\
        "Minuto INTEGER NOT NULL,"\
        "Promedio_Temperatura REAL NOT NULL,"\
        "Promedio_Humedad REAL NOT NULL,"\
        "Promedio_Humedad_suelo REAL NOT NULL,"\
        "Promedio_Velocidad_viento REAL NOT NULL,"\
        "Promedio_Direccion_viento REAL NOT NULL,"\
        "Promedio_Precipitacion REAL NOT NULL,"\
        "Promedio_Intensidad_luz REAL NOT NULL);";

    /* Execute SQL statement for 'promedios' table */
    rc = sqlite3_exec(db, sqlstr.c_str(), 0, 0, &zErrMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error creating 'promedios' table: %s\n", zErrMsg);
        sqlite3_free(zErrMsg);
        sqlite3_close(db);
        return 3;
    } else {
        fprintf(stdout, "'promedios' table created successfully\n");
    }

    /* Close the database */
    sqlite3_close(db);
    fprintf(stdout, "Database closed successfully\n");

    return 0;
}
