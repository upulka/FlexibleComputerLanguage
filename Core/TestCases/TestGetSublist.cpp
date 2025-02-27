//
// Created by Tharindu Balasooriya on 1/28/2022.
//

#include "TestGetSublist.h"
#include "DefFileReader.h"
#include "ScriptReader.h"
#include "MetaData.h"
#include "ExecutionContext.h"
#include "MemMan.h"
#include "EntityList.h"
#include "Int.h"
#include "Node.h"

TestCaseExecutionResult TestGetSublist::Execute(TestCaseArgument *arg) {
    int id = 0;
    DefFileReader dfr;
    TestCaseExecutionResult res;

    MetaData *pMD = dfr.Read(arg->scriptsFolder + _MSTR(testGetSublist/Defs.txt));;
    ScriptReader sr;
    ScriptReaderOutput op;
    //Read Query to string
    std::ifstream queryFile(pMD->s_RuleFileName);
    std::string query = "";
    std::string qline = "";
    while (getline(queryFile, qline)) {
        query += qline;
        query += "\n";
    }


    bool bSucc = sr.ProcessScript(pMD, op, query);
    if (!bSucc) {
        res.message = _MSTR(Failed to read script);
        res.succ = false;
        return res;
    }
    ExecutionContext ec;
    ec.p_mapFunctions = &op.map_Functions;
    ec.p_MD = pMD;
    Node *pRESULT = MemoryManager::Inst.CreateNode(++id);
    PENTITYLIST list1;
    MemoryManager::Inst.CreateObject(&list1);


    PInt val1 = new Int();
    val1->SetValue(1);
    PInt val2 = new Int();
    val2->SetValue(2);
    PInt val3 = new Int();
    val3->SetValue(3);
    PInt val4 = new Int();
    val4->SetValue(4);
    PInt val5 = new Int();
    val5->SetValue(5);
    PInt val6 = new Int();
    val6->SetValue(6);


    list1->AddElem(val1);
    list1->AddElem(val2);
    list1->AddElem(val3);
    list1->AddElem(val4);
    list1->AddElem(val5);
    list1->AddElem(val6);


    ec.map_Var["RESULT"] = pRESULT;
    ec.map_Var["LIST1"] = list1;
    op.p_ETL->Execute(&ec);

    PENTITYLIST subList = (PENTITYLIST) ec.map_Var["SUBLIST"];

    if(subList->size() != 3){
        res.succ = false;
        res.message = _MSTR(Incorrect result list size);
        return res;
    }

    subList->SeekToBegin();
    PInt subFirstElem = (PInt) subList->GetCurrElem();
    subList->SeekToEnd();
    PInt subLastElem = (PInt)subList->GetCurrElem();


    if(subFirstElem->GetValue() != 2 || subLastElem->GetValue() != 4){
        res.succ = false;
        res.message = _MSTR(Incorrect sublist);
        return res;
    }
    res.succ = true;
    res.message = EMPTY_STRING;
    return res;

}