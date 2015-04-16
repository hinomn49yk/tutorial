print "配列の最大値を求めます\n"
p arr = [4,2,34,67,12,5]
i = 1
max = arr[0]

while i < arr.size 
  if max < arr[i]
    max = arr[i] 
  end
  i += 1
end

print max , "\n"
