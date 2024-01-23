// Ваши одноклассники попросили вас скопировать для них некоторые документы. 
// Вы знаете, что есть "n" одноклассников, а в документах "m" страниц.
// Ваша задача - подсчитать, сколько пустых страниц вам нужно. Если n < 0 или m < 0, верните 0

// Your classmates asked you to copy some paperwork for them. 
// You know that there are 'n' classmates and the paperwork has 'm' pages.
// Your task is to calculate how many blank pages do you need. If n < 0 or m < 0 return 0.

int paperwork(int n, int m){
    if ((n<0) || (m<0)) return 0;
    else return n*m;   
}
