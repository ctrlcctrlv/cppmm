#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;


impl std____cxx11__basic_string_char__t {
    pub fn layout() -> std::alloc::Layout {
        unsafe {
            std::alloc::Layout::from_size_align(
                std____cxx11__basic_string_char__sizeof(),
                std____cxx11__basic_string_char__alignof(),
            ).unwrap()
        }
    }
}


impl std__vector_std__string__t {
    pub fn layout() -> std::alloc::Layout {
        unsafe {
            std::alloc::Layout::from_size_align(
                std__vector_std__string__sizeof(),
                std__vector_std__string__alignof(),
            ).unwrap()
        }
    }
}



extern "C" {

pub fn std____cxx11__basic_string_char__sizeof() -> usize;

pub fn std____cxx11__basic_string_char__alignof() -> usize;

pub fn std____cxx11__basic_string_char__assign(this_: *mut std_string_t, return_: *mut *mut std_string_t, s: *const c_char, count: usize) -> Exception;

pub fn std____cxx11__basic_string_char__c_str(this_: *const std_string_t, return_: *mut *const c_char) -> Exception;

pub fn std__vector_std__string__sizeof() -> usize;

pub fn std__vector_std__string__alignof() -> usize;

pub fn std__vector_std__string__ctor(this_: *mut std_vector_string_t) -> Exception;

pub fn std__vector_std__string__dtor(this_: *mut std_vector_string_t) -> Exception;


} // extern "C"
