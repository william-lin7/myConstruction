struct food{
  char *s;
  int n;
};

struct food sample (char *s, int n);

void contents (struct food *f);

void modify (struct food *f, char *s, int n);
