



class Vehicle{ };

class Motorized:virtual public Vehicle{ };

class Muscular:virtual public Vehicle { };

class ICE:public Motorized{ };

class Electric: public Motorized{ };

class Bike: public Muscular{ };

class KickScooter: public Muscular{ };

class Electrobike:public Bike, public Electric{ };