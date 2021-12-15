#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
struct Triangle{
    int a;
    int b;
    int c;
};

int obwod(struct Triangle x){
    int value = x.a + x.b + x.c;

    return value;
}

float pole(struct Triangle x){
    int a = x.a;
    int b = x.b;
    int c = x.c;

    float p=(a+b+c)*0.5;

    float pole=sqrt(p*(p-a)*(p-b)*(p-c));
    return pole;
}


#endif // HEADER_H_INCLUDED
