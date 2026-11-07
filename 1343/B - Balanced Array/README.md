<h2><a href="https://codeforces.com/contest/1343/problem/B" target="_blank" rel="noopener noreferrer">1343B — Balanced Array</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1343B](https://codeforces.com/contest/1343/problem/B) |

## Topics
`constructive algorithms` `math`

---

## Problem Statement

<div class="header"><div class="title">B. Balanced Array</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given a positive integer $$$n$$$, it is guaranteed that $$$n$$$ is even (i.e. divisible by $$$2$$$).</p><p>You want to construct the array $$$a$$$ of length $$$n$$$ such that: </p><ul> <li> The first $$$\frac{n}{2}$$$ elements of $$$a$$$ are even (divisible by $$$2$$$); </li><li> the second $$$\frac{n}{2}$$$ elements of $$$a$$$ are odd (not divisible by $$$2$$$); </li><li> <span class="tex-font-style-bf">all elements of $$$a$$$ are distinct and positive</span>; </li><li> the sum of the first half equals to the sum of the second half ($$$\sum\limits_{i=1}^{\frac{n}{2}} a_i = \sum\limits_{i=\frac{n}{2} + 1}^{n} a_i$$$). </li></ul><p>If there are multiple answers, you can print any. It is <span class="tex-font-style-bf">not guaranteed</span> that the answer exists.</p><p>You have to answer $$$t$$$ independent test cases.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains one integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of test cases. Then $$$t$$$ test cases follow.</p><p>The only line of the test case contains one integer $$$n$$$ ($$$2 \le n \le 2 \cdot 10^5$$$) — the length of the array. It is guaranteed that that $$$n$$$ is even (i.e. divisible by $$$2$$$).</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$2 \cdot 10^5$$$ ($$$\sum n \le 2 \cdot 10^5$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print the answer — "<span class="tex-font-style-tt">NO</span>" (without quotes), if there is no suitable answer for the given test case or "<span class="tex-font-style-tt">YES</span>" in the first line and <span class="tex-font-style-bf">any</span> suitable array $$$a_1, a_2, \dots, a_n$$$ ($$$1 \le a_i \le 10^9$$$) satisfying conditions from the problem statement on the second line.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009117089061071988" id="id006716425799927641" class="input-output-copier">Copy</div></div><pre id="id009117089061071988">5
2
4
6
8
10
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id003860039196114453" id="id0016083989501356744" class="input-output-copier">Copy</div></div><pre id="id003860039196114453">NO
YES
2 4 1 5
NO
YES
2 4 6 8 1 3 5 11
NO
</pre></div></div></div>