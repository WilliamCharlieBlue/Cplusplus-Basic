class Coordinate{
public:
    Coordinate(int x, int y);
    ~Coordinate();
    int getX();
    int getY();
//    void printInfo();
    void printInfo() const;

private:
    int m_iX;
    int m_iY;
};