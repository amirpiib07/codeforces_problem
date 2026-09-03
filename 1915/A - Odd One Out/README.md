<h2><a href="https://codeforces.com/contest/1915/problem/A" target="_blank" rel="noopener noreferrer">1915A — Odd One Out</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1915A](https://codeforces.com/contest/1915/problem/A) |

## Topics
`bitmasks` `implementation`

---

## Problem Statement

<div class="header"><div class="title">A. Odd One Out</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given three digits $$$a$$$, $$$b$$$, $$$c$$$. Two of them are equal, but the third one is different from the other two. </p><p>Find the value that occurs exactly once.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \leq t \leq 270$$$) — the number of test cases.</p><p>The only line of each test case contains three digits $$$a$$$, $$$b$$$, $$$c$$$ ($$$0 \leq a$$$, $$$b$$$, $$$c \leq 9$$$). Two of the digits are equal, but the third one is different from the other two.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output the value that occurs exactly once.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009442360894606281" id="id00960345457622996" class="input-output-copier">Copy</div></div><pre id="id009442360894606281"><div class="test-example-line test-example-line-even test-example-line-0">10</div><div class="test-example-line test-example-line-odd test-example-line-1">1 2 2</div><div class="test-example-line test-example-line-even test-example-line-2">4 3 4</div><div class="test-example-line test-example-line-odd test-example-line-3">5 5 6</div><div class="test-example-line test-example-line-even test-example-line-4">7 8 8</div><div class="test-example-line test-example-line-odd test-example-line-5">9 0 9</div><div class="test-example-line test-example-line-even test-example-line-6">3 6 3</div><div class="test-example-line test-example-line-odd test-example-line-7">2 8 2</div><div class="test-example-line test-example-line-even test-example-line-8">5 7 7</div><div class="test-example-line test-example-line-odd test-example-line-9">7 7 5</div><div class="test-example-line test-example-line-even test-example-line-10">5 7 5</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id004302959283316622" id="id008811225171731943" class="input-output-copier">Copy</div></div><pre id="id004302959283316622">1
3
6
7
0
6
8
5
5
7
</pre></div></div></div>