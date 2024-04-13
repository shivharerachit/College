class PrimeNumbers{
    public static void main(String args[]){
        System.out.println("**** First 1000 Prime Numbers ****");
        int num=1000;
        int count=0;
        int flag;
        for(int i=0;i<=num;i++){
            flag=0;
            for(int j=2;j*j<=i;j++){
                if(i%j==0){
                    flag++;
                    break;
                }
                else{
                    continue;
                }
            }
            if(flag==0){
                System.out.print(i+"\t");
                count++;
            }
            if(count==20){
                System.out.println();
                count=0;
            }
        }
    }
}