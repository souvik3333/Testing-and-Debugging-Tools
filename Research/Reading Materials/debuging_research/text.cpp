// ///////////////////////////////////////////////////////////////////////////////////////////////////////
// Step 1: Reproduce the Problem Consistently
// Find case where always occurs
// “Sometimes game crashes after kill boss” doesn’t help much
// Identify steps to get to bug
// Ex: start single player, room 2, jump to top platform, attack left,  …
// Produce systematic way to reproduce

// Step 2: Collect Clues
// Collect clues as to bug
// Clues suggest where problem might be
// Ex: if crash using projectile, what about that code that handles projectile creation and shooting?
// And beware that some clues are false
// Ex: if bug follows explosion may think they are related, but may be from something else
// Don’t spend too long - get in and observe
// Ex: see reference pointer from arrow to unit that shot arrow should get experience points, but it is NULL
// That’s the bug, but why is it NULL?

// Step 3: Pinpoint Error
// 1) Propose a hypothesis and prove or disprove
// Ex: suppose arrow pointer corrupted during flight.  Add code to print out values of arrow in air.  But equals same value that crashes.  Hypothesis is wrong.  But now have new clue.
// Ex: suppose unit deleted before experience points added.  Print out values of all in camp before fire and all deleted.  Yep, that’s it.
// Or, 2) divide-and-conquer method (note, can use with hypothesis test above, too)
// Sherlock Holmes: “when you have eliminated the impossible, whatever remains, however improbably, must be the truth”
// Setting breakpoints, look at all values, until discover bug
// The “divide” part means break it into smaller sections
// Ex: if crash, put breakpoint ½ way.  Is it before or after?
// Repeat.
// Look for anomalies, NULL or NAN values

// Step 4: Repair the Problem
// Propose solution.  Exact solution depends upon stage of problem. 
// Ex: late in code cannot change data structures.  Too many other parts use.
// Worry about “ripple” effects.
// Ideally, want original coder to fix
// If not possible, at least try to talk with original coder for insights.
// Consider other similar cases, even if not yet reported
// Ex: other projectiles may cause same problem as arrows did

// Step 5: Test Solution
// Obvious, but can be overlooked if programmer is sure they have fix (but programmer can be wrong!)
// So, test that solution repairs bug
// Best by independent tester
// Test if other bugs introduced (beware “ripple” effect)

// -----------------------------------------------------------------------------------------------------

// 1. Gather information

// • Expected behavior vs. actual behavior
// • Error messages
// • Stack traces
// • Screenshots
// • Browser & OS
// • Date & time
// • Log entries

// 2. Replicate the issue

// Be able to replicate with 100% certainty

// 3. Identify the culprit

// • Be methodical
// • Make no assumptions
// • Understand the bug

// 4. Fix it & re-test

// Attempt to replicate again
// • Avoid XY problem
// • No temporary workarounds!
// • Add technical debt
// • May introduce other issues
// • Never get replaced with true solutions

// 5. Mitigate future occurrences

// • Add an automated test
// • Share your new knowledge
// • Project documentation
// • Blog post
// • StackOverflow
// • Submit patch upstream

// ------------------------------------------------------------------------------

// 1. Understand the system
// 2. Make it fail
// 3. Quit thinking and look
// 4. Divide and Conquer
// 5. Change one thing at a time
// 6. Keep an audit trail
// 7. Check the plug
// 8. Get a fresh view
// 9. If you didn't fix it, it aint fixed

// a) Start
// |
// b) Construct a Hypothesis
// |
// c) Construct an Experiment
// |
// d) Hypothesis Proved? - goto b)
// |
// Need more evidence? - goto c)
// |
// Stop

// 1. Understanding the System
// Know the fundamentals of the system
// Understand the frameworks involved
// Read the API's and communication interfaces
// Know your tools
// Understand what each module of the system does

// 2. Make it Fail
// Start at the beginning
// Automate the failure
// No detail is insignificant
// Intermittent failures?
// Isolate the failure
// Build debugging tools and test harnesses

// 3. . Quit thinking and look
// Gather the low level details and "see" the failure
// Understand the context of the bug
// Design instrumentation in:
// ● Runtime statistics
// ● Status messages
// ● Debug logging - be descriptive!!!
// ● Deployment time environment checks

// 4. Divide and Conquer
// Narrow the search down, software AND
// hardware. Successive approximation.
// Start at the bad end (e.g. the error log) and work
// your way up the chain looking at the various
// points on the way
// Fix the bugs you know about - fixing one could
// fix the other
// Fix the noise first, but don't go nuts

// 5. Change one thing at a time
// Compare with a good one !
// Use a rifle not a shotgun
// What's changed recently, it used to work!
// Separate environment and product

// 6. Keep an audit trail
// Keep a day book of what you did
// During debugging write down...
// 1.What you did...
// 2.In what order...
// 3.And what happened!
// Be specific and consistent
// Correlate symptoms with others
// Version control and change logs are great for
// determining an audit trail of what's changed

// 7. Check the plug
// Question your assumptions

// 8. Get a Fresh View
// Get another viewpoint on the solution
// Talk to somebody about the problem
// Ask an expert:
// ● Email the author
// ● Check the forums
// ● Subscribe to the mailing list

// 9. If you didn't fix it, it aint fixed!
// The most important lesson by far...
// ●Fix the root cause
// ●Make sure it can't possibly happen again
// ●Fix the process at fault

// -----------------------------------------------------------------------------

// Understand the requirements
// Make it fail
// Simplify the test case
// Read the right error message
// Check the plug
// Separate facts from interpretation
// Divide and conquer
// Match the tool to the bug
// One change at a time
// Keep an audit trail
// Get a fresh view
// If you didn't fix it, it ain’t fixed
// Cover your bugfix with a regression test.

// ///////////////////////////////////////////////////////////////////////////////////////////////////////


// Debugging Tips (1 of 3)
// One thing at a time
// Fix one thing at a time – don’t try to fix multiple problems
// Change one thing at a time – test hypothesis.  Change back if doesn’t fix problem.
// Start with simpler case that works  - then add more complex code, one thing at a time
// Question your assumptions – don’t even assume simple stuff works, or “mature” products
// Ex: libraries and tutorials can have bugs
// Check code recently changed – if bug appears, may be in latest code (not even yours!)
// Use debugger – breakpoints, memory watches, stack …
// Break complex calculations into steps – may be equation that is at fault or “cast” badly
// Check boundary conditions – classic “off by one” for loops, etc.
// Minimize randomness – 
// Ex: can be caused by random seed or player input.  Fix input (script player) so reproducible
// Take a break – too close, can’t see it.  Remove to provide fresh prospective
// Explain bug to someone else – helps retrace steps, and others provide alternate hypotheses
// Debug with partner – provides new techniques
// Same advantage with code reviews, peer programming
// Get outside help – tech support for consoles, Web examples, libraries, …

// ------------------------------------------------------------------------------------------------
// (for images "txcxpts......".pdf)
// 1. Trace backwards
// • Use a debugger
// • Identify source of error
// • Establish context
// • Work backwards

// Divide & Conquer
// Identify different code sections
// Set breakpoints at the boundaries
// Isolate issue to one particular area
// Focus efforts on that area

// 3. Use tools

// git bisect

// Four things to walk away with
// 1. Computers aren’t random,
// and neither are bugs
// 2. Persistence will always pay off
// 3. Don’t be afraid to dive deep
// 4. Don’t make assumptions or
// take things for granted

// ----------------------------------------------------------------------------------
// (images in degugging-approaches.pdf)

// Debugging Approaches
// • Brute Force Method
// • Back Tracking Method
// • Cause Elimination
// • Each of the above debugging approaches can be supplemented
// with debugging tools such as debugging compilers, dynamic
// debugging aids, automatic test case generators, memory dumps
// and cross reference maps.

// 1. Brute Force Method
// • most common and least efficient for isolating the
// cause of a software error.
// • a printout of all registers and relevant memory
// locations is obtained and studied. All dumps
// should be well documented and retained for
// possible use on subsequent
// • involves using the debugger to step across the
// code from start to finish until you notice
// something odd.

// 2. Back Tracking Method
// • It is a quite popular approach of debugging which
// is used effectively in case of small applications.
// • The process starts from the site where a particular
// symptom gets detected, from there on backward
// tracing is done across the entire source code till we
// are able to lay our hands on the site being the
// cause.
// • Unfortunately, as the number of source lines
// increases, the number of potential backward paths
// may become unmanageably large.

// 3. Cause Elimination
// • manifested by induction or deduction and
// introduces the concept of binary partitioning
// • data related to the error occurrence are organized
// to isolate potential causes.
// • a "cause hypothesis" is devised and the data are
// used to prove or disprove the hypothesis.
// Alternatively, a list of all possible causes is
// developed and tests are conducted to eliminate
// each. If initial tests indicate that a particular cause
// hypothesis shows promise, the data are refined in
// an attempt to isolate the bug.

// --------------------------------------------------------------------------------

// • Logging: Logger.log(“This f&*%@ing thing again: #{bad_value}”)
// • Asserting: assertTrue(something, “This should never happen”)
// • Quitting: exit(55) // 55 - ABEND: Widget does not fit doodad. Call Bob for help
// • Interactive Debuggers: I will kill this bug, line by line! Or: “Wait, I can just inspect
// my program when it’s broken!”
// • All of them have uses, often together!

// Start Stupid

// -----------------------------------------------------------------------------------

// Print/Trace Debugging - watching the flow of execution after
// adding print statements to the original code
// Remote Debugging - connect to a remote system with a
// debugger, monitor the execution and state
// Post Mortem Debugging - analysis of a memory dump from a
// program that has crashed
// Profiling - not debugging per se, but a useful technique for
// analysing a running program to look for issues

// Rubber Ducking - explaining your problem to someone
// else. Stating the problem aloud in order to work it out.
// Failfirst - Write a unit test that exposes the failure, correct the
// code and make it pass
// Saff Squeeze - Write a system test, inline code, write test, repeat
// until fixed
// http://www.threeriversinstitute.org/HitEmHighHitEmLow.html
// Chaos Monkey - AWS Netflix approach - randomly kill and test
// areas. Fail consistently to test fault tolerant software.
// http://www.codinghorror.com/blog/2011/04/working-with-the-chaos-monkey.html

// ecpilse(debugging 1603.........pdf)

// Preventing Bugs
// Debugging is hard and expensive in terms of fixing
// the bug, testing it and re-deploying it...
// We can try and prevent bugs with:
// ● Code Review
// ● Defensive Programming
// ● Precondition, postcondition and invariant checking
// ● Assertions

// --------------------------------------------------------------------------------------------

// Debuggable source code
// Instrumentation means writing
// additional code for observability and
// controllability, or to keep track, how often
// a function is called and by whom, of the
// software.
// These instrumentations are sometimes
// enabled by providing macro definitions.

// Compiler flags can be used to generate code
// and information needed for source code
// debugging.
// Static Checkers Static checkers analyze the
// source code of the program without actually
// running the program.
// Libraries Selected libraries or third party
// libraries may also contains bugs that results in
// to abnormal execution of system.

// Linker options Linking is the process of
// building an executable file from object
// files and object libraries.
// Code Instrumentation tools : Tools can
// be used to increase the accuracy upto
// the level of CPU cycles.
// Test Cases are designed to find the
// bugs from black spots.

// //////////////////////////////////////////////////////////////////////////////////////////////////////

// Process is the foundation of effective debugging
// Gain experience with tools and code
// Develop a “sixth sense”

// ---------------------------------------------------------------------------------------------

// Long-Term Results
// • Gain experience
// • Learn how the system works
// • Build heuristics
// • Boost confidence

// //////////////////////////////////////////////////////////////////////////////////////////////////////

Bugs are logical

“The bug is not moving around in your code, trying to trick or evade you. It is just siting in one place, doing the wrong thing in the same way every time.”

“ If debugging is the process of removing software bugs, then programming must be the process of putting them in. ”

“First, solve the problem. Then, write the code.”

Enjoy that moment when you find the bug

Error messages are your best friend. : You will grow to love them for the useful information they give you. 

// //////////////////////////////////////////////////////////////////////////////////////////////////////

// Introduction
// • Debugging is a methodical process of finding and
// reducing the number of bugs, or defects, in a
// computer system (Software, hardware or a
// combination), thus making it behave as expected.
// • Process;
// – to start with a problem
// – isolate the source of the problem
// – and then fix it

// ------------------------------------------------------------------------


// "Bug" and "debugging" are attributed to the
// discovery of a moth found in a Mark II computer at
// Harvard University.
// Debugging is not troubleshooting

// ------------------------------------------------------------------------

// Debugging occurs as a consequence of
// successful testing. That is, when a test
// case uncovers an error, debugging is
// the process that results in the removal
// of the error.
// Debugging has the objective: to find
// and correct the cause of a software
// error.
// (images 1602............pdf)

// ----------------------------------------------------------------------

// Debugging is a process of finding and
// reducing the number of bugs, or defects.
// A Structured process Debugging if you are
// unfamiliar with the system you are fixing bugs
// less chances for you to fix any error. You must
// know how the system works, what components
// it uses and what technologies are involved in
// development, what is the process of
// development.

// ////////////////////////////////////////////////////////////////////////////////////////////////////

INTRO:

Debugging is a process of finding and reducing the number of bugs, or defects. Debugging occurs as a 
consequence of successful testing. That is, when a test case uncovers an error, debugging is the process
 that results in the removal of the error


STEPS OF DEBUGGING:


1. Gather information

Know the fundamentals of the system
Understand the frameworks involved
Read the APIs and communication interfaces
Understand what each module of the system does


2 Make it fail
Start at the beginning
Automate the failure
No detail is insignificant
Intermittent failures?
Isolate the failure

3 Collect Clues

Collect clues as to bug
Clues suggest where problem might be
ex:using type of error,etc.


4. Quit thinking and look

Gather the low level details and "see" the failure
Understand the context of the bug\
Be methodical
Make no assumptions
Understand the bug


5. Narrow the search down
Start at the bad end (e.g. the error log) and work
your way up the chain looking at the various
points on the way
Fix the bugs you know about - fixing one could
fix the other
Fix the noise first, but dont go nuts

6. Change one thing at a time

Compare with a good one !
Use a rifle not a shotgun
Whats changed recently, it used to work!
Separate environment and product

7. Keep an audit trail

Keep a day book of what you did
During debugging write down...
1.What you did...
2.In what order...
3.And what happened!
Be specific and consistent

8. Fix it & re-test

Attempt to replicate again
• No temporary workarounds!
• May introduce other issues
• Never get replaced with true solutions

9 Get a fresh view

Get another viewpoint on the solution
Talk to somebody about the problem
Ask an expert:
● Email the author
● Check the forums
● Subscribe to the mailing list

10 If you didn't fix it, it ain't fixed

The most important lesson by far...
●Fix the root cause
●Make sure it cant possibly happen again
●Fix the process at fault

11 Cover your bugfix with a regression test.


TYPES OF DEBUGGING:

1 BRUTE FORCE: most common and least efficient for isolating the
cause of a software error.
• a printout of all registers and relevant memory
locations is obtained and studied. All dumps
should be well documented and retained for
possible use on subsequent

2 Print/Trace Debugging - watching the flow of execution after
adding print statements to the original code
Remote Debugging - connect to a remote system with a
debugger, monitor the execution and state
Post Mortem Debugging - analysis of a memory dump from a
program that has crashed
Profiling - not debugging per se, but a useful technique for
analysing a running program to look for issues

3. Back Tracking Method
• It is a quite popular approach of debugging which
is used effectively in case of small applications.
• The process starts from the site where a particular
symptom gets detected, from there on backward
tracing is done across the entire source code till we
are able to lay our hands on the site being the
cause.
• Unfortunately, as the number of source lines
increases, the number of potential backward paths
may become unmanageably large.

4 Divide & Conquer
Identify different code sections
Set breakpoints at the boundaries
Isolate issue to one particular area
Focus efforts on that area
introduces the concept of binary partitioning


Less popular:
5 Rubber Ducking - explaining your problem to someone
else. Stating the problem aloud in order to work it out.
Failfirst - Write a unit test that exposes the failure, correct the
code and make it pass



TIPS:

1. Computers aren’t random, and neither are bugs
2. Persistence will always pay off
3. Don’t be afraid to dive deep
4. Don’t make assumptions or
take things for granted

LONG-TERM RESULTS:

• Gain experience
• Learn how the system works
• Develop a “sixth sense”

QUOTATIONS:

Bugs are logical

“The bug is not moving around in your code, trying to trick or evade you. 
It is just siting in one place, doing the wrong thing in the same way every time.”

“ If debugging is the process of removing software bugs, then programming must be the process of 
putting them in. ”

“First, solve the problem. Then, write the code.”

Enjoy that moment when you find the bug

Error messages are your best friend. : You will grow to love them for the useful information they 
give you. 
















GDB may not be intuitive but it is very powerful
▪ Easy to use, just not so easy to learn
TUI: Text User Interface
▪ As useful as it is poorly named!
Multiprocess Debugging
Debug multiple ‘inferiors’ simultaneously
Add new inferiors
Follow fork/exec


g++ -g memsim.cpp  (for c : gcc -g memsim.c)
gdb ./a.out

https://web.eecs.umich.edu/~sugih/pointers/summary.html
https://www.tutorialspoint.com/gnu_debugger/gdb_commands.htm  

seg fault - detected
divide by 0 - detected
mem leak - undetected
access unallocated mem - detected but can't specify what the error is
access unallocated mem (static) - detected but can't specify what the error is
access uninitailised mem - undetected 	
overflow - undetected


COMMANDS:
r
	run
c
	continue
tbreak
	temporary breakpoint
rbreak
	reg-ex breakpoint
break xxx if yyy
	conditionally break at xxx if condition yyy holds
commands
	list of commands to be executed when a breakpoint is hit
silent
	special command to suppress output on breakpoint hit
save breakpoints
	save a list of breakpoints to a script
save history
	save history of executed gdb commands
call
	call a function in the inferior
watch -l
	watchpoint based on address (location)
rwatch
	read watchpoint
info line foo.c:42
	show PC for line
info line * $pc
	show line begin/end for current program counter
thread apply all bt
	backtrace for every thread
dprintf
	dynamic printf
ctrl-x-a: toggle to/from TUI mode
ctrl-l: refresh the screen
ctrl-p / ctrl-n: prev, next, commands
ctrl-x-2: second window; cycle through
backtrace - produces a stack trace of the function calls that
lead to a seg fault (should remind you of Java exceptions)
where - same as backtrace; you can think of this version as
working even when you’re still in the middle of the program
finish - runs until the current function is finished
delete - deletes a specified breakpoint

f - Runs until the current function is finished

s - Runs the next line of the program

s N - Runs the next N lines of the program

n - Like s, but it does not step into functions

u N - Runs until you get N lines in front of the current line

p var - Prints the current value of the variable "var"

bt - Prints a stack trace

u - Goes up a level in the stack

d - Goes down a level in the stack

q - Quits gdb





VALGRIND

Valgrind is a memory mismanagement detector. It shows you memory leaks, de-allocation errors,
etc. Actually, Valgrind is a wrapper around a collection of tools that do many other things (e.g.,
cache profiling); however, here we focus on the default tool, Memcheck.

Easy to execute, e.g.:
valgrind --tool=memcheck ls
It becomes very popular
One of the two most popular dynamic instrumentation tools Pin and Valgrind
Very good usability, extendibility, robust
Overhead is the problem
5-10X slowdown without any instrumentation

g++ -Wall -pedantic -g program.cpp (for c : gcc -Wall -pedantic -g program.c)
valgring ./a.out

seg fault - detected
divide by 0 - detected
mem leak - detected
access unallocated mem (dynamic) - detected
access unallocated mem (static) - detected
access uninitailised mem - detected 	(???)
overflow - detection is input dependent (undetected if no overflow for given input)


Kdevelop

KDevelop is a modern integrated development environment (IDE) for C++ (and other languages)
that is one of many KDE applications.
GUI

USAGE:

Attach the file and debug (very similar to GDB).

seg fault - detected but can't specify where
divide by 0 - detected but can't specify where
mem leak - undetected
access unallocated mem - detected but can't specify where
access unallocated mem (static) - detected but can't specify where
access uninitailised mem - undetected 	
overflow - unknown


