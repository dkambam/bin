### Overview
- Lists absolute paths for files recursively.
- Prints names with escaped spaces

[update] The following works
```
find . | awk '{gsub(" ","\\ ")}1'
```
constructed from
- [How can I list files with their absolute path in linux?][listing-all-files]
- [bash replace spaces in list.txt with \\][replace-spaces]

### Inspiration
wanted to open files by combining ls and pick [pick] as follows
````
file . | pick | xargs open
````
 But it did not work with folders with spaces in them.

### Complete working command
 ```
 find . | awk '{gsub(" ","\\ ")}1' | pick | xargs open
 ```



[pick]: https://github.com/thoughtbot/pick
[listing-all-files]: http://stackoverflow.com/questions/246215/how-can-i-list-files-with-their-absolute-path-in-linux
[replace-spaces]: file:///var/folders/pg/_93r4g9d5tx5sp23lswf91f40000gn/T/158.html