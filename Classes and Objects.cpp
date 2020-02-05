class Student {
private:
    vector<int> scores;

public:
    void input() {
        int i;
        for (int i = 0; i < 5; i++) {
            int tmp;
            cin >> tmp;
            scores.push_back(tmp);
        }
    }

    int calculateTotalScore() {
        int sum=0;
        vector<int>::iterator it;
        for( it=scores.begin();it< scores.end();it++)
        {
            sum+=*it;
        }
        return sum;
    }
};
