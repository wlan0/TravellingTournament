/*
 *  TRAVELLING TOURNAMENT PROBLEM(TTP)
 *  Constraint Programming Approach
 *  using - cpoptimizer, IBM iLOG CPLEX
 *
 *  Copyright (c) 2013 Sidhartha Mani. All rights reserved.
 */

/*  Problem Description TTP
 *
 *  INPUTS
 *  There are n teams.(Number of teams is even)
 *  These teams play against each other during a season of 180 days.
 *  There are 2(n-1) slots.
 *  The total number of games is n.
 *  L is the lower bound on the number of consecutive games at home or away.
 *  U is the upper bound on the number of consecutive games at home or away.
 *  Both L and U are inclusive
 *
 *  CONSTRAINTS
 *  No team wants to stay away or at home for longer than U weeks and no less than L weeks.
 *
 *  VARIANTS
 *  Mirrored => Double Round Robin in the first n-1 slots and same tournament with reversed venues inthe next n-1 slots
 *  No Repeaters => No two consecutive slots have the same teams playing against each other.
 *
 *  ASSUMPTIONS
 *  One slot = one week(for simplicity)
 *
 *  APPROACH
 *  Find the solution for minimizing the number of trips, rather than distance.
 *  Assign teams to the pattern sets with minimum trips and then minimize distance.
 *
 *  RESULT
 *  Works for small instances
 */

#include <iostream>
#include "TravellingTournament.h"
using namespace std;

int main(int argc, const char *argv[])
{
    TravellingTournament *instance2 = new TravellingTournament(2);
    instance2->solve();
    return 0;
}

