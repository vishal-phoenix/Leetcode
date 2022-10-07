class MyCalendarThree {
public:
   struct Node {
        int l, r, mav, add;
    };
    // use a unordered_map as a discretized segment tree node array
    unordered_map<int, Node> tr;
    MyCalendarThree() {
        tr[1] = {0 + 1, (int)1e9 + 1, 0, 0};
    }

    void modify(int u, int l, int r, int val) {
        if (tr[u].l >= l && tr[u].r <= r) {
            tr[u].mav += val;
            tr[u].add += val;
        } else {
            lazy_create(u);
            push_down(u);
            int mid = (tr[u].r + tr[u].l) >> 1;
            if (l <= mid) {
                modify(u << 1, l, r, val);
            }
            if (r > mid) {
                modify(u << 1 | 1, l, r, val);
            }
            push_up(u);
        }
    }

    void lazy_create(int u) {
        int l = tr[u].l, r = tr[u].r, mid = (l + r) >> 1;
        if (!tr.count(u << 1)) {
            tr[u << 1] = {l, mid};
        }
        if (!tr.count(u << 1 | 1)) {
            tr[u << 1 | 1] = {mid + 1, r};
        }
    }

    void push_down(int u) {
        if (tr[u].add) {
            tr[u << 1].add += tr[u].add;
            tr[u << 1 | 1].add += tr[u].add;
            tr[u << 1].mav += tr[u].add;
            tr[u << 1 | 1].mav += tr[u].add;
            tr[u].add = 0;
        }
    }

    void push_up(int u) {
        tr[u].mav = max(tr[u << 1].mav, tr[u << 1 | 1].mav);
    }

    int book(int start, int end) {
        modify(1, start + 1, end, 1);
        return tr[1].mav;
    }
};

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree* obj = new MyCalendarThree();
 * int param_1 = obj->book(start,end);
 */