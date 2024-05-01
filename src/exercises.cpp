
#include <cmath>
#include <iostream>

using namespace std;

void exercise_1(string s1) {
  // TODO: YOUR CODE HERE


  for(int i = 1; i <= s1.size(); ++i){
    if(s1[i] == ' '){
      cout << i << endl;
    }
  }
  cout << s1.size() << endl;
}

void exercise_2(string s1) {
  // TODO: YOUR CODE HERE

  string word = "";

  for (int i = 0; i < s1.size() ; ++i) {
    if(s1[i] == ' ') {   // ' ', para que el espacio cuente como caracter
      //word = word + "";
      cout << "[" << word << "]" << endl;
      word = "";
    } else {
      word = word + s1[i];
    } 

  } 
  if (s1.size() != 0) {
    cout << "[" << word << "]" << endl;
  }
  
}

void exercise_3(string s1) {
  // TODO: YOUR CODE HERE

    //getline(cin, s1);
    
    for(int i = 0 ; i < s1.size() ; ++i) {
        
        if(i >= 20) {
            break;
        } else if (s1[i] == '1') {
            cout << "Om-nom-nom :P" << endl;
        } else if (s1[i] == '0') {
            cout << "No cake :(" << endl; 
            break;
        }
        
        //cout << input[i] << endl;
    } 
}

void exercise_4(int n) {
  // TODO: YOUR CODE HERE

  int accumulate = 1;

  if (n > 14) {
    cout << "El numero es muy grande. Intentelo de nuevo"<< endl;
  } 
    
  else if (n < 0) {
    cout << "El numero es negativo. Intentelo de nuevo" << endl;
  }
    
  for(int i = 0 ; i <= n ; ++i) {

    if (i > 1) {
      accumulate = accumulate * i;   //(n * (n - 1) * (n - 2) * ... * 2 * 1); 
        
    }

  } 
  if ( n <= 14 && n >= 0) {
    cout << accumulate << endl;
  }
  
}

void exercise_5(int n, int k) {
  // TODO: YOUR CODE HERE 
  for(int i=1; i < n; ++i) {
    cout << "   ";
  }
  for (int j = 1; j <= k; ++j) {
    if(j < 10) {
      cout << " ";
    }
    cout << j;

    int salto =(j + n - 1) % 7;

    if (salto == 0) {
      cout << endl;
    } else if(j == k) {
      cout << " " << endl;
    } else {
      cout << " ";
    }
  }
}

int exercise_6(int n) {
  // TODO: YOUR CODE HERE

  if (n < 0) {
    cout << "Numero no valido";
    }

    int suma = 0;
    while (n > 0) {
        suma = suma + n % 10; 
        n = n / 10; 
      }

  return suma;
}

void exercise_7(int n) {
  // TODO: YOUR CODE HERE

  double result = 0;
  
  for(int i = 1; i <= n; i++)
  {
    
   result=result+(pow(-1,i+1)/i);
     
  
  }cout<<result << endl;
}

void exercise_8(string s) {
  // TODO: YOUR CODE HERE
  //getline(cin, string s);

  string esp;
  for (int i = 0; i < s.size(); ++i){
    if (s[i] != ' ') {
        esp = esp + s[i];
    }
  }
    // Compruebo si es palindromo
    bool ep = true;
    int longi = esp.size();
    for (int i = 0; i <= longi ; ++i) {
        if (esp[i] != esp[longi - i - 1]) {
            ep = false;
        }
    }
    // mostramos el resultado
    if (ep) {
        cout << "YES"<<endl;
    } else {
        cout << "NO"<<endl;
    }

}

void exercise_9(string s) {
  // TODO: YOUR CODE HERE
  int longi = s.size();
  int cuenta= 0;
  for (int i=0; i<longi; ++i) {
        if(s[i] == 'f') {
            cuenta = cuenta + 1;
        }
  }
    if (cuenta == 1 ) {
        cout <<"-1"<<endl;
          return ;
        } else if (cuenta == 2) {
        cout << "3"<<endl;
          return ;
        }  if (cuenta == 0) {
        cout << "-2"<<endl;
          return ;
        }
}

int exercise_10(int a, int b) {
  // TODO: YOUR CODE HERE
  while (b != 0) {
        int c = b;
        b = a % b;
        a = c;
    }
  
  return a;
}

void exercise_11() {
  // TODO: YOUR CODE HERE
  double u_0 = 1.0;
  double u_n = u_0;

  cout << "U0 = " << u_0 << endl; 

  for (int i = 1; i <= 10; ++i) {
    u_n /= i;
    cout << "U" << i << " = " << u_n << endl;
  }

}

void exercise_12() {
  // TODO: YOUR CODE HERE
  double u_0 = 1.0;
  double u_n = u_0;
  double v_n = u_0;

  for (int i = 1; i <= 10; ++i) {
    u_n /= i;
    v_n += u_n;
    cout << "U" << i << " = " << u_n << " V" << i << " = " << "1" << endl;
  }

}

long exercise_13(int n, int k) {
  // TODO: YOUR CODE HERE
   long resultado = 0;

    for (int i = 1; i <= n; i++) {
        resultado = resultado + pow(i,k);
        
    }
  return resultado;
}

string exercise_14(int n) {
  // TODO: YOUR CODE HERE
  string resultado;
  string num = to_string(n);
  int longitud = num.size();
    
  bool espa = true;
  for (int i = 0; i < longitud; ++i) {
        if (num[i] != num[longitud - i - 1]) {
            espa = false;
    
        }
  }
    
  if (espa) {
        resultado = "Es palindrome";
    } else {
        resultado = "No es palindrome";
    }
    
  return resultado;

}

void exercise_15(int decimal) {
  // TODO: YOUR CODE HERE
  for(int i = 0; i < decimal; ++i) {
    int dividir = decimal/2;
    int acumular = decimal%2;
    int acumulativo;
    if((acumulativo%2) == 0) {
      cout << decimal << endl;
    }
    else() {
      default;
    }
    //decimal = dividir, acumular

    //cout << decimal;
  }
  //cout << decimal << endl;
}



void exercise_16(int divident, int divider) {
  // TODO: YOUR CODE HERE
  ///unomas
}

void exercise_17(int n) {
  // TODO: YOUR CODE HERE
}

void exercise_18_19(int debut, int fin) {
  // TODO: YOUR CODE HERE
}