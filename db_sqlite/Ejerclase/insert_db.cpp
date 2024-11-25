#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <sstream>
#include <iostream>
#include <sqlite3.h> 


using namespace std;
int generarNumeroAleatorio(int min, int max) {
    return min + rand() % (max - min + 1);
}

int main(int argc, char* argv[]) {
   sqlite3 *db;
   char *zErrMsg = 0;
   int rc;
   stringstream sql;
   int Hora = 8;
   

   /* Open database */
   rc = sqlite3_open("test.db", &db);
   
   if( rc ) {
      fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
      return(0);
   } else {
      fprintf(stderr, "Opened database successfully\n");
   }
   int min, max;
   int prom_Temp = 0;
   int prom_Hum = 0;
   int prom_Hum_sul = 0;
   int prom_velo_vien = 0;
   int prom_dire_vie = 0;
   int prom_prepu = 0;
   int prom_inte_luz = 0;
    for (int segundos = 0; segundos < 500; segundos += 5) {
        int Temp = generarNumeroAleatorio(-10, 45);
        int Hum = generarNumeroAleatorio(0, 100);
        int Hum_sul = generarNumeroAleatorio(0, 100);
        float velo_vien = generarNumeroAleatorio(0, 40);
        float dire_vie = generarNumeroAleatorio(-180, 180);
        float prepu = generarNumeroAleatorio(0, 200);
        int inte_luz = generarNumeroAleatorio(0, 4000);

        // Acumulación de promedios
        prom_Temp += Temp;
        prom_Hum += Hum;
        prom_Hum_sul += Hum_sul;
        prom_velo_vien += velo_vien;
        prom_dire_vie += dire_vie;
        prom_prepu += prepu;
        prom_inte_luz += inte_luz;

        // Insertar datos en segundos
        sql << "INSERT INTO usuario (Segundos, Temperatura, Humedad, Humedad_suelo, Velocidad_viento, Direccion_viento, Precipitacion, Intensidad_luz) "
            << "VALUES (" << segundos << "," << Temp << "," << Hum << "," << Hum_sul << "," 
            << velo_vien << "," << dire_vie << "," << prepu << "," << inte_luz << ");";
        rc = sqlite3_exec(db, sql.str().c_str(), 0, 0, &zErrMsg);
        if (rc != SQLITE_OK) {
            fprintf(stderr, "SQL error: %s\n", zErrMsg);
            sqlite3_free(zErrMsg);
        }
        sql.str("");
        sql.clear();

        if (segundos % 60 == 0 && segundos != 0) {
            sql << "INSERT INTO usuario (Minutos, Temperatura, Humedad, Humedad_suelo, Velocidad_viento, Direccion_viento, Precipitacion, Intensidad_luz) "
                << "VALUES (" << segundos / 60 << "," << prom_Temp / 12 << "," << prom_Hum / 12 << "," 
                << prom_Hum_sul / 12 << "," << prom_velo_vien / 12 << "," << prom_dire_vie / 12 << "," 
                << prom_prepu / 12 << "," << prom_inte_luz / 12 << ");";
            rc = sqlite3_exec(db, sql.str().c_str(), 0, 0, &zErrMsg);
            if (rc != SQLITE_OK) {
                fprintf(stderr, "SQL error: %s\n", zErrMsg);
                sqlite3_free(zErrMsg);
            }
            sql.str("");
            sql.clear();

            prom_Temp = 0;
            prom_Hum = 0;
            prom_Hum_sul = 0;
            prom_inte_luz = 0;
            prom_velo_vien = 0;
            prom_dire_vie = 0;
            prom_prepu = 0;
        }
    }
    sqlite3_close(db);
    return 0;
}