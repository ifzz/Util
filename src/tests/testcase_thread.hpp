#ifndef TESTS_TESTCASETHREAD
#define TESTS_TESTCASETHREAD

#include "util/unittest.hpp"
#include "util/thread.hpp"

class TestCaseThread : public util::TestCase
{
public:
    TESTCASE_DECLARE(TestCaseThread)
    virtual void registerTestFunctions();
    
    //Tests
    void testSleep();
    void testGetCurrentThreadId();
    void testThread();
    void testWorkerThread();
    void testMsgThread();
    void testMutex();
    void testLock();
    void testLockTimedWait();
    void testMultiLockTimedWait();
protected:
    virtual void setUp();
    virtual void tearDown();
private:
    void synchronizeMethod();
    void lockThread0();
    void lockThread1();
    void lockTimedWaitThread(bool timeout);
    void multiLockTimedWaitThread(util::MultiLock* pmlock, bool timeout);
private:
    util::Mutex mutex_;
    util::Lock lock0_;
    util::Lock lock1_;
    util::Lock lock2_;
    int number_;
    std::string lockStr_;
};

#endif //TESTS_TESTCASETHREAD
