use std::io;

fn main() {
    let integer: i32;
    let long_long: i64;
    let character: char;
    let float: f32;
    let double: f64;

    let mut user_input = String::new();
    io::stdin().read_line(&mut user_input).unwrap();

    let arr: Vec<&str> = user_input.split_whitespace().collect();

    integer = arr[0].parse::<i32>().unwrap();
    long_long = arr[1].parse::<i64>().unwrap();
    character = arr[2].chars().next().unwrap();
    float = arr[3].parse::<f32>().unwrap();
    double = arr[4].parse::<f64>().unwrap();

    print!(
        "{}\n{}\n{}\n{}\n{}",
        integer, long_long, character, float, double
    );
}
