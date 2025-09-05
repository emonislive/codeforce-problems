use std::io;

fn main() {
    let mut msg = String::new();
    let _ = io::stdin().read_line(&mut msg);
    print!("Hello, {}\n", msg);
}
