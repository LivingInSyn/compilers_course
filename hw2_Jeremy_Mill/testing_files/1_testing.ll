; ModuleID = '1_testing.c'
target datalayout = "e-m:e-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-pc-linux-gnu"

@test = constant [5 x i32] [i32 9, i32 2, i32 3, i32 4, i32 11], align 16

; Function Attrs: nounwind uwtable
define i32 @main() #0 {
  %1 = alloca i32, align 4
  %a = alloca i32, align 4
  store i32 0, i32* %1
  %2 = call i32 @call_array(i32* getelementptr inbounds ([5 x i32]* @test, i32 0, i32 0), i32 5, i32 2)
  store i32 %2, i32* %a, align 4
  %3 = load i32* %a, align 4
  ret i32 %3
}

; Function Attrs: nounwind uwtable
define i32 @call_array(i32* %a, i32 %size, i32 %key) #0 {
  %1 = alloca i32*, align 8
  %2 = alloca i32, align 4
  %3 = alloca i32, align 4
  %middle_index = alloca i32, align 4
  %middle_num = alloca i32, align 4
  store i32* %a, i32** %1, align 8
  store i32 %size, i32* %2, align 4
  store i32 %key, i32* %3, align 4
  %4 = load i32* %2, align 4
  %5 = sdiv i32 %4, 2
  store i32 %5, i32* %middle_index, align 4
  %6 = load i32** %1, align 8
  %7 = load i32* %6, align 4
  %8 = load i32* %middle_index, align 4
  %9 = add nsw i32 %7, %8
  store i32 %9, i32* %middle_num, align 4
  %10 = load i32* %middle_num, align 4
  ret i32 %10
}

attributes #0 = { nounwind uwtable "less-precise-fpmad"="false" "no-frame-pointer-elim"="true" "no-frame-pointer-elim-non-leaf" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "stack-protector-buffer-size"="8" "unsafe-fp-math"="false" "use-soft-float"="false" }

!llvm.ident = !{!0}

!0 = !{!"Ubuntu clang version 3.6.0-2ubuntu1~trusty1 (tags/RELEASE_360/final) (based on LLVM 3.6.0)"}
