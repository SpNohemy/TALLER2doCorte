#include <iostream>

int main() {
    int num1, num2, num3, num4;
    double media;

    std::cout << "Ingresa el primer entero: ";
    std::cin >> num1;
    
    std::cout << "Ingresa el segundo entero: ";
    std::cin >> num2;

    std::cout << "Ingresa el tercer entero: ";
    std::cin >> num3;

    std::cout << "Ingresa el cuarto entero: ";
    std::cin >> num4;

    //validar que este entre 0 y 100
	if( num1>=0  && num1<=100 ){
		if( num2>=0  && num2<=100 ){
			if( num3>=0  && num3<=100 ){
				if( num4>=0  && num4<=100 ){
	
					
					//calculamos la media
					media = (num1 + num2 + num3 + num4) / 4.0;
					std::cout << "  " << std::endl;
					std::cout << "  " << std::endl;
					
					
					//visualizar segun tabla
					std::cout << "   MEDIA     -      PUNTUACION" << std::endl;
					std::cout << "   90-100    -          A     " << std::endl;					
					std::cout << "   80-90     -          B     " << std::endl;	
					std::cout << "   70-80     -          C     " << std::endl;	
					std::cout << "   60-70     -          D     " << std::endl;	
					std::cout << "    0-60     -          E     " << std::endl;	
					
					
					//Presentamos las repustas del sistema
					std::cout << "  "  << std::endl;
					std::cout << "  "  << std::endl;
					std::cout << "La media de los cuatro enteros es: " << media << std::endl;
					std::cout << "  "  << std::endl;	
					std::cout << "Segun tabla indicada arriba la puntuacion corresponde a:" << std::endl;
					
					if(media<=60){
					std::cout << "PUNTUACION E"<< std::endl;
					}
					if(media>60 && media<=70){
					std::cout << "PUNTUACION D"<< std::endl;
					}
					if(media>70 && media<=80){
					std::cout << "PUNTUACION C"<< std::endl;
					}					
					if(media>80 && media<=90){
					std::cout << "PUNTUACION B"<< std::endl;
					}										
					if(media>90 && media<=100){
					std::cout << "PUNTUACION A"<< std::endl;
					}
					
						
				}else{std::cout << "cuarto numero ingresado no esta entre 0 y 100"<< std::endl;}
			}else{std::cout << "tercer numero ingresado no esta entre 0 y 100"<< std::endl;}
		}else{std::cout << "Segundo numero ingresado no esta entre 0 y 100"<< std::endl;}
	}else{std::cout << "Primer numero ingresado no esta entre 0 y 100"<< std::endl;}
	

	


    return 0;
}
