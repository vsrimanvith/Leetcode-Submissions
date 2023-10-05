//Author: Sri Manvith Vaddeboyina

class MyHashMap {
public:
    int hm[10000001];
    MyHashMap() {
        fill(hm, hm + 10000000, -1);
    }
    
    void put(int key, int value) {
       hm[key] = value; 
    }
    
    int get(int key) {
       return hm[key]; 
    }
    
    void remove(int key) {
        hm[key] = -1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */