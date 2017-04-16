#include <sys/times.h>
clock_t times(struct tms *buf);
struct tms {
clock_t tms_utime;  /* tempo de CPU gasto em código do processo */
clock_t tms_stime;  /* tempo de CPU gasto em código do sistema chamado pelo processo */
clock_t tms_cutime; /* tempo de CPU dos filhos (código próprio) */
clock_t tms_cstime; /* tempo de CPU dos filhos (cód. do sistema) *

ticks_seg = sysconf(_SC_CLK_TCK);
