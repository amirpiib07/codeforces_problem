<h2><a href="https://codeforces.com/contest/546/problem/A" target="_blank" rel="noopener noreferrer">546A — Soldier and Bananas</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 546A](https://codeforces.com/contest/546/problem/A) |

## Topics
`brute force` `implementation` `math`

---

## Problem Statement

<div class="header"><div class="title">A. Soldier and Bananas</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>A soldier wants to buy <span class="tex-span"><i>w</i></span> bananas in the shop. He has to pay <span class="tex-span"><i>k</i></span> dollars for the first banana, <span class="tex-span">2<i>k</i></span> dollars for the second one and so on (in other words, he has to pay <span class="tex-span"><i>i</i>·<i>k</i></span> dollars for the <span class="tex-span"><i>i</i></span>-th banana). </p><p>He has <span class="tex-span"><i>n</i></span> dollars. How many dollars does he have to borrow from his friend soldier to buy <span class="tex-span"><i>w</i></span> bananas?</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains three positive integers <span class="tex-span"><i>k</i>, <i>n</i>, <i>w</i></span> (<span class="tex-span">1  ≤  <i>k</i>, <i>w</i>  ≤  1000</span>, <span class="tex-span">0 ≤ <i>n</i> ≤ 10<sup class="upper-index">9</sup></span>), the cost of the first banana, initial number of dollars the soldier has and number of bananas he wants. </p></div><div class="output-specification"><div class="section-title">Output</div><p>Output one integer — the amount of dollars that the soldier must borrow from his friend. If he doesn't have to borrow money, output <span class="tex-span">0</span>.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0049372401406976096" id="id008128021296509979" class="input-output-copier">Copy</div></div><pre id="id0049372401406976096">3 17 4<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id004788508120720377" id="id002578426667994812" class="input-output-copier">Copy</div></div><pre id="id004788508120720377">13</pre></div></div></div>