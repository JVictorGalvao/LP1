#pragma once
#include <string>

class Horario{
    public:
        Horario();
        Horario(int hora, int minuto, int segundo);

        int getHora();
        int getMin();
        int getSeg();
        void setHorario(int hora, int minuto, int segundo);
        void avancaHorario();
        std::string stringHorario();

    private:
        int hora, minuto, segundo;
};