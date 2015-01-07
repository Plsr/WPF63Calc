//
//  Calculator.h
//  WPF63Calc
//
//  Created by Christian Poplawski on 07/01/15.
//  Copyright (c) 2015 chrispop. All rights reserved.
//

#import <Foundation/Foundation.h>


typedef enum : NSUInteger {
    //  Always prefix these!
    CalcuatorOperatorAdd = 0,
    CalcuatorOperatorSubtract,
    CalcuatorOperatorMultiply,
    CalcuatorOperatorDivide
} CalcuatorOperator;



@interface Calculator : NSObject

@property (strong, nonatomic) NSString *display;
@property (assign, nonatomic) CalcuatorOperator currentOperator;

@end
