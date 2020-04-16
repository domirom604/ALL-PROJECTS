function Weight = SGD_method(Weight,input,correctoutput)
alpha=2.9;
%N is how many inputs we have
N=4;

for k=1:N
    transposed_input = input(k,:)';
    d=correctoutput(k);
    weight_sum = (Weight )* (transposed_input);
    output = Sigmoid( weight_sum);
    error = d- output;
    delta = (output )* (1-output) *( error);
    weightupdate=alpha*delta*transposed_input;
    Weight(1) = Weight(1) + weightupdate(1);
    Weight(2) = Weight(2) + weightupdate(2);
    Weight(3) = Weight(3) + weightupdate(3);
end
disp(transposed_input);
end