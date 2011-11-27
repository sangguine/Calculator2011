//
//  CalculatorBrain.h
//  Calculator
//
//  Created by William Lee on 11/27/11.
//  Copyright (c) 2011 William Sang Lee Production. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CalculatorBrain : NSObject

-(void) pushOperand: (double) operand;
-(double) performOperation: (NSString *) operation;

@end
