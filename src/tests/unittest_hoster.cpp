#include "unittest_hoster.hpp"
#include "testcase_string.hpp"
#include "testcase_memory.hpp"
#include "testcase_time.hpp"
#include "testcase_file.hpp"
#include "testcase_lexicalcast.hpp"
#include "testcase_csv.hpp"
#include "testcase_cmdline.hpp"

using namespace std;
using namespace util;

UnitTestHoster::UnitTestHoster()
{
}

void UnitTestHoster::run()
{
    TestSuite suit;
    
    suit.addTestSuite(TestCaseString("TestCaseString"));
    suit.addTestSuite(TestCaseMemory("TestCaseMemory"));
    suit.addTestSuite(TestCaseTime("TestCaseTime"));
    suit.addTestSuite(TestCaseFile("TestCaseFile"));
    suit.addTestSuite(TestCaseLexicalCast("TestCaseLexicalCast"));
    suit.addTestSuite(TestCaseCsv("TestCaseCsv"));
    suit.addTestSuite(TestCaseCmdLine("TestCaseCmdLine"));

    TestRunner runner;
    runner.run(suit);
}
