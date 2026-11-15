<h2><a href="https://codeforces.com/contest/1722/problem/A" target="_blank" rel="noopener noreferrer">1722A — Spell Check</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1722A](https://codeforces.com/contest/1722/problem/A) |

## Topics
`implementation`

---

## Problem Statement

<div class="header"><div class="title">A. Spell Check</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Timur likes his name. As a spelling of his name, he allows any permutation of the letters of the name. For example, the following strings are valid spellings of his name: <span class="tex-font-style-tt">Timur</span>, <span class="tex-font-style-tt">miurT</span>, <span class="tex-font-style-tt">Trumi</span>, <span class="tex-font-style-tt">mriTu</span>. Note that the correct spelling must have uppercased <span class="tex-font-style-tt">T</span> and lowercased other letters.</p><p>Today he wrote string $$$s$$$ of length $$$n$$$ consisting only of uppercase or lowercase Latin letters. He asks you to check if $$$s$$$ is the correct spelling of his name.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains an integer $$$t$$$ ($$$1 \leq t \leq 10^3$$$) — the number of test cases.</p><p>The first line of each test case contains an integer $$$n$$$ $$$(1 \leq n \leq 10)$$$ — the length of string $$$s$$$.</p><p>The second line of each test case contains a string $$$s$$$ consisting of only uppercase or lowercase Latin characters.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output "<span class="tex-font-style-tt">YES</span>" (without quotes) if $$$s$$$ satisfies the condition, and "<span class="tex-font-style-tt">NO</span>" (without quotes) otherwise.</p><p>You can output the answer in any case (for example, the strings "<span class="tex-font-style-tt">yEs</span>", "<span class="tex-font-style-tt">yes</span>", "<span class="tex-font-style-tt">Yes</span>" and "<span class="tex-font-style-tt">YES</span>" will be recognized as a positive answer).</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id002709067015460054" id="id005836677082939301" class="input-output-copier">Copy</div></div><pre id="id002709067015460054"><div class="test-example-line test-example-line-even test-example-line-0">10</div><div class="test-example-line test-example-line-odd test-example-line-1">5</div><div class="test-example-line test-example-line-odd test-example-line-1">Timur</div><div class="test-example-line test-example-line-even test-example-line-2">5</div><div class="test-example-line test-example-line-even test-example-line-2">miurT</div><div class="test-example-line test-example-line-odd test-example-line-3">5</div><div class="test-example-line test-example-line-odd test-example-line-3">Trumi</div><div class="test-example-line test-example-line-even test-example-line-4">5</div><div class="test-example-line test-example-line-even test-example-line-4">mriTu</div><div class="test-example-line test-example-line-odd test-example-line-5">5</div><div class="test-example-line test-example-line-odd test-example-line-5">timur</div><div class="test-example-line test-example-line-even test-example-line-6">4</div><div class="test-example-line test-example-line-even test-example-line-6">Timr</div><div class="test-example-line test-example-line-odd test-example-line-7">6</div><div class="test-example-line test-example-line-odd test-example-line-7">Timuur</div><div class="test-example-line test-example-line-even test-example-line-8">10</div><div class="test-example-line test-example-line-even test-example-line-8">codeforces</div><div class="test-example-line test-example-line-odd test-example-line-9">10</div><div class="test-example-line test-example-line-odd test-example-line-9">TimurTimur</div><div class="test-example-line test-example-line-even test-example-line-10">5</div><div class="test-example-line test-example-line-even test-example-line-10">TIMUR</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009380709624072828" id="id007462092168357765" class="input-output-copier">Copy</div></div><pre id="id009380709624072828">YES
YES
YES
YES
NO
NO
NO
NO
NO
NO
</pre></div></div></div>