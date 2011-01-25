@ECHO OFF
REM *** YOUR CONFIGURATION ***
set BOOST_ROOT=G:\dev\boost\_svn\trunk
set BUILD_DIR="build"
REM ********************************

set OGC_TOOLS_DIR=%CD%
cd %BUILD_DIR%
cmake ^
    -DBOOST_ROOT=%BOOST_ROOT% ^
    %OGC_TOOLS_DIR%
cd %OGC_TOOLS_DIR%
