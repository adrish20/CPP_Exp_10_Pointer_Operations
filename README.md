<h1>Aim</h1>
<p>To study and implement C++ pointer operations(call by value and call by refernce).</p>
<hr>
<h1>Theory</h1>
<p>In C++, call by value passes a copy of the actual argument to a function, meaning changes made inside the function do not affect the original variable. In contrast, call by reference passes the argument's reference (address) to the function, allowing modifications within the function to directly alter the original variable. This distinction is crucial for controlling how data is manipulated within functions.</p>
<hr>
<h1>Algorithms</h1>
<h2>Call by Value</h2>
<ol>
  <li>Start.</li>
  <li>Declare and initialise two variables <code>a = 10</code> and <code>b = 20</code>.</li>
  <li>Declare a integer variable <code>temp</code> to temporarily hold a value.</li>
  <li>Swap values
  <ul>
    <li>Assign value of <code>a</code> to <code>temp</code>.</li>
    <li>Assign value of <code>b</code> to <code>a</code>.</li>
    <li>Assign value stored in <code>temp</code> to <code>b</code>.</li>
  </ul>
  </li>
  <li>Print the value of <code>a</code> and <code>b</code>.</li>
  <li>End.</li>
</ol>
<br>
<h2>Call by Reference</h2>
<ol>
  <li>Start.</li>
  <li>Define a <code>swap</code> function that takes two inetegr pointer <code>x</code> and <code>y</code> as parameters.</li>
  <li>Swap values inside function
  <ul>
    <li>Declare a temporary integer variable <code>temp</code>.</li>
    <li>Assign the value pointed to by <code>x</code> to <code>temp</code>.</li>
    <li>Assign the value pointed to by <code>y</code> to <code>x</code>.</li>
    <li>Assign the value stored in <code>temp</code> to <code>y</code>.</li>
  </ul>
  </li>
  <li>Declare and intialise two integer variables <code>a=10</code> and <code>b=20</code> in the main function.</li>
  <li>Call the <code>swap</code> function, pass the addresses of <code>a</code> and <code>b</code> as arguments using <code>&a</code> and <code>&b</code>.</li>
  <li>Print the value of <code>a</code> and <code>b</code>.</li>
  <li>End.</li>
</ol>
<hr>
<h1>Conclusion</h1>
<p>The experiment on C++ pointer operations demonstrated key concepts like call by value and call by reference. It highlighted how pointers manage memory and function parameters, enhancing our understanding of efficient data manipulation and program optimization.</p>
