//
//  NSDate+MNAdditions.h
//  MNCalendarView
//
//  Created by Min Kim on 7/26/13.
//  Copyright (c) 2013 min. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDate (MNAdditions)


- (instancetype)firstDateOfWeekWithCalendar:(NSCalendar *)calendar;

- (instancetype)lastDateOfWeekWithCalendar:(NSCalendar *)calendar;

- (instancetype)firstDateOfMonthWithCalendar:(NSCalendar *)calendar;

- (instancetype)lastDateOfMonthWithCalendar:(NSCalendar *)calendar;



- (instancetype)mn_firstDateOfMonth:(NSCalendar *)calendar;

- (instancetype)mn_lastDateOfMonth:(NSCalendar *)calendar;

- (instancetype)mn_beginningOfDay:(NSCalendar *)calendar;

- (instancetype)mn_dateWithDay:(NSUInteger)day calendar:(NSCalendar *)calendar;

+ (BOOL)date:(NSDate*)date isBetweenDate:(NSDate*)beginDate andDate:(NSDate*)endDate;

@end
