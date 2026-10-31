# Application icon

`app_icon.res` contains icon group 1 and its eight image resources, compiled
from the final `src/DOA1U.ico`. It is linked directly into the game and hidden
launcher check. The ICO is retained as an archival source, not a build input;
neither builds nor runtime need it present.

To regenerate with the Windows SDK Resource Compiler, create a temporary RC
containing `1 ICON "absolute/path/to/DOA1U.ico"`, then run:

```powershell
rc.exe /nologo /fo src/resources/app_icon.res path/to/temporary-icon.rc
```

Keep this resource separate from `app.rc`, which compiles launcher artwork.
