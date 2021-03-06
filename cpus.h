#ifndef QEMU_CPUS_H
#define QEMU_CPUS_H

/* cpu-common.c */
int qemu_init_main_loop(void);
void resume_all_vcpus(void);
void pause_all_vcpus(void);

/* vl.c */
extern int smp_cores;
extern int smp_threads;
extern int debug_requested;
void vm_state_notify(int running, int reason);
bool tcg_cpu_exec(void);
void set_numa_modes(void);
void set_cpu_log(const char *optarg);

#endif
