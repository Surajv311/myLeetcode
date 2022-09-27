class SeatManager {
public:
    set<int> s; 
    SeatManager(int n) {
     for(int i = 1 ; i <=n ; i++){
         s.insert(i);
     }   
    }
    
    int reserve() {
        auto x = *begin(s);
        s.erase(x);
        return x; 
    }
    
    void unreserve(int seatNumber) {
        s.insert(seatNumber);
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */