<h2><a href="https://codeforces.com/contest/1791/problem/A" target="_blank" rel="noopener noreferrer">1791A — Codeforces Checking</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1791A](https://codeforces.com/contest/1791/problem/A) |

## Topics
`implementation` `strings`

---

## Problem Statement

<div class="header"><div class="title">A. Codeforces Checking</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Given a lowercase Latin character (letter), check if it appears in the string $$$\texttt{codeforces}$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains an integer $$$t$$$ ($$$1 \leq t \leq 26$$$) — the number of test cases.</p><p>The only line of each test case contains a character $$$c$$$ — a single lowercase Latin character (letter).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output "<span class="tex-font-style-tt">YES</span>" (without quotes) if $$$c$$$ satisfies the condition, and "<span class="tex-font-style-tt">NO</span>" (without quotes) otherwise.</p><p>You can output the answer in any case (for example, the strings "<span class="tex-font-style-tt">yEs</span>", "<span class="tex-font-style-tt">yes</span>", "<span class="tex-font-style-tt">Yes</span>" and "<span class="tex-font-style-tt">YES</span>" will be recognized as a positive answer).</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00835280118411525" id="id005184776033627408" class="input-output-copier">Copy</div></div><pre id="id00835280118411525"><div class="test-example-line test-example-line-even test-example-line-0">10</div><div class="test-example-line test-example-line-odd test-example-line-1">a</div><div class="test-example-line test-example-line-even test-example-line-2">b</div><div class="test-example-line test-example-line-odd test-example-line-3">c</div><div class="test-example-line test-example-line-even test-example-line-4">d</div><div class="test-example-line test-example-line-odd test-example-line-5">e</div><div class="test-example-line test-example-line-even test-example-line-6">f</div><div class="test-example-line test-example-line-odd test-example-line-7">g</div><div class="test-example-line test-example-line-even test-example-line-8">h</div><div class="test-example-line test-example-line-odd test-example-line-9">i</div><div class="test-example-line test-example-line-even test-example-line-10">j</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id002058117896076197" id="id009726808866410315" class="input-output-copier">Copy</div></div><pre id="id002058117896076197">NO
NO
YES
YES
YES
YES
NO
NO
NO
NO
</pre></div></div></div>