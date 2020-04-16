clear all
load('Trained_Network.mat');


input = [1 0 1;
         1 0 1;
         1 0 1;
         1 0 1];
     
     N = 4;
     
     for k =1:N
          transposed_input = input(k,:)';
          weight_sum = (Weight )* (transposed_input);
          output = Sigmoid( weight_sum);
          disp(output);
     end