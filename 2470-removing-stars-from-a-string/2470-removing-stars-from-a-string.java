class Solution {
    public String removeStars(String s) {
        int flag=0;
        Stack<Character> stack = new Stack<>();
        for(int i = 0 ; i < s.length(); i ++) {
            if(flag==1) {
                flag=0;
                continue;
            }
            if(s.charAt(i)=='*' && i ==0) {
                flag=1;
            }
            else if(s.charAt(i)=='*') {
                stack.pop();
            }
            else{
                stack.push(s.charAt(i));
            }
        }

        StringBuilder sb = new StringBuilder();
        for(Character c : stack) {
            sb.append(c);
        }

        String r = sb.toString();

        return r;

    }
}