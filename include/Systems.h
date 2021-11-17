#include "Entity.h"

class HealthSystem
{
    std::vector<Entity> entities;

public:
    void addEntity(Entity e){entities.push_back(e);}
    void update(){
        for(Entity& e : entities)
        {
            for(Component* c : e.getComponents())
            {
                if(c->getName() == "Health")
                {
                    HealthComponent* health{dynamic_cast<HealthComponent*>(c)};
                    std::cout << "Health: " << health->getHealth() << std::endl;
                }
            }
        }
    }
};