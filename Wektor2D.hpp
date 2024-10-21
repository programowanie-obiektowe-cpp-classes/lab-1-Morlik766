class Wektor2D
{
private:
    double x, y;
public:
    Wektor2D(): x(0), y(0) {}
    Wektor2D(double wartoscx, double wartoscy) : x(wartoscx), y(wartoscy) {}
    double getX() const { return x; }
    double getY() const { return y; }
    void setX(double wartoscx) { x = wartoscx; }
    void setY(double wartoscy) { y = wartoscy; }
    Wektor2D operator+(const Wektor2D& other) const { return Wektor2D(x + other.x, y + other.y); }
    double operator*(const Wektor2D& other) const { return (x * other.x + y * other.y); }
};