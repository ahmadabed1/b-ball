#include "Team.hpp"

class Game
{

    Team* side_team;
    Team* home_team;
    std::string winner{};
    
    public:
    Game(const Team& team,const Team& _side_team):side_team{nullptr},home_team{nullptr}{}

    
    
};