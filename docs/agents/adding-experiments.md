# Adding experiments

The end-to-end workflow when a lab experiment is added or changed: source program, sample input, README lab card, index, every count that claims "28", the PDF, and the ship step. Work the steps in order; each ends on a checkable completion criterion.

## Steps

### 1. Write the source

Create `experiments/NN-<slug>.c` — `NN` is the next zero-padded number, `<slug>` is the kebab-case version of the experiment title (matches existing files like `03-area-and-circumference-of-a-circle.c`).

Sources are the **runnable** artifacts: modern GCC style — `int main()` ending in `return 0;`, no Turbo-C-isms (`conio.h` / `clrscr()` / `getch()` stay out of sources). CI adds `-lm` automatically when a source uses `sqrt`.

**Done when:** `gcc -w -o prog experiments/NN-<slug>.c` (plus `-lm` for math.h) compiles with zero errors, and the program runs and produces the output you are about to document.

### 2. Add the sample input

If the program reads stdin, create `experiments/inputs/NN-<slug>.txt` with the sample input. CI pipes this file into the run and prints it in the build log. No input file means the program documents as needing no input.

**Done when:** running the program with this input file produces exactly the output used in step 3's console block.

### 3. README lab card

Append one section at the bottom of the experiments, following the lab-card template below. The `### Experiment N: <Title>` heading defines the anchor — index and navigation links must use its exact GitHub slug.

**Done when:** the section matches the template, the console block is faithful output (copy from a real run, Turbo-C quirks included), and the previous experiment's footer link points here.

### 4. Index row

Add a row to the matching concept-group table (see **Concept groups**): experiment number → linked title → concept chips. A genuinely new topic earns a new `####` group with the next accent in the rotation.

**Done when:** every experiment on the page appears in exactly one group, and every index link resolves.

### 5. Update every count

The number of experiments is claimed in several places; find them all and make them agree:

- Top badges row: `Experiments-28` shield
- Banner: the `28 Experiments` chip text **and** the SVG's `aria-label`
- Hero stats: the `28/28 compile clean` and `37 core concepts` badges (concept count only when new chips introduce a concept)
- "What you'll learn" table: new skill row or experiment references
- Title, mission line, and About table
- The last experiment's finisher line ("That's all 28 🎉") moves to the new last experiment

**Done when:** a search for the old count finds no stale claim.

### 6. PDF

`C_Lab_Record.pdf` is regenerated **out-of-band** — no generator script is committed to this repo. Rebuild it so it covers all experiments, using whatever tooling produced the current edition.

**Done when:** the PDF includes the new experiments and the README's PDF badges/About claims stay accurate. If the tooling isn't available, open a GitHub issue instead of leaving the PDF stale silently.

### 7. Ship

Commit and push to `main`. The Lab Build workflow compiles and runs every `experiments/*.c` with the sample inputs.

**Done when:** CI passes `N/N` — a red build means a source or input regression, fix before anything else.

## Reference

### Lab-card template

```markdown
### Experiment N: <Title>

> 🎯 **AIM:** To <one precise sentence>.
>
> 😄 *<playful one-liner> <emoji>*

<p align="left"><sub>🧠 `<chip>` · `<chip>`</sub></p>

```c
<source code>
```

<details>
<summary>💻 <b>Run it</b> — sample session</summary>

```console
$ gcc NN-<slug>.c -o prog && ./prog
<prompt line with input echoed at the end>
<output lines, exactly as the program prints them>
```

<sub>📝 <optional note for Turbo-C quirks or fun facts></sub>

</details>

<p align="center"><sub>🗂️ <a href="#-index">⬆ back to index</a> &nbsp;•&nbsp; <a href="#experiment-<n+1>-<next-slug>">next: experiment <n+1> ➜</a></sub></p>
```

The last experiment's footer replaces the next-link with the finisher: `🎉 <b>That's all N — you finished the record!</b>`

### Code style rule — record vs source

The README's ```c blocks for the original 28 intentionally keep the handwritten record's Turbo-C code (`conio.h`, `void main()`, `clrscr()`/`getch()`) — the README is the faithful digitized record. The `experiments/*.c` sources are the modern GCC-runnable equivalents CI compiles. This divergence is deliberate and explained by the README's "Running on modern GCC?" note — leave it in place.

New experiments have no handwritten record: their README ```c block mirrors the source file exactly. The source is the single source of truth.

### Concept groups

Six groups, in page order: 🔵 Basics & Formulas · 🟣 Operators & Swaps · 🟠 Conditionals · 🟡 Switch & Menus · 🟢 Loops & Patterns · 🔴 Arrays & Matrices. Headers rotate these accents; a new group takes the next color in that rotation.

### Anchors

The heading text is the anchor's source of truth: lowercase, punctuation stripped (each stripped symbol can leave a double hyphen where the spaces around it were — e.g. "Check a > b" → `experiment-8-check-a--b-using-the-conditional-operator`), spaces become single hyphens. After editing a title, re-derive the slug and update every link to it (index row, previous experiment's next-link).

### Faithful output

Console blocks show what the program actually prints — prompts with the typed input echoed at the line's end, real output, real quirks (`1 bytes` for char, tab-indented matrix rows, `1`/`0` for booleans). A console block that can't be reproduced by running the program is a bug: run it and copy.
