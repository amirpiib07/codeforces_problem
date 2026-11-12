<h2><a href="https://codeforces.com/contest/2290/problem/D" target="_blank" rel="noopener noreferrer">2290D — Letters Down</a></h2>

| | |
|---|---|
| **Difficulty** | Unrated |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2290D](https://codeforces.com/contest/2290/problem/D) |

## Topics
_No tags available_

---

## Problem Statement

<div class="header"><div class="title">D. Letters Down</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p> </p><p>You are given a string $$$s$$$ of length $$$n$$$ consisting of lowercase Latin letters.</p><p>In one operation, you choose a lowercase Latin letter $$$x$$$ other than <span class="tex-font-style-tt">a</span> and replace <span class="tex-font-style-bf">all</span> occurrences of $$$x$$$ in $$$s$$$ (not just one) with the previous letter of the alphabet. For example, if $$$s = \texttt{bcab}$$$, an operation with $$$x = \texttt{c}$$$ turns it into <span class="tex-font-style-tt">bbab</span>, and a subsequent operation with $$$x = \texttt{b}$$$ replaces all three letters <span class="tex-font-style-tt">b</span> and turns it into <span class="tex-font-style-tt">aaaa</span>. If $$$x$$$ does not occur in $$$s$$$, the operation does not change $$$s$$$.</p><p>Find the minimum number of operations needed to make $$$s$$$ a palindrome. A palindrome is a string that reads the same from left to right and from right to left.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 10^4$$$). The description of the test cases follows.</p><p>The first line of each test case contains a single integer $$$n$$$ ($$$1 \le n \le 2\cdot 10^5$$$) — the length of the string.</p><p>The second line of each test case contains the string $$$s$$$ of length $$$n$$$ consisting of lowercase Latin letters.</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$2\cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print a single integer — the minimum number of operations needed to make $$$s$$$ a palindrome.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008437719365074313" id="id006154153500162473" class="input-output-copier">Copy</div></div><pre data-content="5
4
abca
4
abdc
7
racecar
4
cbad
4
zaza
" id="id008437719365074313"><div class="test-example-line test-example-line-even test-example-line-0">5</div><div class="test-example-line test-example-line-odd test-example-line-1">4</div><div class="test-example-line test-example-line-odd test-example-line-1">abca</div><div class="test-example-line test-example-line-even test-example-line-2">4</div><div class="test-example-line test-example-line-even test-example-line-2">abdc</div><div class="test-example-line test-example-line-odd test-example-line-3">7</div><div class="test-example-line test-example-line-odd test-example-line-3">racecar</div><div class="test-example-line test-example-line-even test-example-line-4">4</div><div class="test-example-line test-example-line-even test-example-line-4">cbad</div><div class="test-example-line test-example-line-odd test-example-line-5">4</div><div class="test-example-line test-example-line-odd test-example-line-5">zaza</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007570762114538179" id="id004653372205281491" class="input-output-copier">Copy</div></div><pre data-content="1
3
0
2
25
" id="id007570762114538179"><div class="test-example-line test-example-line-odd test-example-line-1">1</div><div class="test-example-line test-example-line-even test-example-line-2">3</div><div class="test-example-line test-example-line-odd test-example-line-3">0</div><div class="test-example-line test-example-line-even test-example-line-4">2</div><div class="test-example-line test-example-line-odd test-example-line-5">25</div></pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, one operation with $$$x = \texttt{c}$$$ turns <span class="tex-font-style-tt">abca</span> into the palindrome <span class="tex-font-style-tt">abba</span>.</p><p>In the second test case, you can perform operations with $$$x = \texttt{d}$$$, $$$x = \texttt{c}$$$, and $$$x = \texttt{b}$$$: <span class="tex-font-style-tt">abdc</span> $$$\to$$$ <span class="tex-font-style-tt">abcc</span> $$$\to$$$ <span class="tex-font-style-tt">abbb</span> $$$\to$$$ <span class="tex-font-style-tt">aaaa</span>. The second operation changes both letters <span class="tex-font-style-tt">c</span>, and the third operation changes all three letters <span class="tex-font-style-tt">b</span>.</p><p>In the third test case, the string is already a palindrome.</p><p>In the fourth test case, you can perform operations with $$$x = \texttt{d}$$$ and $$$x = \texttt{b}$$$: <span class="tex-font-style-tt">cbad</span> $$$\to$$$ <span class="tex-font-style-tt">cbac</span> $$$\to$$$ <span class="tex-font-style-tt">caac</span>.</p><p>In the fifth test case, the operations with $$$x = \texttt{z}, \texttt{y}, \ldots, \texttt{b}$$$ in this order turn <span class="tex-font-style-tt">zaza</span> into <span class="tex-font-style-tt">aaaa</span>.</p></div>