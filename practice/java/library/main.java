class library{
    String libraryName;
    library(String name){
        this.libraryName = name;
    }
    class book{
        String getLibraryName(){
            return libraryName;
        }
    }
}

class main{
    public static void main(String[] args) {
        library li = new library("my library");
        library.book mybook = li.new book();
        System.out.println(mybook.getLibraryName());
    }
}

