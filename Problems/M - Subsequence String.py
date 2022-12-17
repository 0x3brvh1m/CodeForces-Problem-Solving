def find_hello(s):
  # initialize the "hello" string to match
  hello = "hello"

  # initialize the index in the "hello" string to 0
  hello_index = 0

  # iterate over each character in the given string
  for c in s:
    # if the current character matches the next character in the "hello" string
    if c == hello[hello_index]:
      # increment the index in the "hello" string
      hello_index += 1

    # if we have matched all characters in the "hello" string, return "YES"
    if hello_index == len(hello):
      return "YES"

  # if we reach here, it means we did not find a subsequence equal to "hello"
  # so return "NO"
  return "NO"

# read the input string
s = input()

# find if there exists a subsequence in s that is equal to "hello"
result = find_hello(s)

# print the result
print(result)
