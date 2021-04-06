bool rotateString(string A, string B) {
        if(A.length()!= B.length())
            return false;
        string conc = B+B;
        return (conc.find(A) != string::npos);
