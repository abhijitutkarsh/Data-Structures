class MyCalendar {
public:
    // O(n) tc scO(n)
//        vector<pair<int,int>>v={{0,0}};
//     MyCalendar() {
        
//     }
    
//     bool book(int start, int end) {
        
//         for(auto x:v)
//         {
//             if(x.first<end and x.second>start)
//                 return false;
//         }
//         v.push_back({start,end});
//         return true;
//     }

    set<pair<int,int>>bookings={{0,0}};
    MyCalendar() {
        
    }
    
    bool book(int s1, int e1) {
        auto it = lower_bound(bookings.begin(),bookings.end(),make_pair(s1,e1));
        if(
            (it != bookings.end()   && it -> first < e1) ||       
            (it != bookings.begin() && prev(it) -> second > s1)) 
			    return false;         
        bookings.insert({s1, e1});
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */