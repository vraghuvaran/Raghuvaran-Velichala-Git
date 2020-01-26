interface Washable{

    void wash();
}
class Shirt implements Washable{

    public void wash(){

        System.out.println("Shirt is Washed");
    }
}
class Pant implements Washable{

    public void wash(){

        System.out.println("Pant is Washed");
    }
}
class Washingmachine{

    public void start(Washable w){

        System.out.println("Washing started");
        w.wash();
    }
}
class Interfacedemo{

    public static void main(String[] args){

        Washingmachine w = new Washingmachine();

        Shirt s = new Shirt();

        Pant p = new Pant();

        w.start(s);

        w.start(p);

    }
}