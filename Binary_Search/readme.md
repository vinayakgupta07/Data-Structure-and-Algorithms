# Binary Search

Binary Search is an efficient searching algorithm used to find the position of a target element in a **sorted array**.

---

## 🧠 Concept
Binary Search works by repeatedly dividing the search space in half:
- Compare the middle element with the target
- If equal → element found
- If target is smaller → search left half
- If target is larger → search right half

---

## 📌 Preconditions
- The array **must be sorted**
- Random access to elements is required

---

## ⏱️ Time & Space Complexity
| Case | Time Complexity |
|----|----------------|
| Best | O(1) |
| Average | O(log n) |
| Worst | O(log n) |

**Space Complexity:** O(1) (Iterative approach)

---

## ⚙️ Algorithm Steps
1. Set `low = 0` and `high = n - 1`
2. While `low <= high`:
   - Calculate `mid = (low + high) / 2`
   - If `arr[mid] == key` → return index
   - If `arr[mid] < key` → `low = mid + 1`
   - Else → `high = mid - 1`
3. If element is not found, return `-1`

---

## 💻 Implementation
Language used: **C++**
