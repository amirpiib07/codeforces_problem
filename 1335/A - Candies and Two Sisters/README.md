<h2><a href="https://codeforces.com/contest/1335/problem/A" target="_blank" rel="noopener noreferrer">1335A — Candies and Two Sisters</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1335A](https://codeforces.com/contest/1335/problem/A) |

## Topics
`math`

---

## Problem Statement

<div class="header"><div class="title">A. Candies and Two Sisters</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>There are two sisters Alice and Betty. You have $$$n$$$ candies. You want to distribute these $$$n$$$ candies between two sisters in such a way that:</p><ul> <li> Alice will get $$$a$$$ ($$$a  \gt  0$$$) candies; </li><li> Betty will get $$$b$$$ ($$$b  \gt  0$$$) candies; </li><li> each sister will get some <span class="tex-font-style-bf">integer</span> number of candies; </li><li> Alice will get a greater amount of candies than Betty (i.e. $$$a  \gt  b$$$); </li><li> all the candies will be given to one of two sisters (i.e. $$$a+b=n$$$). </li></ul><p>Your task is to calculate the number of ways to distribute exactly $$$n$$$ candies between sisters in a way described above. Candies are indistinguishable.</p><p>Formally, find the number of ways to represent $$$n$$$ as the sum of $$$n=a+b$$$, where $$$a$$$ and $$$b$$$ are positive integers and $$$a \gt b$$$.</p><p>You have to answer $$$t$$$ independent test cases.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains one integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of test cases. Then $$$t$$$ test cases follow.</p><p>The only line of a test case contains one integer $$$n$$$ ($$$1 \le n \le 2 \cdot 10^9$$$) — the number of candies you have.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print the answer — the number of ways to distribute exactly $$$n$$$ candies between two sisters in a way described in the problem statement. If there is no way to satisfy all the conditions, print $$$0$$$.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id001012909330759032" id="id0039218119801051" class="input-output-copier">Copy</div></div><pre id="id001012909330759032">6
7
1
2
3
2000000000
763243547
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id003629552805751781" id="id004462395256058579" class="input-output-copier">Copy</div></div><pre id="id003629552805751781">3
0
0
1
999999999
381621773
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>For the test case of the example, the $$$3$$$ possible ways to distribute candies are:</p><ul> <li> $$$a=6$$$, $$$b=1$$$; </li><li> $$$a=5$$$, $$$b=2$$$; </li><li> $$$a=4$$$, $$$b=3$$$. </li></ul></div>