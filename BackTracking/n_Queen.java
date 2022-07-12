  class Queen{

  public static void main(String []args){

    place(new boolean [5][5],0,0,5,0,"" );
  }

  static void place(boolean board[][],int row,int col,int tq,int qpsf,String ans){


    if(qpsf == tq){
      System.out.println(ans);
      return;
    }
    if(col == board[0].length){
      row++;
      col=0;
    }
    if(row == board.length){
      return;
    }

    if(is_it_safe_to_place(board,row,col)){
      //do
      board[row][col]= true;

      //recur
      place(board,row,col+1,tq,qpsf+1,ans +"["+row+","+col+"]");

      //undo
      board[row][col]= false;

}
      //for not place
      place(board,row,col+1,tq,qpsf,ans);


  }

  static boolean is_it_safe_to_place(boolean [][] board,int row,int col){
    //vertically up
    int r,c;
    r = row-1;
    c = col;
    while(r>=0){
      if(board[r][c]){
      return false;
    }
      r--;
    }

  //horizontaly left
  r = row;
  c = col-1;
  while(c>=0){
    if(board[r][c]){
    return false;
  }
    c--;
  }

  //digonaly left
r = row-1;
c = col-1;
while(r>=0 && c>=0){
  if(board[r][c]){
  return false;
}
  r--;
  c--;
}
  //digonaly right
r = row-1;
c = col+1;

while(r>=0 && c<board[0].length){
  if(board[r][c]){
  return false;}
  r--;
  c++;
}
return true;
  }
}
