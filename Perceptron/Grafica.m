p = [-2 1 2 -1 -2 1.5; 1 1 -2  -1.5 -1 -0.5 ];
t = [1 1 0 0 0 1];
plotpv(p,t)

net = perceptron;
net = configure(net,p,t);
net.iw{1,1} = [4 6.4];
net.b{1} = 4.2;
plotpc(net.iw{1,1},net.b{1})
