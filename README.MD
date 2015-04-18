# Scratch C Files Repo

"Scratch" as in "throw-away" or "investigative".  
For interesting, tiny programs which demonstrate a point, it's usually useful
to post them as a gist.  
Gists are hard to search.  
Git repos are hard-ish to just "quickly post to" (compared to gists). Oh well.

Filename may slightly hint at what I was trying out at the time.

One of my favourite C lines here is:

```C
(union {int i; float f;}) { .i = 4 }.f;
```

Most of the files relate to arrays, VLAs, variadic functions, designated
initializers, compound literals, function pointers.
