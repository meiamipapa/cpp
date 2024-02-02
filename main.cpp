//
//  main.cpp
//  Cpp4
//
//  Created by matuura on 11/06/09.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include <boost/shared_ptr.hpp>
#include <boost/array.hpp>
#include <boost/make_shared.hpp>

#include <algorithm>
#include <vector>

// 松浦の修正テスト：レビューコメントあり、コメント追加したよ


#if 0
// 関数型を明示
function<int (int,int)> mul = [](int x, int y)->int {return x*y;};
mul(3,3) // 9

// 戻り値省略：これと同じ解釈
// auto add = [](int x, int y) ->decltype(x+y){return x+y;};
auto add = [](int x, int y){return x+y;};
add(3,3) // 6

// キャプチャとクロージャ
int v = 100
auto add2 = [=](int x){return v+y;};
add2(3) // 103


int hogehoge( int x, function<int()>& f){
    if(x== 0) return 0;
    return x*f(); // この時点ではじめてfが評価される
}

int result = hogehoge(100, 
     [](){ int ret; /*ものすごく重い処理*/ return ret; } );


template<typename Iterator, typename Tp>
Iterator find(Iterator first, Iterator last, const Tp& val)
{
    while (first != last && !(*first == val)) ++first;
    return first;
}


// svから"X"を探す
vector<string> sv;
・・・
vector<string>::iterator i = find(sv.begin(), sv.end(), "X");

// arから5を探す
int ar[10];
・・・
int* pi = find( ar, ar+10, 5);


struct X{
    X(std::vector<int>&& v){...}  
};

std::vector<int> v;
for(int value : v) {
    cout << value << endl
}

vector<int> v;
find_if(v.begin(), v.end(), 
        [](int x) -> bool { return x % 2 == 0; });    


auto f = [](){};
    

    
std::vector<int> v;   
std::vector<int>::iterator it = v.begin();
    
std::vector<int> v;
auto it = v.begin();


int* p = nullptr;
    
    
#endif
    
class A{
public:
    int x_;
    A(int x): x_(x){}
    A(){}
};

int main (int argc, const char * argv[])
{
    A a;
    std::cout << a.x_ << "\n";
    
    std::vector<int> v;
    
    std::find(v.begin(), v.end(), 1 );
    
    int ar[]={1,2,3};
    std::cout << "ar= " << sizeof(ar)/sizeof(ar[0]);
    {
        boost::shared_ptr<A> x = boost::make_shared<A>();
        boost::shared_ptr<A> y = x;

    
    }
    {
        //auto x = boost::make_shared<A>();
    }
    {
        boost::shared_ptr<A> x(new A);
    }
    return 0;
}

