<h2><a href="https://codeforces.com/contest/1760/problem/A" target="_blank" rel="noopener noreferrer">1760A — Medium Number</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1760A](https://codeforces.com/contest/1760/problem/A) |

## Topics
`implementation` `sortings`

---

## Problem Statement

<div class="header"><div class="title">A. Medium Number</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Given three <span class="tex-font-style-bf">distinct</span> integers $$$a$$$, $$$b$$$, and $$$c$$$, find the medium number between all of them.</p><p>The medium number is the number that is neither the minimum nor the maximum of the given three numbers. </p><p>For example, the median of $$$5,2,6$$$ is $$$5$$$, since the minimum is $$$2$$$ and the maximum is $$$6$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \leq t \leq 6840$$$) — the number of test cases.</p><p>The description of each test case consists of three <span class="tex-font-style-bf">distinct</span> integers $$$a$$$, $$$b$$$, $$$c$$$ ($$$1 \leq a, b, c \leq 20$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output a single integer — the medium number of the three numbers.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0012644357304242504" id="id00448631237579752" class="input-output-copier">Copy</div></div><pre id="id0012644357304242504"><div class="test-example-line test-example-line-even test-example-line-0">9</div><div class="test-example-line test-example-line-odd test-example-line-1">5 2 6</div><div class="test-example-line test-example-line-even test-example-line-2">14 3 4</div><div class="test-example-line test-example-line-odd test-example-line-3">20 2 1</div><div class="test-example-line test-example-line-even test-example-line-4">1 2 3</div><div class="test-example-line test-example-line-odd test-example-line-5">11 19 12</div><div class="test-example-line test-example-line-even test-example-line-6">10 8 20</div><div class="test-example-line test-example-line-odd test-example-line-7">6 20 3</div><div class="test-example-line test-example-line-even test-example-line-8">4 1 3</div><div class="test-example-line test-example-line-odd test-example-line-9">19 8 4</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008710320963777057" id="id0008380650508393905" class="input-output-copier">Copy</div></div><pre id="id008710320963777057">5
4
2
2
12
10
6
3
8
</pre></div></div></div>