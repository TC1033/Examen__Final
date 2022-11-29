// Test definitions. Do NOT edit this file!

#include <tuple>

#define CATCH_CONFIG_MAIN // defines main() automatically
#include "catch.hpp"

#include "../Caja.hpp"


// =====================
// tests para Examen Caja
// ---------------------

TEST_CASE("Ex1", "[Probando constructor default]")
{
    Dimension dim1;
    SECTION("Verificando sus atributos iniciales")
    {
        REQUIRE(dim1.getAncho()==2);
        REQUIRE(dim1.getAlto()==2);
        REQUIRE(dim1.getLargo()==2);
    }
}

// =====================
// tests for exercise 2
// ---------------------

TEST_CASE("Ex2", "[Probando constructor con parametros]")
{
    Dimension dim1(-3, 4, 5);
    SECTION("Verificando creacion con parametros")
    {
        REQUIRE(dim1.getAncho()==2);
        REQUIRE(dim1.getLargo()==4);
        REQUIRE(dim1.getAlto()==5);
    }
}

TEST_CASE("Ex3", "[Probando setters]")
{
    Dimension nueva;
    SECTION("Verificando cambios en los atributos")
    {
        nueva.setAncho(5);
        nueva.setLargo(1);
        nueva.setAlto(6);

        REQUIRE(nueva.getAncho()==5);
        REQUIRE(nueva.getLargo()==2);
        REQUIRE(nueva.getAlto()==6);
    }
}

TEST_CASE("Ex4", "[Probando Imprimir]")
{
    Dimension dim2(5,6,8);
    SECTION("Mostrando en consola los datos de la cuenta")
    {
        dim2.imprime();
        REQUIRE(true);
    }
}

TEST_CASE("Ex5", "[Probando iguales]")
{
    Dimension dim2(5,6,8);
    Dimension dim3(2,2,2);
    Dimension dim4;
    SECTION("Probando iguales")
    {
        REQUIRE(dim2.iguales(dim3)==0);
        REQUIRE(dim3.iguales(dim4)==1);
    }
}

TEST_CASE("Ex6", "[Constructor Default de caja]")
{
    Caja c1;
    SECTION("Constructor Default")
    {
        Dimension d1;
        REQUIRE(c1.getMaterial()=="carton");
        REQUIRE(c1.getMedidas().iguales(d1)==1);
    }
}

TEST_CASE("Ex7", "[Constructor con parámetros de Caja]")
{
    Caja c2("plastico", Dimension(2,3,4));
    SECTION("Constructor con parámetros de Caja")
    {
        Dimension d2(2,3,4);
        REQUIRE(c2.getMaterial()=="plastico");
        REQUIRE(c2.getMedidas().iguales(d2)==1);
    }
}

TEST_CASE("Ex8", "[Probando setters]")
{
    Dimension d3(5,6,8);
    Caja c3;
    SECTION("Setters de caja")
    {
        c3.setMaterial("madera");
        c3.setMedidas(d3);
        REQUIRE(c3.getMaterial()=="madera");
        REQUIRE(c3.getMedidas().iguales(d3)==1);
    }
}

TEST_CASE("Ex9", "[Probando Volumen de Caja]")
{
    Caja c4;
    SECTION("Volumen de caja")
    {
        int volumen = c4.volumen();
        REQUIRE(c4.volumen()==8);
    }
}

TEST_CASE("Ex10", "[Probando imprime de Caja]")
{
    Caja c4;
    SECTION("Imprime de caja")
    {
        c4.imprime();
        REQUIRE(true);
    }
}