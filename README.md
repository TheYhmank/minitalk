"The purpose of this project is to code a small data exchage program using UNIX signals".

Terms:
-  Understanding of the signal and sigaction.
-  Different types of signals.
-  signal() vs. sigaction().
-  Syntex of the sigaction().

1. Signals are software interruptions that are utilized to interrupt a running process to execute another action.

2. Different types of signals such SIGINT, SIGABRT, SIGQUIT, SIGUSR1, SIGUSR2 and many others...
   When a signal is activated, the process sends a signal to the kernel, which the utilizes the sig_handler() to perforn
   one of three possible actions: ignore, catch, default.
   Certain signals cannot be ignored, such as SIGKILL, SIGSTOP. The signal is caught when the process registers a function
   with the kernel to handle the interruption. If a signal executes its defailt behavior, it indicaties that the process is
   using the SIG_DFL signal.

3. The signal() has several undesirable characteristics that sigaction() avoids - unless you use the flags explicitly added
   to sigaction() to allow it to faithfully simulate the old signal() behavior. The function signal() does not block other
   signals from arriving withe the current hndler is execution;
   The signal() fuction resets the signal cation back to SIG_DFL for almost all signals.

4. Syntex: The sa_mask field indicates any signals that should be blocked while the signal handler is being executed.
5. The sa_flags field determines a number of different things, but the inpertant ones are whether we get the exetended information.
6. 
