cmake_minimum_required(VERSION 3.5)
project(FlexibleComputerLanguage)

set(CMAKE_CXX_STANDARD 11)
SET(CMAKE_CXX_FLAGS -pthread)

include_directories(Core)
include_directories(Core/TestCases)
include_directories(FlexibleComputerLanguage)



add_executable(FlexibleComputerLanguage1
        Core/TestCases/TestCaseBase.cpp
        Core/TestCases/TestCaseBase.h
        Core/TestCases/TestCaseExecuter.cpp
        Core/TestCases/TestCaseExecuter.h
        Core/TestCases/TestCaseIncludes.h
        Core/TestCases/TestCompound1.cpp
        Core/TestCases/TestCompound1.h
        Core/TestCases/TestCustomStrFilterShorthand.cpp
        Core/TestCases/TestCustomStrFilterShorthand.h
        Core/TestCases/TestFilterSubtree.cpp
        Core/TestCases/TestFilterSubtree.h
        Core/TestCases/TestListFilter.cpp
        Core/TestCases/TestListFilter.h
        Core/TestCases/TestListGroupBy.cpp
        Core/TestCases/TestListGroupBy.h
        Core/TestCases/TestListInnerCount.cpp
        Core/TestCases/TestListInnerCount.h
        Core/TestCases/TestListInnerCountWithScript.cpp
        Core/TestCases/TestListInnerCountWithScript.h
        Core/TestCases/TestListSeek.h
        Core/TestCases/TestListSeek.cpp
        Core/TestCases/TestLoadFromCodeLibrary.cpp
        Core/TestCases/TestLoadFromCodeLibrary.h
        Core/TestCases/TestStringEnclosure.cpp
        Core/TestCases/TestStringEnclosure.h
        Core/TestCases/TestTestCase.cpp
        Core/TestCases/TestTestCase.h
        Core/AdditionalFunctions.h
        Core/Bool.cpp
        Core/Bool.h
        Core/Command.cpp
        Core/Command.h
        Core/CommonIncludes.h
        Core/CPlusPlusEntry.cpp
        Core/CPlusPlusEntry.h
        Core/DefFileReader.cpp
        Core/DefFileReader.h
        Core/DateTimeOperations.cpp
        Core/DateTimeOperations.h
        Core/DateTime.h
        Core/Defs.h
        Core/Entity.h
        Core/EntityList.cpp
        Core/EntityList.h
        Core/ExecutionContext.h
        Core/ExecutionTemplate.cpp
        Core/ExecutionTemplate.h
        Core/ExecutionTemplateList.cpp
        Core/ExecutionTemplateList.h
        Core/Int.h
        Core/ISpecialCommand.h
        Core/MemMan.cpp
        Core/MemMan.h
        Core/MetaData.h
        Core/Node.cpp
        Core/Node.h
        Core/NodeCustomValueShorthand.cpp
        Core/NodeCustomValueShorthand.h
        Core/Null.h
        Core/ProcessLog.h
        Core/ScriptReader.cpp
        Core/ScriptReader.h
        Core/SpecialCommandExecuter.cpp
        Core/SpecialCommandExecuter.h
        Core/Strings.h
        Core/StringOperations.cpp
        Core/StringOperations.h
        Core/Tests.cpp
        Core/Tests.h
        Core/TypeDefs.h
        Core/Utils.cpp
        Core/Utils.h
        Core/Value.h
        FlexibleComputerLanguage/json.hpp
        FlexibleComputerLanguage/main.cpp
        FlexibleComputerLanguage/ResultGenerator.h
        FlexibleComputerLanguage/ResultGenerator.cpp
        FlexibleComputerLanguage/OTPParser.h
        FlexibleComputerLanguage/OTPParser.cpp
        FlexibleComputerLanguage/NamedPipeOperations.h
        FlexibleComputerLanguage/NamedPipeOperations.cpp
        FlexibleComputerLanguage/easylogging++.h
        FlexibleComputerLanguage/easylogging++.cc

        FlexibleComputerLanguage/Logger.h FlexibleComputerLanguage/LogJsonParser.cpp FlexibleComputerLanguage/LogJsonParser.h FlexibleComputerLanguage/QueryExecuter.cpp FlexibleComputerLanguage/QueryExecuter.h FlexibleComputerLanguage/QueryTreeScript.cpp FlexibleComputerLanguage/QueryTreeScript.h Core/Generator.cpp Core/Generator.h Core/TestCases/TestNewObjectGenerator.cpp Core/TestCases/TestNewObjectGenerator.h
        Core/TestCases/TestListConcat.cpp 
        Core/TestCases/TestListConcat.h
        Core/TestCases/TestListAddElem.cpp
        Core/TestCases/TestListAddElem.h 
        Core/TestCases/TestListGetPrefix.cpp 
        Core/TestCases/TestListGetPrefix.h
        Core/TestCases/TestListGetFirstElem.cpp
        Core/TestCases/TestListGetFirstElem.h
        Core/TestCases/TestListGetLastElem.cpp
        Core/TestCases/TestListGetLastElem.h Core/TestCases/TestListGetNthElem.cpp Core/TestCases/TestListGetNthElem.h Core/TestCases/TestListGetSuffix.cpp Core/TestCases/TestListGetSuffix.h Core/TestCases/TestListReverse.cpp Core/TestCases/TestListReverse.h  Core/TestCases/TestGetSublist.cpp Core/TestCases/TestGetSublist.h Core/TestCases/TestListSplit.cpp Core/TestCases/TestListSplit.h Core/TestCases/TestRemoveElement.cpp Core/TestCases/TestRemoveElement.h Core/TestCases/TestListRemoveFromEnd.cpp Core/TestCases/TestListRemoveFromEnd.h Core/TestCases/TestListSort.cpp Core/TestCases/TestListSort.h
        Core/TestCases/TestRemoveFromStart.cpp Core/TestCases/TestRemoveFromStart.h Core/TestCases/TestCommonJsonParser.cpp Core/TestCases/TestCommonJsonParser.h Core/TestCases/TestDateConvert.h Core/TestCases/TestDateConvert.cpp)


