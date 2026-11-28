fn helper() -> Box<i32>{
    let three=Box::new(3);
    three //ownership transferred implicitly
}
fn main(){
    let my_three=helper();
    println!("{}",my_three);
}
