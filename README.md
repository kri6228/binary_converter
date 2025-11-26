<h1 align="center">🔢 Binary Converter</h1>

<p align="center">
  <em>A high-performance number converter built using C++ → WebAssembly (WASM)</em>
</p>

<p align="center">
  <a href="https://kri6228.github.io/binary_converter/"><strong>🌐 Live Demo</strong></a>
  •
  <a href="https://github.com/kri6228/binary_converter"><strong>📦 Source Code</strong></a>
</p>

<p align="center">
  <img src="https://img.shields.io/badge/C%2B%2B-17-blue?style=for-the-badge" />
  <img src="https://img.shields.io/badge/WebAssembly-WASM-purple?style=for-the-badge" />
  <img src="https://img.shields.io/badge/Emscripten-Build-orange?style=for-the-badge" />
  <img src="https://img.shields.io/badge/Status-Active-brightgreen?style=for-the-badge" />
</p>

<hr/>

<h2>📸 Preview</h2>

<p align="center">
  <!-- Replace with your screenshot -->
  <img src="https://via.placeholder.com/800x400?text=Binary+Converter+Preview" width="80%" style="border-radius: 10px;" />
</p>

<hr/>

<h2>🌟 Overview</h2>

<p>
Binary Converter is a fast and lightweight web tool that converts decimal numbers into their binary equivalent.
The conversion logic is fully implemented in <strong>C++</strong> and compiled into <strong>WebAssembly (WASM)</strong> for high performance directly inside the browser.
</p>

<p>
This project demonstrates:
<ul>
  <li>✔ How to compile C++ to WASM using Emscripten</li>
  <li>✔ How JavaScript interacts with WASM modules</li>
  <li>✔ How to deploy WASM apps using GitHub Pages</li>
</ul>
</p>

<hr/>

<h2>🚀 Features</h2>

<table>
  <tr>
    <td>⚡ Ultra-fast Conversion (C++ performance)</td>
    <td>🧠 Accurate & Reliable Logic</td>
  </tr>
  <tr>
    <td>🌐 Fully Browser-based (no backend)</td>
    <td>📦 Clean & Simple UI</td>
  </tr>
  <tr>
    <td>🔗 WebAssembly Integration</td>
    <td>📁 Compact Project Structure</td>
  </tr>
</table>

<hr/>

<h2>🛠️ Tech Stack</h2>

<ul>
  <li><strong>C++</strong> – Core logic</li>
  <li><strong>Emscripten</strong> – C++ → WASM Compiler</li>
  <li><strong>JavaScript (cwrap)</strong> – WASM bridge</li>
  <li><strong>HTML + CSS</strong> – UI</li>
  <li><strong>GitHub Pages</strong> – Hosting</li>
</ul>

<hr/>

<h2>📂 Project Structure</h2>

```plaintext
📦 binary_converter
│
├── index.html        # UI Layout
├── style.css         # Page styling
├── script.js         # JS & WASM Interface
│
├── main.cpp          # C++ conversion logic
├── a.out.js          # Generated JS glue code
└── a.out.wasm        # WebAssembly module
```
<hr/> 
<h2>⚙️ How to Build (Compile Again)</h2> <ol> <li>Install and activate Emscripten SDK</li> <li>Compile C++ to WASM using:</li> </ol>
emcc main.cpp -o a.out.js -s EXPORTED_RUNTIME_METHODS=['cwrap'] -s WASM=1
<p>This outputs:</p> 
<ul> <li><code>a.out.js</code></li> <li><code>a.out.wasm</code></li> </ul> 
<p>Include both in your HTML for WASM loading.</p>
<hr/>
<h2>🌐 Live Demo</h2>
<p>👉 <a href="https://kri6228.github.io/binary_converter/"><strong>https://kri6228.github.io/binary_converter/</strong></a> </p> 
<hr/> 
<h2>🤝 Contributing</h2> <p> Want to improve this tool? Fork the repo, open a PR, or raise an issue! </p>
<hr/>
<h2>📜 License</h2>
<p>This project is open-source under the MIT License.</p> <hr/>
<h2 align="center">⭐ If you like this project, don't forget to star the repo!</h2> 
