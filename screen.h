using namespace std;
class Screen {
private:
    int nl, nc;
    char brush = '*';
    vector< vector<char> > matriz;
public:
    Screen(int _nl = 10, int _nc = 10);
    void setPixel(int x, int y);
    void clear();
    void setBrush(char _brush = '*');
    friend ostream& operator<<(ostream &os, Screen &t);
};

#endif // SCREEN_H
