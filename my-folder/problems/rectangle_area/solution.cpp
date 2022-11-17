class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int l1 = abs(ax1-ax2);
        int b1 = abs(ay1-ay2);
        int l2 = abs(bx1-bx2);
        int b2 = abs(by1-by2);
        int area1 = l1*b1,area2 = l2*b2;
        int sum = area1+area2;
        int xolv = min(ax2,bx2)-max(ax1,bx1);
        int yovl = min(ay2,by2)-max(ay1,by1);
        int areovl;
        if(xolv>0 && yovl>0){
            areovl = xolv*yovl;
        }
        else{
            areovl=0;
        }
        return sum-areovl;
    }
};