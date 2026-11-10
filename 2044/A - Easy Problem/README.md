<h2><a href="https://codeforces.com/contest/2044/problem/A" target="_blank" rel="noopener noreferrer">2044A — Easy Problem</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2044A](https://codeforces.com/contest/2044/problem/A) |

## Topics
`brute force` `math`

---

## Problem Statement

<div class="header"><div class="title">A. Easy Problem</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Cube is given an integer $$$n$$$. She wants to know how many ordered pairs of positive integers $$$(a,b)$$$ there are such that $$$a=n-b$$$. Since Cube is not very good at math, please help her!</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains an integer $$$t$$$ ($$$1 \leq t \leq 99$$$) — the number of test cases.</p><p>The only line of each test case contains an integer $$$n$$$ ($$$2 \leq n \leq 100$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output the number of ordered pairs $$$(a, b)$$$ on a new line.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005046026262030716" id="id005153220549826945" class="input-output-copier">Copy</div></div><pre id="id005046026262030716"><div class="test-example-line test-example-line-even test-example-line-0">3</div><div class="test-example-line test-example-line-odd test-example-line-1">2</div><div class="test-example-line test-example-line-even test-example-line-2">4</div><div class="test-example-line test-example-line-odd test-example-line-3">6</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id003835897322079801" id="id006437845409908198" class="input-output-copier">Copy</div></div><pre id="id003835897322079801">1
3
5
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, the only ordered pair that works is $$$(a,b)=(1,1)$$$. </p><p>In the second test case, the three ordered pairs of $$$(a,b)$$$ that work are $$$(3,1), (2,2), (1,3)$$$.</p></div>