#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;



extern "C" {

pub fn fptr_takes_ages(cb: Option<extern fn(*mut c_void, c_float) -> bool>, data: *mut c_void) -> Exception;


} // extern "C"
