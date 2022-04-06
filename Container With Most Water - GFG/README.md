# Container With Most Water
## Medium 
<div class="problem-statement">
                <p><a onclick="gtagHelperFunction('clickopen','salesevent_gsc_problemspage_promobanner')" href="https://practice.geeksforgeeks.org/summer-carnival-2022?utm_source=practiceproblems&amp;utm_medium=problemspromobanner&amp;utm_campaign=gsc22" target="_blank"></a></p><div style="margin: 14px 0px !important;" class="row"><a onclick="gtagHelperFunction('clickopen','salesevent_gsc_problemspage_promobanner')" href="https://practice.geeksforgeeks.org/summer-carnival-2022?utm_source=practiceproblems&amp;utm_medium=problemspromobanner&amp;utm_campaign=gsc22" target="_blank">             <div class="col-md-12" style="cursor:pointer;background: #EFF8F3 0% 0% no-repeat padding-box; display: flex; align-items: center; position:                 relative; padding: 1.5%; border-radius: 10px; display: inline-block; text-align: center; font-weight: 600; color: #333"> <img src="https://media.geeksforgeeks.org/img-practice/gcs2022thumbnail-1649059370.png" alt="Lamp" width="46" height="40" style="background: transparent 0% 0% no-repeat padding-box;opacity: 1; margin: 0 16px;" class="img-responsive"> Geeks Summer Carnival is LIVE NOW &nbsp; <i class="fa fa-external-link" aria-hidden="true"></i> </div></a></div><p><span style="font-size:18px">Given <strong>N</strong> non-negative integers a<sub>1</sub>,a<sub>2</sub>,....a<sub>n</sub>&nbsp;where each represents a point at coordinate (i, a<sub>i</sub>).&nbsp;<strong>N </strong>vertical lines are drawn such that the two endpoints of line<strong> i </strong>is at&nbsp;(i, a<sub>i</sub>)&nbsp;and (i,0). Find two lines, which together with x-axis forms a container, such that it&nbsp;contains the most water. </span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 4
a[] = {1,5,4,3}
<strong>Output: </strong>6<strong>
Explanation: </strong>5 and 3 are distance 2 apart.
So the size of the base = 2. Height of
container = min(5, 3) = 3. So total area
= 3 * 2 = 6.</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 5
a[] = {3,1,2,4,5}
<strong>Output: </strong>12<strong>
Explanation: </strong>5 and 3 are distance 4 apart.
So the size of the base = 4. Height of
container = min(5, 3) = 3. So total area
= 4 * 3 = 12.</span></pre>

<p><span style="font-size:18px"><strong>Your Task :</strong><br>
You only need to<strong> </strong>implement the given function<strong> maxArea</strong></span><span style="font-size:18px">. Do not read input, instead use the arguments given in the function and return the desired output.&nbsp;</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(N).<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(1).</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
2&lt;=N&lt;=10<sup>5</sup><br>
1&lt;=A[i]&lt;=100</span></p>
 <p></p>
            </div>