void OnlineDetectiveRTA(int detectIdx, int* running, int* susTable, double* delta, attri* tasks, int nTask);
void OnlineDetectiveK2U(int detectIdx, int* running, int* susTable, double* delta, attri* tasks, int nTask);
int LoopCountingForASec(void);
bool task_fault_check(double factor);
bool check_R_table(int detectIdx, int nTask);
bool check_busyP(int detectIdx, int nTask);
bool check_deadline(bool* first_task_flag , int ntask, double deadline, double end, int task_type, int task_id, double tick_per_second, bool* meet);
int priority_assignment(attri* tasks, int nTask);
void Random_Generate_Task_Type(int nTask, double desired_hardrealtime_percentage, attri* tasks);
int findAssignment(attri* tasks, attri* hardTasks, attri* softTasks, int nTask, int hard, int soft);
double RTA(int curIdx, attri* tasks, int nTask, int mode);
double norDemand(double R, attri* tasks, int ntask, int curIdx);
double abnorDemand(double R, attri* tasks, int ntask, int curIdx);
int comparePriority(const void *a, const void *b);
int comparePeriod(const void *a, const void *b);
double Omega(int curIdx, attri* tasks, double delta);
double recoveryDemand(attri* tasks, int curIdx);
double normalDemand(double R, attri* tasks, int curIdx);
void UUniFast(double U_avg, double *US);
double randMToN(double M, double N);
void CSet_generate(attri *tg, double* USet);
void Exhaustive_Task_Type(int nTask, int round, attri* tasks);
int gcd(int, int);
int lcm(int, int);
int check_running_task(int* suspendedTask);