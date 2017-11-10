import subprocess

msg = "ProfGameDev"
args = ("../bin/hello", msg)
bad_result = 1;
good_result = 0;

resultPopen = subprocess.Popen(args)
resultPopen.wait()
returnCode = resultPopen.returncode

if returnCode == bad_result:
    print("Test Fail")
elif returnCode == good_result:
    print("Test Success")