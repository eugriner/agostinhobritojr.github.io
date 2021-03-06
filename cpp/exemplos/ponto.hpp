#ifndef PONTO_HPP
#define PONTO_HPP
class Ponto {
private:
  double xpos, ypos;
public:
  // O construtor usa argumentos default para permitir chamar o construtor com
  // zero, um ou dois argumentos. Faz com que os valores padrão de xpos e ypos
  // sejam iguais a zero.
  Ponto(double x = 0.0, double y = 0.0);

  // Retorna os valores de x e y
  double x();
  double y();

  // define valores para x e y
  void setX(double _x);
  void setY(double _y);
  
  // Calcula a distância (euclideana) para outro ponto. 
  double dist(Ponto other);
  
  // Adiciona ou subtrai dois pontos.
  Ponto add(Ponto b);
  Ponto sub(Ponto b);
	
  // Move as coordenadas do ponto para xpos+a, ypos+b.
  void move(double a, double b);
  
  // Imprime o ponto na forma (xpos, ypos)
  void print(void);
};
#endif
