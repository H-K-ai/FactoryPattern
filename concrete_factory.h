#ifndef CONCRETE_FACTORY_H
#define CONCRETE_FACTORY_H

#include "factory.h"
#include "concrete_product.h"

//奔驰工厂
class BenzFactory:public AFactory
{
  public:
    virtual ICar* CreateCar()
    {
        return new BenzCar();

    }
};

//宝马工厂

class BmwFactory:public AFactory
{
  public:
    virtual ICar* CreateCar()
    {

        return new BmwCar();
    }
};

//奥迪汽车
class AudiFactory:public AFactory
{
public:
    virtual ICar*CreateCar()
    {

        return new AudiCar();
    }

};















#endif // CONCRETE_FACTORY_H
