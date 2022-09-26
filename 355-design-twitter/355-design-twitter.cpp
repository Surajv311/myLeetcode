class Twitter {
    
    unordered_map<int, unordered_map<int,int>> follow_node; 
    vector<pair<int,int>> post; 
    
    
public:
    Twitter() {
        
    }
    
    void postTweet(int userId, int tweetId) {
        // post.push_back({userId, tweetId});
        post.push_back(make_pair(userId, tweetId));
        
    }
    
    vector<int> getNewsFeed(int userId) {
        vector<int> news; 
        int count  = 0; // since only top 10 tweets to retrieve according to question
        for(int i = post.size()-1; i>=0 and count<10; i--){
            if(post[i].first==userId || follow_node[userId][post[i].first]){
                // 2 conditions in `if` since give: Each item in the news feed must be posted by users who the user followed or by the user themself.
                news.push_back(post[i].second);
                count++;
            }
        }
        
        return news; 
        
    }
    
    void follow(int followerId, int followeeId) {
        follow_node[followerId][followeeId] =1; 
    }
    
    void unfollow(int followerId, int followeeId) {
        follow_node[followerId][followeeId] =0; 
    }
};

/**
 * Your Twitter object will be instantiated and called as such:
 * Twitter* obj = new Twitter();
 * obj->postTweet(userId,tweetId);
 * vector<int> param_2 = obj->getNewsFeed(userId);
 * obj->follow(followerId,followeeId);
 * obj->unfollow(followerId,followeeId);
 */