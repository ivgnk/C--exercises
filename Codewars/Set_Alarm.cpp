// Напишите функцию с именем set_alarm, которая принимает два параметра. 
// Первый параметр, employed, имеет значение true всякий раз, когда вы работаете, 
// а второй параметр, vacation, имеет значение true всякий раз, когда вы в отпуске.
// Функция должна возвращать значение true, если вы работаете, а не в отпуске 
// (потому что именно при таких обстоятельствах вам необходимо установить будильник). 
// В противном случае она должна возвращать значение false. 
// Примеры:
// employed | vacation 
// true     | true     => false
// true     | false    => true
// false    | true     => false
// false    | false    => false

// https://www.codewars.com/kata/568dcc3c7f12767a62000038/train/cpp

bool set_alarm(const bool& employed,const bool& vacation){
    if ((employed== true) and (vacation==false)) return true;
    else return false;
}