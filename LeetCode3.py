def lengthOfLongestSubstring(s: str) -> int:
    temp=""
    count=maximum=0
    for i in s:
        if i in temp:
            temp=temp[temp.index(i)+1:]+i
            count = len(temp)
            # print(temp)
        else:
            temp=temp+i
            count+=1
            # print(temp)
        if count>maximum:
            maximum=count
    return maximum

print(lengthOfLongestSubstring("abcabcbb"))