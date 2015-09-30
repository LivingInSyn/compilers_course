; ModuleID = 'testing.c'
target datalayout = "e-m:e-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-pc-linux-gnu"

@main.test = private unnamed_addr constant [5 x i32] [i32 9, i32 2, i32 3, i32 4, i32 11], align 16

; Function Attrs: nounwind uwtable
define i32 @main() #0 {
  %1 = alloca i32, align 4
  %test = alloca [5 x i32], align 16
  %to_return = alloca i32, align 4
  store i32 0, i32* %1
  %2 = bitcast [5 x i32]* %test to i8*
  call void @llvm.memcpy.p0i8.p0i8.i64(i8* %2, i8* bitcast ([5 x i32]* @main.test to i8*), i64 20, i32 16, i1 false)
  %3 = getelementptr inbounds [5 x i32]* %test, i32 0, i64 1
  %4 = load i32* %3, align 4
  %5 = getelementptr inbounds [5 x i32]* %test, i32 0, i64 2
  %6 = load i32* %5, align 4
  %7 = add nsw i32 %4, %6
  store i32 %7, i32* %to_return, align 4
  %8 = load i32* %to_return, align 4
  ret i32 %8
}

; Function Attrs: nounwind
declare void @llvm.memcpy.p0i8.p0i8.i64(i8* nocapture, i8* nocapture readonly, i64, i32, i1) #1

attributes #0 = { nounwind uwtable "less-precise-fpmad"="false" "no-frame-pointer-elim"="true" "no-frame-pointer-elim-non-leaf" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "stack-protector-buffer-size"="8" "unsafe-fp-math"="false" "use-soft-float"="false" }
attributes #1 = { nounwind }

!llvm.ident = !{!0}

!0 = !{!"Ubuntu clang version 3.6.0-2ubuntu1~trusty1 (tags/RELEASE_360/final) (based on LLVM 3.6.0)"}
