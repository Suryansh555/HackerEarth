import java.util.*;

import java.math.*;

class TestClass {

public static void main(String args[] ) throws Exception {

Scanner s = new Scanner(System.in);

int T = Integer.parseInt(s.nextLine());

while(T!=0){

BigDecimal c = new BigDecimal(s.nextLong());

BigDecimal n = new BigDecimal(s.nextLong());

BigDecimal addition = n.subtract(new BigDecimal(1)).multiply(n).divide(new BigDecimal(2));

BigDecimal k = c.subtract(addition).divide(n, BigDecimal.ROUND_FLOOR);

BigDecimal substraction = n.multiply(k).add(addition);

if(k.compareTo(BigDecimal.ZERO)>0){

System.out.println(c.subtract(substraction));

}else{

System.out.println(c);

}

T-=1;

}

}

}