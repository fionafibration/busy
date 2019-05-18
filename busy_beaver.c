            int r,a;P(y,x){                                  return y-~y<<x;}Z(x
        ){return r=x%2?0:1+Z(x/2                          );}L(x){return x/2>>Z(x);
     }S(v,y,c,t){int f=L(t),x=r;{/*                    */return f-2?f>2?f-v?t-(f>v)*c:
    y:P(f            ,P(S(v,y,c,L(x)),              S(v+2                ,t=S(4,13,-4,y
  ),c,Z                 (x)))):A(S(v,y,c,         L(x)                        ),S(v,y,c,
 Z(x)                      ));}}A(y,x){return    L(y                             )-1?5<<P
(y,x                         ):S(4,x,4,Z(r));}D(x)                                 {int f
,d,c                            =0,t=7,u=14;while                                    /**/
(x&&                              D(x-1),(x/=2)%2                                   &&(1)
)d=L                                (L(D(x))),f=L(r)                                 ,x=L
(r),c-                                r||(L(u)||L(r)-f                               ||(x
/=2)%2                                &&(u=S(4,d,4,r),t=A                            (t,
 d)),f/2&                           (x/= 2)%2&&(c=P(d,c),t=S(                      4,13,
  -4,t),u=S(4                     ,13,      -4,u))),c&&(x/=2)%2                  &&(t=P
   (~u&2|(x/=2)%               2&&(u          =1<<P(L(c),u)),P(L(c),t       )),c=r),u
     /2&(x/=2)%2&&(c=P(t,c),u=S(4,               13,-4,t),t=9);{return a=P(P(t,P(u,
       P(x,c))),a);}}main(arg){                     int g=99;for(int i=0;i<D(D(D
          (D(D(D(99))))));I+                            +){g=D(g)};return g;}
             /*Big-Ass                                    Fuckin' Number*/