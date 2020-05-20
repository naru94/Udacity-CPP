#include <cassert>

class Heart {
private:
  int rate{80};
  friend class Human;
};

class Human {
public:
  Heart heart;
  void Exercise() { heart.rate = 150; }
  int HeartRate() { return heart.rate; }
};

int main() {
  Human human;
  assert(human.HeartRate() == 80);
  human.Exercise();
  assert(human.HeartRate() == 150);
}