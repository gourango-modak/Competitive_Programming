# Competitive_Programming

### C++ Single File Compile In Sublime Text


```

{
	"cmd" : ["g++ -std=c++17 $file_name -o $file_base_name && timeout 4s ./$file_base_name"],
	"selector" : "source.c++",
	"shell" : true,
	"working_dir" : "$file_path",
}

```

### C++ Multiple File Compile In Sublime Text

```

{
    "cmd" : ["g++ -std=c++17 *.cpp  -o $file_base_name && ./$file_base_name"],
    "selector" : "source.c++",
    "shell":true,
    "working_dir" : "$file_path",
}


```