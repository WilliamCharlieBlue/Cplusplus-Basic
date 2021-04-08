class Array{
public:
    Array(int len);
    ~Array();
    void setLen(int len);
    int getLen();
    //void printInfo();
    //Array& printInfo();
    Array* printInfo();
private:
//    int m_iLen;
    int len;
};