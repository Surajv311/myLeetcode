<h2>26. Remove Duplicates from Sorted Array</h2><h3>Easy</h3><hr><div><p>Given a sorted array <em>nums</em>, remove the duplicates <a href="https://en.wikipedia.org/wiki/In-place_algorithm" target="_blank"><strong>in-place</strong></a> such that each element appears only <em>once</em> and returns the new length.</p>

<p>Do not allocate extra space for another array, you must do this by <strong>modifying the input array <a href="https://en.wikipedia.org/wiki/In-place_algorithm" target="_blank">in-place</a></strong> with O(1) extra memory.</p>

<p><strong>Clarification:</strong></p>

<p>Confused why the returned value is an integer but your answer is an array?</p>

<p>Note that the input array is passed in by <strong>reference</strong>, which means a modification to the input array will be known to the caller as well.</p>

<p>Internally you can think of this:</p>

<pre>// <strong>nums</strong> is passed in by reference. (i.e., without making a copy)
int len = removeDuplicates(nums);

// any modification to <strong>nums</strong> in your function would be known by the caller.
// using the length returned by your function, it prints the first <strong>len</strong> elements.
for (int i = 0; i &lt; len; i++) {
    print(nums[i]);
}
</pre>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> nums = [1,1,2]
<strong>Output:</strong> 2, nums = [1,2]
<strong>Explanation:</strong>&nbsp;Your function should return length = <strong><code>2</code></strong>, with the first two elements of <em><code>nums</code></em> being <strong><code>1</code></strong> and <strong><code>2</code></strong> respectively. It doesn't matter what you leave beyond the returned length.
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> nums = [0,0,1,1,1,2,2,3,3,4]
<strong>Output:</strong> 5, nums = [0,1,2,3,4]
<strong>Explanation:</strong>&nbsp;Your function should return length = <strong><code>5</code></strong>, with the first five elements of <em><code>nums</code></em> being modified to&nbsp;<strong><code>0</code></strong>, <strong><code>1</code></strong>, <strong><code>2</code></strong>, <strong><code>3</code></strong>, and&nbsp;<strong><code>4</code></strong> respectively. It doesn't matter what values are set beyond&nbsp;the returned length.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>0 &lt;= nums.length &lt;= 3 * 10<sup>4</sup></code></li>
	<li><code>-10<sup>4</sup> &lt;= nums[i] &lt;= 10<sup>4</sup></code></li>
	<li><code>nums</code>&nbsp;is sorted in ascending order.</li>
</ul>
</div>