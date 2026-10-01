function getNumbers{
    let num1=Number(document.getElementById("num1").value);
    let num2=Number(document.getElementById("num2").value);
    return[num1, num2];
}
function add(){
    let numbers=getNumbers();
    let result=numbers[0]+numbers[1];
    document.getElementById("result").innerHTML="Result:"+result;
}
function sub(){
    let numbers=getNumbers();
    let result=numbers[0]-numbers[1];
    document.getElementById("result:").innerHTML="Result:"+result;
}
function mult(){
    let numbers=getNumbers();
    let result=numbers[0]*numbers[1];
    document.getElementById("result:").innerHTML="Result:"+result;
}
function div(){
    let numbers=getNumbers();
    let result=numbers[0]/numbers[1];
    document.getElementById("result:").innerHTML="Result:"+result;
}