class Line
{
public:
  Line(int length);
  void drawLine() const;
  ~Line();
  void eraseLine() const;

private:
  int len;
};
