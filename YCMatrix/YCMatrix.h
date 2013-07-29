//
//  YCMatrix.h
//  YCMatrix
//
//  Created by Yan Const on 11/7/13.
//  Copyright (c) 2013 Ioannis Chatzikonstantinou. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Accelerate/Accelerate.h>

@interface YCMatrix : NSObject
{
    
@public double *matrix;
@public int rows;
@public int columns;

}

+ (id)matrixOfRows:(int) m Columns:(int) n;
+ (id)matrixOfRows:(int) m Columns:(int) n WithValue:(double) val;
+ (id)matrixFromArray:(double *) arr Rows:(int) m Columns:(int) n;
+ (id)matrixFromNSArray:(NSArray *)arr Rows:(int) m Columns:(int) n;
+ (id)matrixFromMatrix:(YCMatrix *) other;
+ (id)identityOfRows:(int) m Columns:(int) n;
- (double)getValueAtRow:(int) row Column:(int) column;
- (void)setValue:(double) vl Row:(int) row Column:(int) column;
- (void)checkBoundsForRow:(int) row Column:(int) column;
- (YCMatrix *)addWith:(YCMatrix *) addend;
- (YCMatrix *)subtract:(YCMatrix *) subtrahend;
- (YCMatrix *)multiplyWithRight:(YCMatrix *) mt;
- (YCMatrix *)multiplyWithLeft:(YCMatrix *) ml;
- (YCMatrix *)multiplyWithScalar:(double) ms;
- (YCMatrix *)negate;
- (YCMatrix *)transpose;
- (double)trace;
- (double)dotWith:(YCMatrix *)other;
- (YCMatrix *)unit;
- (double *)getArray;
- (double *)getArrayCopy;

@end
