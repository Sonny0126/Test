# yFlowGen
Flow chart (gml or dot+svg file format) is automatically generated by inputting C language (C, C ++) source file to yFlowGen.exe.  
In addition to the execution method at the command prompt, a method to execute it with the GUI is also available separately.  

## Example : For GML files  
Execute the following command at the windows command prompt. In the example, specify sample.c as the source file.
```
yFlowGen.exe -f sample.c  
```
![Sample](http://toowaki.web.fc2.com/picture/yflow_img_for_github.png "")

## Example : For DOT + SVG files 
Execute the following command at the windows command prompt. In the example, specify sample.c as the source file.
```
yFlowGen.exe -f sample.c -format dot 
```
##	How to run yFlowGen.exe
- 1)	Please open a Windows command prompt.
- 2)	Please execute yFlowGen.exe by specifying the source code after "-f" option.
- 3)	Results are outputted in the flow_file below the result_yFlowGen folder.
- 4)	The log is output to log_yFlowGen.txt.
The following arguments can be specified when executing.
```
yFlowGen.exe -f <filePath> -no_compact -no_comment -out1file -color -debug -out_group_comment
or
yFlowGen.exe -d <dirPath> -no_compact -no_comment -out1file -color -debug -out_group_comment

-f <filePath> : Path of file to analyze.(It can be omitted if -d is described)
-d <dirPath>  : Path of folder containing source files. (It can be omitted if -f is described)
-format <format> : Entering "-format dot" generates DOT and SVG files. (If omitted, GML files are generated.)
-out1file     : Output 1 GML file per 1 source file. (Optional)
-no_compact   : Turn off the setting to make the processing block size as small as possible. (Optional)
-no_comment   : Do not display comments on flowchart. (Optional)
-no_color     : Do not color the block. (Optional)
-no_dec       : Do not display blocks with declarations only. (Optional)
-out_group_comment : Place comments outside the group.(Optional)
-no_disp_struct : Do not display struct and union. (Optional)
-no_reset     : Do not delete result folder when script start.(Optional)
-true_false   : Describe the judgment of if/else_if with True/False (described as Yes/No when not set)
-no_connection_point : No additional connection points (add connection points if not set)
```
