class lists {
    private:
        int ARRAY_SIZE;  // size of array
        int array[];     // initalize empty array

    public:
        lists(); // constructor
        void CLEAR(); // rempty array
        int COUNT() const; // display amount of variables in array
        void ADD(int x); // add element to array
        void DELETE(int x); // delete variable from array
        void SHOW(); // display all variables  in array
        void INSERT(int x, int y); // insert variable at given index
};