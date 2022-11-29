#pragma once // previene definiciones múltiples (igual que guardas)

class Dimension{
    public:
        Dimension();
        Dimension(int, int, int);
        int getAncho() const;
        int getLargo() const;
        int getAlto() const;
        void setAncho(int);
        void setLargo(int);
        void setAlto(int);
        int iguales(Dimension&);
        void imprime();
    private:
        int ancho;
        int largo;
        int alto;
};