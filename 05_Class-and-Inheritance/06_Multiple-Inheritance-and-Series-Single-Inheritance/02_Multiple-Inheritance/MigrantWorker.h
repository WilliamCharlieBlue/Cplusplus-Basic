#include "Farmer.h"
#include "Worker.h"

class MigrantWorker: public Farmer, public Worker{
public:
    MigrantWorker(string name, string code);
    ~MigrantWorker();
};