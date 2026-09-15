<h2><a href="https://codeforces.com/contest/1328/problem/A" target="_blank" rel="noopener noreferrer">1328A — Divisibility Problem</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1328A](https://codeforces.com/contest/1328/problem/A) |

## Topics
`math`

---

## Problem Statement

<div class="header"><div class="title">A. Divisibility Problem</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given two positive integers $$$a$$$ and $$$b$$$. In one move you can increase $$$a$$$ by $$$1$$$ (replace $$$a$$$ with $$$a+1$$$). Your task is to find the minimum number of moves you need to do in order to make $$$a$$$ divisible by $$$b$$$. It is possible, that you have to make $$$0$$$ moves, as $$$a$$$ is already divisible by $$$b$$$. You have to answer $$$t$$$ independent test cases.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains one integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of test cases. Then $$$t$$$ test cases follow.</p><p>The only line of the test case contains two integers $$$a$$$ and $$$b$$$ ($$$1 \le a, b \le 10^9$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case print the answer — the minimum number of moves you need to do in order to make $$$a$$$ divisible by $$$b$$$.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00671221617772833" id="id0017218616935007458" class="input-output-copier">Copy</div></div><pre id="id00671221617772833">5
10 4
13 9
100 13
123 456
92 46
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008432137326603446" id="id009568269543116517" class="input-output-copier">Copy</div></div><pre id="id008432137326603446">2
5
4
333
0
</pre></div></div></div>