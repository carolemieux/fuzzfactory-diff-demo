# FuzzFactory Diff Demo

This gives a minimal example with which to run the FuzzFactory diff domain.

To build, first build and clone FuzzFactory. Let us assume `FUZZFACTORY_DIR` contains the location of FuzzFactory.

To build this project, first make the Makefile:
`cmake -DCMAKE_CXX_COMPILER=${FUZZFACTORY_DIR}/afl-clang-fast++`

Then build with
`WAYPOINTS=diff make CXX_FLAGS='-target_locations=commit.targets'`


To check whether the build worked, you should see output like this for a diff-hitting input (in this case, `GIF0123`):
```
$ ${FUZZFACTORY_DIR}/afl-showdsf ./demo "GIF0123"
[*] Spinning up the fork server...
[+] All right - fork server is up.
Receiving 1 domain-specific front-ends..
[+] 1 domain-specific front-end configs received
DSF 0: Start=0x000000, End=0x010000, Size=65536, Reducer[2]=LOG_BUCKETING, Initial=0
Total DSF map length = 65536
[WAYPOINTS] this input hit a diff BB
A changed piece of code
Pretty boring too.
This is common too.
Pretty boring too.
This is rare.
Pretty boring too.
This is common too.
Pretty boring.
dsf[481] = 1
dsf[10279] = 1
dsf[11179] = 1
dsf[11853] = 4
dsf[12795] = 4
dsf[15431] = 1
dsf[24700] = 2
dsf[27506] = 1
dsf[29428] = 1
dsf[30234] = 1
dsf[37908] = 2
dsf[39115] = 2
dsf[39476] = 2
dsf[43204] = 1
dsf[43461] = 2
dsf[44202] = 2
dsf[44715] = 1
dsf[48069] = 2
dsf[49533] = 1
dsf[51112] = 4
dsf[55292] = 1
dsf[58562] = 1
dsf[61106] = 1
```

And output like this for a non-diff-hitting input (`JPG0123`):
```
$ ${FUZZFACTORY_DIR}/afl-showdsf ./demo "JPG0123"
[*] Spinning up the fork server...
[+] All right - fork server is up.
Receiving 1 domain-specific front-ends..
[+] 1 domain-specific front-end configs received
DSF 0: Start=0x000000, End=0x010000, Size=65536, Reducer[2]=LOG_BUCKETING, Initial=0
Total DSF map length = 65536
Pretty boring too.
This is common too.
Pretty cool.
This is rare.
Pretty boring.
This is common too.
Pretty boring too.
This is common too.
Pretty boring.
This is common.
Pretty boring.
```
