class Solution {
    public boolean isPalindrome(String s) {
        ArrayList<Character> line = new ArrayList<Character>();

        for (char c : s.toCharArray()){
            if (Character.isLetterOrDigit(c)){
                line.add(Character.toLowerCase(c));
            }
        }

        int i = 0;
        int j = line.size() - 1;

        while(i < j){
            if (line.get(i) != line.get(j)) return false;
            i++;
            j--;
        }
        return true;
    }
}