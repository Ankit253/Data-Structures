int Solution::solve(int A, int B) {
    int tr=min(abs(8-A), abs(8-B));
    int tl=min(abs(1-A),abs(8-B));
    int br=min(abs(8-A),abs(1-B));
    int bl=min(abs(1-A),abs(1-B));
    return (tr+tl+br+bl);
}