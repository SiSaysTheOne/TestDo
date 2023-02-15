int i;
void shapes(int i, bool mode); 
  // mode assumes angle measures when true, and radian measures when false
  // i is an easy supplement for the square of an equation
void shapes(int i, bool mode){
  if (mode == true){
    int mltnum = 1;
    int int_i = i
    while (int_i>0) {
      c::out << 360*mltnum/i << "\n";
      mltnum++;
      int_i--;
    }
  }
  if (mode == false){
    int mltnum = 1;
    int int_i = i
    while (int_i>0) {
      c::out << 2*mltnum/i << " pi" << "\n";
      mltnum++;
      int_i--;
    }
  }

} 
 
  
  










