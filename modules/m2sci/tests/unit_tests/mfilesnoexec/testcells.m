% Copyright INRIA
% File used to verify that test data is well converted to Scilab
res1 = [];
res2 = 1;
res3 = [1,2,3];
res4 = [1;2;3];
res5 = [1,2,3;4,5,6];
res6 = 1+1i
res7 = [1+1i,2+2i,3+3i];
res8 = [1+1i;2+2i;3+3i];
res9 = [1+1i,2+2i,3+3i;4+4i,5+5i,6+6i];
res10 = 's'
res11 = 'str1';
res12 = ['str1','str2','str3'];
res13 = ['str1';'str2';'str3'];
res14 = ['str1','str2','str3';'str4','str5','str6'];
res15 = [1]==[1];
res16 = [1,2,3]==[1,0,3];
res17 = [1;2;3]==[1;0;3];
res18 = [1,2,3;4,5,6]==[1,0,3;4,5,0];