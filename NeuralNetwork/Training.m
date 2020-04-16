clear all
input = [1 0 1;
         1 1 1;
         1 0 0;
         0 1 1];
     
     correctoutput = [1 0 0 1];
     
  Weight = 2*rand(1,3)-1;
  
  disp(Weight);
  
  for epoch = 1:10000
      
      Weight = SGD_method(Weight,input,correctoutput);
      %disp(Weight);
  end
  
  save('Trained_Network.mat')
  
 for k=1:4
    kkk = input(k,:)';
 end
 %disp(Weight(1));