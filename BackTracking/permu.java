import java.util.Scanner;
class Permu{

  public static void main(String arr[]){

    Scanner sc = new Scanner(System.in);
    String name = sc.next();
    find_permu(name,0,name.length()-1);
  }

  static void find_permu(String name,int left,int right){

    if(left==right){

      System.out.println(name);
    }else{

      for(int i=left;i<=right;i++){

        name = swap(name,left,i);//do
        find_permu(name,left+1,right);//recur
        name = swap(name,left,i);
      }
    }
  }

static String swap(String name,int left,int i){

    char temp;
    char []carr = name.toCharArray();

    temp = carr[left];
    carr[left] = carr[i];
    carr[i] = temp;

    return String.valueOf(carr);
  }
}
