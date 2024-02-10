# 0 "util.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "util.c"
# 1 "../resect.h" 1



# 1 "/usr/include/stdlib.h" 1 3 4
# 26 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/bits/libc-header-start.h" 1 3 4
# 33 "/usr/include/bits/libc-header-start.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 394 "/usr/include/features.h" 3 4
# 1 "/usr/include/features-time64.h" 1 3 4
# 20 "/usr/include/features-time64.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 21 "/usr/include/features-time64.h" 2 3 4
# 1 "/usr/include/bits/timesize.h" 1 3 4
# 19 "/usr/include/bits/timesize.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 20 "/usr/include/bits/timesize.h" 2 3 4
# 22 "/usr/include/features-time64.h" 2 3 4
# 395 "/usr/include/features.h" 2 3 4
# 503 "/usr/include/features.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 576 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 577 "/usr/include/sys/cdefs.h" 2 3 4
# 1 "/usr/include/bits/long-double.h" 1 3 4
# 578 "/usr/include/sys/cdefs.h" 2 3 4
# 504 "/usr/include/features.h" 2 3 4
# 527 "/usr/include/features.h" 3 4
# 1 "/usr/include/gnu/stubs.h" 1 3 4
# 10 "/usr/include/gnu/stubs.h" 3 4
# 1 "/usr/include/gnu/stubs-64.h" 1 3 4
# 11 "/usr/include/gnu/stubs.h" 2 3 4
# 528 "/usr/include/features.h" 2 3 4
# 34 "/usr/include/bits/libc-header-start.h" 2 3 4
# 27 "/usr/include/stdlib.h" 2 3 4





# 1 "/usr/lib64/gcc/x86_64-suse-linux/13/include/stddef.h" 1 3 4
# 214 "/usr/lib64/gcc/x86_64-suse-linux/13/include/stddef.h" 3 4

# 214 "/usr/lib64/gcc/x86_64-suse-linux/13/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 329 "/usr/lib64/gcc/x86_64-suse-linux/13/include/stddef.h" 3 4
typedef int wchar_t;
# 33 "/usr/include/stdlib.h" 2 3 4







# 1 "/usr/include/bits/waitflags.h" 1 3 4
# 41 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/bits/waitstatus.h" 1 3 4
# 42 "/usr/include/stdlib.h" 2 3 4
# 56 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/bits/floatn.h" 1 3 4
# 119 "/usr/include/bits/floatn.h" 3 4
# 1 "/usr/include/bits/floatn-common.h" 1 3 4
# 24 "/usr/include/bits/floatn-common.h" 3 4
# 1 "/usr/include/bits/long-double.h" 1 3 4
# 25 "/usr/include/bits/floatn-common.h" 2 3 4
# 120 "/usr/include/bits/floatn.h" 2 3 4
# 57 "/usr/include/stdlib.h" 2 3 4


typedef struct
  {
    int quot;
    int rem;
  } div_t;



typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;





__extension__ typedef struct
  {
    long long int quot;
    long long int rem;
  } lldiv_t;
# 98 "/usr/include/stdlib.h" 3 4
extern size_t __ctype_get_mb_cur_max (void) __attribute__ ((__nothrow__ , __leaf__)) ;



extern double atof (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern int atoi (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern long int atol (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;



__extension__ extern long long int atoll (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;



extern double strtod (const char *__restrict __nptr,
        char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern float strtof (const char *__restrict __nptr,
       char **__restrict __endptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern long double strtold (const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 177 "/usr/include/stdlib.h" 3 4
extern long int strtol (const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern unsigned long int strtoul (const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



__extension__
extern long long int strtoq (const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtouq (const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




__extension__
extern long long int strtoll (const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtoull (const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 505 "/usr/include/stdlib.h" 3 4
extern char *l64a (long int __n) __attribute__ ((__nothrow__ , __leaf__)) ;


extern long int a64l (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;




# 1 "/usr/include/sys/types.h" 1 3 4
# 27 "/usr/include/sys/types.h" 3 4


# 1 "/usr/include/bits/types.h" 1 3 4
# 27 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 28 "/usr/include/bits/types.h" 2 3 4
# 1 "/usr/include/bits/timesize.h" 1 3 4
# 19 "/usr/include/bits/timesize.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 20 "/usr/include/bits/timesize.h" 2 3 4
# 29 "/usr/include/bits/types.h" 2 3 4


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;






typedef __int8_t __int_least8_t;
typedef __uint8_t __uint_least8_t;
typedef __int16_t __int_least16_t;
typedef __uint16_t __uint_least16_t;
typedef __int32_t __int_least32_t;
typedef __uint32_t __uint_least32_t;
typedef __int64_t __int_least64_t;
typedef __uint64_t __uint_least64_t;



typedef long int __quad_t;
typedef unsigned long int __u_quad_t;







typedef long int __intmax_t;
typedef unsigned long int __uintmax_t;
# 141 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/typesizes.h" 1 3 4
# 142 "/usr/include/bits/types.h" 2 3 4
# 1 "/usr/include/bits/time64.h" 1 3 4
# 143 "/usr/include/bits/types.h" 2 3 4


typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;
typedef long int __suseconds64_t;

typedef int __daddr_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void * __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;


typedef long int __fsword_t;

typedef long int __ssize_t;


typedef long int __syscall_slong_t;

typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;




typedef int __sig_atomic_t;
# 30 "/usr/include/sys/types.h" 2 3 4



typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;


typedef __loff_t loff_t;




typedef __ino_t ino_t;
# 59 "/usr/include/sys/types.h" 3 4
typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;





typedef __off_t off_t;
# 97 "/usr/include/sys/types.h" 3 4
typedef __pid_t pid_t;





typedef __id_t id_t;




typedef __ssize_t ssize_t;





typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;




# 1 "/usr/include/bits/types/clock_t.h" 1 3 4






typedef __clock_t clock_t;
# 127 "/usr/include/sys/types.h" 2 3 4

# 1 "/usr/include/bits/types/clockid_t.h" 1 3 4






typedef __clockid_t clockid_t;
# 129 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/bits/types/time_t.h" 1 3 4
# 10 "/usr/include/bits/types/time_t.h" 3 4
typedef __time_t time_t;
# 130 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/bits/types/timer_t.h" 1 3 4






typedef __timer_t timer_t;
# 131 "/usr/include/sys/types.h" 2 3 4
# 144 "/usr/include/sys/types.h" 3 4
# 1 "/usr/lib64/gcc/x86_64-suse-linux/13/include/stddef.h" 1 3 4
# 145 "/usr/include/sys/types.h" 2 3 4



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;




# 1 "/usr/include/bits/stdint-intn.h" 1 3 4
# 24 "/usr/include/bits/stdint-intn.h" 3 4
typedef __int8_t int8_t;
typedef __int16_t int16_t;
typedef __int32_t int32_t;
typedef __int64_t int64_t;
# 156 "/usr/include/sys/types.h" 2 3 4


typedef __uint8_t u_int8_t;
typedef __uint16_t u_int16_t;
typedef __uint32_t u_int32_t;
typedef __uint64_t u_int64_t;


typedef int register_t __attribute__ ((__mode__ (__word__)));
# 176 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 24 "/usr/include/endian.h" 3 4
# 1 "/usr/include/bits/endian.h" 1 3 4
# 35 "/usr/include/bits/endian.h" 3 4
# 1 "/usr/include/bits/endianness.h" 1 3 4
# 36 "/usr/include/bits/endian.h" 2 3 4
# 25 "/usr/include/endian.h" 2 3 4
# 35 "/usr/include/endian.h" 3 4
# 1 "/usr/include/bits/byteswap.h" 1 3 4
# 33 "/usr/include/bits/byteswap.h" 3 4
static __inline __uint16_t
__bswap_16 (__uint16_t __bsx)
{

  return __builtin_bswap16 (__bsx);



}






static __inline __uint32_t
__bswap_32 (__uint32_t __bsx)
{

  return __builtin_bswap32 (__bsx);



}
# 69 "/usr/include/bits/byteswap.h" 3 4
__extension__ static __inline __uint64_t
__bswap_64 (__uint64_t __bsx)
{

  return __builtin_bswap64 (__bsx);



}
# 36 "/usr/include/endian.h" 2 3 4
# 1 "/usr/include/bits/uintn-identity.h" 1 3 4
# 32 "/usr/include/bits/uintn-identity.h" 3 4
static __inline __uint16_t
__uint16_identity (__uint16_t __x)
{
  return __x;
}

static __inline __uint32_t
__uint32_identity (__uint32_t __x)
{
  return __x;
}

static __inline __uint64_t
__uint64_identity (__uint64_t __x)
{
  return __x;
}
# 37 "/usr/include/endian.h" 2 3 4
# 177 "/usr/include/sys/types.h" 2 3 4


# 1 "/usr/include/sys/select.h" 1 3 4
# 30 "/usr/include/sys/select.h" 3 4
# 1 "/usr/include/bits/select.h" 1 3 4
# 31 "/usr/include/sys/select.h" 2 3 4


# 1 "/usr/include/bits/types/sigset_t.h" 1 3 4



# 1 "/usr/include/bits/types/__sigset_t.h" 1 3 4




typedef struct
{
  unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
} __sigset_t;
# 5 "/usr/include/bits/types/sigset_t.h" 2 3 4


typedef __sigset_t sigset_t;
# 34 "/usr/include/sys/select.h" 2 3 4



# 1 "/usr/include/bits/types/struct_timeval.h" 1 3 4







struct timeval
{




  __time_t tv_sec;
  __suseconds_t tv_usec;

};
# 38 "/usr/include/sys/select.h" 2 3 4

# 1 "/usr/include/bits/types/struct_timespec.h" 1 3 4
# 11 "/usr/include/bits/types/struct_timespec.h" 3 4
struct timespec
{



  __time_t tv_sec;




  __syscall_slong_t tv_nsec;
# 31 "/usr/include/bits/types/struct_timespec.h" 3 4
};
# 40 "/usr/include/sys/select.h" 2 3 4



typedef __suseconds_t suseconds_t;





typedef long int __fd_mask;
# 59 "/usr/include/sys/select.h" 3 4
typedef struct
  {






    __fd_mask __fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];


  } fd_set;






typedef __fd_mask fd_mask;
# 91 "/usr/include/sys/select.h" 3 4

# 102 "/usr/include/sys/select.h" 3 4
extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
# 127 "/usr/include/sys/select.h" 3 4
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);
# 153 "/usr/include/sys/select.h" 3 4

# 180 "/usr/include/sys/types.h" 2 3 4





typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 227 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/bits/pthreadtypes.h" 1 3 4
# 23 "/usr/include/bits/pthreadtypes.h" 3 4
# 1 "/usr/include/bits/thread-shared-types.h" 1 3 4
# 44 "/usr/include/bits/thread-shared-types.h" 3 4
# 1 "/usr/include/bits/pthreadtypes-arch.h" 1 3 4
# 21 "/usr/include/bits/pthreadtypes-arch.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 22 "/usr/include/bits/pthreadtypes-arch.h" 2 3 4
# 45 "/usr/include/bits/thread-shared-types.h" 2 3 4

# 1 "/usr/include/bits/atomic_wide_counter.h" 1 3 4
# 25 "/usr/include/bits/atomic_wide_counter.h" 3 4
typedef union
{
  __extension__ unsigned long long int __value64;
  struct
  {
    unsigned int __low;
    unsigned int __high;
  } __value32;
} __atomic_wide_counter;
# 47 "/usr/include/bits/thread-shared-types.h" 2 3 4




typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;

typedef struct __pthread_internal_slist
{
  struct __pthread_internal_slist *__next;
} __pthread_slist_t;
# 76 "/usr/include/bits/thread-shared-types.h" 3 4
# 1 "/usr/include/bits/struct_mutex.h" 1 3 4
# 22 "/usr/include/bits/struct_mutex.h" 3 4
struct __pthread_mutex_s
{
  int __lock;
  unsigned int __count;
  int __owner;

  unsigned int __nusers;



  int __kind;

  short __spins;
  short __elision;
  __pthread_list_t __list;
# 53 "/usr/include/bits/struct_mutex.h" 3 4
};
# 77 "/usr/include/bits/thread-shared-types.h" 2 3 4
# 89 "/usr/include/bits/thread-shared-types.h" 3 4
# 1 "/usr/include/bits/struct_rwlock.h" 1 3 4
# 23 "/usr/include/bits/struct_rwlock.h" 3 4
struct __pthread_rwlock_arch_t
{
  unsigned int __readers;
  unsigned int __writers;
  unsigned int __wrphase_futex;
  unsigned int __writers_futex;
  unsigned int __pad3;
  unsigned int __pad4;

  int __cur_writer;
  int __shared;
  signed char __rwelision;




  unsigned char __pad1[7];


  unsigned long int __pad2;


  unsigned int __flags;
# 55 "/usr/include/bits/struct_rwlock.h" 3 4
};
# 90 "/usr/include/bits/thread-shared-types.h" 2 3 4




struct __pthread_cond_s
{
  __atomic_wide_counter __wseq;
  __atomic_wide_counter __g1_start;
  unsigned int __g_refs[2] ;
  unsigned int __g_size[2];
  unsigned int __g1_orig_size;
  unsigned int __wrefs;
  unsigned int __g_signals[2];
};

typedef unsigned int __tss_t;
typedef unsigned long int __thrd_t;

typedef struct
{
  int __data ;
} __once_flag;
# 24 "/usr/include/bits/pthreadtypes.h" 2 3 4



typedef unsigned long int pthread_t;




typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;




typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;


union pthread_attr_t
{
  char __size[56];
  long int __align;
};

typedef union pthread_attr_t pthread_attr_t;




typedef union
{
  struct __pthread_mutex_s __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;


typedef union
{
  struct __pthread_cond_s __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;





typedef union
{
  struct __pthread_rwlock_arch_t __data;
  char __size[56];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;




typedef union
{
  char __size[32];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;
# 228 "/usr/include/sys/types.h" 2 3 4



# 515 "/usr/include/stdlib.h" 2 3 4






extern long int random (void) __attribute__ ((__nothrow__ , __leaf__));


extern void srandom (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern char *setstate (char *__statebuf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







struct random_data
  {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
  };

extern int random_r (struct random_data *__restrict __buf,
       int32_t *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));

extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));





extern int rand (void) __attribute__ ((__nothrow__ , __leaf__));

extern void srand (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));



extern int rand_r (unsigned int *__seed) __attribute__ ((__nothrow__ , __leaf__));







extern double drand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern double erand48 (unsigned short int __xsubi[3]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int lrand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern long int nrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int mrand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern long int jrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern void srand48 (long int __seedval) __attribute__ ((__nothrow__ , __leaf__));
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    __extension__ unsigned long long int __a;

  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern __uint32_t arc4random (void)
     __attribute__ ((__nothrow__ , __leaf__)) ;


extern void arc4random_buf (void *__buf, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern __uint32_t arc4random_uniform (__uint32_t __upper_bound)
     __attribute__ ((__nothrow__ , __leaf__)) ;




extern void *malloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__))
     __attribute__ ((__alloc_size__ (1))) ;

extern void *calloc (size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__alloc_size__ (1, 2))) ;






extern void *realloc (void *__ptr, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__)) __attribute__ ((__alloc_size__ (2)));


extern void free (void *__ptr) __attribute__ ((__nothrow__ , __leaf__));







extern void *reallocarray (void *__ptr, size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__))
     __attribute__ ((__alloc_size__ (2, 3)))
    __attribute__ ((__malloc__ (__builtin_free, 1)));


extern void *reallocarray (void *__ptr, size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__ (reallocarray, 1)));



# 1 "/usr/include/alloca.h" 1 3 4
# 24 "/usr/include/alloca.h" 3 4
# 1 "/usr/lib64/gcc/x86_64-suse-linux/13/include/stddef.h" 1 3 4
# 25 "/usr/include/alloca.h" 2 3 4







extern void *alloca (size_t __size) __attribute__ ((__nothrow__ , __leaf__));






# 707 "/usr/include/stdlib.h" 2 3 4





extern void *valloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__))
     __attribute__ ((__alloc_size__ (1))) ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;




extern void *aligned_alloc (size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__alloc_align__ (1)))
     __attribute__ ((__alloc_size__ (2))) ;



extern void abort (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







extern int at_quick_exit (void (*__func) (void)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern void exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));





extern void quick_exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));





extern void _Exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));




extern char *getenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 786 "/usr/include/stdlib.h" 3 4
extern int putenv (char *__string) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int setenv (const char *__name, const char *__value, int __replace)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));


extern int unsetenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int clearenv (void) __attribute__ ((__nothrow__ , __leaf__));
# 814 "/usr/include/stdlib.h" 3 4
extern char *mktemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 827 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 849 "/usr/include/stdlib.h" 3 4
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) ;
# 870 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 923 "/usr/include/stdlib.h" 3 4
extern int system (const char *__command) ;
# 940 "/usr/include/stdlib.h" 3 4
extern char *realpath (const char *__restrict __name,
         char *__restrict __resolved) __attribute__ ((__nothrow__ , __leaf__)) ;






typedef int (*__compar_fn_t) (const void *, const void *);
# 960 "/usr/include/stdlib.h" 3 4
extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;







extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));
# 980 "/usr/include/stdlib.h" 3 4
extern int abs (int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
extern long int labs (long int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;


__extension__ extern long long int llabs (long long int __x)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;






extern div_t div (int __numer, int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;


__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
# 1012 "/usr/include/stdlib.h" 3 4
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *gcvt (double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) ;




extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) ;




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));

extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));





extern int mblen (const char *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));


extern int mbtowc (wchar_t *__restrict __pwc,
     const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));


extern int wctomb (char *__s, wchar_t __wchar) __attribute__ ((__nothrow__ , __leaf__));



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__))
    __attribute__ ((__access__ (__read_only__, 2)));

extern size_t wcstombs (char *__restrict __s,
   const wchar_t *__restrict __pwcs, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__access__ (__write_only__, 1, 3)))
  __attribute__ ((__access__ (__read_only__, 2)));






extern int rpmatch (const char *__response) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 1099 "/usr/include/stdlib.h" 3 4
extern int getsubopt (char **__restrict __optionp,
        char *const *__restrict __tokens,
        char **__restrict __valuep)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2, 3))) ;
# 1145 "/usr/include/stdlib.h" 3 4
extern int getloadavg (double __loadavg[], int __nelem)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 1155 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/bits/stdlib-float.h" 1 3 4
# 1156 "/usr/include/stdlib.h" 2 3 4
# 1167 "/usr/include/stdlib.h" 3 4

# 5 "../resect.h" 2
# 24 "../resect.h"

# 24 "../resect.h"
typedef int resect_bool;

typedef struct P_resect_string *resect_string;

typedef struct {
    int code;
    const char *name;
}enum_val_string_map;
# 92 "../resect.h"
typedef enum { RESECT_OK , RESECT_ERR_NULL_POINTER , RESECT_ERR_OUT_OF_MEMORY , RESECT_ERR_INVALID_ARGUMENT , RESECT_ERR_MAX_RECUSION_DEPTH , RESECT_ERR_FILE_NOT_FOUND , RESECT_ERR_DIR_NOT_FOUND , RESECT_ERR_MISSING_DECL_ID , RESECT_ERR_SQLITE_ERROR , RESECT_ERR_SQLITE_DB_OPEN_ERROR , RESECT_ERR_SQLITE_DDL_ERROR , RESECT_ERR_SQLITE_PREPARE_ERROR , RESECT_ERR_SQLITE_BIND_ERROR , RESECT_ERR_SQLITE_STEP_ERROR , RESECT_ERR_SQLITE_INSERT_ERROR , CLANG_ERR_INVALID_ARGUMENT , CLANG_ERR_AST_READ_ERROR , } resect_error_code; extern size_t resect_error_code_count(); extern int resect_error_code_min(); extern int resect_error_code_max(); extern resect_bool is_resect_error_code_p(resect_error_code val); extern const char* resect_error_code_to_string(resect_error_code val); extern resect_string resect_error_code_to_resect_string(resect_error_code val); extern int string_to_resect_error_code(const char* str);
# 114 "../resect.h"
typedef enum { RESECT_DECL_KIND_UNKNOWN , RESECT_DECL_KIND_STRUCT , RESECT_DECL_KIND_UNION , RESECT_DECL_KIND_CLASS , RESECT_DECL_KIND_ENUM , RESECT_DECL_KIND_FIELD , RESECT_DECL_KIND_FUNCTION , RESECT_DECL_KIND_VARIABLE , RESECT_DECL_KIND_PARAMETER , RESECT_DECL_KIND_TYPEDEF , RESECT_DECL_KIND_METHOD , RESECT_DECL_KIND_ENUM_CONSTANT , RESECT_DECL_KIND_MACRO , RESECT_DECL_KIND_TEMPLATE_PARAMETER , RESECT_DECL_KIND_UNDECLARED , } resect_decl_kind; extern size_t resect_decl_kind_count(); extern int resect_decl_kind_min(); extern int resect_decl_kind_max(); extern resect_bool is_resect_decl_kind_p(resect_decl_kind val); extern const char* resect_decl_kind_to_string(resect_decl_kind val); extern resect_string resect_decl_kind_to_resect_string(resect_decl_kind val); extern int string_to_resect_decl_kind(const char* str);
# 124 "../resect.h"
typedef enum { RESECT_ACCESS_SPECIFIER_UNKNOWN , RESECT_ACCESS_SPECIFIER_PUBLIC , RESECT_ACCESS_SPECIFIER_PROTECTED , RESECT_ACCESS_SPECIFIER_PRIVATE , } resect_access_specifier; extern size_t resect_access_specifier_count(); extern int resect_access_specifier_min(); extern int resect_access_specifier_max(); extern resect_bool is_resect_access_specifier_p(resect_access_specifier val); extern const char* resect_access_specifier_to_string(resect_access_specifier val); extern resect_string resect_access_specifier_to_resect_string(resect_access_specifier val); extern int string_to_resect_access_specifier(const char* str);
# 179 "../resect.h"
typedef enum { RESECT_TYPE_KIND_UNKNOWN = 0 , RESECT_TYPE_KIND_VOID = 2 , RESECT_TYPE_KIND_BOOL = 3 , RESECT_TYPE_KIND_CHAR_U = 4 , RESECT_TYPE_KIND_UCHAR = 5 , RESECT_TYPE_KIND_CHAR16 = 6 , RESECT_TYPE_KIND_CHAR32 = 7 , RESECT_TYPE_KIND_USHORT = 8 , RESECT_TYPE_KIND_UINT = 9 , RESECT_TYPE_KIND_ULONG = 10 , RESECT_TYPE_KIND_ULONGLONG = 11 , RESECT_TYPE_KIND_UINT128 = 12 , RESECT_TYPE_KIND_CHAR_S = 13 , RESECT_TYPE_KIND_SCHAR = 14 , RESECT_TYPE_KIND_WCHAR = 15 , RESECT_TYPE_KIND_SHORT = 16 , RESECT_TYPE_KIND_INT = 17 , RESECT_TYPE_KIND_LONG = 18 , RESECT_TYPE_KIND_LONGLONG = 19 , RESECT_TYPE_KIND_INT128 = 20 , RESECT_TYPE_KIND_FLOAT = 21 , RESECT_TYPE_KIND_DOUBLE = 22 , RESECT_TYPE_KIND_LONGDOUBLE = 23 , RESECT_TYPE_KIND_NULLPTR = 24 , RESECT_TYPE_KIND_OVERLOAD = 25 , RESECT_TYPE_KIND_DEPENDENT = 26 , RESECT_TYPE_KIND_FLOAT128 = 30 , RESECT_TYPE_KIND_HALF = 31 , RESECT_TYPE_KIND_FLOAT16 = 32 , RESECT_TYPE_KIND_COMPLEX = 100 , RESECT_TYPE_KIND_POINTER = 101 , RESECT_TYPE_KIND_BLOCKPOINTER = 102 , RESECT_TYPE_KIND_LVALUEREFERENCE = 103 , RESECT_TYPE_KIND_RVALUEREFERENCE = 104 , RESECT_TYPE_KIND_RECORD = 105 , RESECT_TYPE_KIND_ENUM = 106 , RESECT_TYPE_KIND_TYPEDEF = 107 , RESECT_TYPE_KIND_FUNCTIONNOPROTO = 110 , RESECT_TYPE_KIND_FUNCTIONPROTO = 111 , RESECT_TYPE_KIND_CONSTANTARRAY = 112 , RESECT_TYPE_KIND_VECTOR = 113 , RESECT_TYPE_KIND_INCOMPLETEARRAY = 114 , RESECT_TYPE_KIND_VARIABLEARRAY = 115 , RESECT_TYPE_KIND_DEPENDENTSIZEDARRAY = 116 , RESECT_TYPE_KIND_MEMBERPOINTER = 117 , RESECT_TYPE_KIND_AUTO = 118 , RESECT_TYPE_KIND_ATOMIC = 177 , RESECT_TYPE_KIND_EXTVECTOR = 178 , RESECT_TYPE_KIND_TEMPLATE_PARAMETER = 10000 , } resect_type_kind; extern size_t resect_type_kind_count(); extern int resect_type_kind_min(); extern int resect_type_kind_max(); extern resect_bool is_resect_type_kind_p(resect_type_kind val); extern const char* resect_type_kind_to_string(resect_type_kind val); extern resect_string resect_type_kind_to_resect_string(resect_type_kind val); extern int string_to_resect_type_kind(const char* str);
# 192 "../resect.h"
typedef enum { RESECT_TYPE_CATEGORY_UNKNOWN , RESECT_TYPE_CATEGORY_ARITHMETIC , RESECT_TYPE_CATEGORY_POINTER , RESECT_TYPE_CATEGORY_REFERENCE , RESECT_TYPE_CATEGORY_ARRAY , RESECT_TYPE_CATEGORY_UNIQUE , RESECT_TYPE_CATEGORY_AUX , } resect_type_category; extern size_t resect_type_category_count(); extern int resect_type_category_min(); extern int resect_type_category_max(); extern resect_bool is_resect_type_category_p(resect_type_category val); extern const char* resect_type_category_to_string(resect_type_category val); extern resect_string resect_type_category_to_resect_string(resect_type_category val); extern int string_to_resect_type_category(const char* str);
# 216 "../resect.h"
typedef enum { RESECT_FUNCTION_CALLING_CONVENTION_UNKNOWN , RESECT_FUNCTION_CALLING_CONVENTION_DEFAULT , RESECT_FUNCTION_CALLING_CONVENTION_C , RESECT_FUNCTION_CALLING_CONVENTION_X86_STDCALL , RESECT_FUNCTION_CALLING_CONVENTION_X86_FASTCALL , RESECT_FUNCTION_CALLING_CONVENTION_X86_THISCALL , RESECT_FUNCTION_CALLING_CONVENTION_X86_REGCALL , RESECT_FUNCTION_CALLING_CONVENTION_X86_VECTORCALL , RESECT_FUNCTION_CALLING_CONVENTION_X86_PASCAL , RESECT_FUNCTION_CALLING_CONVENTION_X86_64_WIN64 , RESECT_FUNCTION_CALLING_CONVENTION_X86_64_SYSV , RESECT_FUNCTION_CALLING_CONVENTION_AARCH64_VECTORCALL , RESECT_FUNCTION_CALLING_CONVENTION_AAPCS , RESECT_FUNCTION_CALLING_CONVENTION_AAPCS_VFP , RESECT_FUNCTION_CALLING_CONVENTION_INTEL_OCL_BICC , RESECT_FUNCTION_CALLING_CONVENTION_SWIFT , RESECT_FUNCTION_CALLING_CONVENTION_PRESERVE_MOST , RESECT_FUNCTION_CALLING_CONVENTION_PRESERVE_ALL , } resect_function_calling_convention; extern size_t resect_function_calling_convention_count(); extern int resect_function_calling_convention_min(); extern int resect_function_calling_convention_max(); extern resect_bool is_resect_function_calling_convention_p(resect_function_calling_convention val); extern const char* resect_function_calling_convention_to_string(resect_function_calling_convention val); extern resect_string resect_function_calling_convention_to_resect_string(resect_function_calling_convention val); extern int string_to_resect_function_calling_convention(const char* str);
# 230 "../resect.h"
typedef enum { RESECT_STORAGE_CLASS_UNKNOWN , RESECT_STORAGE_CLASS_NONE , RESECT_STORAGE_CLASS_EXTERN , RESECT_STORAGE_CLASS_STATIC , RESECT_STORAGE_CLASS_PRIVATE_EXTERN , RESECT_STORAGE_CLASS_OPENCL_WORKGROUP_LOCAL , RESECT_STORAGE_CLASS_AUTO , RESECT_STORAGE_CLASS_REGISTER , } resect_storage_class; extern size_t resect_storage_class_count(); extern int resect_storage_class_min(); extern int resect_storage_class_max(); extern resect_bool is_resect_storage_class_p(resect_storage_class val); extern const char* resect_storage_class_to_string(resect_storage_class val); extern resect_string resect_storage_class_to_resect_string(resect_storage_class val); extern int string_to_resect_storage_class(const char* str);
# 241 "../resect.h"
typedef enum { RESECT_VARIABLE_TYPE_UNKNOWN , RESECT_VARIABLE_TYPE_INT , RESECT_VARIABLE_TYPE_FLOAT , RESECT_VARIABLE_TYPE_STRING , RESECT_VARIABLE_TYPE_OTHER , } resect_variable_kind; extern size_t resect_variable_kind_count(); extern int resect_variable_kind_min(); extern int resect_variable_kind_max(); extern resect_bool is_resect_variable_kind_p(resect_variable_kind val); extern const char* resect_variable_kind_to_string(resect_variable_kind val); extern resect_string resect_variable_kind_to_resect_string(resect_variable_kind val); extern int string_to_resect_variable_kind(const char* str);
# 252 "../resect.h"
typedef enum { RESECT_LANGUAGE_UNKNOWN = 0 , RESECT_LANGUAGE_C = 1 , RESECT_LANGUAGE_CXX = 2 , RESECT_LANGUAGE_OBJC = 3 , RESECT_LANGUAGE__LAST = RESECT_LANGUAGE_OBJC , } resect_language; extern size_t resect_language_count(); extern int resect_language_min(); extern int resect_language_max(); extern resect_bool is_resect_language_p(resect_language val); extern const char* resect_language_to_string(resect_language val); extern resect_string resect_language_to_resect_string(resect_language val); extern int string_to_resect_language(const char* str);
# 262 "../resect.h"
typedef enum { RESECT_TEMPLATE_PARAMETER_KIND_UNKNOWN , RESECT_TEMPLATE_PARAMETER_KIND_TEMPLATE , RESECT_TEMPLATE_PARAMETER_KIND_TYPE , RESECT_TEMPLATE_PARAMETER_KIND_NON_TYPE , } resect_template_parameter_kind; extern size_t resect_template_parameter_kind_count(); extern int resect_template_parameter_kind_min(); extern int resect_template_parameter_kind_max(); extern resect_bool is_resect_template_parameter_kind_p(resect_template_parameter_kind val); extern const char* resect_template_parameter_kind_to_string(resect_template_parameter_kind val); extern resect_string resect_template_parameter_kind_to_resect_string(resect_template_parameter_kind val); extern int string_to_resect_template_parameter_kind(const char* str);
# 278 "../resect.h"
typedef enum { RESECT_TEMPLATE_ARGUMENT_KIND_UNKNOWN , RESECT_TEMPLATE_ARGUMENT_KIND_NULL , RESECT_TEMPLATE_ARGUMENT_KIND_TYPE , RESECT_TEMPLATE_ARGUMENT_KIND_DECLARATION , RESECT_TEMPLATE_ARGUMENT_KIND_NULL_PTR , RESECT_TEMPLATE_ARGUMENT_KIND_INTEGRAL , RESECT_TEMPLATE_ARGUMENT_KIND_TEMPLATE , RESECT_TEMPLATE_ARGUMENT_KIND_TEMPLATE_EXPANSION , RESECT_TEMPLATE_ARGUMENT_KIND_EXPRESSION , RESECT_TEMPLATE_ARGUMENT_KIND_PACK , } resect_template_argument_kind; extern size_t resect_template_argument_kind_count(); extern int resect_template_argument_kind_min(); extern int resect_template_argument_kind_max(); extern resect_bool is_resect_template_argument_kind_p(resect_template_argument_kind val); extern const char* resect_template_argument_kind_to_string(resect_template_argument_kind val); extern resect_string resect_template_argument_kind_to_resect_string(resect_template_argument_kind val); extern int string_to_resect_template_argument_kind(const char* str);
# 289 "../resect.h"
typedef enum { RESECT_LINKAGE_KIND_UNKNOWN , RESECT_LINKAGE_KIND_NO_LINKAGE , RESECT_LINKAGE_KIND_INTERNAL , RESECT_LINKAGE_KIND_UNIQUE_EXTERNAL , RESECT_LINKAGE_KIND_EXTERNAL , } resect_linkage_kind; extern size_t resect_linkage_kind_count(); extern int resect_linkage_kind_min(); extern int resect_linkage_kind_max(); extern resect_bool is_resect_linkage_kind_p(resect_linkage_kind val); extern const char* resect_linkage_kind_to_string(resect_linkage_kind val); extern resect_string resect_linkage_kind_to_resect_string(resect_linkage_kind val); extern int string_to_resect_linkage_kind(const char* str);
# 304 "../resect.h"
typedef enum { RESECT_OPTION_INTRINSICS_UNKNOWN , RESECT_OPTION_INTRINSICS_SSE , RESECT_OPTION_INTRINSICS_SSE2 , RESECT_OPTION_INTRINSICS_SSE3 , RESECT_OPTION_INTRINSICS_SSE41 , RESECT_OPTION_INTRINSICS_SSE42 , RESECT_OPTION_INTRINSICS_AVX , RESECT_OPTION_INTRINSICS_AVX2 , RESECT_OPTION_INTRINSICS_NEON , } resect_option_intrinsic; extern size_t resect_option_intrinsic_count(); extern int resect_option_intrinsic_min(); extern int resect_option_intrinsic_max(); extern resect_bool is_resect_option_intrinsic_p(resect_option_intrinsic val); extern const char* resect_option_intrinsic_to_string(resect_option_intrinsic val); extern resect_string resect_option_intrinsic_to_resect_string(resect_option_intrinsic val); extern int string_to_resect_option_intrinsic(const char* str);
# 315 "../resect.h"
typedef enum { RESECT_INCLUSION_STATUS_EXCLUDED , RESECT_INCLUSION_STATUS_WEAKLY_EXCLUDED , RESECT_INCLUSION_STATUS_WEAKLY_INCLUDED , RESECT_INCLUSION_STATUS_WEAKLY_ENFORCED , RESECT_INCLUSION_STATUS_INCLUDED , } resect_inclusion_status; extern size_t resect_inclusion_status_count(); extern int resect_inclusion_status_min(); extern int resect_inclusion_status_max(); extern resect_bool is_resect_inclusion_status_p(resect_inclusion_status val); extern const char* resect_inclusion_status_to_string(resect_inclusion_status val); extern resect_string resect_inclusion_status_to_resect_string(resect_inclusion_status val); extern int string_to_resect_inclusion_status(const char* str);





typedef struct P_resect_result *resect_result;
typedef struct P_resect_iterator *resect_iterator;
typedef struct P_resect_parse_options *resect_parse_options;




typedef struct P_resect_invocation *resect_invocation;

__attribute__((visibility("default"))) resect_invocation resect_get_current_invocation();





typedef struct P_resect_translation_unit *resect_translation_unit;
typedef struct P_resect_collection *resect_collection;
typedef struct P_resect_location *resect_location;
typedef struct P_resect_decl *resect_decl;
typedef struct P_resect_type *resect_type;
typedef struct P_resect_template_argument *resect_template_argument;




__attribute__((visibility("default"))) resect_iterator resect_collection_iterator(resect_collection collection);

__attribute__((visibility("default"))) resect_bool resect_iterator_next(resect_iterator iter);

__attribute__((visibility("default"))) void *resect_iterator_value(resect_iterator iter);

__attribute__((visibility("default"))) void resect_iterator_free(resect_iterator iter);




__attribute__((visibility("default"))) unsigned int resect_location_line(resect_location location);

__attribute__((visibility("default"))) unsigned int resect_location_column(resect_location location);

__attribute__((visibility("default"))) const char *resect_location_name(resect_location location);




__attribute__((visibility("default"))) resect_type_kind resect_type_get_kind(resect_type type);

__attribute__((visibility("default"))) const char *resect_type_get_name(resect_type type);

__attribute__((visibility("default"))) long long resect_type_sizeof(resect_type type);

__attribute__((visibility("default"))) long long resect_type_alignof(resect_type type);

__attribute__((visibility("default"))) long long resect_type_offsetof(resect_type type, const char *field_name);

__attribute__((visibility("default"))) resect_collection resect_type_fields(resect_type type);

__attribute__((visibility("default"))) resect_decl resect_type_get_declaration(resect_type type);

__attribute__((visibility("default"))) resect_type_category resect_type_get_category(resect_type type);

__attribute__((visibility("default"))) resect_bool resect_type_is_const_qualified(resect_type decl);

__attribute__((visibility("default"))) resect_bool resect_type_is_pod(resect_type decl);

__attribute__((visibility("default"))) resect_collection resect_type_template_arguments(resect_type type);

__attribute__((visibility("default"))) resect_bool resect_type_is_undeclared(resect_type type);




__attribute__((visibility("default"))) resect_template_argument_kind resect_template_argument_get_kind(resect_template_argument arg);

__attribute__((visibility("default"))) resect_type resect_template_argument_get_type(resect_template_argument arg);

__attribute__((visibility("default"))) long long resect_template_argument_get_value(resect_template_argument arg);

__attribute__((visibility("default"))) int resect_template_argument_get_position(resect_template_argument arg);




__attribute__((visibility("default"))) long long resect_array_get_size(resect_type type);

__attribute__((visibility("default"))) resect_type resect_array_get_element_type(resect_type type);




__attribute__((visibility("default"))) resect_type resect_pointer_get_pointee_type(resect_type type);




__attribute__((visibility("default"))) resect_type resect_reference_get_pointee_type(resect_type type);

__attribute__((visibility("default"))) resect_bool resect_reference_is_lvalue(resect_type type);




__attribute__((visibility("default"))) resect_type resect_function_proto_get_result_type(resect_type type);

__attribute__((visibility("default"))) resect_collection resect_function_proto_parameters(resect_type type);

__attribute__((visibility("default"))) resect_bool resect_function_proto_is_variadic(resect_type type);




__attribute__((visibility("default"))) resect_decl_kind resect_decl_get_kind(resect_decl decl);

__attribute__((visibility("default"))) const char *resect_decl_get_id(resect_decl decl);

__attribute__((visibility("default"))) const char *resect_decl_get_name(resect_decl decl);

__attribute__((visibility("default"))) const char *resect_decl_get_namespace(resect_decl decl);

__attribute__((visibility("default"))) const char *resect_decl_get_mangled_name(resect_decl decl);

__attribute__((visibility("default"))) resect_location resect_decl_get_location(resect_decl decl);

__attribute__((visibility("default"))) const char *resect_decl_get_comment(resect_decl decl);

__attribute__((visibility("default"))) resect_access_specifier resect_decl_get_access_specifier(resect_decl decl);

__attribute__((visibility("default"))) resect_decl resect_decl_get_template(resect_decl decl);

__attribute__((visibility("default"))) resect_bool resect_decl_is_partially_specialized(resect_decl decl);

__attribute__((visibility("default"))) resect_bool resect_decl_is_template(resect_decl decl);

__attribute__((visibility("default"))) resect_collection resect_decl_template_parameters(resect_decl decl);

__attribute__((visibility("default"))) resect_type resect_decl_get_type(resect_decl decl);

__attribute__((visibility("default"))) resect_decl resect_decl_get_owner(resect_decl decl);

__attribute__((visibility("default"))) resect_collection resect_decl_template_arguments(resect_decl decl);

__attribute__((visibility("default"))) const char *resect_decl_get_source(resect_decl decl);

__attribute__((visibility("default"))) resect_linkage_kind resect_decl_get_linkage(resect_decl decl);

__attribute__((visibility("default"))) resect_bool resect_decl_is_forward(resect_decl decl);

__attribute__((visibility("default"))) resect_inclusion_status resect_decl_get_inclusion_status(resect_decl decl);




__attribute__((visibility("default"))) resect_collection resect_unit_declarations(resect_translation_unit unit);

__attribute__((visibility("default"))) resect_language resect_unit_get_language(resect_translation_unit unit);




__attribute__((visibility("default"))) long long resect_field_get_offset(resect_decl decl);

__attribute__((visibility("default"))) resect_bool resect_field_is_bitfield(resect_decl decl);

__attribute__((visibility("default"))) long long resect_field_get_width(resect_decl decl);

__attribute__((visibility("default"))) resect_collection resect_record_fields(resect_decl decl);

__attribute__((visibility("default"))) resect_collection resect_record_methods(resect_decl decl);

__attribute__((visibility("default"))) resect_collection resect_record_parents(resect_decl decl);

__attribute__((visibility("default"))) resect_bool resect_record_is_abstract(resect_decl decl);




__attribute__((visibility("default"))) long long resect_enum_constant_value(resect_decl decl);

__attribute__((visibility("default"))) unsigned long long resect_enum_constant_unsigned_value(resect_decl decl);

__attribute__((visibility("default"))) resect_bool resect_enum_constant_is_unsigned(resect_decl decl);

__attribute__((visibility("default"))) resect_collection resect_enum_constants(resect_decl decl);

__attribute__((visibility("default"))) resect_type resect_enum_get_type(resect_decl decl);




__attribute__((visibility("default"))) resect_collection resect_function_parameters(resect_decl decl);

__attribute__((visibility("default"))) resect_type resect_function_get_result_type(resect_decl decl);

__attribute__((visibility("default"))) resect_storage_class resect_function_get_storage_class(resect_decl decl);

__attribute__((visibility("default"))) resect_bool resect_function_is_variadic(resect_decl decl);

__attribute__((visibility("default"))) resect_bool resect_function_is_inlined(resect_decl decl);





__attribute__((visibility("default"))) resect_variable_kind resect_variable_get_kind(resect_decl decl);

__attribute__((visibility("default"))) resect_type resect_variable_get_type(resect_decl decl);

__attribute__((visibility("default"))) long long resect_variable_get_value_as_int(resect_decl decl);

__attribute__((visibility("default"))) double resect_variable_get_value_as_float(resect_decl decl);

__attribute__((visibility("default"))) const char *resect_variable_get_value_as_string(resect_decl decl);

__attribute__((visibility("default"))) resect_storage_class resect_variable_get_storage_class(resect_decl decl);




__attribute__((visibility("default"))) resect_type resect_typedef_get_aliased_type(resect_decl decl);




__attribute__((visibility("default"))) resect_collection resect_method_parameters(resect_decl decl);

__attribute__((visibility("default"))) resect_type resect_method_get_result_type(resect_decl decl);

__attribute__((visibility("default"))) resect_storage_class resect_method_get_storage_class(resect_decl decl);

__attribute__((visibility("default"))) resect_bool resect_method_is_variadic(resect_decl decl);

__attribute__((visibility("default"))) resect_bool resect_method_is_pure_virtual(resect_decl decl);

__attribute__((visibility("default"))) resect_bool resect_method_is_virtual(resect_decl decl);

__attribute__((visibility("default"))) resect_bool resect_method_is_const(resect_decl decl);




__attribute__((visibility("default"))) resect_bool resect_macro_is_function_like(resect_decl decl);




__attribute__((visibility("default"))) resect_template_parameter_kind resect_template_parameter_get_kind(resect_decl param);




__attribute__((visibility("default"))) resect_parse_options resect_options_create();

__attribute__((visibility("default"))) void resect_options_add(resect_parse_options opts, const char *key, const char *value);

__attribute__((visibility("default"))) void resect_options_add_single_arg(resect_parse_options opts, const char *value);

__attribute__((visibility("default"))) void resect_options_add_concat(resect_parse_options opts, const char *key, const char *value);

__attribute__((visibility("default"))) void resect_options_include_definition(resect_parse_options opts, const char *name);

__attribute__((visibility("default"))) void resect_options_include_source(resect_parse_options opts, const char *source);

__attribute__((visibility("default"))) void resect_options_exclude_definition(resect_parse_options opts, const char *name);

__attribute__((visibility("default"))) void resect_options_exclude_source(resect_parse_options opts, const char *source);

__attribute__((visibility("default"))) void resect_options_enforce_definition(resect_parse_options opts, const char *name);

__attribute__((visibility("default"))) void resect_options_enforce_source(resect_parse_options opts, const char *source);

__attribute__((visibility("default"))) void resect_options_add_include_path(resect_parse_options opts, const char *path);

__attribute__((visibility("default"))) void resect_options_add_system_include_path(resect_parse_options opts, const char *path);

__attribute__((visibility("default"))) void resect_options_add_framework_path(resect_parse_options opts, const char *framework);

__attribute__((visibility("default"))) void resect_options_add_language(resect_parse_options opts, const char *lang);

__attribute__((visibility("default"))) void resect_options_add_define(resect_parse_options opts, const char *name, const char *value);

__attribute__((visibility("default"))) void resect_options_add_standard(resect_parse_options opts, const char *standard);

__attribute__((visibility("default"))) void resect_options_add_abi(resect_parse_options opts, const char *value);

__attribute__((visibility("default"))) void resect_options_add_arch(resect_parse_options opts, const char *value);

__attribute__((visibility("default"))) void resect_options_add_cpu(resect_parse_options opts, const char *value);

__attribute__((visibility("default"))) void resect_options_add_target(resect_parse_options opts, const char *target);

__attribute__((visibility("default"))) void resect_options_add_intrinsic(resect_parse_options opts, const char *target);

__attribute__((visibility("default"))) void resect_options_intrinsic(resect_parse_options opts, resect_option_intrinsic intrinsic);

__attribute__((visibility("default"))) void resect_options_single_header(resect_parse_options opts);

__attribute__((visibility("default"))) void resect_options_print_diagnostics(resect_parse_options opts);

__attribute__((visibility("default"))) void resect_options_free(resect_parse_options opts);




__attribute__((visibility("default"))) resect_translation_unit resect_parse(const char *filename, resect_parse_options options);

__attribute__((visibility("default"))) void resect_free(resect_translation_unit result);
# 2 "util.c" 2


# 1 "/usr/include/assert.h" 1 3 4
# 64 "/usr/include/assert.h" 3 4




# 67 "/usr/include/assert.h" 3 4
extern void __assert_fail (const char *__assertion, const char *__file,
      unsigned int __line, const char *__function)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));


extern void __assert_perror_fail (int __errnum, const char *__file,
      unsigned int __line, const char *__function)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));




extern void __assert (const char *__assertion, const char *__file, int __line)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));



# 5 "util.c" 2
# 1 "/usr/include/string.h" 1 3 4
# 26 "/usr/include/string.h" 3 4
# 1 "/usr/include/bits/libc-header-start.h" 1 3 4
# 27 "/usr/include/string.h" 2 3 4






# 1 "/usr/lib64/gcc/x86_64-suse-linux/13/include/stddef.h" 1 3 4
# 34 "/usr/include/string.h" 2 3 4
# 43 "/usr/include/string.h" 3 4
extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
       size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, const void *__src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));





extern void *memccpy (void *__restrict __dest, const void *__restrict __src,
        int __c, size_t __n)
    __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__access__ (__write_only__, 1, 4)));




extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int memcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 80 "/usr/include/string.h" 3 4
extern int __memcmpeq (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 107 "/usr/include/string.h" 3 4
extern void *memchr (const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 141 "/usr/include/string.h" 3 4
extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, const char *__restrict __src,
        size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
    __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) __attribute__ ((__access__ (__write_only__, 1, 3)));



# 1 "/usr/include/bits/types/locale_t.h" 1 3 4
# 22 "/usr/include/bits/types/locale_t.h" 3 4
# 1 "/usr/include/bits/types/__locale_t.h" 1 3 4
# 27 "/usr/include/bits/types/__locale_t.h" 3 4
struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
};

typedef struct __locale_struct *__locale_t;
# 23 "/usr/include/bits/types/locale_t.h" 2 3 4

typedef __locale_t locale_t;
# 173 "/usr/include/string.h" 2 3 4


extern int strcoll_l (const char *__s1, const char *__s2, locale_t __l)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));


extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
    locale_t __l) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)))
     __attribute__ ((__access__ (__write_only__, 1, 3)));





extern char *strdup (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));






extern char *strndup (const char *__string, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
# 246 "/usr/include/string.h" 3 4
extern char *strchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 273 "/usr/include/string.h" 3 4
extern char *strrchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 286 "/usr/include/string.h" 3 4
extern char *strchrnul (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern size_t strcspn (const char *__s, const char *__reject)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 323 "/usr/include/string.h" 3 4
extern char *strpbrk (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 350 "/usr/include/string.h" 3 4
extern char *strstr (const char *__haystack, const char *__needle)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strtok (char *__restrict __s, const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern char *__strtok_r (char *__restrict __s,
    const char *__restrict __delim,
    char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, const char *__restrict __delim,
         char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
# 380 "/usr/include/string.h" 3 4
extern char *strcasestr (const char *__haystack, const char *__needle)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));







extern void *memmem (const void *__haystack, size_t __haystacklen,
       const void *__needle, size_t __needlelen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 3)))
    __attribute__ ((__access__ (__read_only__, 1, 2)))
    __attribute__ ((__access__ (__read_only__, 3, 4)));



extern void *__mempcpy (void *__restrict __dest,
   const void *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern void *mempcpy (void *__restrict __dest,
        const void *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern size_t strlen (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern size_t strnlen (const char *__string, size_t __maxlen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern char *strerror (int __errnum) __attribute__ ((__nothrow__ , __leaf__));
# 432 "/usr/include/string.h" 3 4
extern int strerror_r (int __errnum, char *__buf, size_t __buflen) __asm__ ("" "__xpg_strerror_r") __attribute__ ((__nothrow__ , __leaf__))

                        __attribute__ ((__nonnull__ (2)))
    __attribute__ ((__access__ (__write_only__, 2, 3)));
# 458 "/usr/include/string.h" 3 4
extern char *strerror_l (int __errnum, locale_t __l) __attribute__ ((__nothrow__ , __leaf__));



# 1 "/usr/include/strings.h" 1 3 4
# 23 "/usr/include/strings.h" 3 4
# 1 "/usr/lib64/gcc/x86_64-suse-linux/13/include/stddef.h" 1 3 4
# 24 "/usr/include/strings.h" 2 3 4










extern int bcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern void bcopy (const void *__src, void *__dest, size_t __n)
  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 68 "/usr/include/strings.h" 3 4
extern char *index (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 96 "/usr/include/strings.h" 3 4
extern char *rindex (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));






extern int ffs (int __i) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern int ffsl (long int __l) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
__extension__ extern int ffsll (long long int __ll)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int strcasecmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));






extern int strcasecmp_l (const char *__s1, const char *__s2, locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));



extern int strncasecmp_l (const char *__s1, const char *__s2,
     size_t __n, locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 4)));



# 463 "/usr/include/string.h" 2 3 4



extern void explicit_bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)))
    __attribute__ ((__access__ (__write_only__, 1, 2)));



extern char *strsep (char **__restrict __stringp,
       const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strsignal (int __sig) __attribute__ ((__nothrow__ , __leaf__));
# 489 "/usr/include/string.h" 3 4
extern char *__stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern char *__stpncpy (char *__restrict __dest,
   const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern size_t strlcpy (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__access__ (__write_only__, 1, 3)));



extern size_t strlcat (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__access__ (__read_write__, 1, 3)));
# 552 "/usr/include/string.h" 3 4

# 6 "util.c" 2
# 1 "/usr/lib64/gcc/x86_64-suse-linux/13/include/stdarg.h" 1 3 4
# 40 "/usr/lib64/gcc/x86_64-suse-linux/13/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 103 "/usr/lib64/gcc/x86_64-suse-linux/13/include/stdarg.h" 3 4
typedef __gnuc_va_list va_list;
# 7 "util.c" 2
# 1 "/usr/include/sys/stat.h" 1 3 4
# 99 "/usr/include/sys/stat.h" 3 4


# 1 "/usr/include/bits/stat.h" 1 3 4
# 25 "/usr/include/bits/stat.h" 3 4
# 1 "/usr/include/bits/struct_stat.h" 1 3 4
# 26 "/usr/include/bits/struct_stat.h" 3 4
struct stat
  {



    __dev_t st_dev;




    __ino_t st_ino;







    __nlink_t st_nlink;
    __mode_t st_mode;

    __uid_t st_uid;
    __gid_t st_gid;

    int __pad0;

    __dev_t st_rdev;




    __off_t st_size;



    __blksize_t st_blksize;

    __blkcnt_t st_blocks;
# 74 "/usr/include/bits/struct_stat.h" 3 4
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
# 89 "/usr/include/bits/struct_stat.h" 3 4
    __syscall_slong_t __glibc_reserved[3];
# 99 "/usr/include/bits/struct_stat.h" 3 4
  };
# 26 "/usr/include/bits/stat.h" 2 3 4
# 102 "/usr/include/sys/stat.h" 2 3 4
# 205 "/usr/include/sys/stat.h" 3 4
extern int stat (const char *__restrict __file,
   struct stat *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int fstat (int __fd, struct stat *__buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
# 264 "/usr/include/sys/stat.h" 3 4
extern int fstatat (int __fd, const char *__restrict __file,
      struct stat *__restrict __buf, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
# 313 "/usr/include/sys/stat.h" 3 4
extern int lstat (const char *__restrict __file,
    struct stat *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
# 352 "/usr/include/sys/stat.h" 3 4
extern int chmod (const char *__file, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int lchmod (const char *__file, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




extern int fchmod (int __fd, __mode_t __mode) __attribute__ ((__nothrow__ , __leaf__));





extern int fchmodat (int __fd, const char *__file, __mode_t __mode,
       int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) ;






extern __mode_t umask (__mode_t __mask) __attribute__ ((__nothrow__ , __leaf__));
# 389 "/usr/include/sys/stat.h" 3 4
extern int mkdir (const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int mkdirat (int __fd, const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));






extern int mknod (const char *__path, __mode_t __mode, __dev_t __dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int mknodat (int __fd, const char *__path, __mode_t __mode,
      __dev_t __dev) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));





extern int mkfifo (const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int mkfifoat (int __fd, const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));






extern int utimensat (int __fd, const char *__path,
        const struct timespec __times[2],
        int __flags)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
# 452 "/usr/include/sys/stat.h" 3 4
extern int futimens (int __fd, const struct timespec __times[2]) __attribute__ ((__nothrow__ , __leaf__));
# 468 "/usr/include/sys/stat.h" 3 4

# 8 "util.c" 2

# 1 "uthash.h" 1
# 30 "uthash.h"
# 1 "/usr/lib64/gcc/x86_64-suse-linux/13/include/stddef.h" 1 3 4
# 145 "/usr/lib64/gcc/x86_64-suse-linux/13/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 425 "/usr/lib64/gcc/x86_64-suse-linux/13/include/stddef.h" 3 4
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
# 436 "/usr/lib64/gcc/x86_64-suse-linux/13/include/stddef.h" 3 4
} max_align_t;
# 31 "uthash.h" 2
# 76 "uthash.h"
# 1 "/usr/lib64/gcc/x86_64-suse-linux/13/include/stdint.h" 1 3 4
# 9 "/usr/lib64/gcc/x86_64-suse-linux/13/include/stdint.h" 3 4
# 1 "/usr/include/stdint.h" 1 3 4
# 26 "/usr/include/stdint.h" 3 4
# 1 "/usr/include/bits/libc-header-start.h" 1 3 4
# 27 "/usr/include/stdint.h" 2 3 4

# 1 "/usr/include/bits/wchar.h" 1 3 4
# 29 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 30 "/usr/include/stdint.h" 2 3 4







# 1 "/usr/include/bits/stdint-uintn.h" 1 3 4
# 24 "/usr/include/bits/stdint-uintn.h" 3 4
typedef __uint8_t uint8_t;
typedef __uint16_t uint16_t;
typedef __uint32_t uint32_t;
typedef __uint64_t uint64_t;
# 38 "/usr/include/stdint.h" 2 3 4





typedef __int_least8_t int_least8_t;
typedef __int_least16_t int_least16_t;
typedef __int_least32_t int_least32_t;
typedef __int_least64_t int_least64_t;


typedef __uint_least8_t uint_least8_t;
typedef __uint_least16_t uint_least16_t;
typedef __uint_least32_t uint_least32_t;
typedef __uint_least64_t uint_least64_t;





typedef signed char int_fast8_t;

typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
# 71 "/usr/include/stdint.h" 3 4
typedef unsigned char uint_fast8_t;

typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
# 87 "/usr/include/stdint.h" 3 4
typedef long int intptr_t;


typedef unsigned long int uintptr_t;
# 101 "/usr/include/stdint.h" 3 4
typedef __intmax_t intmax_t;
typedef __uintmax_t uintmax_t;
# 10 "/usr/lib64/gcc/x86_64-suse-linux/13/include/stdint.h" 2 3 4
# 77 "uthash.h" 2
# 1082 "uthash.h"

# 1082 "uthash.h"
typedef struct UT_hash_bucket {
   struct UT_hash_handle *hh_head;
   unsigned count;
# 1098 "uthash.h"
   unsigned expand_mult;

} UT_hash_bucket;





typedef struct UT_hash_table {
   UT_hash_bucket *buckets;
   unsigned num_buckets, log2_num_buckets;
   unsigned num_items;
   struct UT_hash_handle *tail;
   ptrdiff_t hho;



   unsigned ideal_chain_maxlen;




   unsigned nonideal_items;







   unsigned ineff_expands, noexpand;

   uint32_t signature;






} UT_hash_table;

typedef struct UT_hash_handle {
   struct UT_hash_table *tbl;
   void *prev;
   void *next;
   struct UT_hash_handle *hh_prev;
   struct UT_hash_handle *hh_next;
   void *key;
   unsigned keylen;
   unsigned hashv;
} UT_hash_handle;
# 10 "util.c" 2
# 1 "resect_types_private.h" 1






# 1 "/usr/include/getopt.h" 1 3 4
# 35 "/usr/include/getopt.h" 3 4
# 1 "/usr/include/bits/getopt_core.h" 1 3 4
# 28 "/usr/include/bits/getopt_core.h" 3 4









# 36 "/usr/include/bits/getopt_core.h" 3 4
extern char *optarg;
# 50 "/usr/include/bits/getopt_core.h" 3 4
extern int optind;




extern int opterr;



extern int optopt;
# 91 "/usr/include/bits/getopt_core.h" 3 4
extern int getopt (int ___argc, char *const *___argv, const char *__shortopts)
       __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));


# 36 "/usr/include/getopt.h" 2 3 4
# 1 "/usr/include/bits/getopt_ext.h" 1 3 4
# 27 "/usr/include/bits/getopt_ext.h" 3 4

# 50 "/usr/include/bits/getopt_ext.h" 3 4
struct option
{
  const char *name;


  int has_arg;
  int *flag;
  int val;
};







extern int getopt_long (int ___argc, char *const *___argv,
   const char *__shortopts,
          const struct option *__longopts, int *__longind)
       __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
extern int getopt_long_only (int ___argc, char *const *___argv,
        const char *__shortopts,
               const struct option *__longopts, int *__longind)
       __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));


# 37 "/usr/include/getopt.h" 2 3 4
# 8 "resect_types_private.h" 2
# 1 "/usr/lib64/gcc/x86_64-suse-linux/13/include/stdbool.h" 1 3 4
# 9 "resect_types_private.h" 2

# 1 "/usr/include/clang-c/Index.h" 1 3 4
# 19 "/usr/include/clang-c/Index.h" 3 4
# 1 "/usr/include/clang-c/BuildSystem.h" 1 3 4
# 17 "/usr/include/clang-c/BuildSystem.h" 3 4
# 1 "/usr/include/clang-c/CXErrorCode.h" 1 3 4
# 17 "/usr/include/clang-c/CXErrorCode.h" 3 4
# 1 "/usr/include/clang-c/ExternC.h" 1 3 4
# 18 "/usr/include/clang-c/CXErrorCode.h" 2 3 4
# 1 "/usr/include/clang-c/Platform.h" 1 3 4
# 19 "/usr/include/clang-c/Platform.h" 3 4

# 51 "/usr/include/clang-c/Platform.h" 3 4

# 19 "/usr/include/clang-c/CXErrorCode.h" 2 3 4









enum CXErrorCode {



  CXError_Success = 0,







  CXError_Failure = 1,




  CXError_Crashed = 2,





  CXError_InvalidArguments = 3,




  CXError_ASTReadError = 4
};


# 18 "/usr/include/clang-c/BuildSystem.h" 2 3 4
# 1 "/usr/include/clang-c/CXString.h" 1 3 4
# 20 "/usr/include/clang-c/CXString.h" 3 4

# 37 "/usr/include/clang-c/CXString.h" 3 4
typedef struct {
  const void *data;
  unsigned private_flags;
} CXString;

typedef struct {
  CXString *Strings;
  unsigned Count;
} CXStringSet;




 const char *clang_getCString(CXString string);




 void clang_disposeString(CXString string);




 void clang_disposeStringSet(CXStringSet *set);






# 19 "/usr/include/clang-c/BuildSystem.h" 2 3 4




# 33 "/usr/include/clang-c/BuildSystem.h" 3 4
 unsigned long long clang_getBuildSessionTimestamp(void);





typedef struct CXVirtualFileOverlayImpl *CXVirtualFileOverlay;







 CXVirtualFileOverlay
clang_VirtualFileOverlay_create(unsigned options);






 enum CXErrorCode
clang_VirtualFileOverlay_addFileMapping(CXVirtualFileOverlay,
                                        const char *virtualPath,
                                        const char *realPath);







 enum CXErrorCode
clang_VirtualFileOverlay_setCaseSensitivity(CXVirtualFileOverlay,
                                            int caseSensitive);
# 79 "/usr/include/clang-c/BuildSystem.h" 3 4
 enum CXErrorCode
clang_VirtualFileOverlay_writeToBuffer(CXVirtualFileOverlay, unsigned options,
                                       char **out_buffer_ptr,
                                       unsigned *out_buffer_size);







 void clang_free(void *buffer);




 void clang_VirtualFileOverlay_dispose(CXVirtualFileOverlay);




typedef struct CXModuleMapDescriptorImpl *CXModuleMapDescriptor;







 CXModuleMapDescriptor
clang_ModuleMapDescriptor_create(unsigned options);





 enum CXErrorCode
clang_ModuleMapDescriptor_setFrameworkModuleName(CXModuleMapDescriptor,
                                                 const char *name);





 enum CXErrorCode
clang_ModuleMapDescriptor_setUmbrellaHeader(CXModuleMapDescriptor,
                                            const char *name);
# 136 "/usr/include/clang-c/BuildSystem.h" 3 4
 enum CXErrorCode
clang_ModuleMapDescriptor_writeToBuffer(CXModuleMapDescriptor, unsigned options,
                                       char **out_buffer_ptr,
                                       unsigned *out_buffer_size);




 void clang_ModuleMapDescriptor_dispose(CXModuleMapDescriptor);






# 20 "/usr/include/clang-c/Index.h" 2 3 4
# 1 "/usr/include/clang-c/CXDiagnostic.h" 1 3 4
# 17 "/usr/include/clang-c/CXDiagnostic.h" 3 4
# 1 "/usr/include/clang-c/CXSourceLocation.h" 1 3 4
# 17 "/usr/include/clang-c/CXSourceLocation.h" 3 4
# 1 "/usr/include/clang-c/CXFile.h" 1 3 4
# 17 "/usr/include/clang-c/CXFile.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 29 "/usr/include/time.h" 3 4
# 1 "/usr/lib64/gcc/x86_64-suse-linux/13/include/stddef.h" 1 3 4
# 30 "/usr/include/time.h" 2 3 4



# 1 "/usr/include/bits/time.h" 1 3 4
# 34 "/usr/include/time.h" 2 3 4





# 1 "/usr/include/bits/types/struct_tm.h" 1 3 4






struct tm
{
  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;


  long int tm_gmtoff;
  const char *tm_zone;




};
# 40 "/usr/include/time.h" 2 3 4
# 48 "/usr/include/time.h" 3 4
# 1 "/usr/include/bits/types/struct_itimerspec.h" 1 3 4







struct itimerspec
  {
    struct timespec it_interval;
    struct timespec it_value;
  };
# 49 "/usr/include/time.h" 2 3 4
struct sigevent;
# 68 "/usr/include/time.h" 3 4




extern clock_t clock (void) __attribute__ ((__nothrow__ , __leaf__));



extern time_t time (time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));


extern double difftime (time_t __time1, time_t __time0)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern time_t mktime (struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));
# 100 "/usr/include/time.h" 3 4
extern size_t strftime (char *__restrict __s, size_t __maxsize,
   const char *__restrict __format,
   const struct tm *__restrict __tp)
   __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3, 4)));
# 117 "/usr/include/time.h" 3 4
extern size_t strftime_l (char *__restrict __s, size_t __maxsize,
     const char *__restrict __format,
     const struct tm *__restrict __tp,
     locale_t __loc) __attribute__ ((__nothrow__ , __leaf__));
# 133 "/usr/include/time.h" 3 4
extern struct tm *gmtime (const time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));



extern struct tm *localtime (const time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));
# 155 "/usr/include/time.h" 3 4
extern struct tm *gmtime_r (const time_t *__restrict __timer,
       struct tm *__restrict __tp) __attribute__ ((__nothrow__ , __leaf__));



extern struct tm *localtime_r (const time_t *__restrict __timer,
          struct tm *__restrict __tp) __attribute__ ((__nothrow__ , __leaf__));
# 180 "/usr/include/time.h" 3 4
extern char *asctime (const struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));



extern char *ctime (const time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));
# 198 "/usr/include/time.h" 3 4
extern char *asctime_r (const struct tm *__restrict __tp,
   char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));



extern char *ctime_r (const time_t *__restrict __timer,
        char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));
# 218 "/usr/include/time.h" 3 4
extern char *__tzname[2];
extern int __daylight;
extern long int __timezone;




extern char *tzname[2];



extern void tzset (void) __attribute__ ((__nothrow__ , __leaf__));



extern int daylight;
extern long int timezone;
# 247 "/usr/include/time.h" 3 4
extern time_t timegm (struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));
# 264 "/usr/include/time.h" 3 4
extern time_t timelocal (struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));







extern int dysize (int __year) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
# 282 "/usr/include/time.h" 3 4
extern int nanosleep (const struct timespec *__requested_time,
        struct timespec *__remaining);


extern int clock_getres (clockid_t __clock_id, struct timespec *__res) __attribute__ ((__nothrow__ , __leaf__));


extern int clock_gettime (clockid_t __clock_id, struct timespec *__tp)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));


extern int clock_settime (clockid_t __clock_id, const struct timespec *__tp)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
# 324 "/usr/include/time.h" 3 4
extern int clock_nanosleep (clockid_t __clock_id, int __flags,
       const struct timespec *__req,
       struct timespec *__rem);
# 339 "/usr/include/time.h" 3 4
extern int clock_getcpuclockid (pid_t __pid, clockid_t *__clock_id) __attribute__ ((__nothrow__ , __leaf__));




extern int timer_create (clockid_t __clock_id,
    struct sigevent *__restrict __evp,
    timer_t *__restrict __timerid) __attribute__ ((__nothrow__ , __leaf__));


extern int timer_delete (timer_t __timerid) __attribute__ ((__nothrow__ , __leaf__));



extern int timer_settime (timer_t __timerid, int __flags,
     const struct itimerspec *__restrict __value,
     struct itimerspec *__restrict __ovalue) __attribute__ ((__nothrow__ , __leaf__));


extern int timer_gettime (timer_t __timerid, struct itimerspec *__value)
     __attribute__ ((__nothrow__ , __leaf__));
# 377 "/usr/include/time.h" 3 4
extern int timer_getoverrun (timer_t __timerid) __attribute__ ((__nothrow__ , __leaf__));






extern int timespec_get (struct timespec *__ts, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 453 "/usr/include/time.h" 3 4

# 18 "/usr/include/clang-c/CXFile.h" 2 3 4






# 34 "/usr/include/clang-c/CXFile.h" 3 4
typedef void *CXFile;




 CXString clang_getFileName(CXFile SFile);




 time_t clang_getFileTime(CXFile SFile);





typedef struct {
  unsigned long long data[3];
} CXFileUniqueID;
# 62 "/usr/include/clang-c/CXFile.h" 3 4
 int clang_getFileUniqueID(CXFile file, CXFileUniqueID *outID);





 int clang_File_isEqual(CXFile file1, CXFile file2);






 CXString clang_File_tryGetRealPathName(CXFile file);






# 18 "/usr/include/clang-c/CXSourceLocation.h" 2 3 4





# 44 "/usr/include/clang-c/CXSourceLocation.h" 3 4
typedef struct {
  const void *ptr_data[2];
  unsigned int_data;
} CXSourceLocation;







typedef struct {
  const void *ptr_data[2];
  unsigned begin_int_data;
  unsigned end_int_data;
} CXSourceRange;




 CXSourceLocation clang_getNullLocation(void);
# 74 "/usr/include/clang-c/CXSourceLocation.h" 3 4
 unsigned clang_equalLocations(CXSourceLocation loc1,
                                             CXSourceLocation loc2);




 int clang_Location_isInSystemHeader(CXSourceLocation location);





 int clang_Location_isFromMainFile(CXSourceLocation location);




 CXSourceRange clang_getNullRange(void);





 CXSourceRange clang_getRange(CXSourceLocation begin,
                                            CXSourceLocation end);






 unsigned clang_equalRanges(CXSourceRange range1,
                                          CXSourceRange range2);




 int clang_Range_isNull(CXSourceRange range);
# 135 "/usr/include/clang-c/CXSourceLocation.h" 3 4
 void clang_getExpansionLocation(CXSourceLocation location,
                                               CXFile *file, unsigned *line,
                                               unsigned *column,
                                               unsigned *offset);
# 180 "/usr/include/clang-c/CXSourceLocation.h" 3 4
 void clang_getPresumedLocation(CXSourceLocation location,
                                              CXString *filename,
                                              unsigned *line, unsigned *column);
# 192 "/usr/include/clang-c/CXSourceLocation.h" 3 4
 void clang_getInstantiationLocation(CXSourceLocation location,
                                                   CXFile *file, unsigned *line,
                                                   unsigned *column,
                                                   unsigned *offset);
# 219 "/usr/include/clang-c/CXSourceLocation.h" 3 4
 void clang_getSpellingLocation(CXSourceLocation location,
                                              CXFile *file, unsigned *line,
                                              unsigned *column,
                                              unsigned *offset);
# 247 "/usr/include/clang-c/CXSourceLocation.h" 3 4
 void clang_getFileLocation(CXSourceLocation location,
                                          CXFile *file, unsigned *line,
                                          unsigned *column, unsigned *offset);





 CXSourceLocation clang_getRangeStart(CXSourceRange range);





 CXSourceLocation clang_getRangeEnd(CXSourceRange range);




typedef struct {

  unsigned count;



  CXSourceRange *ranges;
} CXSourceRangeList;




 void clang_disposeSourceRangeList(CXSourceRangeList *ranges);






# 18 "/usr/include/clang-c/CXDiagnostic.h" 2 3 4





# 33 "/usr/include/clang-c/CXDiagnostic.h" 3 4
enum CXDiagnosticSeverity {




  CXDiagnostic_Ignored = 0,





  CXDiagnostic_Note = 1,





  CXDiagnostic_Warning = 2,




  CXDiagnostic_Error = 3,






  CXDiagnostic_Fatal = 4
};





typedef void *CXDiagnostic;




typedef void *CXDiagnosticSet;




 unsigned clang_getNumDiagnosticsInSet(CXDiagnosticSet Diags);
# 90 "/usr/include/clang-c/CXDiagnostic.h" 3 4
 CXDiagnostic clang_getDiagnosticInSet(CXDiagnosticSet Diags,
                                                     unsigned Index);





enum CXLoadDiag_Error {



  CXLoadDiag_None = 0,





  CXLoadDiag_Unknown = 1,





  CXLoadDiag_CannotLoad = 2,





  CXLoadDiag_InvalidFile = 3
};
# 135 "/usr/include/clang-c/CXDiagnostic.h" 3 4
 CXDiagnosticSet clang_loadDiagnostics(
    const char *file, enum CXLoadDiag_Error *error, CXString *errorString);




 void clang_disposeDiagnosticSet(CXDiagnosticSet Diags);







 CXDiagnosticSet clang_getChildDiagnostics(CXDiagnostic D);




 void clang_disposeDiagnostic(CXDiagnostic Diagnostic);







enum CXDiagnosticDisplayOptions {
# 176 "/usr/include/clang-c/CXDiagnostic.h" 3 4
  CXDiagnostic_DisplaySourceLocation = 0x01,







  CXDiagnostic_DisplayColumn = 0x02,
# 194 "/usr/include/clang-c/CXDiagnostic.h" 3 4
  CXDiagnostic_DisplaySourceRanges = 0x04,
# 203 "/usr/include/clang-c/CXDiagnostic.h" 3 4
  CXDiagnostic_DisplayOption = 0x08,
# 212 "/usr/include/clang-c/CXDiagnostic.h" 3 4
  CXDiagnostic_DisplayCategoryId = 0x10,
# 221 "/usr/include/clang-c/CXDiagnostic.h" 3 4
  CXDiagnostic_DisplayCategoryName = 0x20
};
# 239 "/usr/include/clang-c/CXDiagnostic.h" 3 4
 CXString clang_formatDiagnostic(CXDiagnostic Diagnostic,
                                               unsigned Options);
# 249 "/usr/include/clang-c/CXDiagnostic.h" 3 4
 unsigned clang_defaultDiagnosticDisplayOptions(void);




 enum CXDiagnosticSeverity
    clang_getDiagnosticSeverity(CXDiagnostic);







 CXSourceLocation clang_getDiagnosticLocation(CXDiagnostic);




 CXString clang_getDiagnosticSpelling(CXDiagnostic);
# 282 "/usr/include/clang-c/CXDiagnostic.h" 3 4
 CXString clang_getDiagnosticOption(CXDiagnostic Diag,
                                                  CXString *Disable);
# 295 "/usr/include/clang-c/CXDiagnostic.h" 3 4
 unsigned clang_getDiagnosticCategory(CXDiagnostic);
# 307 "/usr/include/clang-c/CXDiagnostic.h" 3 4
__attribute__((deprecated)) CXString
clang_getDiagnosticCategoryName(unsigned Category);






 CXString clang_getDiagnosticCategoryText(CXDiagnostic);





 unsigned clang_getDiagnosticNumRanges(CXDiagnostic);
# 336 "/usr/include/clang-c/CXDiagnostic.h" 3 4
 CXSourceRange clang_getDiagnosticRange(CXDiagnostic Diagnostic,
                                                      unsigned Range);





 unsigned clang_getDiagnosticNumFixIts(CXDiagnostic Diagnostic);
# 370 "/usr/include/clang-c/CXDiagnostic.h" 3 4
 CXString clang_getDiagnosticFixIt(
    CXDiagnostic Diagnostic, unsigned FixIt, CXSourceRange *ReplacementRange);






# 21 "/usr/include/clang-c/Index.h" 2 3 4
# 51 "/usr/include/clang-c/Index.h" 3 4

# 76 "/usr/include/clang-c/Index.h" 3 4
typedef void *CXIndex;





typedef struct CXTargetInfoImpl *CXTargetInfo;




typedef struct CXTranslationUnitImpl *CXTranslationUnit;





typedef void *CXClientData;
# 102 "/usr/include/clang-c/Index.h" 3 4
struct CXUnsavedFile {





  const char *Filename;




  const char *Contents;




  unsigned long Length;
};






enum CXAvailabilityKind {



  CXAvailability_Available,




  CXAvailability_Deprecated,



  CXAvailability_NotAvailable,




  CXAvailability_NotAccessible
};




typedef struct CXVersion {




  int Major;





  int Minor;





  int Subminor;
} CXVersion;






enum CXCursor_ExceptionSpecificationKind {



  CXCursor_ExceptionSpecificationKind_None,




  CXCursor_ExceptionSpecificationKind_DynamicNone,




  CXCursor_ExceptionSpecificationKind_Dynamic,




  CXCursor_ExceptionSpecificationKind_MSAny,




  CXCursor_ExceptionSpecificationKind_BasicNoexcept,




  CXCursor_ExceptionSpecificationKind_ComputedNoexcept,




  CXCursor_ExceptionSpecificationKind_Unevaluated,




  CXCursor_ExceptionSpecificationKind_Uninstantiated,




  CXCursor_ExceptionSpecificationKind_Unparsed,




  CXCursor_ExceptionSpecificationKind_NoThrow
};
# 267 "/usr/include/clang-c/Index.h" 3 4
 CXIndex clang_createIndex(int excludeDeclarationsFromPCH,
                                         int displayDiagnostics);







 void clang_disposeIndex(CXIndex index);

typedef enum {



  CXGlobalOpt_None = 0x0,
# 291 "/usr/include/clang-c/Index.h" 3 4
  CXGlobalOpt_ThreadBackgroundPriorityForIndexing = 0x1,
# 300 "/usr/include/clang-c/Index.h" 3 4
  CXGlobalOpt_ThreadBackgroundPriorityForEditing = 0x2,





  CXGlobalOpt_ThreadBackgroundPriorityForAll =
      CXGlobalOpt_ThreadBackgroundPriorityForIndexing |
      CXGlobalOpt_ThreadBackgroundPriorityForEditing

} CXGlobalOptFlags;
# 325 "/usr/include/clang-c/Index.h" 3 4
 void clang_CXIndex_setGlobalOptions(CXIndex, unsigned options);







 unsigned clang_CXIndex_getGlobalOptions(CXIndex);
# 342 "/usr/include/clang-c/Index.h" 3 4
 void
clang_CXIndex_setInvocationEmissionPathOption(CXIndex, const char *Path);






 unsigned clang_isFileMultipleIncludeGuarded(CXTranslationUnit tu,
                                                           CXFile file);
# 363 "/usr/include/clang-c/Index.h" 3 4
 CXFile clang_getFile(CXTranslationUnit tu,
                                    const char *file_name);
# 378 "/usr/include/clang-c/Index.h" 3 4
 const char *clang_getFileContents(CXTranslationUnit tu,
                                                 CXFile file, size_t *size);





 CXSourceLocation clang_getLocation(CXTranslationUnit tu,
                                                  CXFile file, unsigned line,
                                                  unsigned column);




 CXSourceLocation clang_getLocationForOffset(CXTranslationUnit tu,
                                                           CXFile file,
                                                           unsigned offset);







 CXSourceRangeList *clang_getSkippedRanges(CXTranslationUnit tu,
                                                         CXFile file);
# 412 "/usr/include/clang-c/Index.h" 3 4
 CXSourceRangeList *
clang_getAllSkippedRanges(CXTranslationUnit tu);





 unsigned clang_getNumDiagnostics(CXTranslationUnit Unit);
# 430 "/usr/include/clang-c/Index.h" 3 4
 CXDiagnostic clang_getDiagnostic(CXTranslationUnit Unit,
                                                unsigned Index);







 CXDiagnosticSet
clang_getDiagnosticSetFromTU(CXTranslationUnit Unit);
# 455 "/usr/include/clang-c/Index.h" 3 4
 CXString
clang_getTranslationUnitSpelling(CXTranslationUnit CTUnit);
# 498 "/usr/include/clang-c/Index.h" 3 4
 CXTranslationUnit clang_createTranslationUnitFromSourceFile(
    CXIndex CIdx, const char *source_filename, int num_clang_command_line_args,
    const char *const *clang_command_line_args, unsigned num_unsaved_files,
    struct CXUnsavedFile *unsaved_files);







 CXTranslationUnit
clang_createTranslationUnit(CXIndex CIdx, const char *ast_filename);
# 520 "/usr/include/clang-c/Index.h" 3 4
 enum CXErrorCode
clang_createTranslationUnit2(CXIndex CIdx, const char *ast_filename,
                             CXTranslationUnit *out_TU);
# 531 "/usr/include/clang-c/Index.h" 3 4
enum CXTranslationUnit_Flags {




  CXTranslationUnit_None = 0x0,
# 548 "/usr/include/clang-c/Index.h" 3 4
  CXTranslationUnit_DetailedPreprocessingRecord = 0x01,
# 561 "/usr/include/clang-c/Index.h" 3 4
  CXTranslationUnit_Incomplete = 0x02,
# 577 "/usr/include/clang-c/Index.h" 3 4
  CXTranslationUnit_PrecompiledPreamble = 0x04,
# 587 "/usr/include/clang-c/Index.h" 3 4
  CXTranslationUnit_CacheCompletionResults = 0x08,
# 596 "/usr/include/clang-c/Index.h" 3 4
  CXTranslationUnit_ForSerialization = 0x10,







  CXTranslationUnit_CXXChainedPCH = 0x20,
# 613 "/usr/include/clang-c/Index.h" 3 4
  CXTranslationUnit_SkipFunctionBodies = 0x40,






  CXTranslationUnit_IncludeBriefCommentsInCodeCompletion = 0x80,







  CXTranslationUnit_CreatePreambleOnFirstParse = 0x100,
# 639 "/usr/include/clang-c/Index.h" 3 4
  CXTranslationUnit_KeepGoing = 0x200,




  CXTranslationUnit_SingleFileParse = 0x400,







  CXTranslationUnit_LimitSkipFunctionBodiesToPreamble = 0x800,




  CXTranslationUnit_IncludeAttributedTypes = 0x1000,




  CXTranslationUnit_VisitImplicitAttributes = 0x2000,
# 672 "/usr/include/clang-c/Index.h" 3 4
  CXTranslationUnit_IgnoreNonErrorsFromIncludedFiles = 0x4000,




  CXTranslationUnit_RetainExcludedConditionalBlocks = 0x8000
};
# 692 "/usr/include/clang-c/Index.h" 3 4
 unsigned clang_defaultEditingTranslationUnitOptions(void);







 CXTranslationUnit clang_parseTranslationUnit(
    CXIndex CIdx, const char *source_filename,
    const char *const *command_line_args, int num_command_line_args,
    struct CXUnsavedFile *unsaved_files, unsigned num_unsaved_files,
    unsigned options);
# 750 "/usr/include/clang-c/Index.h" 3 4
 enum CXErrorCode clang_parseTranslationUnit2(
    CXIndex CIdx, const char *source_filename,
    const char *const *command_line_args, int num_command_line_args,
    struct CXUnsavedFile *unsaved_files, unsigned num_unsaved_files,
    unsigned options, CXTranslationUnit *out_TU);






 enum CXErrorCode clang_parseTranslationUnit2FullArgv(
    CXIndex CIdx, const char *source_filename,
    const char *const *command_line_args, int num_command_line_args,
    struct CXUnsavedFile *unsaved_files, unsigned num_unsaved_files,
    unsigned options, CXTranslationUnit *out_TU);
# 774 "/usr/include/clang-c/Index.h" 3 4
enum CXSaveTranslationUnit_Flags {



  CXSaveTranslationUnit_None = 0x0
};
# 790 "/usr/include/clang-c/Index.h" 3 4
 unsigned clang_defaultSaveOptions(CXTranslationUnit TU);





enum CXSaveError {



  CXSaveError_None = 0,
# 809 "/usr/include/clang-c/Index.h" 3 4
  CXSaveError_Unknown = 1,
# 818 "/usr/include/clang-c/Index.h" 3 4
  CXSaveError_TranslationErrors = 2,





  CXSaveError_InvalidTU = 3
};
# 850 "/usr/include/clang-c/Index.h" 3 4
 int clang_saveTranslationUnit(CXTranslationUnit TU,
                                             const char *FileName,
                                             unsigned options);
# 861 "/usr/include/clang-c/Index.h" 3 4
 unsigned clang_suspendTranslationUnit(CXTranslationUnit);




 void clang_disposeTranslationUnit(CXTranslationUnit);
# 875 "/usr/include/clang-c/Index.h" 3 4
enum CXReparse_Flags {



  CXReparse_None = 0x0
};
# 892 "/usr/include/clang-c/Index.h" 3 4
 unsigned clang_defaultReparseOptions(CXTranslationUnit TU);
# 933 "/usr/include/clang-c/Index.h" 3 4
 int
clang_reparseTranslationUnit(CXTranslationUnit TU, unsigned num_unsaved_files,
                             struct CXUnsavedFile *unsaved_files,
                             unsigned options);




enum CXTUResourceUsageKind {
  CXTUResourceUsage_AST = 1,
  CXTUResourceUsage_Identifiers = 2,
  CXTUResourceUsage_Selectors = 3,
  CXTUResourceUsage_GlobalCompletionResults = 4,
  CXTUResourceUsage_SourceManagerContentCache = 5,
  CXTUResourceUsage_AST_SideTables = 6,
  CXTUResourceUsage_SourceManager_Membuffer_Malloc = 7,
  CXTUResourceUsage_SourceManager_Membuffer_MMap = 8,
  CXTUResourceUsage_ExternalASTSource_Membuffer_Malloc = 9,
  CXTUResourceUsage_ExternalASTSource_Membuffer_MMap = 10,
  CXTUResourceUsage_Preprocessor = 11,
  CXTUResourceUsage_PreprocessingRecord = 12,
  CXTUResourceUsage_SourceManager_DataStructures = 13,
  CXTUResourceUsage_Preprocessor_HeaderSearch = 14,
  CXTUResourceUsage_MEMORY_IN_BYTES_BEGIN = CXTUResourceUsage_AST,
  CXTUResourceUsage_MEMORY_IN_BYTES_END =
      CXTUResourceUsage_Preprocessor_HeaderSearch,

  CXTUResourceUsage_First = CXTUResourceUsage_AST,
  CXTUResourceUsage_Last = CXTUResourceUsage_Preprocessor_HeaderSearch
};






const char *clang_getTUResourceUsageName(enum CXTUResourceUsageKind kind);

typedef struct CXTUResourceUsageEntry {

  enum CXTUResourceUsageKind kind;


  unsigned long amount;
} CXTUResourceUsageEntry;




typedef struct CXTUResourceUsage {

  void *data;


  unsigned numEntries;



  CXTUResourceUsageEntry *entries;

} CXTUResourceUsage;





 CXTUResourceUsage
clang_getCXTUResourceUsage(CXTranslationUnit TU);

 void clang_disposeCXTUResourceUsage(CXTUResourceUsage usage);






 CXTargetInfo
clang_getTranslationUnitTargetInfo(CXTranslationUnit CTUnit);




 void clang_TargetInfo_dispose(CXTargetInfo Info);






 CXString clang_TargetInfo_getTriple(CXTargetInfo Info);






 int clang_TargetInfo_getPointerWidth(CXTargetInfo Info);
# 1038 "/usr/include/clang-c/Index.h" 3 4
enum CXCursorKind {
# 1049 "/usr/include/clang-c/Index.h" 3 4
  CXCursor_UnexposedDecl = 1,

  CXCursor_StructDecl = 2,

  CXCursor_UnionDecl = 3,

  CXCursor_ClassDecl = 4,

  CXCursor_EnumDecl = 5,




  CXCursor_FieldDecl = 6,

  CXCursor_EnumConstantDecl = 7,

  CXCursor_FunctionDecl = 8,

  CXCursor_VarDecl = 9,

  CXCursor_ParmDecl = 10,

  CXCursor_ObjCInterfaceDecl = 11,

  CXCursor_ObjCCategoryDecl = 12,

  CXCursor_ObjCProtocolDecl = 13,

  CXCursor_ObjCPropertyDecl = 14,

  CXCursor_ObjCIvarDecl = 15,

  CXCursor_ObjCInstanceMethodDecl = 16,

  CXCursor_ObjCClassMethodDecl = 17,

  CXCursor_ObjCImplementationDecl = 18,

  CXCursor_ObjCCategoryImplDecl = 19,

  CXCursor_TypedefDecl = 20,

  CXCursor_CXXMethod = 21,

  CXCursor_Namespace = 22,

  CXCursor_LinkageSpec = 23,

  CXCursor_Constructor = 24,

  CXCursor_Destructor = 25,

  CXCursor_ConversionFunction = 26,

  CXCursor_TemplateTypeParameter = 27,

  CXCursor_NonTypeTemplateParameter = 28,

  CXCursor_TemplateTemplateParameter = 29,

  CXCursor_FunctionTemplate = 30,

  CXCursor_ClassTemplate = 31,

  CXCursor_ClassTemplatePartialSpecialization = 32,

  CXCursor_NamespaceAlias = 33,

  CXCursor_UsingDirective = 34,

  CXCursor_UsingDeclaration = 35,

  CXCursor_TypeAliasDecl = 36,

  CXCursor_ObjCSynthesizeDecl = 37,

  CXCursor_ObjCDynamicDecl = 38,

  CXCursor_CXXAccessSpecifier = 39,

  CXCursor_FirstDecl = CXCursor_UnexposedDecl,
  CXCursor_LastDecl = CXCursor_CXXAccessSpecifier,


  CXCursor_FirstRef = 40,
  CXCursor_ObjCSuperClassRef = 40,
  CXCursor_ObjCProtocolRef = 41,
  CXCursor_ObjCClassRef = 42,
# 1153 "/usr/include/clang-c/Index.h" 3 4
  CXCursor_TypeRef = 43,
  CXCursor_CXXBaseSpecifier = 44,




  CXCursor_TemplateRef = 45,



  CXCursor_NamespaceRef = 46,




  CXCursor_MemberRef = 47,
# 1184 "/usr/include/clang-c/Index.h" 3 4
  CXCursor_LabelRef = 48,
# 1222 "/usr/include/clang-c/Index.h" 3 4
  CXCursor_OverloadedDeclRef = 49,





  CXCursor_VariableRef = 50,

  CXCursor_LastRef = CXCursor_VariableRef,


  CXCursor_FirstInvalid = 70,
  CXCursor_InvalidFile = 70,
  CXCursor_NoDeclFound = 71,
  CXCursor_NotImplemented = 72,
  CXCursor_InvalidCode = 73,
  CXCursor_LastInvalid = CXCursor_InvalidCode,


  CXCursor_FirstExpr = 100,
# 1252 "/usr/include/clang-c/Index.h" 3 4
  CXCursor_UnexposedExpr = 100,





  CXCursor_DeclRefExpr = 101,





  CXCursor_MemberRefExpr = 102,


  CXCursor_CallExpr = 103,



  CXCursor_ObjCMessageExpr = 104,


  CXCursor_BlockExpr = 105,



  CXCursor_IntegerLiteral = 106,



  CXCursor_FloatingLiteral = 107,



  CXCursor_ImaginaryLiteral = 108,



  CXCursor_StringLiteral = 109,



  CXCursor_CharacterLiteral = 110,





  CXCursor_ParenExpr = 111,




  CXCursor_UnaryOperator = 112,



  CXCursor_ArraySubscriptExpr = 113,




  CXCursor_BinaryOperator = 114,



  CXCursor_CompoundAssignOperator = 115,



  CXCursor_ConditionalOperator = 116,






  CXCursor_CStyleCastExpr = 117,



  CXCursor_CompoundLiteralExpr = 118,



  CXCursor_InitListExpr = 119,



  CXCursor_AddrLabelExpr = 120,



  CXCursor_StmtExpr = 121,



  CXCursor_GenericSelectionExpr = 122,
# 1359 "/usr/include/clang-c/Index.h" 3 4
  CXCursor_GNUNullExpr = 123,



  CXCursor_CXXStaticCastExpr = 124,



  CXCursor_CXXDynamicCastExpr = 125,



  CXCursor_CXXReinterpretCastExpr = 126,



  CXCursor_CXXConstCastExpr = 127,
# 1385 "/usr/include/clang-c/Index.h" 3 4
  CXCursor_CXXFunctionalCastExpr = 128,



  CXCursor_CXXTypeidExpr = 129,



  CXCursor_CXXBoolLiteralExpr = 130,



  CXCursor_CXXNullPtrLiteralExpr = 131,



  CXCursor_CXXThisExpr = 132,






  CXCursor_CXXThrowExpr = 133,




  CXCursor_CXXNewExpr = 134,




  CXCursor_CXXDeleteExpr = 135,



  CXCursor_UnaryExpr = 136,



  CXCursor_ObjCStringLiteral = 137,



  CXCursor_ObjCEncodeExpr = 138,



  CXCursor_ObjCSelectorExpr = 139,



  CXCursor_ObjCProtocolExpr = 140,
# 1447 "/usr/include/clang-c/Index.h" 3 4
  CXCursor_ObjCBridgedCastExpr = 141,
# 1462 "/usr/include/clang-c/Index.h" 3 4
  CXCursor_PackExpansionExpr = 142,
# 1474 "/usr/include/clang-c/Index.h" 3 4
  CXCursor_SizeOfPackExpr = 143,
# 1488 "/usr/include/clang-c/Index.h" 3 4
  CXCursor_LambdaExpr = 144,



  CXCursor_ObjCBoolLiteralExpr = 145,



  CXCursor_ObjCSelfExpr = 146,



  CXCursor_OMPArraySectionExpr = 147,



  CXCursor_ObjCAvailabilityCheckExpr = 148,




  CXCursor_FixedPointLiteral = 149,



  CXCursor_OMPArrayShapingExpr = 150,




  CXCursor_OMPIteratorExpr = 151,



  CXCursor_CXXAddrspaceCastExpr = 152,




  CXCursor_ConceptSpecializationExpr = 153,




  CXCursor_RequiresExpr = 154,





  CXCursor_CXXParenListInitExpr = 155,

  CXCursor_LastExpr = CXCursor_CXXParenListInitExpr,


  CXCursor_FirstStmt = 200,
# 1553 "/usr/include/clang-c/Index.h" 3 4
  CXCursor_UnexposedStmt = 200,
# 1566 "/usr/include/clang-c/Index.h" 3 4
  CXCursor_LabelStmt = 201,






  CXCursor_CompoundStmt = 202,



  CXCursor_CaseStmt = 203,



  CXCursor_DefaultStmt = 204,



  CXCursor_IfStmt = 205,



  CXCursor_SwitchStmt = 206,



  CXCursor_WhileStmt = 207,



  CXCursor_DoStmt = 208,



  CXCursor_ForStmt = 209,



  CXCursor_GotoStmt = 210,



  CXCursor_IndirectGotoStmt = 211,



  CXCursor_ContinueStmt = 212,



  CXCursor_BreakStmt = 213,



  CXCursor_ReturnStmt = 214,



  CXCursor_GCCAsmStmt = 215,
  CXCursor_AsmStmt = CXCursor_GCCAsmStmt,



  CXCursor_ObjCAtTryStmt = 216,



  CXCursor_ObjCAtCatchStmt = 217,



  CXCursor_ObjCAtFinallyStmt = 218,



  CXCursor_ObjCAtThrowStmt = 219,



  CXCursor_ObjCAtSynchronizedStmt = 220,



  CXCursor_ObjCAutoreleasePoolStmt = 221,



  CXCursor_ObjCForCollectionStmt = 222,



  CXCursor_CXXCatchStmt = 223,



  CXCursor_CXXTryStmt = 224,



  CXCursor_CXXForRangeStmt = 225,



  CXCursor_SEHTryStmt = 226,



  CXCursor_SEHExceptStmt = 227,



  CXCursor_SEHFinallyStmt = 228,



  CXCursor_MSAsmStmt = 229,





  CXCursor_NullStmt = 230,




  CXCursor_DeclStmt = 231,



  CXCursor_OMPParallelDirective = 232,



  CXCursor_OMPSimdDirective = 233,



  CXCursor_OMPForDirective = 234,



  CXCursor_OMPSectionsDirective = 235,



  CXCursor_OMPSectionDirective = 236,



  CXCursor_OMPSingleDirective = 237,



  CXCursor_OMPParallelForDirective = 238,



  CXCursor_OMPParallelSectionsDirective = 239,



  CXCursor_OMPTaskDirective = 240,



  CXCursor_OMPMasterDirective = 241,



  CXCursor_OMPCriticalDirective = 242,



  CXCursor_OMPTaskyieldDirective = 243,



  CXCursor_OMPBarrierDirective = 244,



  CXCursor_OMPTaskwaitDirective = 245,



  CXCursor_OMPFlushDirective = 246,



  CXCursor_SEHLeaveStmt = 247,



  CXCursor_OMPOrderedDirective = 248,



  CXCursor_OMPAtomicDirective = 249,



  CXCursor_OMPForSimdDirective = 250,



  CXCursor_OMPParallelForSimdDirective = 251,



  CXCursor_OMPTargetDirective = 252,



  CXCursor_OMPTeamsDirective = 253,



  CXCursor_OMPTaskgroupDirective = 254,



  CXCursor_OMPCancellationPointDirective = 255,



  CXCursor_OMPCancelDirective = 256,



  CXCursor_OMPTargetDataDirective = 257,



  CXCursor_OMPTaskLoopDirective = 258,



  CXCursor_OMPTaskLoopSimdDirective = 259,



  CXCursor_OMPDistributeDirective = 260,



  CXCursor_OMPTargetEnterDataDirective = 261,



  CXCursor_OMPTargetExitDataDirective = 262,



  CXCursor_OMPTargetParallelDirective = 263,



  CXCursor_OMPTargetParallelForDirective = 264,



  CXCursor_OMPTargetUpdateDirective = 265,



  CXCursor_OMPDistributeParallelForDirective = 266,



  CXCursor_OMPDistributeParallelForSimdDirective = 267,



  CXCursor_OMPDistributeSimdDirective = 268,



  CXCursor_OMPTargetParallelForSimdDirective = 269,



  CXCursor_OMPTargetSimdDirective = 270,



  CXCursor_OMPTeamsDistributeDirective = 271,



  CXCursor_OMPTeamsDistributeSimdDirective = 272,



  CXCursor_OMPTeamsDistributeParallelForSimdDirective = 273,



  CXCursor_OMPTeamsDistributeParallelForDirective = 274,



  CXCursor_OMPTargetTeamsDirective = 275,



  CXCursor_OMPTargetTeamsDistributeDirective = 276,



  CXCursor_OMPTargetTeamsDistributeParallelForDirective = 277,



  CXCursor_OMPTargetTeamsDistributeParallelForSimdDirective = 278,



  CXCursor_OMPTargetTeamsDistributeSimdDirective = 279,



  CXCursor_BuiltinBitCastExpr = 280,



  CXCursor_OMPMasterTaskLoopDirective = 281,



  CXCursor_OMPParallelMasterTaskLoopDirective = 282,



  CXCursor_OMPMasterTaskLoopSimdDirective = 283,



  CXCursor_OMPParallelMasterTaskLoopSimdDirective = 284,



  CXCursor_OMPParallelMasterDirective = 285,



  CXCursor_OMPDepobjDirective = 286,



  CXCursor_OMPScanDirective = 287,



  CXCursor_OMPTileDirective = 288,



  CXCursor_OMPCanonicalLoop = 289,



  CXCursor_OMPInteropDirective = 290,



  CXCursor_OMPDispatchDirective = 291,



  CXCursor_OMPMaskedDirective = 292,



  CXCursor_OMPUnrollDirective = 293,



  CXCursor_OMPMetaDirective = 294,



  CXCursor_OMPGenericLoopDirective = 295,



  CXCursor_OMPTeamsGenericLoopDirective = 296,



  CXCursor_OMPTargetTeamsGenericLoopDirective = 297,



  CXCursor_OMPParallelGenericLoopDirective = 298,



  CXCursor_OMPTargetParallelGenericLoopDirective = 299,



  CXCursor_OMPParallelMaskedDirective = 300,



  CXCursor_OMPMaskedTaskLoopDirective = 301,



  CXCursor_OMPMaskedTaskLoopSimdDirective = 302,



  CXCursor_OMPParallelMaskedTaskLoopDirective = 303,



  CXCursor_OMPParallelMaskedTaskLoopSimdDirective = 304,



  CXCursor_OMPErrorDirective = 305,

  CXCursor_LastStmt = CXCursor_OMPErrorDirective,







  CXCursor_TranslationUnit = 350,


  CXCursor_FirstAttr = 400,




  CXCursor_UnexposedAttr = 400,

  CXCursor_IBActionAttr = 401,
  CXCursor_IBOutletAttr = 402,
  CXCursor_IBOutletCollectionAttr = 403,
  CXCursor_CXXFinalAttr = 404,
  CXCursor_CXXOverrideAttr = 405,
  CXCursor_AnnotateAttr = 406,
  CXCursor_AsmLabelAttr = 407,
  CXCursor_PackedAttr = 408,
  CXCursor_PureAttr = 409,
  CXCursor_ConstAttr = 410,
  CXCursor_NoDuplicateAttr = 411,
  CXCursor_CUDAConstantAttr = 412,
  CXCursor_CUDADeviceAttr = 413,
  CXCursor_CUDAGlobalAttr = 414,
  CXCursor_CUDAHostAttr = 415,
  CXCursor_CUDASharedAttr = 416,
  CXCursor_VisibilityAttr = 417,
  CXCursor_DLLExport = 418,
  CXCursor_DLLImport = 419,
  CXCursor_NSReturnsRetained = 420,
  CXCursor_NSReturnsNotRetained = 421,
  CXCursor_NSReturnsAutoreleased = 422,
  CXCursor_NSConsumesSelf = 423,
  CXCursor_NSConsumed = 424,
  CXCursor_ObjCException = 425,
  CXCursor_ObjCNSObject = 426,
  CXCursor_ObjCIndependentClass = 427,
  CXCursor_ObjCPreciseLifetime = 428,
  CXCursor_ObjCReturnsInnerPointer = 429,
  CXCursor_ObjCRequiresSuper = 430,
  CXCursor_ObjCRootClass = 431,
  CXCursor_ObjCSubclassingRestricted = 432,
  CXCursor_ObjCExplicitProtocolImpl = 433,
  CXCursor_ObjCDesignatedInitializer = 434,
  CXCursor_ObjCRuntimeVisible = 435,
  CXCursor_ObjCBoxable = 436,
  CXCursor_FlagEnum = 437,
  CXCursor_ConvergentAttr = 438,
  CXCursor_WarnUnusedAttr = 439,
  CXCursor_WarnUnusedResultAttr = 440,
  CXCursor_AlignedAttr = 441,
  CXCursor_LastAttr = CXCursor_AlignedAttr,


  CXCursor_PreprocessingDirective = 500,
  CXCursor_MacroDefinition = 501,
  CXCursor_MacroExpansion = 502,
  CXCursor_MacroInstantiation = CXCursor_MacroExpansion,
  CXCursor_InclusionDirective = 503,
  CXCursor_FirstPreprocessing = CXCursor_PreprocessingDirective,
  CXCursor_LastPreprocessing = CXCursor_InclusionDirective,





  CXCursor_ModuleImportDecl = 600,
  CXCursor_TypeAliasTemplateDecl = 601,



  CXCursor_StaticAssert = 602,



  CXCursor_FriendDecl = 603,



  CXCursor_ConceptDecl = 604,

  CXCursor_FirstExtraDecl = CXCursor_ModuleImportDecl,
  CXCursor_LastExtraDecl = CXCursor_ConceptDecl,




  CXCursor_OverloadCandidate = 700
};
# 2107 "/usr/include/clang-c/Index.h" 3 4
typedef struct {
  enum CXCursorKind kind;
  int xdata;
  const void *data[3];
} CXCursor;
# 2122 "/usr/include/clang-c/Index.h" 3 4
 CXCursor clang_getNullCursor(void);







 CXCursor clang_getTranslationUnitCursor(CXTranslationUnit);




 unsigned clang_equalCursors(CXCursor, CXCursor);




 int clang_Cursor_isNull(CXCursor cursor);




 unsigned clang_hashCursor(CXCursor);




 enum CXCursorKind clang_getCursorKind(CXCursor);




 unsigned clang_isDeclaration(enum CXCursorKind);
# 2165 "/usr/include/clang-c/Index.h" 3 4
 unsigned clang_isInvalidDeclaration(CXCursor);
# 2175 "/usr/include/clang-c/Index.h" 3 4
 unsigned clang_isReference(enum CXCursorKind);




 unsigned clang_isExpression(enum CXCursorKind);




 unsigned clang_isStatement(enum CXCursorKind);




 unsigned clang_isAttribute(enum CXCursorKind);




 unsigned clang_Cursor_hasAttrs(CXCursor C);





 unsigned clang_isInvalid(enum CXCursorKind);





 unsigned clang_isTranslationUnit(enum CXCursorKind);





 unsigned clang_isPreprocessing(enum CXCursorKind);





 unsigned clang_isUnexposed(enum CXCursorKind);




enum CXLinkageKind {


  CXLinkage_Invalid,




  CXLinkage_NoLinkage,

  CXLinkage_Internal,


  CXLinkage_UniqueExternal,

  CXLinkage_External
};




 enum CXLinkageKind clang_getCursorLinkage(CXCursor cursor);

enum CXVisibilityKind {


  CXVisibility_Invalid,


  CXVisibility_Hidden,

  CXVisibility_Protected,

  CXVisibility_Default
};
# 2271 "/usr/include/clang-c/Index.h" 3 4
 enum CXVisibilityKind clang_getCursorVisibility(CXCursor cursor);
# 2281 "/usr/include/clang-c/Index.h" 3 4
 enum CXAvailabilityKind
clang_getCursorAvailability(CXCursor cursor);





typedef struct CXPlatformAvailability {






  CXString Platform;



  CXVersion Introduced;




  CXVersion Deprecated;




  CXVersion Obsoleted;



  int Unavailable;




  CXString Message;
} CXPlatformAvailability;
# 2357 "/usr/include/clang-c/Index.h" 3 4
 int clang_getCursorPlatformAvailability(
    CXCursor cursor, int *always_deprecated, CXString *deprecated_message,
    int *always_unavailable, CXString *unavailable_message,
    CXPlatformAvailability *availability, int availability_size);




 void
clang_disposeCXPlatformAvailability(CXPlatformAvailability *availability);





 CXCursor clang_Cursor_getVarDeclInitializer(CXCursor cursor);






 int clang_Cursor_hasVarDeclGlobalStorage(CXCursor cursor);






 int clang_Cursor_hasVarDeclExternalStorage(CXCursor cursor);




enum CXLanguageKind {
  CXLanguage_Invalid = 0,
  CXLanguage_C,
  CXLanguage_ObjC,
  CXLanguage_CPlusPlus
};




 enum CXLanguageKind clang_getCursorLanguage(CXCursor cursor);





enum CXTLSKind { CXTLS_None = 0, CXTLS_Dynamic, CXTLS_Static };





 enum CXTLSKind clang_getCursorTLSKind(CXCursor cursor);




 CXTranslationUnit clang_Cursor_getTranslationUnit(CXCursor);




typedef struct CXCursorSetImpl *CXCursorSet;




 CXCursorSet clang_createCXCursorSet(void);




 void clang_disposeCXCursorSet(CXCursorSet cset);






 unsigned clang_CXCursorSet_contains(CXCursorSet cset,
                                                   CXCursor cursor);






 unsigned clang_CXCursorSet_insert(CXCursorSet cset,
                                                 CXCursor cursor);
# 2484 "/usr/include/clang-c/Index.h" 3 4
 CXCursor clang_getCursorSemanticParent(CXCursor cursor);
# 2520 "/usr/include/clang-c/Index.h" 3 4
 CXCursor clang_getCursorLexicalParent(CXCursor cursor);
# 2565 "/usr/include/clang-c/Index.h" 3 4
 void clang_getOverriddenCursors(CXCursor cursor,
                                               CXCursor **overridden,
                                               unsigned *num_overridden);





 void clang_disposeOverriddenCursors(CXCursor *overridden);





 CXFile clang_getIncludedFile(CXCursor cursor);
# 2611 "/usr/include/clang-c/Index.h" 3 4
 CXCursor clang_getCursor(CXTranslationUnit, CXSourceLocation);
# 2623 "/usr/include/clang-c/Index.h" 3 4
 CXSourceLocation clang_getCursorLocation(CXCursor);
# 2636 "/usr/include/clang-c/Index.h" 3 4
 CXSourceRange clang_getCursorExtent(CXCursor);
# 2651 "/usr/include/clang-c/Index.h" 3 4
enum CXTypeKind {



  CXType_Invalid = 0,





  CXType_Unexposed = 1,


  CXType_Void = 2,
  CXType_Bool = 3,
  CXType_Char_U = 4,
  CXType_UChar = 5,
  CXType_Char16 = 6,
  CXType_Char32 = 7,
  CXType_UShort = 8,
  CXType_UInt = 9,
  CXType_ULong = 10,
  CXType_ULongLong = 11,
  CXType_UInt128 = 12,
  CXType_Char_S = 13,
  CXType_SChar = 14,
  CXType_WChar = 15,
  CXType_Short = 16,
  CXType_Int = 17,
  CXType_Long = 18,
  CXType_LongLong = 19,
  CXType_Int128 = 20,
  CXType_Float = 21,
  CXType_Double = 22,
  CXType_LongDouble = 23,
  CXType_NullPtr = 24,
  CXType_Overload = 25,
  CXType_Dependent = 26,
  CXType_ObjCId = 27,
  CXType_ObjCClass = 28,
  CXType_ObjCSel = 29,
  CXType_Float128 = 30,
  CXType_Half = 31,
  CXType_Float16 = 32,
  CXType_ShortAccum = 33,
  CXType_Accum = 34,
  CXType_LongAccum = 35,
  CXType_UShortAccum = 36,
  CXType_UAccum = 37,
  CXType_ULongAccum = 38,
  CXType_BFloat16 = 39,
  CXType_Ibm128 = 40,
  CXType_FirstBuiltin = CXType_Void,
  CXType_LastBuiltin = CXType_Ibm128,

  CXType_Complex = 100,
  CXType_Pointer = 101,
  CXType_BlockPointer = 102,
  CXType_LValueReference = 103,
  CXType_RValueReference = 104,
  CXType_Record = 105,
  CXType_Enum = 106,
  CXType_Typedef = 107,
  CXType_ObjCInterface = 108,
  CXType_ObjCObjectPointer = 109,
  CXType_FunctionNoProto = 110,
  CXType_FunctionProto = 111,
  CXType_ConstantArray = 112,
  CXType_Vector = 113,
  CXType_IncompleteArray = 114,
  CXType_VariableArray = 115,
  CXType_DependentSizedArray = 116,
  CXType_MemberPointer = 117,
  CXType_Auto = 118,






  CXType_Elaborated = 119,


  CXType_Pipe = 120,


  CXType_OCLImage1dRO = 121,
  CXType_OCLImage1dArrayRO = 122,
  CXType_OCLImage1dBufferRO = 123,
  CXType_OCLImage2dRO = 124,
  CXType_OCLImage2dArrayRO = 125,
  CXType_OCLImage2dDepthRO = 126,
  CXType_OCLImage2dArrayDepthRO = 127,
  CXType_OCLImage2dMSAARO = 128,
  CXType_OCLImage2dArrayMSAARO = 129,
  CXType_OCLImage2dMSAADepthRO = 130,
  CXType_OCLImage2dArrayMSAADepthRO = 131,
  CXType_OCLImage3dRO = 132,
  CXType_OCLImage1dWO = 133,
  CXType_OCLImage1dArrayWO = 134,
  CXType_OCLImage1dBufferWO = 135,
  CXType_OCLImage2dWO = 136,
  CXType_OCLImage2dArrayWO = 137,
  CXType_OCLImage2dDepthWO = 138,
  CXType_OCLImage2dArrayDepthWO = 139,
  CXType_OCLImage2dMSAAWO = 140,
  CXType_OCLImage2dArrayMSAAWO = 141,
  CXType_OCLImage2dMSAADepthWO = 142,
  CXType_OCLImage2dArrayMSAADepthWO = 143,
  CXType_OCLImage3dWO = 144,
  CXType_OCLImage1dRW = 145,
  CXType_OCLImage1dArrayRW = 146,
  CXType_OCLImage1dBufferRW = 147,
  CXType_OCLImage2dRW = 148,
  CXType_OCLImage2dArrayRW = 149,
  CXType_OCLImage2dDepthRW = 150,
  CXType_OCLImage2dArrayDepthRW = 151,
  CXType_OCLImage2dMSAARW = 152,
  CXType_OCLImage2dArrayMSAARW = 153,
  CXType_OCLImage2dMSAADepthRW = 154,
  CXType_OCLImage2dArrayMSAADepthRW = 155,
  CXType_OCLImage3dRW = 156,
  CXType_OCLSampler = 157,
  CXType_OCLEvent = 158,
  CXType_OCLQueue = 159,
  CXType_OCLReserveID = 160,

  CXType_ObjCObject = 161,
  CXType_ObjCTypeParam = 162,
  CXType_Attributed = 163,

  CXType_OCLIntelSubgroupAVCMcePayload = 164,
  CXType_OCLIntelSubgroupAVCImePayload = 165,
  CXType_OCLIntelSubgroupAVCRefPayload = 166,
  CXType_OCLIntelSubgroupAVCSicPayload = 167,
  CXType_OCLIntelSubgroupAVCMceResult = 168,
  CXType_OCLIntelSubgroupAVCImeResult = 169,
  CXType_OCLIntelSubgroupAVCRefResult = 170,
  CXType_OCLIntelSubgroupAVCSicResult = 171,
  CXType_OCLIntelSubgroupAVCImeResultSingleRefStreamout = 172,
  CXType_OCLIntelSubgroupAVCImeResultDualRefStreamout = 173,
  CXType_OCLIntelSubgroupAVCImeSingleRefStreamin = 174,

  CXType_OCLIntelSubgroupAVCImeDualRefStreamin = 175,

  CXType_ExtVector = 176,
  CXType_Atomic = 177,
  CXType_BTFTagAttributed = 178
};




enum CXCallingConv {
  CXCallingConv_Default = 0,
  CXCallingConv_C = 1,
  CXCallingConv_X86StdCall = 2,
  CXCallingConv_X86FastCall = 3,
  CXCallingConv_X86ThisCall = 4,
  CXCallingConv_X86Pascal = 5,
  CXCallingConv_AAPCS = 6,
  CXCallingConv_AAPCS_VFP = 7,
  CXCallingConv_X86RegCall = 8,
  CXCallingConv_IntelOclBicc = 9,
  CXCallingConv_Win64 = 10,

  CXCallingConv_X86_64Win64 = CXCallingConv_Win64,
  CXCallingConv_X86_64SysV = 11,
  CXCallingConv_X86VectorCall = 12,
  CXCallingConv_Swift = 13,
  CXCallingConv_PreserveMost = 14,
  CXCallingConv_PreserveAll = 15,
  CXCallingConv_AArch64VectorCall = 16,
  CXCallingConv_SwiftAsync = 17,
  CXCallingConv_AArch64SVEPCS = 18,

  CXCallingConv_Invalid = 100,
  CXCallingConv_Unexposed = 200
};





typedef struct {
  enum CXTypeKind kind;
  void *data[2];
} CXType;




 CXType clang_getCursorType(CXCursor C);







 CXString clang_getTypeSpelling(CXType CT);







 CXType clang_getTypedefDeclUnderlyingType(CXCursor C);







 CXType clang_getEnumDeclIntegerType(CXCursor C);
# 2877 "/usr/include/clang-c/Index.h" 3 4
 long long clang_getEnumConstantDeclValue(CXCursor C);
# 2887 "/usr/include/clang-c/Index.h" 3 4
 unsigned long long
clang_getEnumConstantDeclUnsignedValue(CXCursor C);






 int clang_getFieldDeclBitWidth(CXCursor C);
# 2904 "/usr/include/clang-c/Index.h" 3 4
 int clang_Cursor_getNumArguments(CXCursor C);
# 2913 "/usr/include/clang-c/Index.h" 3 4
 CXCursor clang_Cursor_getArgument(CXCursor C, unsigned i);







enum CXTemplateArgumentKind {
  CXTemplateArgumentKind_Null,
  CXTemplateArgumentKind_Type,
  CXTemplateArgumentKind_Declaration,
  CXTemplateArgumentKind_NullPtr,
  CXTemplateArgumentKind_Integral,
  CXTemplateArgumentKind_Template,
  CXTemplateArgumentKind_TemplateExpansion,
  CXTemplateArgumentKind_Expression,
  CXTemplateArgumentKind_Pack,

  CXTemplateArgumentKind_Invalid
};
# 2951 "/usr/include/clang-c/Index.h" 3 4
 int clang_Cursor_getNumTemplateArguments(CXCursor C);
# 2970 "/usr/include/clang-c/Index.h" 3 4
 enum CXTemplateArgumentKind
clang_Cursor_getTemplateArgumentKind(CXCursor C, unsigned I);
# 2991 "/usr/include/clang-c/Index.h" 3 4
 CXType clang_Cursor_getTemplateArgumentType(CXCursor C,
                                                           unsigned I);
# 3012 "/usr/include/clang-c/Index.h" 3 4
 long long clang_Cursor_getTemplateArgumentValue(CXCursor C,
                                                               unsigned I);
# 3033 "/usr/include/clang-c/Index.h" 3 4
 unsigned long long
clang_Cursor_getTemplateArgumentUnsignedValue(CXCursor C, unsigned I);







 unsigned clang_equalTypes(CXType A, CXType B);
# 3052 "/usr/include/clang-c/Index.h" 3 4
 CXType clang_getCanonicalType(CXType T);






 unsigned clang_isConstQualifiedType(CXType T);





 unsigned clang_Cursor_isMacroFunctionLike(CXCursor C);





 unsigned clang_Cursor_isMacroBuiltin(CXCursor C);





 unsigned clang_Cursor_isFunctionInlined(CXCursor C);






 unsigned clang_isVolatileQualifiedType(CXType T);






 unsigned clang_isRestrictQualifiedType(CXType T);




 unsigned clang_getAddressSpace(CXType T);




 CXString clang_getTypedefName(CXType CT);




 CXType clang_getPointeeType(CXType T);
# 3143 "/usr/include/clang-c/Index.h" 3 4
 CXType clang_getUnqualifiedType(CXType CT);
# 3154 "/usr/include/clang-c/Index.h" 3 4
 CXType clang_getNonReferenceType(CXType CT);




 CXCursor clang_getTypeDeclaration(CXType T);




 CXString clang_getDeclObjCTypeEncoding(CXCursor C);




 CXString clang_Type_getObjCEncoding(CXType type);




 CXString clang_getTypeKindSpelling(enum CXTypeKind K);






 enum CXCallingConv clang_getFunctionTypeCallingConv(CXType T);






 CXType clang_getResultType(CXType T);







 int clang_getExceptionSpecificationType(CXType T);







 int clang_getNumArgTypes(CXType T);







 CXType clang_getArgType(CXType T, unsigned i);






 CXType clang_Type_getObjCObjectBaseType(CXType T);






 unsigned clang_Type_getNumObjCProtocolRefs(CXType T);







 CXCursor clang_Type_getObjCProtocolDecl(CXType T, unsigned i);






 unsigned clang_Type_getNumObjCTypeArgs(CXType T);







 CXType clang_Type_getObjCTypeArg(CXType T, unsigned i);




 unsigned clang_isFunctionTypeVariadic(CXType T);






 CXType clang_getCursorResultType(CXCursor C);
# 3270 "/usr/include/clang-c/Index.h" 3 4
 int clang_getCursorExceptionSpecificationType(CXCursor C);





 unsigned clang_isPODType(CXType T);







 CXType clang_getElementType(CXType T);







 long long clang_getNumElements(CXType T);






 CXType clang_getArrayElementType(CXType T);






 long long clang_getArraySize(CXType T);






 CXType clang_Type_getNamedType(CXType T);
# 3323 "/usr/include/clang-c/Index.h" 3 4
 unsigned clang_Type_isTransparentTagTypedef(CXType T);

enum CXTypeNullabilityKind {



  CXTypeNullability_NonNull = 0,



  CXTypeNullability_Nullable = 1,






  CXTypeNullability_Unspecified = 2,



  CXTypeNullability_Invalid = 3,







  CXTypeNullability_NullableResult = 4
};




 enum CXTypeNullabilityKind clang_Type_getNullability(CXType T);
# 3368 "/usr/include/clang-c/Index.h" 3 4
enum CXTypeLayoutError {



  CXTypeLayoutError_Invalid = -1,



  CXTypeLayoutError_Incomplete = -2,



  CXTypeLayoutError_Dependent = -3,



  CXTypeLayoutError_NotConstantSize = -4,



  CXTypeLayoutError_InvalidFieldName = -5,



  CXTypeLayoutError_Undeduced = -6
};
# 3407 "/usr/include/clang-c/Index.h" 3 4
 long long clang_Type_getAlignOf(CXType T);






 CXType clang_Type_getClassType(CXType T);
# 3425 "/usr/include/clang-c/Index.h" 3 4
 long long clang_Type_getSizeOf(CXType T);
# 3440 "/usr/include/clang-c/Index.h" 3 4
 long long clang_Type_getOffsetOf(CXType T, const char *S);






 CXType clang_Type_getModifiedType(CXType T);






 CXType clang_Type_getValueType(CXType CT);
# 3469 "/usr/include/clang-c/Index.h" 3 4
 long long clang_Cursor_getOffsetOfField(CXCursor C);





 unsigned clang_Cursor_isAnonymous(CXCursor C);





 unsigned clang_Cursor_isAnonymousRecordDecl(CXCursor C);





 unsigned clang_Cursor_isInlineNamespace(CXCursor C);

enum CXRefQualifierKind {

  CXRefQualifier_None = 0,

  CXRefQualifier_LValue,

  CXRefQualifier_RValue
};





 int clang_Type_getNumTemplateArguments(CXType T);
# 3511 "/usr/include/clang-c/Index.h" 3 4
 CXType clang_Type_getTemplateArgumentAsType(CXType T,
                                                           unsigned i);







 enum CXRefQualifierKind clang_Type_getCXXRefQualifier(CXType T);





 unsigned clang_Cursor_isBitField(CXCursor C);





 unsigned clang_isVirtualBase(CXCursor);





enum CX_CXXAccessSpecifier {
  CX_CXXInvalidAccessSpecifier,
  CX_CXXPublic,
  CX_CXXProtected,
  CX_CXXPrivate
};
# 3552 "/usr/include/clang-c/Index.h" 3 4
 enum CX_CXXAccessSpecifier clang_getCXXAccessSpecifier(CXCursor);





enum CX_StorageClass {
  CX_SC_Invalid,
  CX_SC_None,
  CX_SC_Extern,
  CX_SC_Static,
  CX_SC_PrivateExtern,
  CX_SC_OpenCLWorkGroupLocal,
  CX_SC_Auto,
  CX_SC_Register
};







 enum CX_StorageClass clang_Cursor_getStorageClass(CXCursor);
# 3586 "/usr/include/clang-c/Index.h" 3 4
 unsigned clang_getNumOverloadedDecls(CXCursor cursor);
# 3602 "/usr/include/clang-c/Index.h" 3 4
 CXCursor clang_getOverloadedDecl(CXCursor cursor,
                                                unsigned index);
# 3620 "/usr/include/clang-c/Index.h" 3 4
 CXType clang_getIBOutletCollectionType(CXCursor);
# 3642 "/usr/include/clang-c/Index.h" 3 4
enum CXChildVisitResult {



  CXChildVisit_Break,




  CXChildVisit_Continue,




  CXChildVisit_Recurse
};
# 3671 "/usr/include/clang-c/Index.h" 3 4
typedef enum CXChildVisitResult (*CXCursorVisitor)(CXCursor cursor,
                                                   CXCursor parent,
                                                   CXClientData client_data);
# 3697 "/usr/include/clang-c/Index.h" 3 4
 unsigned clang_visitChildren(CXCursor parent,
                                            CXCursorVisitor visitor,
                                            CXClientData client_data);
# 3748 "/usr/include/clang-c/Index.h" 3 4
 CXString clang_getCursorUSR(CXCursor);




 CXString clang_constructUSR_ObjCClass(const char *class_name);




 CXString clang_constructUSR_ObjCCategory(
    const char *class_name, const char *category_name);




 CXString
clang_constructUSR_ObjCProtocol(const char *protocol_name);





 CXString clang_constructUSR_ObjCIvar(const char *name,
                                                    CXString classUSR);





 CXString clang_constructUSR_ObjCMethod(const char *name,
                                                      unsigned isInstanceMethod,
                                                      CXString classUSR);





 CXString clang_constructUSR_ObjCProperty(const char *property,
                                                        CXString classUSR);




 CXString clang_getCursorSpelling(CXCursor);
# 3805 "/usr/include/clang-c/Index.h" 3 4
 CXSourceRange clang_Cursor_getSpellingNameRange(
    CXCursor, unsigned pieceIndex, unsigned options);





typedef void *CXPrintingPolicy;






enum CXPrintingPolicyProperty {
  CXPrintingPolicy_Indentation,
  CXPrintingPolicy_SuppressSpecifiers,
  CXPrintingPolicy_SuppressTagKeyword,
  CXPrintingPolicy_IncludeTagDefinition,
  CXPrintingPolicy_SuppressScope,
  CXPrintingPolicy_SuppressUnwrittenScope,
  CXPrintingPolicy_SuppressInitializers,
  CXPrintingPolicy_ConstantArraySizeAsWritten,
  CXPrintingPolicy_AnonymousTagLocations,
  CXPrintingPolicy_SuppressStrongLifetime,
  CXPrintingPolicy_SuppressLifetimeQualifiers,
  CXPrintingPolicy_SuppressTemplateArgsInCXXConstructors,
  CXPrintingPolicy_Bool,
  CXPrintingPolicy_Restrict,
  CXPrintingPolicy_Alignof,
  CXPrintingPolicy_UnderscoreAlignof,
  CXPrintingPolicy_UseVoidForZeroParams,
  CXPrintingPolicy_TerseOutput,
  CXPrintingPolicy_PolishForDeclaration,
  CXPrintingPolicy_Half,
  CXPrintingPolicy_MSWChar,
  CXPrintingPolicy_IncludeNewlines,
  CXPrintingPolicy_MSVCFormatting,
  CXPrintingPolicy_ConstantsAsWritten,
  CXPrintingPolicy_SuppressImplicitBase,
  CXPrintingPolicy_FullyQualifiedName,

  CXPrintingPolicy_LastProperty = CXPrintingPolicy_FullyQualifiedName
};




 unsigned
clang_PrintingPolicy_getProperty(CXPrintingPolicy Policy,
                                 enum CXPrintingPolicyProperty Property);




 void
clang_PrintingPolicy_setProperty(CXPrintingPolicy Policy,
                                 enum CXPrintingPolicyProperty Property,
                                 unsigned Value);







 CXPrintingPolicy clang_getCursorPrintingPolicy(CXCursor);




 void clang_PrintingPolicy_dispose(CXPrintingPolicy Policy);
# 3889 "/usr/include/clang-c/Index.h" 3 4
 CXString clang_getCursorPrettyPrinted(CXCursor Cursor,
                                                     CXPrintingPolicy Policy);
# 3899 "/usr/include/clang-c/Index.h" 3 4
 CXString clang_getCursorDisplayName(CXCursor);
# 3911 "/usr/include/clang-c/Index.h" 3 4
 CXCursor clang_getCursorReferenced(CXCursor);
# 3941 "/usr/include/clang-c/Index.h" 3 4
 CXCursor clang_getCursorDefinition(CXCursor);





 unsigned clang_isCursorDefinition(CXCursor);
# 3973 "/usr/include/clang-c/Index.h" 3 4
 CXCursor clang_getCanonicalCursor(CXCursor);
# 3986 "/usr/include/clang-c/Index.h" 3 4
 int clang_Cursor_getObjCSelectorIndex(CXCursor);
# 3999 "/usr/include/clang-c/Index.h" 3 4
 int clang_Cursor_isDynamicCall(CXCursor C);





 CXType clang_Cursor_getReceiverType(CXCursor C);




typedef enum {
  CXObjCPropertyAttr_noattr = 0x00,
  CXObjCPropertyAttr_readonly = 0x01,
  CXObjCPropertyAttr_getter = 0x02,
  CXObjCPropertyAttr_assign = 0x04,
  CXObjCPropertyAttr_readwrite = 0x08,
  CXObjCPropertyAttr_retain = 0x10,
  CXObjCPropertyAttr_copy = 0x20,
  CXObjCPropertyAttr_nonatomic = 0x40,
  CXObjCPropertyAttr_setter = 0x80,
  CXObjCPropertyAttr_atomic = 0x100,
  CXObjCPropertyAttr_weak = 0x200,
  CXObjCPropertyAttr_strong = 0x400,
  CXObjCPropertyAttr_unsafe_unretained = 0x800,
  CXObjCPropertyAttr_class = 0x1000
} CXObjCPropertyAttrKind;
# 4034 "/usr/include/clang-c/Index.h" 3 4
 unsigned
clang_Cursor_getObjCPropertyAttributes(CXCursor C, unsigned reserved);





 CXString clang_Cursor_getObjCPropertyGetterName(CXCursor C);





 CXString clang_Cursor_getObjCPropertySetterName(CXCursor C);





typedef enum {
  CXObjCDeclQualifier_None = 0x0,
  CXObjCDeclQualifier_In = 0x1,
  CXObjCDeclQualifier_Inout = 0x2,
  CXObjCDeclQualifier_Out = 0x4,
  CXObjCDeclQualifier_Bycopy = 0x8,
  CXObjCDeclQualifier_Byref = 0x10,
  CXObjCDeclQualifier_Oneway = 0x20
} CXObjCDeclQualifierKind;







 unsigned clang_Cursor_getObjCDeclQualifiers(CXCursor C);






 unsigned clang_Cursor_isObjCOptional(CXCursor C);




 unsigned clang_Cursor_isVariadic(CXCursor C);
# 4096 "/usr/include/clang-c/Index.h" 3 4
 unsigned clang_Cursor_isExternalSymbol(CXCursor C,
                                                      CXString *language,
                                                      CXString *definedIn,
                                                      unsigned *isGenerated);






 CXSourceRange clang_Cursor_getCommentRange(CXCursor C);





 CXString clang_Cursor_getRawCommentText(CXCursor C);






 CXString clang_Cursor_getBriefCommentText(CXCursor C);
# 4133 "/usr/include/clang-c/Index.h" 3 4
 CXString clang_Cursor_getMangling(CXCursor);





 CXStringSet *clang_Cursor_getCXXManglings(CXCursor);





 CXStringSet *clang_Cursor_getObjCManglings(CXCursor);
# 4159 "/usr/include/clang-c/Index.h" 3 4
typedef void *CXModule;




 CXModule clang_Cursor_getModule(CXCursor C);





 CXModule clang_getModuleForFile(CXTranslationUnit, CXFile);






 CXFile clang_Module_getASTFile(CXModule Module);







 CXModule clang_Module_getParent(CXModule Module);







 CXString clang_Module_getName(CXModule Module);






 CXString clang_Module_getFullName(CXModule Module);






 int clang_Module_isSystem(CXModule Module);






 unsigned clang_Module_getNumTopLevelHeaders(CXTranslationUnit,
                                                           CXModule Module);
# 4224 "/usr/include/clang-c/Index.h" 3 4

CXFile clang_Module_getTopLevelHeader(CXTranslationUnit, CXModule Module,
                                      unsigned Index);
# 4244 "/usr/include/clang-c/Index.h" 3 4
 unsigned
clang_CXXConstructor_isConvertingConstructor(CXCursor C);




 unsigned clang_CXXConstructor_isCopyConstructor(CXCursor C);




 unsigned clang_CXXConstructor_isDefaultConstructor(CXCursor C);




 unsigned clang_CXXConstructor_isMoveConstructor(CXCursor C);




 unsigned clang_CXXField_isMutable(CXCursor C);




 unsigned clang_CXXMethod_isDefaulted(CXCursor C);




 unsigned clang_CXXMethod_isDeleted(CXCursor C);





 unsigned clang_CXXMethod_isPureVirtual(CXCursor C);





 unsigned clang_CXXMethod_isStatic(CXCursor C);






 unsigned clang_CXXMethod_isVirtual(CXCursor C);
# 4319 "/usr/include/clang-c/Index.h" 3 4
 unsigned clang_CXXMethod_isCopyAssignmentOperator(CXCursor C);
# 4344 "/usr/include/clang-c/Index.h" 3 4
 unsigned clang_CXXMethod_isMoveAssignmentOperator(CXCursor C);





 unsigned clang_CXXRecord_isAbstract(CXCursor C);




 unsigned clang_EnumDecl_isScoped(CXCursor C);





 unsigned clang_CXXMethod_isConst(CXCursor C);
# 4380 "/usr/include/clang-c/Index.h" 3 4
 enum CXCursorKind clang_getTemplateCursorKind(CXCursor C);
# 4410 "/usr/include/clang-c/Index.h" 3 4
 CXCursor clang_getSpecializedCursorTemplate(CXCursor C);
# 4430 "/usr/include/clang-c/Index.h" 3 4
 CXSourceRange clang_getCursorReferenceNameRange(
    CXCursor C, unsigned NameFlags, unsigned PieceIndex);

enum CXNameRefFlags {




  CXNameRange_WantQualifier = 0x1,





  CXNameRange_WantTemplateArgs = 0x2,
# 4456 "/usr/include/clang-c/Index.h" 3 4
  CXNameRange_WantSinglePiece = 0x4
};
# 4476 "/usr/include/clang-c/Index.h" 3 4
typedef enum CXTokenKind {



  CXToken_Punctuation,




  CXToken_Keyword,




  CXToken_Identifier,




  CXToken_Literal,




  CXToken_Comment
} CXTokenKind;




typedef struct {
  unsigned int_data[4];
  void *ptr_data;
} CXToken;
# 4522 "/usr/include/clang-c/Index.h" 3 4
 CXToken *clang_getToken(CXTranslationUnit TU,
                                       CXSourceLocation Location);




 CXTokenKind clang_getTokenKind(CXToken);







 CXString clang_getTokenSpelling(CXTranslationUnit, CXToken);




 CXSourceLocation clang_getTokenLocation(CXTranslationUnit,
                                                       CXToken);




 CXSourceRange clang_getTokenExtent(CXTranslationUnit, CXToken);
# 4566 "/usr/include/clang-c/Index.h" 3 4
 void clang_tokenize(CXTranslationUnit TU, CXSourceRange Range,
                                   CXToken **Tokens, unsigned *NumTokens);
# 4599 "/usr/include/clang-c/Index.h" 3 4
 void clang_annotateTokens(CXTranslationUnit TU, CXToken *Tokens,
                                         unsigned NumTokens, CXCursor *Cursors);




 void clang_disposeTokens(CXTranslationUnit TU, CXToken *Tokens,
                                        unsigned NumTokens);
# 4622 "/usr/include/clang-c/Index.h" 3 4
 CXString clang_getCursorKindSpelling(enum CXCursorKind Kind);
 void clang_getDefinitionSpellingAndExtent(
    CXCursor, const char **startBuf, const char **endBuf, unsigned *startLine,
    unsigned *startColumn, unsigned *endLine, unsigned *endColumn);
 void clang_enableStackTraces(void);
 void clang_executeOnThread(void (*fn)(void *), void *user_data,
                                          unsigned stack_size);
# 4659 "/usr/include/clang-c/Index.h" 3 4
typedef void *CXCompletionString;




typedef struct {
# 4675 "/usr/include/clang-c/Index.h" 3 4
  enum CXCursorKind CursorKind;





  CXCompletionString CompletionString;
} CXCompletionResult;
# 4691 "/usr/include/clang-c/Index.h" 3 4
enum CXCompletionChunkKind {
# 4725 "/usr/include/clang-c/Index.h" 3 4
  CXCompletionChunk_Optional,
# 4736 "/usr/include/clang-c/Index.h" 3 4
  CXCompletionChunk_TypedText,







  CXCompletionChunk_Text,
# 4755 "/usr/include/clang-c/Index.h" 3 4
  CXCompletionChunk_Placeholder,
# 4765 "/usr/include/clang-c/Index.h" 3 4
  CXCompletionChunk_Informative,
# 4785 "/usr/include/clang-c/Index.h" 3 4
  CXCompletionChunk_CurrentParameter,




  CXCompletionChunk_LeftParen,




  CXCompletionChunk_RightParen,



  CXCompletionChunk_LeftBracket,



  CXCompletionChunk_RightBracket,



  CXCompletionChunk_LeftBrace,



  CXCompletionChunk_RightBrace,



  CXCompletionChunk_LeftAngle,



  CXCompletionChunk_RightAngle,



  CXCompletionChunk_Comma,







  CXCompletionChunk_ResultType,



  CXCompletionChunk_Colon,



  CXCompletionChunk_SemiColon,



  CXCompletionChunk_Equal,



  CXCompletionChunk_HorizontalSpace,




  CXCompletionChunk_VerticalSpace
};
# 4864 "/usr/include/clang-c/Index.h" 3 4
 enum CXCompletionChunkKind
clang_getCompletionChunkKind(CXCompletionString completion_string,
                             unsigned chunk_number);
# 4878 "/usr/include/clang-c/Index.h" 3 4
 CXString clang_getCompletionChunkText(
    CXCompletionString completion_string, unsigned chunk_number);
# 4892 "/usr/include/clang-c/Index.h" 3 4
 CXCompletionString clang_getCompletionChunkCompletionString(
    CXCompletionString completion_string, unsigned chunk_number);




 unsigned
clang_getNumCompletionChunks(CXCompletionString completion_string);
# 4913 "/usr/include/clang-c/Index.h" 3 4
 unsigned
clang_getCompletionPriority(CXCompletionString completion_string);
# 4924 "/usr/include/clang-c/Index.h" 3 4
 enum CXAvailabilityKind
clang_getCompletionAvailability(CXCompletionString completion_string);
# 4936 "/usr/include/clang-c/Index.h" 3 4
 unsigned
clang_getCompletionNumAnnotations(CXCompletionString completion_string);
# 4950 "/usr/include/clang-c/Index.h" 3 4
 CXString clang_getCompletionAnnotation(
    CXCompletionString completion_string, unsigned annotation_number);
# 4969 "/usr/include/clang-c/Index.h" 3 4
 CXString clang_getCompletionParent(
    CXCompletionString completion_string, enum CXCursorKind *kind);





 CXString
clang_getCompletionBriefComment(CXCompletionString completion_string);
# 4988 "/usr/include/clang-c/Index.h" 3 4
 CXCompletionString
clang_getCursorCompletionString(CXCursor cursor);
# 4998 "/usr/include/clang-c/Index.h" 3 4
typedef struct {



  CXCompletionResult *Results;





  unsigned NumResults;
} CXCodeCompleteResults;
# 5024 "/usr/include/clang-c/Index.h" 3 4
 unsigned
clang_getCompletionNumFixIts(CXCodeCompleteResults *results,
                             unsigned completion_index);
# 5071 "/usr/include/clang-c/Index.h" 3 4
 CXString clang_getCompletionFixIt(
    CXCodeCompleteResults *results, unsigned completion_index,
    unsigned fixit_index, CXSourceRange *replacement_range);
# 5082 "/usr/include/clang-c/Index.h" 3 4
enum CXCodeComplete_Flags {




  CXCodeComplete_IncludeMacros = 0x01,





  CXCodeComplete_IncludeCodePatterns = 0x02,





  CXCodeComplete_IncludeBriefComments = 0x04,






  CXCodeComplete_SkipPreamble = 0x08,





  CXCodeComplete_IncludeCompletionsWithFixIts = 0x10
};







enum CXCompletionContext {




  CXCompletionContext_Unexposed = 0,




  CXCompletionContext_AnyType = 1 << 0,





  CXCompletionContext_AnyValue = 1 << 1,




  CXCompletionContext_ObjCObjectValue = 1 << 2,




  CXCompletionContext_ObjCSelectorValue = 1 << 3,




  CXCompletionContext_CXXClassTypeValue = 1 << 4,





  CXCompletionContext_DotMemberAccess = 1 << 5,




  CXCompletionContext_ArrowMemberAccess = 1 << 6,




  CXCompletionContext_ObjCPropertyAccess = 1 << 7,




  CXCompletionContext_EnumTag = 1 << 8,



  CXCompletionContext_UnionTag = 1 << 9,



  CXCompletionContext_StructTag = 1 << 10,




  CXCompletionContext_ClassTag = 1 << 11,




  CXCompletionContext_Namespace = 1 << 12,




  CXCompletionContext_NestedNameSpecifier = 1 << 13,





  CXCompletionContext_ObjCInterface = 1 << 14,




  CXCompletionContext_ObjCProtocol = 1 << 15,




  CXCompletionContext_ObjCCategory = 1 << 16,




  CXCompletionContext_ObjCInstanceMessage = 1 << 17,




  CXCompletionContext_ObjCClassMessage = 1 << 18,




  CXCompletionContext_ObjCSelectorName = 1 << 19,





  CXCompletionContext_MacroName = 1 << 20,




  CXCompletionContext_NaturalLanguage = 1 << 21,




  CXCompletionContext_IncludedFile = 1 << 22,




  CXCompletionContext_Unknown = ((1 << 23) - 1)
};





 unsigned clang_defaultCodeCompleteOptions(void);
# 5325 "/usr/include/clang-c/Index.h" 3 4

CXCodeCompleteResults *
clang_codeCompleteAt(CXTranslationUnit TU, const char *complete_filename,
                     unsigned complete_line, unsigned complete_column,
                     struct CXUnsavedFile *unsaved_files,
                     unsigned num_unsaved_files, unsigned options);
# 5339 "/usr/include/clang-c/Index.h" 3 4

void clang_sortCodeCompletionResults(CXCompletionResult *Results,
                                     unsigned NumResults);





void clang_disposeCodeCompleteResults(CXCodeCompleteResults *Results);






unsigned clang_codeCompleteGetNumDiagnostics(CXCodeCompleteResults *Results);
# 5365 "/usr/include/clang-c/Index.h" 3 4

CXDiagnostic clang_codeCompleteGetDiagnostic(CXCodeCompleteResults *Results,
                                             unsigned Index);
# 5378 "/usr/include/clang-c/Index.h" 3 4

unsigned long long
clang_codeCompleteGetContexts(CXCodeCompleteResults *Results);
# 5398 "/usr/include/clang-c/Index.h" 3 4

enum CXCursorKind
clang_codeCompleteGetContainerKind(CXCodeCompleteResults *Results,
                                   unsigned *IsIncomplete);
# 5412 "/usr/include/clang-c/Index.h" 3 4

CXString clang_codeCompleteGetContainerUSR(CXCodeCompleteResults *Results);
# 5426 "/usr/include/clang-c/Index.h" 3 4

CXString clang_codeCompleteGetObjCSelector(CXCodeCompleteResults *Results);
# 5443 "/usr/include/clang-c/Index.h" 3 4
 CXString clang_getClangVersion(void);







 void clang_toggleCrashRecovery(unsigned isEnabled);
# 5464 "/usr/include/clang-c/Index.h" 3 4
typedef void (*CXInclusionVisitor)(CXFile included_file,
                                   CXSourceLocation *inclusion_stack,
                                   unsigned include_len,
                                   CXClientData client_data);







 void clang_getInclusions(CXTranslationUnit tu,
                                        CXInclusionVisitor visitor,
                                        CXClientData client_data);

typedef enum {
  CXEval_Int = 1,
  CXEval_Float = 2,
  CXEval_ObjCStrLiteral = 3,
  CXEval_StrLiteral = 4,
  CXEval_CFStr = 5,
  CXEval_Other = 6,

  CXEval_UnExposed = 0

} CXEvalResultKind;




typedef void *CXEvalResult;







 CXEvalResult clang_Cursor_Evaluate(CXCursor C);




 CXEvalResultKind clang_EvalResult_getKind(CXEvalResult E);





 int clang_EvalResult_getAsInt(CXEvalResult E);






 long long clang_EvalResult_getAsLongLong(CXEvalResult E);





 unsigned clang_EvalResult_isUnsignedInt(CXEvalResult E);





 unsigned long long
clang_EvalResult_getAsUnsigned(CXEvalResult E);





 double clang_EvalResult_getAsDouble(CXEvalResult E);







 const char *clang_EvalResult_getAsStr(CXEvalResult E);




 void clang_EvalResult_dispose(CXEvalResult E);
# 5565 "/usr/include/clang-c/Index.h" 3 4
typedef void *CXRemapping;
# 5575 "/usr/include/clang-c/Index.h" 3 4
 CXRemapping clang_getRemappings(const char *path);
# 5587 "/usr/include/clang-c/Index.h" 3 4

CXRemapping clang_getRemappingsFromFileList(const char **filePaths,
                                            unsigned numFiles);




 unsigned clang_remap_getNumFiles(CXRemapping);
# 5604 "/usr/include/clang-c/Index.h" 3 4
 void clang_remap_getFilenames(CXRemapping, unsigned index,
                                             CXString *original,
                                             CXString *transformed);




 void clang_remap_dispose(CXRemapping);
# 5622 "/usr/include/clang-c/Index.h" 3 4
enum CXVisitorResult { CXVisit_Break, CXVisit_Continue };

typedef struct CXCursorAndRangeVisitor {
  void *context;
  enum CXVisitorResult (*visit)(void *context, CXCursor, CXSourceRange);
} CXCursorAndRangeVisitor;

typedef enum {



  CXResult_Success = 0,



  CXResult_Invalid = 1,




  CXResult_VisitBreak = 2

} CXResult;
# 5660 "/usr/include/clang-c/Index.h" 3 4
 CXResult clang_findReferencesInFile(
    CXCursor cursor, CXFile file, CXCursorAndRangeVisitor visitor);
# 5675 "/usr/include/clang-c/Index.h" 3 4
 CXResult clang_findIncludesInFile(
    CXTranslationUnit TU, CXFile file, CXCursorAndRangeVisitor visitor);
# 5698 "/usr/include/clang-c/Index.h" 3 4
typedef void *CXIdxClientFile;




typedef void *CXIdxClientEntity;





typedef void *CXIdxClientContainer;





typedef void *CXIdxClientASTFile;




typedef struct {
  void *ptr_data[2];
  unsigned int_data;
} CXIdxLoc;




typedef struct {



  CXIdxLoc hashLoc;



  const char *filename;



  CXFile file;
  int isImport;
  int isAngled;




  int isModuleImport;
} CXIdxIncludedFileInfo;




typedef struct {



  CXFile file;



  CXModule module;



  CXIdxLoc loc;




  int isImplicit;

} CXIdxImportedASTFileInfo;

typedef enum {
  CXIdxEntity_Unexposed = 0,
  CXIdxEntity_Typedef = 1,
  CXIdxEntity_Function = 2,
  CXIdxEntity_Variable = 3,
  CXIdxEntity_Field = 4,
  CXIdxEntity_EnumConstant = 5,

  CXIdxEntity_ObjCClass = 6,
  CXIdxEntity_ObjCProtocol = 7,
  CXIdxEntity_ObjCCategory = 8,

  CXIdxEntity_ObjCInstanceMethod = 9,
  CXIdxEntity_ObjCClassMethod = 10,
  CXIdxEntity_ObjCProperty = 11,
  CXIdxEntity_ObjCIvar = 12,

  CXIdxEntity_Enum = 13,
  CXIdxEntity_Struct = 14,
  CXIdxEntity_Union = 15,

  CXIdxEntity_CXXClass = 16,
  CXIdxEntity_CXXNamespace = 17,
  CXIdxEntity_CXXNamespaceAlias = 18,
  CXIdxEntity_CXXStaticVariable = 19,
  CXIdxEntity_CXXStaticMethod = 20,
  CXIdxEntity_CXXInstanceMethod = 21,
  CXIdxEntity_CXXConstructor = 22,
  CXIdxEntity_CXXDestructor = 23,
  CXIdxEntity_CXXConversionFunction = 24,
  CXIdxEntity_CXXTypeAlias = 25,
  CXIdxEntity_CXXInterface = 26,
  CXIdxEntity_CXXConcept = 27

} CXIdxEntityKind;

typedef enum {
  CXIdxEntityLang_None = 0,
  CXIdxEntityLang_C = 1,
  CXIdxEntityLang_ObjC = 2,
  CXIdxEntityLang_CXX = 3,
  CXIdxEntityLang_Swift = 4
} CXIdxEntityLanguage;
# 5828 "/usr/include/clang-c/Index.h" 3 4
typedef enum {
  CXIdxEntity_NonTemplate = 0,
  CXIdxEntity_Template = 1,
  CXIdxEntity_TemplatePartialSpecialization = 2,
  CXIdxEntity_TemplateSpecialization = 3
} CXIdxEntityCXXTemplateKind;

typedef enum {
  CXIdxAttr_Unexposed = 0,
  CXIdxAttr_IBAction = 1,
  CXIdxAttr_IBOutlet = 2,
  CXIdxAttr_IBOutletCollection = 3
} CXIdxAttrKind;

typedef struct {
  CXIdxAttrKind kind;
  CXCursor cursor;
  CXIdxLoc loc;
} CXIdxAttrInfo;

typedef struct {
  CXIdxEntityKind kind;
  CXIdxEntityCXXTemplateKind templateKind;
  CXIdxEntityLanguage lang;
  const char *name;
  const char *USR;
  CXCursor cursor;
  const CXIdxAttrInfo *const *attributes;
  unsigned numAttributes;
} CXIdxEntityInfo;

typedef struct {
  CXCursor cursor;
} CXIdxContainerInfo;

typedef struct {
  const CXIdxAttrInfo *attrInfo;
  const CXIdxEntityInfo *objcClass;
  CXCursor classCursor;
  CXIdxLoc classLoc;
} CXIdxIBOutletCollectionAttrInfo;

typedef enum { CXIdxDeclFlag_Skipped = 0x1 } CXIdxDeclInfoFlags;

typedef struct {
  const CXIdxEntityInfo *entityInfo;
  CXCursor cursor;
  CXIdxLoc loc;
  const CXIdxContainerInfo *semanticContainer;




  const CXIdxContainerInfo *lexicalContainer;
  int isRedeclaration;
  int isDefinition;
  int isContainer;
  const CXIdxContainerInfo *declAsContainer;




  int isImplicit;
  const CXIdxAttrInfo *const *attributes;
  unsigned numAttributes;

  unsigned flags;

} CXIdxDeclInfo;

typedef enum {
  CXIdxObjCContainer_ForwardRef = 0,
  CXIdxObjCContainer_Interface = 1,
  CXIdxObjCContainer_Implementation = 2
} CXIdxObjCContainerKind;

typedef struct {
  const CXIdxDeclInfo *declInfo;
  CXIdxObjCContainerKind kind;
} CXIdxObjCContainerDeclInfo;

typedef struct {
  const CXIdxEntityInfo *base;
  CXCursor cursor;
  CXIdxLoc loc;
} CXIdxBaseClassInfo;

typedef struct {
  const CXIdxEntityInfo *protocol;
  CXCursor cursor;
  CXIdxLoc loc;
} CXIdxObjCProtocolRefInfo;

typedef struct {
  const CXIdxObjCProtocolRefInfo *const *protocols;
  unsigned numProtocols;
} CXIdxObjCProtocolRefListInfo;

typedef struct {
  const CXIdxObjCContainerDeclInfo *containerInfo;
  const CXIdxBaseClassInfo *superInfo;
  const CXIdxObjCProtocolRefListInfo *protocols;
} CXIdxObjCInterfaceDeclInfo;

typedef struct {
  const CXIdxObjCContainerDeclInfo *containerInfo;
  const CXIdxEntityInfo *objcClass;
  CXCursor classCursor;
  CXIdxLoc classLoc;
  const CXIdxObjCProtocolRefListInfo *protocols;
} CXIdxObjCCategoryDeclInfo;

typedef struct {
  const CXIdxDeclInfo *declInfo;
  const CXIdxEntityInfo *getter;
  const CXIdxEntityInfo *setter;
} CXIdxObjCPropertyDeclInfo;

typedef struct {
  const CXIdxDeclInfo *declInfo;
  const CXIdxBaseClassInfo *const *bases;
  unsigned numBases;
} CXIdxCXXClassDeclInfo;







typedef enum {



  CXIdxEntityRef_Direct = 1,




  CXIdxEntityRef_Implicit = 2
} CXIdxEntityRefKind;







typedef enum {
  CXSymbolRole_None = 0,
  CXSymbolRole_Declaration = 1 << 0,
  CXSymbolRole_Definition = 1 << 1,
  CXSymbolRole_Reference = 1 << 2,
  CXSymbolRole_Read = 1 << 3,
  CXSymbolRole_Write = 1 << 4,
  CXSymbolRole_Call = 1 << 5,
  CXSymbolRole_Dynamic = 1 << 6,
  CXSymbolRole_AddressOf = 1 << 7,
  CXSymbolRole_Implicit = 1 << 8
} CXSymbolRole;




typedef struct {
  CXIdxEntityRefKind kind;



  CXCursor cursor;
  CXIdxLoc loc;



  const CXIdxEntityInfo *referencedEntity;
# 6014 "/usr/include/clang-c/Index.h" 3 4
  const CXIdxEntityInfo *parentEntity;



  const CXIdxContainerInfo *container;



  CXSymbolRole role;
} CXIdxEntityRefInfo;





typedef struct {




  int (*abortQuery)(CXClientData client_data, void *reserved);




  void (*diagnostic)(CXClientData client_data, CXDiagnosticSet, void *reserved);

  CXIdxClientFile (*enteredMainFile)(CXClientData client_data, CXFile mainFile,
                                     void *reserved);




  CXIdxClientFile (*ppIncludedFile)(CXClientData client_data,
                                    const CXIdxIncludedFileInfo *);
# 6058 "/usr/include/clang-c/Index.h" 3 4
  CXIdxClientASTFile (*importedASTFile)(CXClientData client_data,
                                        const CXIdxImportedASTFileInfo *);




  CXIdxClientContainer (*startedTranslationUnit)(CXClientData client_data,
                                                 void *reserved);

  void (*indexDeclaration)(CXClientData client_data, const CXIdxDeclInfo *);




  void (*indexEntityReference)(CXClientData client_data,
                               const CXIdxEntityRefInfo *);

} IndexerCallbacks;

 int clang_index_isEntityObjCContainerKind(CXIdxEntityKind);
 const CXIdxObjCContainerDeclInfo *
clang_index_getObjCContainerDeclInfo(const CXIdxDeclInfo *);

 const CXIdxObjCInterfaceDeclInfo *
clang_index_getObjCInterfaceDeclInfo(const CXIdxDeclInfo *);


const CXIdxObjCCategoryDeclInfo *
clang_index_getObjCCategoryDeclInfo(const CXIdxDeclInfo *);

 const CXIdxObjCProtocolRefListInfo *
clang_index_getObjCProtocolRefListInfo(const CXIdxDeclInfo *);

 const CXIdxObjCPropertyDeclInfo *
clang_index_getObjCPropertyDeclInfo(const CXIdxDeclInfo *);

 const CXIdxIBOutletCollectionAttrInfo *
clang_index_getIBOutletCollectionAttrInfo(const CXIdxAttrInfo *);

 const CXIdxCXXClassDeclInfo *
clang_index_getCXXClassDeclInfo(const CXIdxDeclInfo *);





 CXIdxClientContainer
clang_index_getClientContainer(const CXIdxContainerInfo *);





 void clang_index_setClientContainer(const CXIdxContainerInfo *,
                                                   CXIdxClientContainer);




 CXIdxClientEntity
clang_index_getClientEntity(const CXIdxEntityInfo *);




 void clang_index_setClientEntity(const CXIdxEntityInfo *,
                                                CXIdxClientEntity);





typedef void *CXIndexAction;







 CXIndexAction clang_IndexAction_create(CXIndex CIdx);







 void clang_IndexAction_dispose(CXIndexAction);

typedef enum {



  CXIndexOpt_None = 0x0,






  CXIndexOpt_SuppressRedundantRefs = 0x1,





  CXIndexOpt_IndexFunctionLocalSymbols = 0x2,





  CXIndexOpt_IndexImplicitTemplateInstantiations = 0x4,




  CXIndexOpt_SuppressWarnings = 0x8,






  CXIndexOpt_SkipParsedBodiesInSession = 0x10

} CXIndexOptFlags;
# 6212 "/usr/include/clang-c/Index.h" 3 4
 int clang_indexSourceFile(
    CXIndexAction, CXClientData client_data, IndexerCallbacks *index_callbacks,
    unsigned index_callbacks_size, unsigned index_options,
    const char *source_filename, const char *const *command_line_args,
    int num_command_line_args, struct CXUnsavedFile *unsaved_files,
    unsigned num_unsaved_files, CXTranslationUnit *out_TU, unsigned TU_options);






 int clang_indexSourceFileFullArgv(
    CXIndexAction, CXClientData client_data, IndexerCallbacks *index_callbacks,
    unsigned index_callbacks_size, unsigned index_options,
    const char *source_filename, const char *const *command_line_args,
    int num_command_line_args, struct CXUnsavedFile *unsaved_files,
    unsigned num_unsaved_files, CXTranslationUnit *out_TU, unsigned TU_options);
# 6247 "/usr/include/clang-c/Index.h" 3 4
 int clang_indexTranslationUnit(
    CXIndexAction, CXClientData client_data, IndexerCallbacks *index_callbacks,
    unsigned index_callbacks_size, unsigned index_options, CXTranslationUnit);
# 6259 "/usr/include/clang-c/Index.h" 3 4
 void clang_indexLoc_getFileLocation(CXIdxLoc loc,
                                                   CXIdxClientFile *indexFile,
                                                   CXFile *file, unsigned *line,
                                                   unsigned *column,
                                                   unsigned *offset);





CXSourceLocation clang_indexLoc_getCXSourceLocation(CXIdxLoc loc);
# 6282 "/usr/include/clang-c/Index.h" 3 4
typedef enum CXVisitorResult (*CXFieldVisitor)(CXCursor C,
                                               CXClientData client_data);
# 6304 "/usr/include/clang-c/Index.h" 3 4
 unsigned clang_Type_visitFields(CXType T, CXFieldVisitor visitor,
                                               CXClientData client_data);
# 6315 "/usr/include/clang-c/Index.h" 3 4

# 11 "resect_types_private.h" 2
# 24 "resect_types_private.h"

# 24 "resect_types_private.h"
struct P_resect_string {
    char *value;
    size_t capacity;
};





typedef struct P_resect_error *resect_error;

struct P_resect_error {
  resect_error_code code;
  resect_string message;
  void *extra_data;
};




struct P_resect_collection_element {
    void *value;
    struct P_resect_collection_element *next;
    struct P_resect_collection_element *prev;
};

struct P_resect_collection {
    unsigned int size;
    struct P_resect_collection_element *head, *tail;
};





struct P_resect_iterator {
    struct P_resect_collection_element *head;
    struct P_resect_collection_element *current;
};





typedef struct P_resect_set *resect_set;

typedef struct P_resect_set_item {
    void *key;

    UT_hash_handle hh;
} *resect_set_item;

struct P_resect_set {
    resect_set_item head;
};





typedef struct P_resect_table *resect_table;

struct P_resect_table_entry {
    char *key;
    void *value;

    UT_hash_handle hh;
};

struct P_resect_table {
    struct P_resect_table_entry *head;
};





struct P_resect_parse_options {
   resect_collection args;
   resect_bool single;
   resect_bool diagnostics;

   resect_collection included_definition_patterns;
   resect_collection included_source_patterns;
   resect_collection excluded_definition_patterns;
   resect_collection excluded_source_patterns;
   resect_collection enforced_definition_patterns;
   resect_collection enforced_source_patterns;
};

typedef void (*resect_argv_option_handler)(resect_parse_options options, const char *arg);

struct resect_argv_option_item {
  struct option opt;
  const char *help_text;
  resect_argv_option_handler handler;
};





typedef struct P_resect_filtering_context *resect_filtering_context;

struct P_resect_filtering_context {
    resect_collection included_definition_patterns;
    resect_collection included_source_patterns;
    resect_collection excluded_definition_patterns;
    resect_collection excluded_source_patterns;
    resect_collection enforced_definition_patterns;
    resect_collection enforced_source_patterns;

    resect_collection status_stack;
};





typedef struct P_resect_translation_context *resect_translation_context;

struct P_resect_translation_unit {
    resect_collection declarations;
    resect_translation_context context;
};

enum P_resect_garbage_kind {
    RESECT_GARBAGE_KIND_TEMPLATE_ARGUMENT,
    RESECT_GARBAGE_KIND_DECL,
    RESECT_GARBAGE_KIND_TYPE,
};

struct P_resect_garbage {
    enum P_resect_garbage_kind kind;
    void *data;
};

typedef void (*resect_data_deallocator)(void *data, resect_set deallocated);

struct P_resect_translation_context {
    resect_set exposed_decls;
    resect_table decl_table;
    resect_table template_parameter_table;
    resect_language language;
    resect_filtering_context filtering;

    resect_collection state_stack;
    resect_collection garbage;
    size_t context_depth;
};

typedef void (*resect_error_handler)(resect_error error);
typedef void (*resect_translation_unit_handler)(resect_translation_unit unit);

struct P_resect_invocation {
  int argc;
  char **argv;
  struct resect_argv_option_item* argv_option_items;
  resect_parse_options options;
  resect_translation_unit result;
  resect_collection errors;
  resect_error_handler error_handler;
  resect_translation_unit_handler translation_unit_handler;
  resect_table visitors_table;
};


static resect_invocation THE_INVOCATION = 
# 191 "resect_types_private.h" 3 4
                                         ((void *)0)
# 191 "resect_types_private.h"
                                             ;
# 202 "resect_types_private.h"
struct P_resect_location {
    unsigned int line;
    unsigned int column;
    resect_string name;
};




struct P_resect_decl {
    resect_decl_kind kind;
    resect_string id;
    resect_string name;
    resect_string namespace;
    resect_location location;
    resect_string mangled_name;
    resect_string comment;
    resect_access_specifier access;
    resect_linkage_kind linkage;

    resect_bool is_template;
    resect_collection template_parameters;
    resect_collection template_arguments;
    resect_decl template;
    resect_bool partial;
    resect_bool forward;

    resect_decl owner;
    resect_type type;

    resect_string source;

    resect_inclusion_status inclusion_status;

    void *data;
    resect_data_deallocator data_deallocator;
};

typedef struct P_resect_decl_child_visit_data {
    resect_translation_context context;
    resect_decl parent;
} *resect_decl_child_visit_data;


typedef struct {
    resect_decl_kind kind;
    resect_decl decl;
} resect_decl_result;


struct P_function_class_mangling_result {
    CXCursor cursor;
    resect_string mangling;
};




struct P_resect_decl_context {
    
# 261 "resect_types_private.h" 3 4
   _Bool 
# 261 "resect_types_private.h"
        exclusion_detected;
};




struct P_resect_type {
    resect_type_kind kind;
    resect_string name;
    unsigned int size;
    unsigned int alignment;
    resect_type_category category;
    resect_collection fields;
    resect_bool const_qualified;
    resect_bool pod;
    resect_bool undeclared;
    resect_collection template_arguments;

    resect_decl decl;

    resect_data_deallocator data_deallocator;
    void *data;
};

typedef struct P_resect_type_visit_data {
    resect_type type;
    resect_translation_context context;
} *resect_type_visit_data;





typedef struct P_resect_typedef_data {
    resect_type aliased_type;
} *resect_typedef_data;





typedef struct P_resect_array_data {
    resect_type type;
    long long size;
} *resect_array_data;





typedef struct P_resect_pointer_data {
    resect_type type;
} *resect_pointer_data;





typedef struct P_resect_reference_data {
    resect_bool is_lvalue;
    resect_type type;
} *resect_reference_data;





typedef struct P_resect_enum_constant_data {
    resect_bool is_unsigned;
    unsigned long long unsigned_value;
    long long value;
} *resect_enum_constant_data;


typedef struct P_resect_enum_data {
    resect_collection constants;
    resect_type type;
} *resect_enum_data;





typedef struct P_resect_variable_data {
    resect_variable_kind kind;
    resect_string string_value;
    long long int_value;
    double float_value;
    resect_storage_class storage_class;
} *resect_variable_data;





typedef struct P_resect_macro_data {
    resect_bool is_function_like;
} *resect_macro_data;




struct P_resect_template_argument {
    int position;
    resect_template_argument_kind kind;
    resect_type type;
    long long int value;
};




typedef struct P_resect_template_parameter_data {
    resect_template_parameter_kind kind;
} *resect_template_parameter_data;





typedef struct P_resect_field_data {
    resect_bool bitfield;
    long long width;
    long long offset;
} *resect_field_data;

typedef struct P_resect_record_data {
    resect_collection fields;
    resect_collection methods;
    resect_collection parents;
    resect_bool abstract;
} *resect_record_data;





typedef struct P_resect_function_proto_data {
    resect_type result_type;
    resect_bool variadic;
    resect_collection parameters;
} *resect_function_proto_data;





typedef struct P_resect_function_data {
    resect_bool variadic;
    resect_storage_class storage_class;
    resect_collection parameters;
    resect_function_calling_convention calling_convention;
    resect_type result_type;
    resect_bool inlined;
} *resect_function_data;





typedef struct P_resect_method_data {
    resect_function_data function_data;
    resect_bool pure_virtual;
    resect_bool virtual;
    resect_bool non_mutating;
} *resect_method_data;
# 11 "util.c" 2
# 1 "resect_private.h" 1
# 9 "resect_private.h"
# 1 "/usr/include/stdio.h" 1 3 4
# 27 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/bits/libc-header-start.h" 1 3 4
# 28 "/usr/include/stdio.h" 2 3 4





# 1 "/usr/lib64/gcc/x86_64-suse-linux/13/include/stddef.h" 1 3 4
# 34 "/usr/include/stdio.h" 2 3 4





# 1 "/usr/include/bits/types/__fpos_t.h" 1 3 4




# 1 "/usr/include/bits/types/__mbstate_t.h" 1 3 4
# 13 "/usr/include/bits/types/__mbstate_t.h" 3 4

# 13 "/usr/include/bits/types/__mbstate_t.h" 3 4
typedef struct
{
  int __count;
  union
  {
    unsigned int __wch;
    char __wchb[4];
  } __value;
} __mbstate_t;
# 6 "/usr/include/bits/types/__fpos_t.h" 2 3 4




typedef struct _G_fpos_t
{
  __off_t __pos;
  __mbstate_t __state;
} __fpos_t;
# 40 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/bits/types/__fpos64_t.h" 1 3 4
# 10 "/usr/include/bits/types/__fpos64_t.h" 3 4
typedef struct _G_fpos64_t
{
  __off64_t __pos;
  __mbstate_t __state;
} __fpos64_t;
# 41 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/bits/types/__FILE.h" 1 3 4



struct _IO_FILE;
typedef struct _IO_FILE __FILE;
# 42 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/bits/types/FILE.h" 1 3 4



struct _IO_FILE;


typedef struct _IO_FILE FILE;
# 43 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/bits/types/struct_FILE.h" 1 3 4
# 35 "/usr/include/bits/types/struct_FILE.h" 3 4
struct _IO_FILE;
struct _IO_marker;
struct _IO_codecvt;
struct _IO_wide_data;




typedef void _IO_lock_t;





struct _IO_FILE
{
  int _flags;


  char *_IO_read_ptr;
  char *_IO_read_end;
  char *_IO_read_base;
  char *_IO_write_base;
  char *_IO_write_ptr;
  char *_IO_write_end;
  char *_IO_buf_base;
  char *_IO_buf_end;


  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;
  int _flags2;
  __off_t _old_offset;


  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];

  _IO_lock_t *_lock;







  __off64_t _offset;

  struct _IO_codecvt *_codecvt;
  struct _IO_wide_data *_wide_data;
  struct _IO_FILE *_freeres_list;
  void *_freeres_buf;
  size_t __pad5;
  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];
};
# 44 "/usr/include/stdio.h" 2 3 4


# 1 "/usr/include/bits/types/cookie_io_functions_t.h" 1 3 4
# 27 "/usr/include/bits/types/cookie_io_functions_t.h" 3 4
typedef __ssize_t cookie_read_function_t (void *__cookie, char *__buf,
                                          size_t __nbytes);







typedef __ssize_t cookie_write_function_t (void *__cookie, const char *__buf,
                                           size_t __nbytes);







typedef int cookie_seek_function_t (void *__cookie, __off64_t *__pos, int __w);


typedef int cookie_close_function_t (void *__cookie);






typedef struct _IO_cookie_io_functions_t
{
  cookie_read_function_t *read;
  cookie_write_function_t *write;
  cookie_seek_function_t *seek;
  cookie_close_function_t *close;
} cookie_io_functions_t;
# 47 "/usr/include/stdio.h" 2 3 4
# 84 "/usr/include/stdio.h" 3 4
typedef __fpos_t fpos_t;
# 128 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/bits/stdio_lim.h" 1 3 4
# 129 "/usr/include/stdio.h" 2 3 4
# 148 "/usr/include/stdio.h" 3 4
extern FILE *stdin;
extern FILE *stdout;
extern FILE *stderr;






extern int remove (const char *__filename) __attribute__ ((__nothrow__ , __leaf__));

extern int rename (const char *__old, const char *__new) __attribute__ ((__nothrow__ , __leaf__));



extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new) __attribute__ ((__nothrow__ , __leaf__));
# 183 "/usr/include/stdio.h" 3 4
extern int fclose (FILE *__stream) __attribute__ ((__nonnull__ (1)));
# 193 "/usr/include/stdio.h" 3 4
extern FILE *tmpfile (void)
  __attribute__ ((__malloc__)) __attribute__ ((__malloc__ (fclose, 1))) ;
# 210 "/usr/include/stdio.h" 3 4
extern char *tmpnam (char[20]) __attribute__ ((__nothrow__ , __leaf__)) ;




extern char *tmpnam_r (char __s[20]) __attribute__ ((__nothrow__ , __leaf__)) ;
# 227 "/usr/include/stdio.h" 3 4
extern char *tempnam (const char *__dir, const char *__pfx)
   __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__malloc__ (__builtin_free, 1)));






extern int fflush (FILE *__stream);
# 244 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 263 "/usr/include/stdio.h" 3 4
extern FILE *fopen (const char *__restrict __filename,
      const char *__restrict __modes)
  __attribute__ ((__malloc__)) __attribute__ ((__malloc__ (fclose, 1))) ;




extern FILE *freopen (const char *__restrict __filename,
        const char *__restrict __modes,
        FILE *__restrict __stream) __attribute__ ((__nonnull__ (3)));
# 298 "/usr/include/stdio.h" 3 4
extern FILE *fdopen (int __fd, const char *__modes) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__malloc__)) __attribute__ ((__malloc__ (fclose, 1))) ;





extern FILE *fopencookie (void *__restrict __magic_cookie,
     const char *__restrict __modes,
     cookie_io_functions_t __io_funcs) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__malloc__)) __attribute__ ((__malloc__ (fclose, 1))) ;




extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__malloc__ (fclose, 1))) ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__malloc__)) __attribute__ ((__malloc__ (fclose, 1))) ;
# 333 "/usr/include/stdio.h" 3 4
extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) __attribute__ ((__nothrow__ , __leaf__));




extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) __attribute__ ((__nothrow__ , __leaf__));


extern void setlinebuf (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));







extern int fprintf (FILE *__restrict __stream,
      const char *__restrict __format, ...);




extern int printf (const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      const char *__restrict __format, ...) __attribute__ ((__nothrow__));





extern int vfprintf (FILE *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg) __attribute__ ((__nothrow__));



extern int snprintf (char *__restrict __s, size_t __maxlen,
       const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 0)));





extern int vasprintf (char **__restrict __ptr, const char *__restrict __f,
        __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 0))) ;
extern int __asprintf (char **__restrict __ptr,
         const char *__restrict __fmt, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 3))) ;
extern int asprintf (char **__restrict __ptr,
       const char *__restrict __fmt, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 3))) ;




extern int vdprintf (int __fd, const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));







extern int fscanf (FILE *__restrict __stream,
     const char *__restrict __format, ...) ;




extern int scanf (const char *__restrict __format, ...) ;

extern int sscanf (const char *__restrict __s,
     const char *__restrict __format, ...) __attribute__ ((__nothrow__ , __leaf__));
# 460 "/usr/include/stdio.h" 3 4
extern int fscanf (FILE *__restrict __stream, const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf")

                               ;
extern int scanf (const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf")
                              ;
extern int sscanf (const char *__restrict __s, const char *__restrict __format, ...) __asm__ ("" "__isoc99_sscanf") __attribute__ ((__nothrow__ , __leaf__))

                      ;
# 486 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format__ (__scanf__, 2, 0)));
# 536 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")



     __attribute__ ((__format__ (__scanf__, 2, 0))) ;
extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")

     __attribute__ ((__format__ (__scanf__, 1, 0))) ;
extern int vsscanf (const char *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vsscanf") __attribute__ ((__nothrow__ , __leaf__))



     __attribute__ ((__format__ (__scanf__, 2, 0)));
# 571 "/usr/include/stdio.h" 3 4
extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);






extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 596 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);
# 607 "/usr/include/stdio.h" 3 4
extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);
# 623 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);







extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     __attribute__ ((__access__ (__write_only__, 1, 2)));
# 690 "/usr/include/stdio.h" 3 4
extern __ssize_t __getdelim (char **__restrict __lineptr,
                             size_t *__restrict __n, int __delimiter,
                             FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
                           size_t *__restrict __n, int __delimiter,
                           FILE *__restrict __stream) ;







extern __ssize_t getline (char **__restrict __lineptr,
                          size_t *__restrict __n,
                          FILE *__restrict __stream) ;







extern int fputs (const char *__restrict __s, FILE *__restrict __stream);





extern int puts (const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;




extern size_t fwrite (const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);
# 760 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);







extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);
# 794 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;
# 818 "/usr/include/stdio.h" 3 4
extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, const fpos_t *__pos);
# 844 "/usr/include/stdio.h" 3 4
extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));

extern int feof (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;

extern int ferror (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;



extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;







extern void perror (const char *__s) __attribute__ ((__cold__));




extern int fileno (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
# 881 "/usr/include/stdio.h" 3 4
extern int pclose (FILE *__stream);





extern FILE *popen (const char *__command, const char *__modes)
  __attribute__ ((__malloc__)) __attribute__ ((__malloc__ (pclose, 1))) ;






extern char *ctermid (char *__s) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__access__ (__write_only__, 1)));
# 925 "/usr/include/stdio.h" 3 4
extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));



extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;


extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
# 943 "/usr/include/stdio.h" 3 4
extern int __uflow (FILE *);
extern int __overflow (FILE *, int);
# 967 "/usr/include/stdio.h" 3 4

# 10 "resect_private.h" 2






# 15 "resect_private.h"
resect_string resect_string_format(const char *format, ...);

resect_string resect_string_from_clang(CXString from);

resect_string resect_string_from_c(const char *string);

resect_string resect_string_copy(resect_string string);

resect_string resect_string_update(resect_string string, const char *new);

resect_string resect_string_append(resect_string string, const char *postfix);

size_t resect_string_length(resect_string string);

resect_string resect_substring(resect_string string, long long start, long long end);

resect_bool resect_string_equal(resect_string this, resect_string that);

resect_bool resect_string_equal_c(resect_string this, const char *that);

resect_bool resect_string_starts_with_c(resect_string this, const char *prefix);

void resect_string_free(resect_string string);

const char *resect_string_to_c(resect_string string);




const char* resect_error_to_c_string(resect_error_code code);
resect_string resect_error_to_resect_string(resect_error_code code);






resect_collection resect_collection_create();

void resect_collection_free(resect_collection collection);

void resect_collection_add(resect_collection collection, void *value);

void *resect_collection_pop_last(resect_collection collection);

void *resect_collection_peek_last(resect_collection collection);

unsigned int resect_collection_size(resect_collection collection);




resect_set resect_set_create();

void resect_set_free(resect_set set);

resect_bool resect_set_contains(resect_set set, void *value);

resect_bool resect_set_add(resect_set set, void *value);

void resect_set_add_to_collection(resect_set set, resect_collection collection);




resect_bool resect_iterator_next(resect_iterator iter);

void *resect_iterator_value(resect_iterator iter);

void resect_iterator_free(resect_iterator iter);




resect_table resect_table_create();

resect_bool resect_table_put_if_absent(resect_table table, const char *key, void *value);

void *resect_table_get(resect_table table, const char *key);

void resect_visit_table(resect_table table,
                        resect_bool (*entry_visitor)(void *, const char *, void *),
                        void *context);

void resect_table_free(resect_table table, void (*value_destructor)(void *, void *), void *context);





resect_filtering_context resect_filtering_context_create(resect_parse_options options);

void resect_filtering_context_free(resect_filtering_context context);

resect_inclusion_status resect_filtering_explicit_inclusion_status(resect_filtering_context context,
                                                                   const char *declaration_name,
                                                                   const char *declaration_source);


resect_inclusion_status resect_filtering_inclusion_status(resect_filtering_context context);

void resect_filtering_push_inclusion_status(resect_filtering_context context, resect_inclusion_status status);

resect_inclusion_status resect_filtering_pop_inclusion_status(resect_filtering_context context);




resect_translation_context resect_context_create(resect_parse_options opts);

resect_collection resect_create_decl_collection(resect_translation_context context);

void resect_context_free(resect_translation_context context, resect_set deallocated);

enum CXChildVisitResult resect_visit_context_child(CXCursor cursor,
                                                   CXCursor parent,
                                                   CXClientData data);

void resect_register_decl(resect_translation_context context, resect_string id, resect_decl decl);

void resect_register_decl_language(resect_translation_context context, resect_language language);

resect_language resect_get_assumed_language(resect_translation_context context);

resect_inclusion_status resect_cursor_inclusion_status(resect_translation_context context, CXCursor cursor);

resect_inclusion_status resect_context_inclusion_status(resect_translation_context context);

void resect_context_push_inclusion_status(resect_translation_context context, resect_inclusion_status status);

resect_inclusion_status resect_context_pop_inclusion_status(resect_translation_context context);

void resect_export_decl(resect_translation_context context, resect_decl decl);

resect_decl resect_find_decl(resect_translation_context context, resect_string decl_id);

void resect_register_template_parameter(resect_translation_context context, resect_string name, resect_decl decl);

resect_decl resect_find_template_parameter(resect_translation_context context, resect_string name);

void *resect_context_current_state(resect_translation_context context);

void resect_context_push_state(resect_translation_context context, void *value);

void *resect_context_pop_state(resect_translation_context context);

void resect_register_garbage(resect_translation_context context, enum P_resect_garbage_kind kind, void *garbage);

resect_bool resect_context_is_max_context_depth_exceeded(resect_translation_context context);

size_t resect_context_get_context_depth(resect_translation_context context);

size_t resect_context_inc_context_depth(resect_translation_context context);

size_t resect_context_dec_context_depth(resect_translation_context context);




resect_type resect_type_create(resect_translation_context context, CXType canonical_type);

void resect_type_free(resect_type type, resect_set deallocated);

void resect_type_collection_free(resect_collection types, resect_set deallocated);




resect_decl_result resect_decl_create(resect_translation_context context, CXCursor cursor);

void resect_decl_free(resect_decl decl, resect_set deallocated);

void resect_decl_collection_free(resect_collection decls, resect_set deallocated);

resect_string resect_location_to_string(resect_location location);

resect_string resect_format_cursor_namespace(CXCursor cursor);

resect_location resect_location_from_cursor(CXCursor cursor);

void resect_location_free(resect_location location);

resect_string resect_extract_decl_id(CXCursor cursor);

void resect_register_exclusion(resect_translation_context translation_context);

void resect_reset_registered_exclusion(resect_translation_context translation_context);


# 203 "resect_private.h" 3 4
_Bool 
# 203 "resect_private.h"
    resect_is_exclusion_detected(resect_translation_context translation_context);

void resect_record_init(resect_translation_context context, resect_decl decl, CXCursor cursor);

void resect_enum_init(resect_translation_context context, resect_decl decl, CXCursor cursor);

void resect_enum_constant_init(resect_translation_context context, resect_decl decl, CXCursor cursor);

void resect_function_init(resect_translation_context context, resect_decl decl, CXCursor cursor);

void resect_variable_init(resect_translation_context context, resect_decl decl, CXCursor cursor);

void resect_typedef_init(resect_translation_context context, resect_decl decl, CXCursor cursor);

void resect_field_init(resect_translation_context context, resect_decl decl, CXCursor cursor);

void resect_method_init(resect_translation_context context, resect_decl decl, CXCursor cursor);

void resect_macro_init(resect_translation_context context, resect_decl decl, CXCursor cursor);

void resect_template_parameter_init(resect_translation_context context, resect_decl decl, CXCursor cursor);




enum CXChildVisitResult resect_visit_child_declaration(CXCursor cursor, CXCursor parent, CXClientData data);
enum CXChildVisitResult resect_visit_record_child(CXCursor cursor, CXCursor parent, CXClientData data);
enum CXChildVisitResult resect_visit_function_parameter(CXCursor cursor, CXCursor parent, CXClientData data);
enum CXChildVisitResult resect_visit_enum_constant(CXCursor cursor, CXCursor parent, CXClientData data);
enum CXChildVisitResult resect_visit_method_parameter(CXCursor cursor, CXCursor parent, CXClientData data);




resect_template_argument resect_template_argument_create(resect_template_argument_kind kind,
                                                         resect_type type,
                                                         long long int value,
                                                         int arg_number);

void resect_template_argument_free(resect_template_argument arg, resect_set deallocated);

void resect_template_argument_collection_free(resect_collection args, resect_set deallocated);

resect_template_argument_kind convert_template_argument_kind(enum CXTemplateArgumentKind kind);




long long filter_valid_value(long long value);

void resect_string_collection_free(resect_collection collection);

resect_string resect_extract_decl_id(CXCursor cursor);

resect_string resect_format_cursor_full_name(CXCursor cursor);

unsigned long resect_hash(const char *str);




resect_error_code check_file_exists(const char *filename);
resect_error_code ensure_directory_exists(const char *dirname);






resect_collection resect_options_get_included_definitions(resect_parse_options opts);

resect_collection resect_options_get_included_sources(resect_parse_options opts);

resect_collection resect_options_get_excluded_definitions(resect_parse_options opts);

resect_collection resect_options_get_excluded_sources(resect_parse_options opts);

resect_collection resect_options_get_enforced_definitions(resect_parse_options opts);

resect_collection resect_options_get_enforced_sources(resect_parse_options opts);

resect_error_code parse_argv_options(resect_parse_options options,
                                     char **header_file_out, char **working_dir_out,
                                     int argc, char **argv);




resect_invocation resect_invocation_create(resect_parse_options options,
                                           resect_error_handler error_handler);

resect_translation_unit resect_parse_tu2(const char *filename,
                                         const char *working_dir,
                                         resect_parse_options options);
# 12 "util.c" 2




resect_string resect_string_create(unsigned int initial_capacity) {
    resect_string result = malloc(sizeof(struct P_resect_string));
    result->capacity = initial_capacity > 0 ? initial_capacity : 1;
    result->value = malloc(result->capacity * sizeof(char));
    result->value[0] = 0;
    return result;
}

void resect_string_free(resect_string string) {
    free(string->value);
    free(string);
}

const char *resect_string_to_c(resect_string string) {
    
# 30 "util.c" 3 4
   ((void) sizeof ((
# 30 "util.c"
   string != 
# 30 "util.c" 3 4
   ((void *)0)) ? 1 : 0), __extension__ ({ if (
# 30 "util.c"
   string != 
# 30 "util.c" 3 4
   ((void *)0)) ; else __assert_fail (
# 30 "util.c"
   "string != NULL"
# 30 "util.c" 3 4
   , "util.c", 30, __extension__ __PRETTY_FUNCTION__); }))
# 30 "util.c"
                         ;
    return string->value;
}

void resect_ensure_string_capacity(resect_string string, unsigned long new_capacity) {
    if (string->capacity < new_capacity) {
        char *old_string = string->value;
        size_t old_capacity = string->capacity;


        char *new_value = malloc(sizeof(char) * new_capacity);
        
# 41 "util.c" 3 4
       ((void) sizeof ((
# 41 "util.c"
       new_value
# 41 "util.c" 3 4
       ) ? 1 : 0), __extension__ ({ if (
# 41 "util.c"
       new_value
# 41 "util.c" 3 4
       ) ; else __assert_fail (
# 41 "util.c"
       "new_value"
# 41 "util.c" 3 4
       , "util.c", 41, __extension__ __PRETTY_FUNCTION__); }))
# 41 "util.c"
                        ;
        memcpy(new_value, old_string, sizeof(char) * old_capacity);
        free(old_string);

        string->capacity = new_capacity;
        string->value = new_value;
    }
    string->value[string->capacity - 1] = 0;
}

resect_string resect_string_update_by_length(resect_string string, const char *new_value, long long length) {
    
# 52 "util.c" 3 4
   ((void) sizeof ((
# 52 "util.c"
   string != 
# 52 "util.c" 3 4
   ((void *)0)) ? 1 : 0), __extension__ ({ if (
# 52 "util.c"
   string != 
# 52 "util.c" 3 4
   ((void *)0)) ; else __assert_fail (
# 52 "util.c"
   "string != NULL"
# 52 "util.c" 3 4
   , "util.c", 52, __extension__ __PRETTY_FUNCTION__); }))
# 52 "util.c"
                         ;
    const char *ensured_new_value = new_value == 
# 53 "util.c" 3 4
                                                ((void *)0) 
# 53 "util.c"
                                                     ? "" : new_value;

    size_t new_string_size = strlen(ensured_new_value);
    if (length >= 0 && new_string_size >= length) {
        new_string_size = length;
    }

    resect_ensure_string_capacity(string, new_string_size + 1);

    memcpy(string->value, ensured_new_value, sizeof(char) * new_string_size);
    string->value[new_string_size] = 0;
    return string;
}

resect_string resect_string_update(resect_string string, const char *new_value) {
    return resect_string_update_by_length(string, new_value, -1);
}


resect_string resect_string_append(resect_string string, const char *postfix) {
    
# 73 "util.c" 3 4
   ((void) sizeof ((
# 73 "util.c"
   string != 
# 73 "util.c" 3 4
   ((void *)0)) ? 1 : 0), __extension__ ({ if (
# 73 "util.c"
   string != 
# 73 "util.c" 3 4
   ((void *)0)) ; else __assert_fail (
# 73 "util.c"
   "string != NULL"
# 73 "util.c" 3 4
   , "util.c", 73, __extension__ __PRETTY_FUNCTION__); }))
# 73 "util.c"
                         ;
    size_t add_len = strlen(postfix);
    if (add_len == 0) {
        return string;
    }

    size_t old_len = strlen(string->value);
    size_t required_capacity = old_len + add_len + 1;
    resect_ensure_string_capacity(string, required_capacity);

    memcpy(string->value + old_len, postfix, sizeof(char) * add_len);

    string->value[required_capacity - 1] = 0;

    return string;
}

size_t resect_string_length(resect_string string) {
    return strlen(string->value);
}

resect_string resect_string_copy(resect_string string) {
    
# 95 "util.c" 3 4
   ((void) sizeof ((
# 95 "util.c"
   string != 
# 95 "util.c" 3 4
   ((void *)0)) ? 1 : 0), __extension__ ({ if (
# 95 "util.c"
   string != 
# 95 "util.c" 3 4
   ((void *)0)) ; else __assert_fail (
# 95 "util.c"
   "string != NULL"
# 95 "util.c" 3 4
   , "util.c", 95, __extension__ __PRETTY_FUNCTION__); }))
# 95 "util.c"
                         ;
    return resect_string_from_c(resect_string_to_c(string));
}

resect_string resect_substring(resect_string string, long long start, long long end) {
    
# 100 "util.c" 3 4
   ((void) sizeof ((
# 100 "util.c"
   string != 
# 100 "util.c" 3 4
   ((void *)0)) ? 1 : 0), __extension__ ({ if (
# 100 "util.c"
   string != 
# 100 "util.c" 3 4
   ((void *)0)) ; else __assert_fail (
# 100 "util.c"
   "string != NULL"
# 100 "util.c" 3 4
   , "util.c", 100, __extension__ __PRETTY_FUNCTION__); }))
# 100 "util.c"
                         ;
    
# 101 "util.c" 3 4
   ((void) sizeof ((
# 101 "util.c"
   start > 0
# 101 "util.c" 3 4
   ) ? 1 : 0), __extension__ ({ if (
# 101 "util.c"
   start > 0
# 101 "util.c" 3 4
   ) ; else __assert_fail (
# 101 "util.c"
   "start > 0"
# 101 "util.c" 3 4
   , "util.c", 101, __extension__ __PRETTY_FUNCTION__); }))
# 101 "util.c"
                    ;
    
# 102 "util.c" 3 4
   ((void) sizeof ((
# 102 "util.c"
   end < 0 || start <= end
# 102 "util.c" 3 4
   ) ? 1 : 0), __extension__ ({ if (
# 102 "util.c"
   end < 0 || start <= end
# 102 "util.c" 3 4
   ) ; else __assert_fail (
# 102 "util.c"
   "end < 0 || start <= end"
# 102 "util.c" 3 4
   , "util.c", 102, __extension__ __PRETTY_FUNCTION__); }))
# 102 "util.c"
                                  ;
    const char *c_str = resect_string_to_c(string);
    long long len = end < 0 ? -1 : end - start;
    return resect_string_update_by_length(resect_string_create(len), c_str + start, len);
}

resect_string resect_ensure_string(resect_string string) {
    return string == 
# 109 "util.c" 3 4
                    ((void *)0) 
# 109 "util.c"
                         ? resect_string_create(0) : string;
}

resect_string resect_ensure_string_default_length(resect_string string, int length) {
    return string == 
# 113 "util.c" 3 4
                    ((void *)0) 
# 113 "util.c"
                         ? resect_string_create(length + 1) : string;
}

resect_string resect_ensure_string_default_value(resect_string string, const char *default_value) {
    if (string == 
# 117 "util.c" 3 4
                 ((void *)0)
# 117 "util.c"
                     ) {
        resect_string result;
        result = resect_string_create(0);
        resect_string_update(result, default_value);
        return result;
    } else {
        return string;
    }
}

resect_string resect_string_from_c(const char *string) {
    return resect_ensure_string_default_value(
# 128 "util.c" 3 4
                                             ((void *)0)
# 128 "util.c"
                                                 , string);
}

resect_string resect_ensure_string_from_clang(resect_string provided, CXString from) {
    resect_string result = resect_ensure_string(provided);
    resect_string_update(result, clang_getCString(from));
    clang_disposeString(from);
    return result;
}

resect_string resect_string_from_clang(CXString from) {
    return resect_ensure_string_from_clang(
# 139 "util.c" 3 4
                                          ((void *)0)
# 139 "util.c"
                                              , from);
}

resect_string resect_string_format(const char *format, ...) {
    if (format == 
# 143 "util.c" 3 4
                 ((void *)0)
# 143 "util.c"
                     ) {
        return resect_ensure_string(
# 144 "util.c" 3 4
                                   ((void *)0)
# 144 "util.c"
                                       );
    }

    va_list args;
    int len = 0;
    
# 149 "util.c" 3 4
   __builtin_va_start(
# 149 "util.c"
   args
# 149 "util.c" 3 4
   ,
# 149 "util.c"
   format
# 149 "util.c" 3 4
   )
# 149 "util.c"
                         ;
    len = vsnprintf(
# 150 "util.c" 3 4
                   ((void *)0)
# 150 "util.c"
                       , 0, format, args);
    
# 151 "util.c" 3 4
   __builtin_va_end(
# 151 "util.c"
   args
# 151 "util.c" 3 4
   )
# 151 "util.c"
               ;

    resect_string result = resect_ensure_string_default_length(
# 153 "util.c" 3 4
                                                              ((void *)0)
# 153 "util.c"
                                                                  , len);
    
# 154 "util.c" 3 4
   __builtin_va_start(
# 154 "util.c"
   args
# 154 "util.c" 3 4
   ,
# 154 "util.c"
   format
# 154 "util.c" 3 4
   )
# 154 "util.c"
                         ;
    vsnprintf(result->value, len + 1, format, args);
    
# 156 "util.c" 3 4
   __builtin_va_end(
# 156 "util.c"
   args
# 156 "util.c" 3 4
   )
# 156 "util.c"
               ;

    return result;
}

resect_bool resect_string_equal_c(resect_string this, const char *that) {
    return strcmp(this->value, that) == 0;
}

resect_bool resect_string_starts_with_c(resect_string this, const char *prefix) {
    return strncmp(prefix, this->value, strlen(prefix)) == 0;
}

resect_bool resect_string_equal(resect_string this, resect_string that) {
    return strcmp(this->value, that->value) == 0;
}
# 248 "util.c"
static const enum_val_string_map resect_error_code_mapping[] = { {RESECT_OK, "RESECT_OK"}, {RESECT_ERR_NULL_POINTER, "RESECT_ERR_NULL_POINTER"}, {RESECT_ERR_OUT_OF_MEMORY, "RESECT_ERR_OUT_OF_MEMORY"}, {RESECT_ERR_INVALID_ARGUMENT, "RESECT_ERR_INVALID_ARGUMENT"}, {RESECT_ERR_MAX_RECUSION_DEPTH, "RESECT_ERR_MAX_RECUSION_DEPTH"}, {RESECT_ERR_FILE_NOT_FOUND, "RESECT_ERR_FILE_NOT_FOUND"}, {RESECT_ERR_DIR_NOT_FOUND, "RESECT_ERR_DIR_NOT_FOUND"}, {RESECT_ERR_MISSING_DECL_ID, "RESECT_ERR_MISSING_DECL_ID"}, {RESECT_ERR_SQLITE_ERROR, "RESECT_ERR_SQLITE_ERROR"}, {RESECT_ERR_SQLITE_DB_OPEN_ERROR, "RESECT_ERR_SQLITE_DB_OPEN_ERROR"}, {RESECT_ERR_SQLITE_DDL_ERROR, "RESECT_ERR_SQLITE_DDL_ERROR"}, {RESECT_ERR_SQLITE_PREPARE_ERROR, "RESECT_ERR_SQLITE_PREPARE_ERROR"}, {RESECT_ERR_SQLITE_BIND_ERROR, "RESECT_ERR_SQLITE_BIND_ERROR"}, {RESECT_ERR_SQLITE_STEP_ERROR, "RESECT_ERR_SQLITE_STEP_ERROR"}, {RESECT_ERR_SQLITE_INSERT_ERROR, "RESECT_ERR_SQLITE_INSERT_ERROR"}, {CLANG_ERR_INVALID_ARGUMENT, "CLANG_ERR_INVALID_ARGUMENT"}, {CLANG_ERR_AST_READ_ERROR, "CLANG_ERR_AST_READ_ERROR"}, }; extern inline size_t resect_error_code_count() { return (size_t) 0 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1; } extern inline int resect_error_code_min() { return resect_error_code_mapping[0].code; } extern inline int resect_error_code_max() { return resect_error_code_mapping[resect_error_code_count() - 1].code; } extern inline resect_bool is_resect_error_code_p(resect_error_code val) { if (val >= 0 && val < resect_error_code_count()) return (1); return (0); } extern inline const char* resect_error_code_to_string(resect_error_code val) { if (is_resect_error_code_p(val)) { return resect_error_code_mapping[val].name; } return "Unknown"; } extern inline resect_string resect_error_code_to_resect_string(resect_error_code val) { return resect_string_from_c(resect_error_code_to_string(val)); } extern inline int string_to_resect_error_code(const char* str) { for (size_t i = 0; i < resect_error_code_count(); ++i) { if (strcmp(resect_error_code_mapping[i].name, str) == 0) return resect_error_code_mapping[i].code; } return -254; }
static const enum_val_string_map resect_decl_kind_mapping[] = { {RESECT_DECL_KIND_UNKNOWN, "RESECT_DECL_KIND_UNKNOWN"}, {RESECT_DECL_KIND_STRUCT, "RESECT_DECL_KIND_STRUCT"}, {RESECT_DECL_KIND_UNION, "RESECT_DECL_KIND_UNION"}, {RESECT_DECL_KIND_CLASS, "RESECT_DECL_KIND_CLASS"}, {RESECT_DECL_KIND_ENUM, "RESECT_DECL_KIND_ENUM"}, {RESECT_DECL_KIND_FIELD, "RESECT_DECL_KIND_FIELD"}, {RESECT_DECL_KIND_FUNCTION, "RESECT_DECL_KIND_FUNCTION"}, {RESECT_DECL_KIND_VARIABLE, "RESECT_DECL_KIND_VARIABLE"}, {RESECT_DECL_KIND_PARAMETER, "RESECT_DECL_KIND_PARAMETER"}, {RESECT_DECL_KIND_TYPEDEF, "RESECT_DECL_KIND_TYPEDEF"}, {RESECT_DECL_KIND_METHOD, "RESECT_DECL_KIND_METHOD"}, {RESECT_DECL_KIND_ENUM_CONSTANT, "RESECT_DECL_KIND_ENUM_CONSTANT"}, {RESECT_DECL_KIND_MACRO, "RESECT_DECL_KIND_MACRO"}, {RESECT_DECL_KIND_TEMPLATE_PARAMETER, "RESECT_DECL_KIND_TEMPLATE_PARAMETER"}, {RESECT_DECL_KIND_UNDECLARED, "RESECT_DECL_KIND_UNDECLARED"}, }; extern inline size_t resect_decl_kind_count() { return (size_t) 0 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1; } extern inline int resect_decl_kind_min() { return resect_decl_kind_mapping[0].code; } extern inline int resect_decl_kind_max() { return resect_decl_kind_mapping[resect_decl_kind_count() - 1].code; } extern inline resect_bool is_resect_decl_kind_p(resect_decl_kind val) { if (val >= 0 && val < resect_decl_kind_count()) return (1); return (0); } extern inline const char* resect_decl_kind_to_string(resect_decl_kind val) { if (is_resect_decl_kind_p(val)) { return resect_decl_kind_mapping[val].name; } return "Unknown"; } extern inline resect_string resect_decl_kind_to_resect_string(resect_decl_kind val) { return resect_string_from_c(resect_decl_kind_to_string(val)); } extern inline int string_to_resect_decl_kind(const char* str) { for (size_t i = 0; i < resect_decl_kind_count(); ++i) { if (strcmp(resect_decl_kind_mapping[i].name, str) == 0) return resect_decl_kind_mapping[i].code; } return -254; }
static const enum_val_string_map resect_access_specifier_mapping[] = { {RESECT_ACCESS_SPECIFIER_UNKNOWN, "RESECT_ACCESS_SPECIFIER_UNKNOWN"}, {RESECT_ACCESS_SPECIFIER_PUBLIC, "RESECT_ACCESS_SPECIFIER_PUBLIC"}, {RESECT_ACCESS_SPECIFIER_PROTECTED, "RESECT_ACCESS_SPECIFIER_PROTECTED"}, {RESECT_ACCESS_SPECIFIER_PRIVATE, "RESECT_ACCESS_SPECIFIER_PRIVATE"}, }; extern inline size_t resect_access_specifier_count() { return (size_t) 0 + 1 + 1 + 1 + 1; } extern inline int resect_access_specifier_min() { return resect_access_specifier_mapping[0].code; } extern inline int resect_access_specifier_max() { return resect_access_specifier_mapping[resect_access_specifier_count() - 1].code; } extern inline resect_bool is_resect_access_specifier_p(resect_access_specifier val) { if (val >= 0 && val < resect_access_specifier_count()) return (1); return (0); } extern inline const char* resect_access_specifier_to_string(resect_access_specifier val) { if (is_resect_access_specifier_p(val)) { return resect_access_specifier_mapping[val].name; } return "Unknown"; } extern inline resect_string resect_access_specifier_to_resect_string(resect_access_specifier val) { return resect_string_from_c(resect_access_specifier_to_string(val)); } extern inline int string_to_resect_access_specifier(const char* str) { for (size_t i = 0; i < resect_access_specifier_count(); ++i) { if (strcmp(resect_access_specifier_mapping[i].name, str) == 0) return resect_access_specifier_mapping[i].code; } return -254; }
static const enum_val_string_map resect_type_kind_mapping[] = { {0, "RESECT_TYPE_KIND_UNKNOWN"}, {2, "RESECT_TYPE_KIND_VOID"}, {3, "RESECT_TYPE_KIND_BOOL"}, {4, "RESECT_TYPE_KIND_CHAR_U"}, {5, "RESECT_TYPE_KIND_UCHAR"}, {6, "RESECT_TYPE_KIND_CHAR16"}, {7, "RESECT_TYPE_KIND_CHAR32"}, {8, "RESECT_TYPE_KIND_USHORT"}, {9, "RESECT_TYPE_KIND_UINT"}, {10, "RESECT_TYPE_KIND_ULONG"}, {11, "RESECT_TYPE_KIND_ULONGLONG"}, {12, "RESECT_TYPE_KIND_UINT128"}, {13, "RESECT_TYPE_KIND_CHAR_S"}, {14, "RESECT_TYPE_KIND_SCHAR"}, {15, "RESECT_TYPE_KIND_WCHAR"}, {16, "RESECT_TYPE_KIND_SHORT"}, {17, "RESECT_TYPE_KIND_INT"}, {18, "RESECT_TYPE_KIND_LONG"}, {19, "RESECT_TYPE_KIND_LONGLONG"}, {20, "RESECT_TYPE_KIND_INT128"}, {21, "RESECT_TYPE_KIND_FLOAT"}, {22, "RESECT_TYPE_KIND_DOUBLE"}, {23, "RESECT_TYPE_KIND_LONGDOUBLE"}, {24, "RESECT_TYPE_KIND_NULLPTR"}, {25, "RESECT_TYPE_KIND_OVERLOAD"}, {26, "RESECT_TYPE_KIND_DEPENDENT"}, {30, "RESECT_TYPE_KIND_FLOAT128"}, {31, "RESECT_TYPE_KIND_HALF"}, {32, "RESECT_TYPE_KIND_FLOAT16"}, {100, "RESECT_TYPE_KIND_COMPLEX"}, {101, "RESECT_TYPE_KIND_POINTER"}, {102, "RESECT_TYPE_KIND_BLOCKPOINTER"}, {103, "RESECT_TYPE_KIND_LVALUEREFERENCE"}, {104, "RESECT_TYPE_KIND_RVALUEREFERENCE"}, {105, "RESECT_TYPE_KIND_RECORD"}, {106, "RESECT_TYPE_KIND_ENUM"}, {107, "RESECT_TYPE_KIND_TYPEDEF"}, {110, "RESECT_TYPE_KIND_FUNCTIONNOPROTO"}, {111, "RESECT_TYPE_KIND_FUNCTIONPROTO"}, {112, "RESECT_TYPE_KIND_CONSTANTARRAY"}, {113, "RESECT_TYPE_KIND_VECTOR"}, {114, "RESECT_TYPE_KIND_INCOMPLETEARRAY"}, {115, "RESECT_TYPE_KIND_VARIABLEARRAY"}, {116, "RESECT_TYPE_KIND_DEPENDENTSIZEDARRAY"}, {117, "RESECT_TYPE_KIND_MEMBERPOINTER"}, {118, "RESECT_TYPE_KIND_AUTO"}, {177, "RESECT_TYPE_KIND_ATOMIC"}, {178, "RESECT_TYPE_KIND_EXTVECTOR"}, {10000, "RESECT_TYPE_KIND_TEMPLATE_PARAMETER"}, }; extern size_t resect_type_kind_count() { return (size_t) 0 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1; } extern int resect_type_kind_min() { size_t min = resect_type_kind_mapping[0].code; for (size_t i = 1; i < resect_type_kind_count(); ++i) { if (resect_type_kind_mapping[i].code < min) min = resect_type_kind_mapping[i].code; } return min; } extern int resect_type_kind_max() { size_t max = resect_type_kind_mapping[0].code; for (size_t i = 1; i < resect_type_kind_count(); ++i) { if (resect_type_kind_mapping[i].code > max) max = resect_type_kind_mapping[i].code; } return max; } extern inline resect_bool is_resect_type_kind_p(resect_type_kind val) { for (size_t i = 0; i < resect_type_kind_count(); ++i) { if (resect_type_kind_mapping[i].code == (int) val) return (1); } return (0); } extern inline const char* resect_type_kind_to_string(resect_type_kind val) { for (size_t i = 0; i < resect_type_kind_count(); ++i) { if (resect_type_kind_mapping[i].code == (int) val) return resect_type_kind_mapping[i].name; } return "Unknown"; } extern inline resect_string resect_type_kind_to_resect_string(resect_type_kind val) { return resect_string_from_c(resect_type_kind_to_string(val)); } extern inline int string_to_resect_type_kind(const char* str) { for (size_t i = 0; i < resect_type_kind_count(); ++i) { if (strcmp(resect_type_kind_mapping[i].name, str) == 0) return resect_type_kind_mapping[i].code; } return -254; }
static const enum_val_string_map resect_type_category_mapping[] = { {RESECT_TYPE_CATEGORY_UNKNOWN, "RESECT_TYPE_CATEGORY_UNKNOWN"}, {RESECT_TYPE_CATEGORY_ARITHMETIC, "RESECT_TYPE_CATEGORY_ARITHMETIC"}, {RESECT_TYPE_CATEGORY_POINTER, "RESECT_TYPE_CATEGORY_POINTER"}, {RESECT_TYPE_CATEGORY_REFERENCE, "RESECT_TYPE_CATEGORY_REFERENCE"}, {RESECT_TYPE_CATEGORY_ARRAY, "RESECT_TYPE_CATEGORY_ARRAY"}, {RESECT_TYPE_CATEGORY_UNIQUE, "RESECT_TYPE_CATEGORY_UNIQUE"}, {RESECT_TYPE_CATEGORY_AUX, "RESECT_TYPE_CATEGORY_AUX"}, }; extern inline size_t resect_type_category_count() { return (size_t) 0 + 1 + 1 + 1 + 1 + 1 + 1 + 1; } extern inline int resect_type_category_min() { return resect_type_category_mapping[0].code; } extern inline int resect_type_category_max() { return resect_type_category_mapping[resect_type_category_count() - 1].code; } extern inline resect_bool is_resect_type_category_p(resect_type_category val) { if (val >= 0 && val < resect_type_category_count()) return (1); return (0); } extern inline const char* resect_type_category_to_string(resect_type_category val) { if (is_resect_type_category_p(val)) { return resect_type_category_mapping[val].name; } return "Unknown"; } extern inline resect_string resect_type_category_to_resect_string(resect_type_category val) { return resect_string_from_c(resect_type_category_to_string(val)); } extern inline int string_to_resect_type_category(const char* str) { for (size_t i = 0; i < resect_type_category_count(); ++i) { if (strcmp(resect_type_category_mapping[i].name, str) == 0) return resect_type_category_mapping[i].code; } return -254; }
static const enum_val_string_map resect_function_calling_convention_mapping[] = { {RESECT_FUNCTION_CALLING_CONVENTION_UNKNOWN, "RESECT_FUNCTION_CALLING_CONVENTION_UNKNOWN"}, {RESECT_FUNCTION_CALLING_CONVENTION_DEFAULT, "RESECT_FUNCTION_CALLING_CONVENTION_DEFAULT"}, {RESECT_FUNCTION_CALLING_CONVENTION_C, "RESECT_FUNCTION_CALLING_CONVENTION_C"}, {RESECT_FUNCTION_CALLING_CONVENTION_X86_STDCALL, "RESECT_FUNCTION_CALLING_CONVENTION_X86_STDCALL"}, {RESECT_FUNCTION_CALLING_CONVENTION_X86_FASTCALL, "RESECT_FUNCTION_CALLING_CONVENTION_X86_FASTCALL"}, {RESECT_FUNCTION_CALLING_CONVENTION_X86_THISCALL, "RESECT_FUNCTION_CALLING_CONVENTION_X86_THISCALL"}, {RESECT_FUNCTION_CALLING_CONVENTION_X86_REGCALL, "RESECT_FUNCTION_CALLING_CONVENTION_X86_REGCALL"}, {RESECT_FUNCTION_CALLING_CONVENTION_X86_VECTORCALL, "RESECT_FUNCTION_CALLING_CONVENTION_X86_VECTORCALL"}, {RESECT_FUNCTION_CALLING_CONVENTION_X86_PASCAL, "RESECT_FUNCTION_CALLING_CONVENTION_X86_PASCAL"}, {RESECT_FUNCTION_CALLING_CONVENTION_X86_64_WIN64, "RESECT_FUNCTION_CALLING_CONVENTION_X86_64_WIN64"}, {RESECT_FUNCTION_CALLING_CONVENTION_X86_64_SYSV, "RESECT_FUNCTION_CALLING_CONVENTION_X86_64_SYSV"}, {RESECT_FUNCTION_CALLING_CONVENTION_AARCH64_VECTORCALL, "RESECT_FUNCTION_CALLING_CONVENTION_AARCH64_VECTORCALL"}, {RESECT_FUNCTION_CALLING_CONVENTION_AAPCS, "RESECT_FUNCTION_CALLING_CONVENTION_AAPCS"}, {RESECT_FUNCTION_CALLING_CONVENTION_AAPCS_VFP, "RESECT_FUNCTION_CALLING_CONVENTION_AAPCS_VFP"}, {RESECT_FUNCTION_CALLING_CONVENTION_INTEL_OCL_BICC, "RESECT_FUNCTION_CALLING_CONVENTION_INTEL_OCL_BICC"}, {RESECT_FUNCTION_CALLING_CONVENTION_SWIFT, "RESECT_FUNCTION_CALLING_CONVENTION_SWIFT"}, {RESECT_FUNCTION_CALLING_CONVENTION_PRESERVE_MOST, "RESECT_FUNCTION_CALLING_CONVENTION_PRESERVE_MOST"}, {RESECT_FUNCTION_CALLING_CONVENTION_PRESERVE_ALL, "RESECT_FUNCTION_CALLING_CONVENTION_PRESERVE_ALL"}, }; extern inline size_t resect_function_calling_convention_count() { return (size_t) 0 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1; } extern inline int resect_function_calling_convention_min() { return resect_function_calling_convention_mapping[0].code; } extern inline int resect_function_calling_convention_max() { return resect_function_calling_convention_mapping[resect_function_calling_convention_count() - 1].code; } extern inline resect_bool is_resect_function_calling_convention_p(resect_function_calling_convention val) { if (val >= 0 && val < resect_function_calling_convention_count()) return (1); return (0); } extern inline const char* resect_function_calling_convention_to_string(resect_function_calling_convention val) { if (is_resect_function_calling_convention_p(val)) { return resect_function_calling_convention_mapping[val].name; } return "Unknown"; } extern inline resect_string resect_function_calling_convention_to_resect_string(resect_function_calling_convention val) { return resect_string_from_c(resect_function_calling_convention_to_string(val)); } extern inline int string_to_resect_function_calling_convention(const char* str) { for (size_t i = 0; i < resect_function_calling_convention_count(); ++i) { if (strcmp(resect_function_calling_convention_mapping[i].name, str) == 0) return resect_function_calling_convention_mapping[i].code; } return -254; }
static const enum_val_string_map resect_storage_class_mapping[] = { {RESECT_STORAGE_CLASS_UNKNOWN, "RESECT_STORAGE_CLASS_UNKNOWN"}, {RESECT_STORAGE_CLASS_NONE, "RESECT_STORAGE_CLASS_NONE"}, {RESECT_STORAGE_CLASS_EXTERN, "RESECT_STORAGE_CLASS_EXTERN"}, {RESECT_STORAGE_CLASS_STATIC, "RESECT_STORAGE_CLASS_STATIC"}, {RESECT_STORAGE_CLASS_PRIVATE_EXTERN, "RESECT_STORAGE_CLASS_PRIVATE_EXTERN"}, {RESECT_STORAGE_CLASS_OPENCL_WORKGROUP_LOCAL, "RESECT_STORAGE_CLASS_OPENCL_WORKGROUP_LOCAL"}, {RESECT_STORAGE_CLASS_AUTO, "RESECT_STORAGE_CLASS_AUTO"}, {RESECT_STORAGE_CLASS_REGISTER, "RESECT_STORAGE_CLASS_REGISTER"}, }; extern inline size_t resect_storage_class_count() { return (size_t) 0 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1; } extern inline int resect_storage_class_min() { return resect_storage_class_mapping[0].code; } extern inline int resect_storage_class_max() { return resect_storage_class_mapping[resect_storage_class_count() - 1].code; } extern inline resect_bool is_resect_storage_class_p(resect_storage_class val) { if (val >= 0 && val < resect_storage_class_count()) return (1); return (0); } extern inline const char* resect_storage_class_to_string(resect_storage_class val) { if (is_resect_storage_class_p(val)) { return resect_storage_class_mapping[val].name; } return "Unknown"; } extern inline resect_string resect_storage_class_to_resect_string(resect_storage_class val) { return resect_string_from_c(resect_storage_class_to_string(val)); } extern inline int string_to_resect_storage_class(const char* str) { for (size_t i = 0; i < resect_storage_class_count(); ++i) { if (strcmp(resect_storage_class_mapping[i].name, str) == 0) return resect_storage_class_mapping[i].code; } return -254; }
static const enum_val_string_map resect_variable_kind_mapping[] = { {RESECT_VARIABLE_TYPE_UNKNOWN, "RESECT_VARIABLE_TYPE_UNKNOWN"}, {RESECT_VARIABLE_TYPE_INT, "RESECT_VARIABLE_TYPE_INT"}, {RESECT_VARIABLE_TYPE_FLOAT, "RESECT_VARIABLE_TYPE_FLOAT"}, {RESECT_VARIABLE_TYPE_STRING, "RESECT_VARIABLE_TYPE_STRING"}, {RESECT_VARIABLE_TYPE_OTHER, "RESECT_VARIABLE_TYPE_OTHER"}, }; extern inline size_t resect_variable_kind_count() { return (size_t) 0 + 1 + 1 + 1 + 1 + 1; } extern inline int resect_variable_kind_min() { return resect_variable_kind_mapping[0].code; } extern inline int resect_variable_kind_max() { return resect_variable_kind_mapping[resect_variable_kind_count() - 1].code; } extern inline resect_bool is_resect_variable_kind_p(resect_variable_kind val) { if (val >= 0 && val < resect_variable_kind_count()) return (1); return (0); } extern inline const char* resect_variable_kind_to_string(resect_variable_kind val) { if (is_resect_variable_kind_p(val)) { return resect_variable_kind_mapping[val].name; } return "Unknown"; } extern inline resect_string resect_variable_kind_to_resect_string(resect_variable_kind val) { return resect_string_from_c(resect_variable_kind_to_string(val)); } extern inline int string_to_resect_variable_kind(const char* str) { for (size_t i = 0; i < resect_variable_kind_count(); ++i) { if (strcmp(resect_variable_kind_mapping[i].name, str) == 0) return resect_variable_kind_mapping[i].code; } return -254; }
static const enum_val_string_map resect_language_mapping[] = { {0, "RESECT_LANGUAGE_UNKNOWN"}, {1, "RESECT_LANGUAGE_C"}, {2, "RESECT_LANGUAGE_CXX"}, {3, "RESECT_LANGUAGE_OBJC"}, {RESECT_LANGUAGE_OBJC, "RESECT_LANGUAGE__LAST"}, }; extern size_t resect_language_count() { return (size_t) 0 + 1 + 1 + 1 + 1 + 1; } extern int resect_language_min() { size_t min = resect_language_mapping[0].code; for (size_t i = 1; i < resect_language_count(); ++i) { if (resect_language_mapping[i].code < min) min = resect_language_mapping[i].code; } return min; } extern int resect_language_max() { size_t max = resect_language_mapping[0].code; for (size_t i = 1; i < resect_language_count(); ++i) { if (resect_language_mapping[i].code > max) max = resect_language_mapping[i].code; } return max; } extern inline resect_bool is_resect_language_p(resect_language val) { for (size_t i = 0; i < resect_language_count(); ++i) { if (resect_language_mapping[i].code == (int) val) return (1); } return (0); } extern inline const char* resect_language_to_string(resect_language val) { for (size_t i = 0; i < resect_language_count(); ++i) { if (resect_language_mapping[i].code == (int) val) return resect_language_mapping[i].name; } return "Unknown"; } extern inline resect_string resect_language_to_resect_string(resect_language val) { return resect_string_from_c(resect_language_to_string(val)); } extern inline int string_to_resect_language(const char* str) { for (size_t i = 0; i < resect_language_count(); ++i) { if (strcmp(resect_language_mapping[i].name, str) == 0) return resect_language_mapping[i].code; } return -254; }
static const enum_val_string_map resect_template_parameter_kind_mapping[] = { {RESECT_TEMPLATE_PARAMETER_KIND_UNKNOWN, "RESECT_TEMPLATE_PARAMETER_KIND_UNKNOWN"}, {RESECT_TEMPLATE_PARAMETER_KIND_TEMPLATE, "RESECT_TEMPLATE_PARAMETER_KIND_TEMPLATE"}, {RESECT_TEMPLATE_PARAMETER_KIND_TYPE, "RESECT_TEMPLATE_PARAMETER_KIND_TYPE"}, {RESECT_TEMPLATE_PARAMETER_KIND_NON_TYPE, "RESECT_TEMPLATE_PARAMETER_KIND_NON_TYPE"}, }; extern inline size_t resect_template_parameter_kind_count() { return (size_t) 0 + 1 + 1 + 1 + 1; } extern inline int resect_template_parameter_kind_min() { return resect_template_parameter_kind_mapping[0].code; } extern inline int resect_template_parameter_kind_max() { return resect_template_parameter_kind_mapping[resect_template_parameter_kind_count() - 1].code; } extern inline resect_bool is_resect_template_parameter_kind_p(resect_template_parameter_kind val) { if (val >= 0 && val < resect_template_parameter_kind_count()) return (1); return (0); } extern inline const char* resect_template_parameter_kind_to_string(resect_template_parameter_kind val) { if (is_resect_template_parameter_kind_p(val)) { return resect_template_parameter_kind_mapping[val].name; } return "Unknown"; } extern inline resect_string resect_template_parameter_kind_to_resect_string(resect_template_parameter_kind val) { return resect_string_from_c(resect_template_parameter_kind_to_string(val)); } extern inline int string_to_resect_template_parameter_kind(const char* str) { for (size_t i = 0; i < resect_template_parameter_kind_count(); ++i) { if (strcmp(resect_template_parameter_kind_mapping[i].name, str) == 0) return resect_template_parameter_kind_mapping[i].code; } return -254; }
static const enum_val_string_map resect_template_argument_kind_mapping[] = { {RESECT_TEMPLATE_ARGUMENT_KIND_UNKNOWN, "RESECT_TEMPLATE_ARGUMENT_KIND_UNKNOWN"}, {RESECT_TEMPLATE_ARGUMENT_KIND_NULL, "RESECT_TEMPLATE_ARGUMENT_KIND_NULL"}, {RESECT_TEMPLATE_ARGUMENT_KIND_TYPE, "RESECT_TEMPLATE_ARGUMENT_KIND_TYPE"}, {RESECT_TEMPLATE_ARGUMENT_KIND_DECLARATION, "RESECT_TEMPLATE_ARGUMENT_KIND_DECLARATION"}, {RESECT_TEMPLATE_ARGUMENT_KIND_NULL_PTR, "RESECT_TEMPLATE_ARGUMENT_KIND_NULL_PTR"}, {RESECT_TEMPLATE_ARGUMENT_KIND_INTEGRAL, "RESECT_TEMPLATE_ARGUMENT_KIND_INTEGRAL"}, {RESECT_TEMPLATE_ARGUMENT_KIND_TEMPLATE, "RESECT_TEMPLATE_ARGUMENT_KIND_TEMPLATE"}, {RESECT_TEMPLATE_ARGUMENT_KIND_TEMPLATE_EXPANSION, "RESECT_TEMPLATE_ARGUMENT_KIND_TEMPLATE_EXPANSION"}, {RESECT_TEMPLATE_ARGUMENT_KIND_EXPRESSION, "RESECT_TEMPLATE_ARGUMENT_KIND_EXPRESSION"}, {RESECT_TEMPLATE_ARGUMENT_KIND_PACK, "RESECT_TEMPLATE_ARGUMENT_KIND_PACK"}, }; extern inline size_t resect_template_argument_kind_count() { return (size_t) 0 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1; } extern inline int resect_template_argument_kind_min() { return resect_template_argument_kind_mapping[0].code; } extern inline int resect_template_argument_kind_max() { return resect_template_argument_kind_mapping[resect_template_argument_kind_count() - 1].code; } extern inline resect_bool is_resect_template_argument_kind_p(resect_template_argument_kind val) { if (val >= 0 && val < resect_template_argument_kind_count()) return (1); return (0); } extern inline const char* resect_template_argument_kind_to_string(resect_template_argument_kind val) { if (is_resect_template_argument_kind_p(val)) { return resect_template_argument_kind_mapping[val].name; } return "Unknown"; } extern inline resect_string resect_template_argument_kind_to_resect_string(resect_template_argument_kind val) { return resect_string_from_c(resect_template_argument_kind_to_string(val)); } extern inline int string_to_resect_template_argument_kind(const char* str) { for (size_t i = 0; i < resect_template_argument_kind_count(); ++i) { if (strcmp(resect_template_argument_kind_mapping[i].name, str) == 0) return resect_template_argument_kind_mapping[i].code; } return -254; }
static const enum_val_string_map resect_linkage_kind_mapping[] = { {RESECT_LINKAGE_KIND_UNKNOWN, "RESECT_LINKAGE_KIND_UNKNOWN"}, {RESECT_LINKAGE_KIND_NO_LINKAGE, "RESECT_LINKAGE_KIND_NO_LINKAGE"}, {RESECT_LINKAGE_KIND_INTERNAL, "RESECT_LINKAGE_KIND_INTERNAL"}, {RESECT_LINKAGE_KIND_UNIQUE_EXTERNAL, "RESECT_LINKAGE_KIND_UNIQUE_EXTERNAL"}, {RESECT_LINKAGE_KIND_EXTERNAL, "RESECT_LINKAGE_KIND_EXTERNAL"}, }; extern inline size_t resect_linkage_kind_count() { return (size_t) 0 + 1 + 1 + 1 + 1 + 1; } extern inline int resect_linkage_kind_min() { return resect_linkage_kind_mapping[0].code; } extern inline int resect_linkage_kind_max() { return resect_linkage_kind_mapping[resect_linkage_kind_count() - 1].code; } extern inline resect_bool is_resect_linkage_kind_p(resect_linkage_kind val) { if (val >= 0 && val < resect_linkage_kind_count()) return (1); return (0); } extern inline const char* resect_linkage_kind_to_string(resect_linkage_kind val) { if (is_resect_linkage_kind_p(val)) { return resect_linkage_kind_mapping[val].name; } return "Unknown"; } extern inline resect_string resect_linkage_kind_to_resect_string(resect_linkage_kind val) { return resect_string_from_c(resect_linkage_kind_to_string(val)); } extern inline int string_to_resect_linkage_kind(const char* str) { for (size_t i = 0; i < resect_linkage_kind_count(); ++i) { if (strcmp(resect_linkage_kind_mapping[i].name, str) == 0) return resect_linkage_kind_mapping[i].code; } return -254; }
static const enum_val_string_map resect_option_intrinsic_mapping[] = { {RESECT_OPTION_INTRINSICS_UNKNOWN, "RESECT_OPTION_INTRINSICS_UNKNOWN"}, {RESECT_OPTION_INTRINSICS_SSE, "RESECT_OPTION_INTRINSICS_SSE"}, {RESECT_OPTION_INTRINSICS_SSE2, "RESECT_OPTION_INTRINSICS_SSE2"}, {RESECT_OPTION_INTRINSICS_SSE3, "RESECT_OPTION_INTRINSICS_SSE3"}, {RESECT_OPTION_INTRINSICS_SSE41, "RESECT_OPTION_INTRINSICS_SSE41"}, {RESECT_OPTION_INTRINSICS_SSE42, "RESECT_OPTION_INTRINSICS_SSE42"}, {RESECT_OPTION_INTRINSICS_AVX, "RESECT_OPTION_INTRINSICS_AVX"}, {RESECT_OPTION_INTRINSICS_AVX2, "RESECT_OPTION_INTRINSICS_AVX2"}, {RESECT_OPTION_INTRINSICS_NEON, "RESECT_OPTION_INTRINSICS_NEON"}, }; extern inline size_t resect_option_intrinsic_count() { return (size_t) 0 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1; } extern inline int resect_option_intrinsic_min() { return resect_option_intrinsic_mapping[0].code; } extern inline int resect_option_intrinsic_max() { return resect_option_intrinsic_mapping[resect_option_intrinsic_count() - 1].code; } extern inline resect_bool is_resect_option_intrinsic_p(resect_option_intrinsic val) { if (val >= 0 && val < resect_option_intrinsic_count()) return (1); return (0); } extern inline const char* resect_option_intrinsic_to_string(resect_option_intrinsic val) { if (is_resect_option_intrinsic_p(val)) { return resect_option_intrinsic_mapping[val].name; } return "Unknown"; } extern inline resect_string resect_option_intrinsic_to_resect_string(resect_option_intrinsic val) { return resect_string_from_c(resect_option_intrinsic_to_string(val)); } extern inline int string_to_resect_option_intrinsic(const char* str) { for (size_t i = 0; i < resect_option_intrinsic_count(); ++i) { if (strcmp(resect_option_intrinsic_mapping[i].name, str) == 0) return resect_option_intrinsic_mapping[i].code; } return -254; }
static const enum_val_string_map resect_inclusion_status_mapping[] = { {RESECT_INCLUSION_STATUS_EXCLUDED, "RESECT_INCLUSION_STATUS_EXCLUDED"}, {RESECT_INCLUSION_STATUS_WEAKLY_EXCLUDED, "RESECT_INCLUSION_STATUS_WEAKLY_EXCLUDED"}, {RESECT_INCLUSION_STATUS_WEAKLY_INCLUDED, "RESECT_INCLUSION_STATUS_WEAKLY_INCLUDED"}, {RESECT_INCLUSION_STATUS_WEAKLY_ENFORCED, "RESECT_INCLUSION_STATUS_WEAKLY_ENFORCED"}, {RESECT_INCLUSION_STATUS_INCLUDED, "RESECT_INCLUSION_STATUS_INCLUDED"}, }; extern inline size_t resect_inclusion_status_count() { return (size_t) 0 + 1 + 1 + 1 + 1 + 1; } extern inline int resect_inclusion_status_min() { return resect_inclusion_status_mapping[0].code; } extern inline int resect_inclusion_status_max() { return resect_inclusion_status_mapping[resect_inclusion_status_count() - 1].code; } extern inline resect_bool is_resect_inclusion_status_p(resect_inclusion_status val) { if (val >= 0 && val < resect_inclusion_status_count()) return (1); return (0); } extern inline const char* resect_inclusion_status_to_string(resect_inclusion_status val) { if (is_resect_inclusion_status_p(val)) { return resect_inclusion_status_mapping[val].name; } return "Unknown"; } extern inline resect_string resect_inclusion_status_to_resect_string(resect_inclusion_status val) { return resect_string_from_c(resect_inclusion_status_to_string(val)); } extern inline int string_to_resect_inclusion_status(const char* str) { for (size_t i = 0; i < resect_inclusion_status_count(); ++i) { if (strcmp(resect_inclusion_status_mapping[i].name, str) == 0) return resect_inclusion_status_mapping[i].code; } return -254; }

resect_error resect_create_error(resect_error_code code,
                                 const char *message,
                                 void *extra_data) {
    resect_error error = malloc(sizeof(struct P_resect_error));
    error->code = code;
    if(
# 268 "util.c" 3 4
      ((void *)0) 
# 268 "util.c"
           == message)
        error->message = resect_string_from_c(resect_error_code_to_string(code));
    else
        error->message = resect_string_from_c(message);
    error->message = resect_string_from_c(resect_error_code_to_string(code));
    error->extra_data = extra_data;
    return error;
}

resect_error_code resect_free_error(resect_error error) {
    resect_error_code code = error->code;
    resect_string_free(error->message);
    if(
# 280 "util.c" 3 4
      ((void *)0) 
# 280 "util.c"
           != error->extra_data) {
        free(error->extra_data);
    }
    free(error);
    return code;
}





resect_collection resect_collection_create() {
    resect_collection collection = malloc(sizeof(struct P_resect_collection));
    collection->head = 
# 293 "util.c" 3 4
                      ((void *)0)
# 293 "util.c"
                          ;
    collection->tail = 
# 294 "util.c" 3 4
                      ((void *)0)
# 294 "util.c"
                          ;
    collection->size = 0;
    return collection;
}

void resect_collection_free(resect_collection collection) {
    struct P_resect_collection_element *el, *next;
    el = collection->head;
    while (el) {
        next = el->next;
        free(el);
        el = next;
    }
    free(collection);
}

void resect_collection_add(resect_collection collection, void *value) {
    struct P_resect_collection_element *element = malloc(sizeof(struct P_resect_collection_element));
    element->value = value;
    element->next = 
# 313 "util.c" 3 4
                   ((void *)0)
# 313 "util.c"
                       ;
    element->prev = 
# 314 "util.c" 3 4
                   ((void *)0)
# 314 "util.c"
                       ;

    if (collection->head == 
# 316 "util.c" 3 4
                           ((void *)0)
# 316 "util.c"
                               ) {
        collection->head = element;
        collection->tail = element;
    } else {
        element->prev = collection->tail;

        collection->tail->next = element;
        collection->tail = element;
    }
    collection->size += 1;
}

void *resect_collection_pop_last(resect_collection collection) {
    if (collection->tail == 
# 329 "util.c" 3 4
                           ((void *)0)
# 329 "util.c"
                               ) {
        return 
# 330 "util.c" 3 4
              ((void *)0)
# 330 "util.c"
                  ;
    }
    void *result = collection->tail->value;
    if (collection->tail->prev == 
# 333 "util.c" 3 4
                                 ((void *)0)
# 333 "util.c"
                                     ) {
        free(collection->tail);

        collection->head = 
# 336 "util.c" 3 4
                          ((void *)0)
# 336 "util.c"
                              ;
        collection->tail = 
# 337 "util.c" 3 4
                          ((void *)0)
# 337 "util.c"
                              ;
    } else {
        struct P_resect_collection_element *new_tail = collection->tail->prev;
        free(collection->tail);

        new_tail->next = 
# 342 "util.c" 3 4
                        ((void *)0)
# 342 "util.c"
                            ;
        collection->tail = new_tail;
    }
    collection->size -= 1;
    return result;
}

void *resect_collection_peek_last(resect_collection collection) {
    if (collection->tail == 
# 350 "util.c" 3 4
                           ((void *)0)
# 350 "util.c"
                               ) {
        return 
# 351 "util.c" 3 4
              ((void *)0)
# 351 "util.c"
                  ;
    }
    return collection->tail->value;
}

unsigned int resect_collection_size(resect_collection collection) {
    return collection->size;
}




resect_iterator resect_collection_iterator(resect_collection collection) {
    resect_iterator iterator = malloc(sizeof(struct P_resect_iterator));
    iterator->head = collection->head;
    iterator->current = 
# 366 "util.c" 3 4
                       ((void *)0)
# 366 "util.c"
                           ;
    return iterator;
}

resect_bool resect_iterator_next(resect_iterator iter) {
    if (iter->head == 
# 371 "util.c" 3 4
                     ((void *)0) 
# 371 "util.c"
                          || (iter->current != 
# 371 "util.c" 3 4
                                               ((void *)0) 
# 371 "util.c"
                                                    && iter->current->next == 
# 371 "util.c" 3 4
                                                                              ((void *)0)
# 371 "util.c"
                                                                                  )) {
        return (0);
    }

    if (iter->current == 
# 375 "util.c" 3 4
                        ((void *)0)
# 375 "util.c"
                            ) {
        iter->current = iter->head;
    } else {
        iter->current = iter->current->next;
    }

    return (1);
}

void *resect_iterator_value(resect_iterator iter) {
    
# 385 "util.c" 3 4
   ((void) sizeof ((
# 385 "util.c"
   iter->current != 
# 385 "util.c" 3 4
   ((void *)0)) ? 1 : 0), __extension__ ({ if (
# 385 "util.c"
   iter->current != 
# 385 "util.c" 3 4
   ((void *)0)) ; else __assert_fail (
# 385 "util.c"
   "iter->current != NULL"
# 385 "util.c" 3 4
   , "util.c", 385, __extension__ __PRETTY_FUNCTION__); }))
# 385 "util.c"
                                ;

    return iter->current->value;
}

void resect_iterator_free(resect_iterator iter) {
    free(iter);
}




resect_set resect_set_create() {
    resect_set set = malloc(sizeof(struct P_resect_set));
    set->head = 
# 399 "util.c" 3 4
               ((void *)0)
# 399 "util.c"
                   ;
    return set;
}

resect_bool resect_set_contains(resect_set set, void *value) {
    resect_set_item entry;
    do { (entry) = 
# 405 "util.c" 3 4
   ((void *)0)
# 405 "util.c"
   ; if (set->head) { unsigned _hf_hashv; do { do { unsigned _hj_i,_hj_j,_hj_k; unsigned const char *_hj_key=(unsigned const char*)(&value); _hf_hashv = 0xfeedbeefu; _hj_i = _hj_j = 0x9e3779b9u; _hj_k = (unsigned)(sizeof(void *)); while (_hj_k >= 12U) { _hj_i += (_hj_key[0] + ( (unsigned)_hj_key[1] << 8 ) + ( (unsigned)_hj_key[2] << 16 ) + ( (unsigned)_hj_key[3] << 24 ) ); _hj_j += (_hj_key[4] + ( (unsigned)_hj_key[5] << 8 ) + ( (unsigned)_hj_key[6] << 16 ) + ( (unsigned)_hj_key[7] << 24 ) ); _hf_hashv += (_hj_key[8] + ( (unsigned)_hj_key[9] << 8 ) + ( (unsigned)_hj_key[10] << 16 ) + ( (unsigned)_hj_key[11] << 24 ) ); do { _hj_i -= _hj_j; _hj_i -= _hf_hashv; _hj_i ^= ( _hf_hashv >> 13 ); _hj_j -= _hf_hashv; _hj_j -= _hj_i; _hj_j ^= ( _hj_i << 8 ); _hf_hashv -= _hj_i; _hf_hashv -= _hj_j; _hf_hashv ^= ( _hj_j >> 13 ); _hj_i -= _hj_j; _hj_i -= _hf_hashv; _hj_i ^= ( _hf_hashv >> 12 ); _hj_j -= _hf_hashv; _hj_j -= _hj_i; _hj_j ^= ( _hj_i << 16 ); _hf_hashv -= _hj_i; _hf_hashv -= _hj_j; _hf_hashv ^= ( _hj_j >> 5 ); _hj_i -= _hj_j; _hj_i -= _hf_hashv; _hj_i ^= ( _hf_hashv >> 3 ); _hj_j -= _hf_hashv; _hj_j -= _hj_i; _hj_j ^= ( _hj_i << 10 ); _hf_hashv -= _hj_i; _hf_hashv -= _hj_j; _hf_hashv ^= ( _hj_j >> 15 ); } while (0); _hj_key += 12; _hj_k -= 12U; } _hf_hashv += (unsigned)(sizeof(void *)); switch ( _hj_k ) { case 11: _hf_hashv += ( (unsigned)_hj_key[10] << 24 ); case 10: _hf_hashv += ( (unsigned)_hj_key[9] << 16 ); case 9: _hf_hashv += ( (unsigned)_hj_key[8] << 8 ); case 8: _hj_j += ( (unsigned)_hj_key[7] << 24 ); case 7: _hj_j += ( (unsigned)_hj_key[6] << 16 ); case 6: _hj_j += ( (unsigned)_hj_key[5] << 8 ); case 5: _hj_j += _hj_key[4]; case 4: _hj_i += ( (unsigned)_hj_key[3] << 24 ); case 3: _hj_i += ( (unsigned)_hj_key[2] << 16 ); case 2: _hj_i += ( (unsigned)_hj_key[1] << 8 ); case 1: _hj_i += _hj_key[0]; } do { _hj_i -= _hj_j; _hj_i -= _hf_hashv; _hj_i ^= ( _hf_hashv >> 13 ); _hj_j -= _hf_hashv; _hj_j -= _hj_i; _hj_j ^= ( _hj_i << 8 ); _hf_hashv -= _hj_i; _hf_hashv -= _hj_j; _hf_hashv ^= ( _hj_j >> 13 ); _hj_i -= _hj_j; _hj_i -= _hf_hashv; _hj_i ^= ( _hf_hashv >> 12 ); _hj_j -= _hf_hashv; _hj_j -= _hj_i; _hj_j ^= ( _hj_i << 16 ); _hf_hashv -= _hj_i; _hf_hashv -= _hj_j; _hf_hashv ^= ( _hj_j >> 5 ); _hj_i -= _hj_j; _hj_i -= _hf_hashv; _hj_i ^= ( _hf_hashv >> 3 ); _hj_j -= _hf_hashv; _hj_j -= _hj_i; _hj_j ^= ( _hj_i << 10 ); _hf_hashv -= _hj_i; _hf_hashv -= _hj_j; _hf_hashv ^= ( _hj_j >> 15 ); } while (0); } while (0); } while (0); do { (entry) = 
# 405 "util.c" 3 4
   ((void *)0)
# 405 "util.c"
   ; if (set->head) { unsigned _hf_bkt; do { _hf_bkt = ((_hf_hashv) & (((set->head)->hh.tbl->num_buckets) - 1U)); } while (0); if ((1) != 0) { do { if (((set->head)->hh.tbl->buckets[ _hf_bkt ]).hh_head != 
# 405 "util.c" 3 4
   ((void *)0)
# 405 "util.c"
   ) { do { (entry) = (__typeof(entry))(((void*)(((char*)(((set->head)->hh.tbl->buckets[ _hf_bkt ]).hh_head)) - (((set->head)->hh.tbl)->hho)))); } while (0); } else { (entry) = 
# 405 "util.c" 3 4
   ((void *)0)
# 405 "util.c"
   ; } while ((entry) != 
# 405 "util.c" 3 4
   ((void *)0)
# 405 "util.c"
   ) { if ((entry)->hh.hashv == (_hf_hashv) && (entry)->hh.keylen == (sizeof(void *))) { if (memcmp((entry)->hh.key,&value,sizeof(void *)) == 0) { break; } } if ((entry)->hh.hh_next != 
# 405 "util.c" 3 4
   ((void *)0)
# 405 "util.c"
   ) { do { (entry) = (__typeof(entry))(((void*)(((char*)((entry)->hh.hh_next)) - (((set->head)->hh.tbl)->hho)))); } while (0); } else { (entry) = 
# 405 "util.c" 3 4
   ((void *)0)
# 405 "util.c"
   ; } } } while (0); } } } while (0); } } while (0);
    return entry != 
# 406 "util.c" 3 4
                   ((void *)0) 
# 406 "util.c"
                        ? (1) : (0);
}

resect_bool resect_set_add(resect_set set, void *value) {
    if (!resect_set_contains(set, value)) {
        resect_set_item entry = malloc(sizeof(struct P_resect_set_item));
        entry->key = value;
        do { unsigned _ha_hashv; do { do { unsigned _hj_i,_hj_j,_hj_k; unsigned const char *_hj_key=(unsigned const char*)(&((entry)->key)); _ha_hashv = 0xfeedbeefu; _hj_i = _hj_j = 0x9e3779b9u; _hj_k = (unsigned)(sizeof(void *)); while (_hj_k >= 12U) { _hj_i += (_hj_key[0] + ( (unsigned)_hj_key[1] << 8 ) + ( (unsigned)_hj_key[2] << 16 ) + ( (unsigned)_hj_key[3] << 24 ) ); _hj_j += (_hj_key[4] + ( (unsigned)_hj_key[5] << 8 ) + ( (unsigned)_hj_key[6] << 16 ) + ( (unsigned)_hj_key[7] << 24 ) ); _ha_hashv += (_hj_key[8] + ( (unsigned)_hj_key[9] << 8 ) + ( (unsigned)_hj_key[10] << 16 ) + ( (unsigned)_hj_key[11] << 24 ) ); do { _hj_i -= _hj_j; _hj_i -= _ha_hashv; _hj_i ^= ( _ha_hashv >> 13 ); _hj_j -= _ha_hashv; _hj_j -= _hj_i; _hj_j ^= ( _hj_i << 8 ); _ha_hashv -= _hj_i; _ha_hashv -= _hj_j; _ha_hashv ^= ( _hj_j >> 13 ); _hj_i -= _hj_j; _hj_i -= _ha_hashv; _hj_i ^= ( _ha_hashv >> 12 ); _hj_j -= _ha_hashv; _hj_j -= _hj_i; _hj_j ^= ( _hj_i << 16 ); _ha_hashv -= _hj_i; _ha_hashv -= _hj_j; _ha_hashv ^= ( _hj_j >> 5 ); _hj_i -= _hj_j; _hj_i -= _ha_hashv; _hj_i ^= ( _ha_hashv >> 3 ); _hj_j -= _ha_hashv; _hj_j -= _hj_i; _hj_j ^= ( _hj_i << 10 ); _ha_hashv -= _hj_i; _ha_hashv -= _hj_j; _ha_hashv ^= ( _hj_j >> 15 ); } while (0); _hj_key += 12; _hj_k -= 12U; } _ha_hashv += (unsigned)(sizeof(void *)); switch ( _hj_k ) { case 11: _ha_hashv += ( (unsigned)_hj_key[10] << 24 ); case 10: _ha_hashv += ( (unsigned)_hj_key[9] << 16 ); case 9: _ha_hashv += ( (unsigned)_hj_key[8] << 8 ); case 8: _hj_j += ( (unsigned)_hj_key[7] << 24 ); case 7: _hj_j += ( (unsigned)_hj_key[6] << 16 ); case 6: _hj_j += ( (unsigned)_hj_key[5] << 8 ); case 5: _hj_j += _hj_key[4]; case 4: _hj_i += ( (unsigned)_hj_key[3] << 24 ); case 3: _hj_i += ( (unsigned)_hj_key[2] << 16 ); case 2: _hj_i += ( (unsigned)_hj_key[1] << 8 ); case 1: _hj_i += _hj_key[0]; } do { _hj_i -= _hj_j; _hj_i -= _ha_hashv; _hj_i ^= ( _ha_hashv >> 13 ); _hj_j -= _ha_hashv; _hj_j -= _hj_i; _hj_j ^= ( _hj_i << 8 ); _ha_hashv -= _hj_i; _ha_hashv -= _hj_j; _ha_hashv ^= ( _hj_j >> 13 ); _hj_i -= _hj_j; _hj_i -= _ha_hashv; _hj_i ^= ( _ha_hashv >> 12 ); _hj_j -= _ha_hashv; _hj_j -= _hj_i; _hj_j ^= ( _hj_i << 16 ); _ha_hashv -= _hj_i; _ha_hashv -= _hj_j; _ha_hashv ^= ( _hj_j >> 5 ); _hj_i -= _hj_j; _hj_i -= _ha_hashv; _hj_i ^= ( _ha_hashv >> 3 ); _hj_j -= _ha_hashv; _hj_j -= _hj_i; _hj_j ^= ( _hj_i << 10 ); _ha_hashv -= _hj_i; _ha_hashv -= _hj_j; _ha_hashv ^= ( _hj_j >> 15 ); } while (0); } while (0); } while (0); do { (entry)->hh.hashv = (_ha_hashv); (entry)->hh.key = (char*) (&((entry)->key)); (entry)->hh.keylen = (unsigned) (sizeof(void *)); if (!(set->head)) { (entry)->hh.next = 
# 413 "util.c" 3 4
       ((void *)0)
# 413 "util.c"
       ; (entry)->hh.prev = 
# 413 "util.c" 3 4
       ((void *)0)
# 413 "util.c"
       ; do { (entry)->hh.tbl = (UT_hash_table*)malloc(sizeof(UT_hash_table)); if (!(entry)->hh.tbl) { exit(-1); } else { memset((entry)->hh.tbl,'\0',sizeof(UT_hash_table)); (entry)->hh.tbl->tail = &((entry)->hh); (entry)->hh.tbl->num_buckets = 32U; (entry)->hh.tbl->log2_num_buckets = 5U; (entry)->hh.tbl->hho = (char*)(&(entry)->hh) - (char*)(entry); (entry)->hh.tbl->buckets = (UT_hash_bucket*)malloc(32U * sizeof(struct UT_hash_bucket)); (entry)->hh.tbl->signature = 0xa0111fe1u; if (!(entry)->hh.tbl->buckets) { exit(-1); free((entry)->hh.tbl); } else { memset((entry)->hh.tbl->buckets,'\0',32U * sizeof(struct UT_hash_bucket)); ; } } } while (0); (set->head) = (entry); } else { (entry)->hh.tbl = (set->head)->hh.tbl; do { (entry)->hh.next = 
# 413 "util.c" 3 4
       ((void *)0)
# 413 "util.c"
       ; (entry)->hh.prev = ((void*)(((char*)((set->head)->hh.tbl->tail)) - (((set->head)->hh.tbl)->hho))); (set->head)->hh.tbl->tail->next = (entry); (set->head)->hh.tbl->tail = &((entry)->hh); } while (0); } do { unsigned _ha_bkt; (set->head)->hh.tbl->num_items++; do { _ha_bkt = ((_ha_hashv) & (((set->head)->hh.tbl->num_buckets) - 1U)); } while (0); do { UT_hash_bucket *_ha_head = &((set->head)->hh.tbl->buckets[_ha_bkt]); _ha_head->count++; (&(entry)->hh)->hh_next = _ha_head->hh_head; (&(entry)->hh)->hh_prev = 
# 413 "util.c" 3 4
       ((void *)0)
# 413 "util.c"
       ; if (_ha_head->hh_head != 
# 413 "util.c" 3 4
       ((void *)0)
# 413 "util.c"
       ) { _ha_head->hh_head->hh_prev = (&(entry)->hh); } _ha_head->hh_head = (&(entry)->hh); if ((_ha_head->count >= ((_ha_head->expand_mult + 1U) * 10U)) && !(&(entry)->hh)->tbl->noexpand) { do { unsigned _he_bkt; unsigned _he_bkt_i; struct UT_hash_handle *_he_thh, *_he_hh_nxt; UT_hash_bucket *_he_new_buckets, *_he_newbkt; _he_new_buckets = (UT_hash_bucket*)malloc(2UL * ((&(entry)->hh)->tbl)->num_buckets * sizeof(struct UT_hash_bucket)); if (!_he_new_buckets) { exit(-1); } else { memset(_he_new_buckets,'\0',2UL * ((&(entry)->hh)->tbl)->num_buckets * sizeof(struct UT_hash_bucket)); ((&(entry)->hh)->tbl)->ideal_chain_maxlen = (((&(entry)->hh)->tbl)->num_items >> (((&(entry)->hh)->tbl)->log2_num_buckets+1U)) + (((((&(entry)->hh)->tbl)->num_items & ((((&(entry)->hh)->tbl)->num_buckets*2U)-1U)) != 0U) ? 1U : 0U); ((&(entry)->hh)->tbl)->nonideal_items = 0; for (_he_bkt_i = 0; _he_bkt_i < ((&(entry)->hh)->tbl)->num_buckets; _he_bkt_i++) { _he_thh = ((&(entry)->hh)->tbl)->buckets[ _he_bkt_i ].hh_head; while (_he_thh != 
# 413 "util.c" 3 4
       ((void *)0)
# 413 "util.c"
       ) { _he_hh_nxt = _he_thh->hh_next; do { _he_bkt = ((_he_thh->hashv) & ((((&(entry)->hh)->tbl)->num_buckets * 2U) - 1U)); } while (0); _he_newbkt = &(_he_new_buckets[_he_bkt]); if (++(_he_newbkt->count) > ((&(entry)->hh)->tbl)->ideal_chain_maxlen) { ((&(entry)->hh)->tbl)->nonideal_items++; if (_he_newbkt->count > _he_newbkt->expand_mult * ((&(entry)->hh)->tbl)->ideal_chain_maxlen) { _he_newbkt->expand_mult++; } } _he_thh->hh_prev = 
# 413 "util.c" 3 4
       ((void *)0)
# 413 "util.c"
       ; _he_thh->hh_next = _he_newbkt->hh_head; if (_he_newbkt->hh_head != 
# 413 "util.c" 3 4
       ((void *)0)
# 413 "util.c"
       ) { _he_newbkt->hh_head->hh_prev = _he_thh; } _he_newbkt->hh_head = _he_thh; _he_thh = _he_hh_nxt; } } free(((&(entry)->hh)->tbl)->buckets); ((&(entry)->hh)->tbl)->num_buckets *= 2U; ((&(entry)->hh)->tbl)->log2_num_buckets++; ((&(entry)->hh)->tbl)->buckets = _he_new_buckets; ((&(entry)->hh)->tbl)->ineff_expands = (((&(entry)->hh)->tbl)->nonideal_items > (((&(entry)->hh)->tbl)->num_items >> 1)) ? (((&(entry)->hh)->tbl)->ineff_expands+1U) : 0U; if (((&(entry)->hh)->tbl)->ineff_expands > 1U) { ((&(entry)->hh)->tbl)->noexpand = 1; ; } ; } } while (0); } } while (0); ; ; } while (0); ; } while (0); } while (0);
        return (1);
    }
    return (0);
}

void resect_set_free(resect_set set) {
    struct P_resect_set_item *element, *tmp;
    for(((element)=(set->head)), ((tmp)=(__typeof(element))((set->head!=
# 421 "util.c" 3 4
   ((void *)0)
# 421 "util.c"
   )?(set->head)->hh.next:
# 421 "util.c" 3 4
   ((void *)0)
# 421 "util.c"
   )); (element) != 
# 421 "util.c" 3 4
   ((void *)0)
# 421 "util.c"
   ; ((element)=(tmp)), ((tmp)=(__typeof(element))((tmp!=
# 421 "util.c" 3 4
   ((void *)0)
# 421 "util.c"
   )?(tmp)->hh.next:
# 421 "util.c" 3 4
   ((void *)0)
# 421 "util.c"
   ))) {
        do { struct UT_hash_handle *_hd_hh_del = (&(element)->hh); if ((_hd_hh_del->prev == 
# 422 "util.c" 3 4
       ((void *)0)
# 422 "util.c"
       ) && (_hd_hh_del->next == 
# 422 "util.c" 3 4
       ((void *)0)
# 422 "util.c"
       )) { ; free((set->head)->hh.tbl->buckets); free((set->head)->hh.tbl); (set->head) = 
# 422 "util.c" 3 4
       ((void *)0)
# 422 "util.c"
       ; } else { unsigned _hd_bkt; if (_hd_hh_del == (set->head)->hh.tbl->tail) { (set->head)->hh.tbl->tail = ((UT_hash_handle*)(void*)(((char*)(_hd_hh_del->prev)) + (((set->head)->hh.tbl)->hho))); } if (_hd_hh_del->prev != 
# 422 "util.c" 3 4
       ((void *)0)
# 422 "util.c"
       ) { ((UT_hash_handle*)(void*)(((char*)(_hd_hh_del->prev)) + (((set->head)->hh.tbl)->hho)))->next = _hd_hh_del->next; } else { do { (set->head) = (__typeof(set->head))(_hd_hh_del->next); } while (0); } if (_hd_hh_del->next != 
# 422 "util.c" 3 4
       ((void *)0)
# 422 "util.c"
       ) { ((UT_hash_handle*)(void*)(((char*)(_hd_hh_del->next)) + (((set->head)->hh.tbl)->hho)))->prev = _hd_hh_del->prev; } do { _hd_bkt = ((_hd_hh_del->hashv) & (((set->head)->hh.tbl->num_buckets) - 1U)); } while (0); do { UT_hash_bucket *_hd_head = &((set->head)->hh.tbl->buckets[_hd_bkt]); _hd_head->count--; if (_hd_head->hh_head == (_hd_hh_del)) { _hd_head->hh_head = (_hd_hh_del)->hh_next; } if ((_hd_hh_del)->hh_prev) { (_hd_hh_del)->hh_prev->hh_next = (_hd_hh_del)->hh_next; } if ((_hd_hh_del)->hh_next) { (_hd_hh_del)->hh_next->hh_prev = (_hd_hh_del)->hh_prev; } } while (0); (set->head)->hh.tbl->num_items--; } ; } while (0);
        free(element);
    }
    free(set);
}

void resect_set_add_to_collection(resect_set set, resect_collection collection) {
    struct P_resect_set_item *element, *tmp;
    for(((element)=(set->head)), ((tmp)=(__typeof(element))((set->head!=
# 430 "util.c" 3 4
   ((void *)0)
# 430 "util.c"
   )?(set->head)->hh.next:
# 430 "util.c" 3 4
   ((void *)0)
# 430 "util.c"
   )); (element) != 
# 430 "util.c" 3 4
   ((void *)0)
# 430 "util.c"
   ; ((element)=(tmp)), ((tmp)=(__typeof(element))((tmp!=
# 430 "util.c" 3 4
   ((void *)0)
# 430 "util.c"
   )?(tmp)->hh.next:
# 430 "util.c" 3 4
   ((void *)0)
# 430 "util.c"
   ))) {
        resect_collection_add(collection, element->key);
    }
}

resect_table resect_table_create() {
    resect_table table = malloc(sizeof(struct P_resect_table));
    table->head = 
# 437 "util.c" 3 4
                 ((void *)0)
# 437 "util.c"
                     ;
    return table;
}

resect_bool resect_table_put_if_absent(resect_table table, const char *key, void *value) {
    struct P_resect_table_entry *entry = 
# 442 "util.c" 3 4
                                        ((void *)0)
# 442 "util.c"
                                            ;
    do { unsigned _uthash_hfstr_keylen = (unsigned)strlen(key); do { (entry) = 
# 443 "util.c" 3 4
   ((void *)0)
# 443 "util.c"
   ; if (table->head) { unsigned _hf_hashv; do { do { unsigned _hj_i,_hj_j,_hj_k; unsigned const char *_hj_key=(unsigned const char*)(key); _hf_hashv = 0xfeedbeefu; _hj_i = _hj_j = 0x9e3779b9u; _hj_k = (unsigned)(_uthash_hfstr_keylen); while (_hj_k >= 12U) { _hj_i += (_hj_key[0] + ( (unsigned)_hj_key[1] << 8 ) + ( (unsigned)_hj_key[2] << 16 ) + ( (unsigned)_hj_key[3] << 24 ) ); _hj_j += (_hj_key[4] + ( (unsigned)_hj_key[5] << 8 ) + ( (unsigned)_hj_key[6] << 16 ) + ( (unsigned)_hj_key[7] << 24 ) ); _hf_hashv += (_hj_key[8] + ( (unsigned)_hj_key[9] << 8 ) + ( (unsigned)_hj_key[10] << 16 ) + ( (unsigned)_hj_key[11] << 24 ) ); do { _hj_i -= _hj_j; _hj_i -= _hf_hashv; _hj_i ^= ( _hf_hashv >> 13 ); _hj_j -= _hf_hashv; _hj_j -= _hj_i; _hj_j ^= ( _hj_i << 8 ); _hf_hashv -= _hj_i; _hf_hashv -= _hj_j; _hf_hashv ^= ( _hj_j >> 13 ); _hj_i -= _hj_j; _hj_i -= _hf_hashv; _hj_i ^= ( _hf_hashv >> 12 ); _hj_j -= _hf_hashv; _hj_j -= _hj_i; _hj_j ^= ( _hj_i << 16 ); _hf_hashv -= _hj_i; _hf_hashv -= _hj_j; _hf_hashv ^= ( _hj_j >> 5 ); _hj_i -= _hj_j; _hj_i -= _hf_hashv; _hj_i ^= ( _hf_hashv >> 3 ); _hj_j -= _hf_hashv; _hj_j -= _hj_i; _hj_j ^= ( _hj_i << 10 ); _hf_hashv -= _hj_i; _hf_hashv -= _hj_j; _hf_hashv ^= ( _hj_j >> 15 ); } while (0); _hj_key += 12; _hj_k -= 12U; } _hf_hashv += (unsigned)(_uthash_hfstr_keylen); switch ( _hj_k ) { case 11: _hf_hashv += ( (unsigned)_hj_key[10] << 24 ); case 10: _hf_hashv += ( (unsigned)_hj_key[9] << 16 ); case 9: _hf_hashv += ( (unsigned)_hj_key[8] << 8 ); case 8: _hj_j += ( (unsigned)_hj_key[7] << 24 ); case 7: _hj_j += ( (unsigned)_hj_key[6] << 16 ); case 6: _hj_j += ( (unsigned)_hj_key[5] << 8 ); case 5: _hj_j += _hj_key[4]; case 4: _hj_i += ( (unsigned)_hj_key[3] << 24 ); case 3: _hj_i += ( (unsigned)_hj_key[2] << 16 ); case 2: _hj_i += ( (unsigned)_hj_key[1] << 8 ); case 1: _hj_i += _hj_key[0]; } do { _hj_i -= _hj_j; _hj_i -= _hf_hashv; _hj_i ^= ( _hf_hashv >> 13 ); _hj_j -= _hf_hashv; _hj_j -= _hj_i; _hj_j ^= ( _hj_i << 8 ); _hf_hashv -= _hj_i; _hf_hashv -= _hj_j; _hf_hashv ^= ( _hj_j >> 13 ); _hj_i -= _hj_j; _hj_i -= _hf_hashv; _hj_i ^= ( _hf_hashv >> 12 ); _hj_j -= _hf_hashv; _hj_j -= _hj_i; _hj_j ^= ( _hj_i << 16 ); _hf_hashv -= _hj_i; _hf_hashv -= _hj_j; _hf_hashv ^= ( _hj_j >> 5 ); _hj_i -= _hj_j; _hj_i -= _hf_hashv; _hj_i ^= ( _hf_hashv >> 3 ); _hj_j -= _hf_hashv; _hj_j -= _hj_i; _hj_j ^= ( _hj_i << 10 ); _hf_hashv -= _hj_i; _hf_hashv -= _hj_j; _hf_hashv ^= ( _hj_j >> 15 ); } while (0); } while (0); } while (0); do { (entry) = 
# 443 "util.c" 3 4
   ((void *)0)
# 443 "util.c"
   ; if (table->head) { unsigned _hf_bkt; do { _hf_bkt = ((_hf_hashv) & (((table->head)->hh.tbl->num_buckets) - 1U)); } while (0); if ((1) != 0) { do { if (((table->head)->hh.tbl->buckets[ _hf_bkt ]).hh_head != 
# 443 "util.c" 3 4
   ((void *)0)
# 443 "util.c"
   ) { do { (entry) = (__typeof(entry))(((void*)(((char*)(((table->head)->hh.tbl->buckets[ _hf_bkt ]).hh_head)) - (((table->head)->hh.tbl)->hho)))); } while (0); } else { (entry) = 
# 443 "util.c" 3 4
   ((void *)0)
# 443 "util.c"
   ; } while ((entry) != 
# 443 "util.c" 3 4
   ((void *)0)
# 443 "util.c"
   ) { if ((entry)->hh.hashv == (_hf_hashv) && (entry)->hh.keylen == (_uthash_hfstr_keylen)) { if (memcmp((entry)->hh.key,key,_uthash_hfstr_keylen) == 0) { break; } } if ((entry)->hh.hh_next != 
# 443 "util.c" 3 4
   ((void *)0)
# 443 "util.c"
   ) { do { (entry) = (__typeof(entry))(((void*)(((char*)((entry)->hh.hh_next)) - (((table->head)->hh.tbl)->hho)))); } while (0); } else { (entry) = 
# 443 "util.c" 3 4
   ((void *)0)
# 443 "util.c"
   ; } } } while (0); } } } while (0); } } while (0); } while (0);
    if (entry != 
# 444 "util.c" 3 4
                ((void *)0)
# 444 "util.c"
                    ) {
        return (0);
    }

    entry = malloc(sizeof(struct P_resect_table_entry));
    entry->value = value;

    size_t key_len = strlen(key);
    entry->key = malloc(sizeof(char) * (key_len + 1));
    strcpy(entry->key, key);

    do { unsigned _uthash_hastr_keylen = (unsigned)strlen((entry)->key); do { unsigned _ha_hashv; do { do { unsigned _hj_i,_hj_j,_hj_k; unsigned const char *_hj_key=(unsigned const char*)(&((entry)->key[0])); _ha_hashv = 0xfeedbeefu; _hj_i = _hj_j = 0x9e3779b9u; _hj_k = (unsigned)(_uthash_hastr_keylen); while (_hj_k >= 12U) { _hj_i += (_hj_key[0] + ( (unsigned)_hj_key[1] << 8 ) + ( (unsigned)_hj_key[2] << 16 ) + ( (unsigned)_hj_key[3] << 24 ) ); _hj_j += (_hj_key[4] + ( (unsigned)_hj_key[5] << 8 ) + ( (unsigned)_hj_key[6] << 16 ) + ( (unsigned)_hj_key[7] << 24 ) ); _ha_hashv += (_hj_key[8] + ( (unsigned)_hj_key[9] << 8 ) + ( (unsigned)_hj_key[10] << 16 ) + ( (unsigned)_hj_key[11] << 24 ) ); do { _hj_i -= _hj_j; _hj_i -= _ha_hashv; _hj_i ^= ( _ha_hashv >> 13 ); _hj_j -= _ha_hashv; _hj_j -= _hj_i; _hj_j ^= ( _hj_i << 8 ); _ha_hashv -= _hj_i; _ha_hashv -= _hj_j; _ha_hashv ^= ( _hj_j >> 13 ); _hj_i -= _hj_j; _hj_i -= _ha_hashv; _hj_i ^= ( _ha_hashv >> 12 ); _hj_j -= _ha_hashv; _hj_j -= _hj_i; _hj_j ^= ( _hj_i << 16 ); _ha_hashv -= _hj_i; _ha_hashv -= _hj_j; _ha_hashv ^= ( _hj_j >> 5 ); _hj_i -= _hj_j; _hj_i -= _ha_hashv; _hj_i ^= ( _ha_hashv >> 3 ); _hj_j -= _ha_hashv; _hj_j -= _hj_i; _hj_j ^= ( _hj_i << 10 ); _ha_hashv -= _hj_i; _ha_hashv -= _hj_j; _ha_hashv ^= ( _hj_j >> 15 ); } while (0); _hj_key += 12; _hj_k -= 12U; } _ha_hashv += (unsigned)(_uthash_hastr_keylen); switch ( _hj_k ) { case 11: _ha_hashv += ( (unsigned)_hj_key[10] << 24 ); case 10: _ha_hashv += ( (unsigned)_hj_key[9] << 16 ); case 9: _ha_hashv += ( (unsigned)_hj_key[8] << 8 ); case 8: _hj_j += ( (unsigned)_hj_key[7] << 24 ); case 7: _hj_j += ( (unsigned)_hj_key[6] << 16 ); case 6: _hj_j += ( (unsigned)_hj_key[5] << 8 ); case 5: _hj_j += _hj_key[4]; case 4: _hj_i += ( (unsigned)_hj_key[3] << 24 ); case 3: _hj_i += ( (unsigned)_hj_key[2] << 16 ); case 2: _hj_i += ( (unsigned)_hj_key[1] << 8 ); case 1: _hj_i += _hj_key[0]; } do { _hj_i -= _hj_j; _hj_i -= _ha_hashv; _hj_i ^= ( _ha_hashv >> 13 ); _hj_j -= _ha_hashv; _hj_j -= _hj_i; _hj_j ^= ( _hj_i << 8 ); _ha_hashv -= _hj_i; _ha_hashv -= _hj_j; _ha_hashv ^= ( _hj_j >> 13 ); _hj_i -= _hj_j; _hj_i -= _ha_hashv; _hj_i ^= ( _ha_hashv >> 12 ); _hj_j -= _ha_hashv; _hj_j -= _hj_i; _hj_j ^= ( _hj_i << 16 ); _ha_hashv -= _hj_i; _ha_hashv -= _hj_j; _ha_hashv ^= ( _hj_j >> 5 ); _hj_i -= _hj_j; _hj_i -= _ha_hashv; _hj_i ^= ( _ha_hashv >> 3 ); _hj_j -= _ha_hashv; _hj_j -= _hj_i; _hj_j ^= ( _hj_i << 10 ); _ha_hashv -= _hj_i; _ha_hashv -= _hj_j; _ha_hashv ^= ( _hj_j >> 15 ); } while (0); } while (0); } while (0); do { (entry)->hh.hashv = (_ha_hashv); (entry)->hh.key = (char*) (&((entry)->key[0])); (entry)->hh.keylen = (unsigned) (_uthash_hastr_keylen); if (!(table->head)) { (entry)->hh.next = 
# 455 "util.c" 3 4
   ((void *)0)
# 455 "util.c"
   ; (entry)->hh.prev = 
# 455 "util.c" 3 4
   ((void *)0)
# 455 "util.c"
   ; do { (entry)->hh.tbl = (UT_hash_table*)malloc(sizeof(UT_hash_table)); if (!(entry)->hh.tbl) { exit(-1); } else { memset((entry)->hh.tbl,'\0',sizeof(UT_hash_table)); (entry)->hh.tbl->tail = &((entry)->hh); (entry)->hh.tbl->num_buckets = 32U; (entry)->hh.tbl->log2_num_buckets = 5U; (entry)->hh.tbl->hho = (char*)(&(entry)->hh) - (char*)(entry); (entry)->hh.tbl->buckets = (UT_hash_bucket*)malloc(32U * sizeof(struct UT_hash_bucket)); (entry)->hh.tbl->signature = 0xa0111fe1u; if (!(entry)->hh.tbl->buckets) { exit(-1); free((entry)->hh.tbl); } else { memset((entry)->hh.tbl->buckets,'\0',32U * sizeof(struct UT_hash_bucket)); ; } } } while (0); (table->head) = (entry); } else { (entry)->hh.tbl = (table->head)->hh.tbl; do { (entry)->hh.next = 
# 455 "util.c" 3 4
   ((void *)0)
# 455 "util.c"
   ; (entry)->hh.prev = ((void*)(((char*)((table->head)->hh.tbl->tail)) - (((table->head)->hh.tbl)->hho))); (table->head)->hh.tbl->tail->next = (entry); (table->head)->hh.tbl->tail = &((entry)->hh); } while (0); } do { unsigned _ha_bkt; (table->head)->hh.tbl->num_items++; do { _ha_bkt = ((_ha_hashv) & (((table->head)->hh.tbl->num_buckets) - 1U)); } while (0); do { UT_hash_bucket *_ha_head = &((table->head)->hh.tbl->buckets[_ha_bkt]); _ha_head->count++; (&(entry)->hh)->hh_next = _ha_head->hh_head; (&(entry)->hh)->hh_prev = 
# 455 "util.c" 3 4
   ((void *)0)
# 455 "util.c"
   ; if (_ha_head->hh_head != 
# 455 "util.c" 3 4
   ((void *)0)
# 455 "util.c"
   ) { _ha_head->hh_head->hh_prev = (&(entry)->hh); } _ha_head->hh_head = (&(entry)->hh); if ((_ha_head->count >= ((_ha_head->expand_mult + 1U) * 10U)) && !(&(entry)->hh)->tbl->noexpand) { do { unsigned _he_bkt; unsigned _he_bkt_i; struct UT_hash_handle *_he_thh, *_he_hh_nxt; UT_hash_bucket *_he_new_buckets, *_he_newbkt; _he_new_buckets = (UT_hash_bucket*)malloc(2UL * ((&(entry)->hh)->tbl)->num_buckets * sizeof(struct UT_hash_bucket)); if (!_he_new_buckets) { exit(-1); } else { memset(_he_new_buckets,'\0',2UL * ((&(entry)->hh)->tbl)->num_buckets * sizeof(struct UT_hash_bucket)); ((&(entry)->hh)->tbl)->ideal_chain_maxlen = (((&(entry)->hh)->tbl)->num_items >> (((&(entry)->hh)->tbl)->log2_num_buckets+1U)) + (((((&(entry)->hh)->tbl)->num_items & ((((&(entry)->hh)->tbl)->num_buckets*2U)-1U)) != 0U) ? 1U : 0U); ((&(entry)->hh)->tbl)->nonideal_items = 0; for (_he_bkt_i = 0; _he_bkt_i < ((&(entry)->hh)->tbl)->num_buckets; _he_bkt_i++) { _he_thh = ((&(entry)->hh)->tbl)->buckets[ _he_bkt_i ].hh_head; while (_he_thh != 
# 455 "util.c" 3 4
   ((void *)0)
# 455 "util.c"
   ) { _he_hh_nxt = _he_thh->hh_next; do { _he_bkt = ((_he_thh->hashv) & ((((&(entry)->hh)->tbl)->num_buckets * 2U) - 1U)); } while (0); _he_newbkt = &(_he_new_buckets[_he_bkt]); if (++(_he_newbkt->count) > ((&(entry)->hh)->tbl)->ideal_chain_maxlen) { ((&(entry)->hh)->tbl)->nonideal_items++; if (_he_newbkt->count > _he_newbkt->expand_mult * ((&(entry)->hh)->tbl)->ideal_chain_maxlen) { _he_newbkt->expand_mult++; } } _he_thh->hh_prev = 
# 455 "util.c" 3 4
   ((void *)0)
# 455 "util.c"
   ; _he_thh->hh_next = _he_newbkt->hh_head; if (_he_newbkt->hh_head != 
# 455 "util.c" 3 4
   ((void *)0)
# 455 "util.c"
   ) { _he_newbkt->hh_head->hh_prev = _he_thh; } _he_newbkt->hh_head = _he_thh; _he_thh = _he_hh_nxt; } } free(((&(entry)->hh)->tbl)->buckets); ((&(entry)->hh)->tbl)->num_buckets *= 2U; ((&(entry)->hh)->tbl)->log2_num_buckets++; ((&(entry)->hh)->tbl)->buckets = _he_new_buckets; ((&(entry)->hh)->tbl)->ineff_expands = (((&(entry)->hh)->tbl)->nonideal_items > (((&(entry)->hh)->tbl)->num_items >> 1)) ? (((&(entry)->hh)->tbl)->ineff_expands+1U) : 0U; if (((&(entry)->hh)->tbl)->ineff_expands > 1U) { ((&(entry)->hh)->tbl)->noexpand = 1; ; } ; } } while (0); } } while (0); ; ; } while (0); ; } while (0); } while (0); } while (0);
    return (1);
}

void *resect_table_get(resect_table table, const char *key) {
    struct P_resect_table_entry *entry = 
# 460 "util.c" 3 4
                                        ((void *)0)
# 460 "util.c"
                                            ;
    do { unsigned _uthash_hfstr_keylen = (unsigned)strlen(key); do { (entry) = 
# 461 "util.c" 3 4
   ((void *)0)
# 461 "util.c"
   ; if (table->head) { unsigned _hf_hashv; do { do { unsigned _hj_i,_hj_j,_hj_k; unsigned const char *_hj_key=(unsigned const char*)(key); _hf_hashv = 0xfeedbeefu; _hj_i = _hj_j = 0x9e3779b9u; _hj_k = (unsigned)(_uthash_hfstr_keylen); while (_hj_k >= 12U) { _hj_i += (_hj_key[0] + ( (unsigned)_hj_key[1] << 8 ) + ( (unsigned)_hj_key[2] << 16 ) + ( (unsigned)_hj_key[3] << 24 ) ); _hj_j += (_hj_key[4] + ( (unsigned)_hj_key[5] << 8 ) + ( (unsigned)_hj_key[6] << 16 ) + ( (unsigned)_hj_key[7] << 24 ) ); _hf_hashv += (_hj_key[8] + ( (unsigned)_hj_key[9] << 8 ) + ( (unsigned)_hj_key[10] << 16 ) + ( (unsigned)_hj_key[11] << 24 ) ); do { _hj_i -= _hj_j; _hj_i -= _hf_hashv; _hj_i ^= ( _hf_hashv >> 13 ); _hj_j -= _hf_hashv; _hj_j -= _hj_i; _hj_j ^= ( _hj_i << 8 ); _hf_hashv -= _hj_i; _hf_hashv -= _hj_j; _hf_hashv ^= ( _hj_j >> 13 ); _hj_i -= _hj_j; _hj_i -= _hf_hashv; _hj_i ^= ( _hf_hashv >> 12 ); _hj_j -= _hf_hashv; _hj_j -= _hj_i; _hj_j ^= ( _hj_i << 16 ); _hf_hashv -= _hj_i; _hf_hashv -= _hj_j; _hf_hashv ^= ( _hj_j >> 5 ); _hj_i -= _hj_j; _hj_i -= _hf_hashv; _hj_i ^= ( _hf_hashv >> 3 ); _hj_j -= _hf_hashv; _hj_j -= _hj_i; _hj_j ^= ( _hj_i << 10 ); _hf_hashv -= _hj_i; _hf_hashv -= _hj_j; _hf_hashv ^= ( _hj_j >> 15 ); } while (0); _hj_key += 12; _hj_k -= 12U; } _hf_hashv += (unsigned)(_uthash_hfstr_keylen); switch ( _hj_k ) { case 11: _hf_hashv += ( (unsigned)_hj_key[10] << 24 ); case 10: _hf_hashv += ( (unsigned)_hj_key[9] << 16 ); case 9: _hf_hashv += ( (unsigned)_hj_key[8] << 8 ); case 8: _hj_j += ( (unsigned)_hj_key[7] << 24 ); case 7: _hj_j += ( (unsigned)_hj_key[6] << 16 ); case 6: _hj_j += ( (unsigned)_hj_key[5] << 8 ); case 5: _hj_j += _hj_key[4]; case 4: _hj_i += ( (unsigned)_hj_key[3] << 24 ); case 3: _hj_i += ( (unsigned)_hj_key[2] << 16 ); case 2: _hj_i += ( (unsigned)_hj_key[1] << 8 ); case 1: _hj_i += _hj_key[0]; } do { _hj_i -= _hj_j; _hj_i -= _hf_hashv; _hj_i ^= ( _hf_hashv >> 13 ); _hj_j -= _hf_hashv; _hj_j -= _hj_i; _hj_j ^= ( _hj_i << 8 ); _hf_hashv -= _hj_i; _hf_hashv -= _hj_j; _hf_hashv ^= ( _hj_j >> 13 ); _hj_i -= _hj_j; _hj_i -= _hf_hashv; _hj_i ^= ( _hf_hashv >> 12 ); _hj_j -= _hf_hashv; _hj_j -= _hj_i; _hj_j ^= ( _hj_i << 16 ); _hf_hashv -= _hj_i; _hf_hashv -= _hj_j; _hf_hashv ^= ( _hj_j >> 5 ); _hj_i -= _hj_j; _hj_i -= _hf_hashv; _hj_i ^= ( _hf_hashv >> 3 ); _hj_j -= _hf_hashv; _hj_j -= _hj_i; _hj_j ^= ( _hj_i << 10 ); _hf_hashv -= _hj_i; _hf_hashv -= _hj_j; _hf_hashv ^= ( _hj_j >> 15 ); } while (0); } while (0); } while (0); do { (entry) = 
# 461 "util.c" 3 4
   ((void *)0)
# 461 "util.c"
   ; if (table->head) { unsigned _hf_bkt; do { _hf_bkt = ((_hf_hashv) & (((table->head)->hh.tbl->num_buckets) - 1U)); } while (0); if ((1) != 0) { do { if (((table->head)->hh.tbl->buckets[ _hf_bkt ]).hh_head != 
# 461 "util.c" 3 4
   ((void *)0)
# 461 "util.c"
   ) { do { (entry) = (__typeof(entry))(((void*)(((char*)(((table->head)->hh.tbl->buckets[ _hf_bkt ]).hh_head)) - (((table->head)->hh.tbl)->hho)))); } while (0); } else { (entry) = 
# 461 "util.c" 3 4
   ((void *)0)
# 461 "util.c"
   ; } while ((entry) != 
# 461 "util.c" 3 4
   ((void *)0)
# 461 "util.c"
   ) { if ((entry)->hh.hashv == (_hf_hashv) && (entry)->hh.keylen == (_uthash_hfstr_keylen)) { if (memcmp((entry)->hh.key,key,_uthash_hfstr_keylen) == 0) { break; } } if ((entry)->hh.hh_next != 
# 461 "util.c" 3 4
   ((void *)0)
# 461 "util.c"
   ) { do { (entry) = (__typeof(entry))(((void*)(((char*)((entry)->hh.hh_next)) - (((table->head)->hh.tbl)->hho)))); } while (0); } else { (entry) = 
# 461 "util.c" 3 4
   ((void *)0)
# 461 "util.c"
   ; } } } while (0); } } } while (0); } } while (0); } while (0);

    return entry != 
# 463 "util.c" 3 4
                   ((void *)0) 
# 463 "util.c"
                        ? entry->value : 
# 463 "util.c" 3 4
                                         ((void *)0)
# 463 "util.c"
                                             ;
}

void resect_visit_table(resect_table table,
                        resect_bool (*entry_visitor)(void *, const char *, void *),
                        void *context) {
    
# 469 "util.c" 3 4
   ((void) sizeof ((
# 469 "util.c"
   entry_visitor != 
# 469 "util.c" 3 4
   ((void *)0)) ? 1 : 0), __extension__ ({ if (
# 469 "util.c"
   entry_visitor != 
# 469 "util.c" 3 4
   ((void *)0)) ; else __assert_fail (
# 469 "util.c"
   "entry_visitor != NULL"
# 469 "util.c" 3 4
   , "util.c", 469, __extension__ __PRETTY_FUNCTION__); }))
# 469 "util.c"
                                ;
    struct P_resect_table_entry *entry, *tmp;
    for(((entry)=(table->head)), ((tmp)=(__typeof(entry))((table->head!=
# 471 "util.c" 3 4
   ((void *)0)
# 471 "util.c"
   )?(table->head)->hh.next:
# 471 "util.c" 3 4
   ((void *)0)
# 471 "util.c"
   )); (entry) != 
# 471 "util.c" 3 4
   ((void *)0)
# 471 "util.c"
   ; ((entry)=(tmp)), ((tmp)=(__typeof(entry))((tmp!=
# 471 "util.c" 3 4
   ((void *)0)
# 471 "util.c"
   )?(tmp)->hh.next:
# 471 "util.c" 3 4
   ((void *)0)
# 471 "util.c"
   ))) {
        if (!entry_visitor(context, entry->key, entry->value)) {
            break;
        }
    }
}

void resect_table_free(resect_table table, void (*value_destructor)(void *, void *), void *context) {
    struct P_resect_table_entry *entry, *tmp;
    for(((entry)=(table->head)), ((tmp)=(__typeof(entry))((table->head!=
# 480 "util.c" 3 4
   ((void *)0)
# 480 "util.c"
   )?(table->head)->hh.next:
# 480 "util.c" 3 4
   ((void *)0)
# 480 "util.c"
   )); (entry) != 
# 480 "util.c" 3 4
   ((void *)0)
# 480 "util.c"
   ; ((entry)=(tmp)), ((tmp)=(__typeof(entry))((tmp!=
# 480 "util.c" 3 4
   ((void *)0)
# 480 "util.c"
   )?(tmp)->hh.next:
# 480 "util.c" 3 4
   ((void *)0)
# 480 "util.c"
   ))) {
        do { struct UT_hash_handle *_hd_hh_del = (&(entry)->hh); if ((_hd_hh_del->prev == 
# 481 "util.c" 3 4
       ((void *)0)
# 481 "util.c"
       ) && (_hd_hh_del->next == 
# 481 "util.c" 3 4
       ((void *)0)
# 481 "util.c"
       )) { ; free((table->head)->hh.tbl->buckets); free((table->head)->hh.tbl); (table->head) = 
# 481 "util.c" 3 4
       ((void *)0)
# 481 "util.c"
       ; } else { unsigned _hd_bkt; if (_hd_hh_del == (table->head)->hh.tbl->tail) { (table->head)->hh.tbl->tail = ((UT_hash_handle*)(void*)(((char*)(_hd_hh_del->prev)) + (((table->head)->hh.tbl)->hho))); } if (_hd_hh_del->prev != 
# 481 "util.c" 3 4
       ((void *)0)
# 481 "util.c"
       ) { ((UT_hash_handle*)(void*)(((char*)(_hd_hh_del->prev)) + (((table->head)->hh.tbl)->hho)))->next = _hd_hh_del->next; } else { do { (table->head) = (__typeof(table->head))(_hd_hh_del->next); } while (0); } if (_hd_hh_del->next != 
# 481 "util.c" 3 4
       ((void *)0)
# 481 "util.c"
       ) { ((UT_hash_handle*)(void*)(((char*)(_hd_hh_del->next)) + (((table->head)->hh.tbl)->hho)))->prev = _hd_hh_del->prev; } do { _hd_bkt = ((_hd_hh_del->hashv) & (((table->head)->hh.tbl->num_buckets) - 1U)); } while (0); do { UT_hash_bucket *_hd_head = &((table->head)->hh.tbl->buckets[_hd_bkt]); _hd_head->count--; if (_hd_head->hh_head == (_hd_hh_del)) { _hd_head->hh_head = (_hd_hh_del)->hh_next; } if ((_hd_hh_del)->hh_prev) { (_hd_hh_del)->hh_prev->hh_next = (_hd_hh_del)->hh_next; } if ((_hd_hh_del)->hh_next) { (_hd_hh_del)->hh_next->hh_prev = (_hd_hh_del)->hh_prev; } } while (0); (table->head)->hh.tbl->num_items--; } ; } while (0);
        if (value_destructor != 
# 482 "util.c" 3 4
                               ((void *)0)
# 482 "util.c"
                                   ) {
            value_destructor(context, entry->value);
        }
        free(entry->key);
        free(entry);
    }
    free(table);
}




long long filter_valid_value(long long value) {
    return value < 0 ? 0 : value;
}

void resect_string_collection_free(resect_collection collection) {
    resect_iterator arg_iter = resect_collection_iterator(collection);
    while (resect_iterator_next(arg_iter)) {
        resect_string_free(resect_iterator_value(arg_iter));
    }
    resect_iterator_free(arg_iter);
    resect_collection_free(collection);
}

resect_string resect_format_cursor_full_name(CXCursor cursor) {
    if (clang_Cursor_isNull(cursor) || clang_getCursorKind(cursor) == CXCursor_TranslationUnit) {
        return resect_string_from_c("");
    }

    CXCursor parent = clang_getCursorSemanticParent(cursor);

    if (clang_Cursor_isAnonymousRecordDecl(cursor) || clang_Cursor_isAnonymous(cursor)) {
        return resect_format_cursor_full_name(parent);
    }

    enum CXCursorKind parent_kind = clang_getCursorKind(parent);
    switch (parent_kind) {
        case CXCursor_ClassDecl:
        case CXCursor_ClassTemplate:
        case CXCursor_ClassTemplateSpecialization:
        case CXCursor_ClassTemplatePartialSpecialization:
        case CXCursor_UnionDecl:
        case CXCursor_StructDecl: {
            resect_string parent_full_name = resect_format_cursor_full_name(parent);
            resect_string name = resect_string_from_clang(clang_getCursorSpelling(cursor));

            resect_string full_name = resect_string_format("%s::%s",
                                                           resect_string_to_c(parent_full_name),
                                                           resect_string_to_c(name));

            resect_string_free(name);
            resect_string_free(parent_full_name);

            return full_name;
        }
    }

    resect_string full_name = resect_string_from_c("");

    {
        resect_string namespace = resect_format_cursor_namespace(cursor);
        if (resect_string_length(namespace) > 0) {
            resect_string_append(full_name, resect_string_to_c(namespace));
            resect_string_append(full_name, "::");
        }
        resect_string_free(namespace);
    }

    {
        resect_string name = resect_string_from_clang(clang_getCursorSpelling(cursor));
        resect_string_append(full_name, resect_string_to_c(name));
        resect_string_free(name);
    }

    return full_name;
}

static void append_anonymous_decl_id(resect_string id, const char *infix, CXCursor cursor) {

    CXCursor parent = clang_getCursorSemanticParent(cursor);
    if (!clang_Cursor_isNull(parent)) {
        resect_string parent_id = resect_extract_decl_id(parent);

        resect_location loc = resect_location_from_cursor(cursor);
        resect_string postfix = resect_string_format(":%s:%d:%d",
                                                     infix,
                                                     resect_location_line(loc),
                                                     resect_location_column(loc));

        resect_string_append(id, resect_string_to_c(parent_id));
        resect_string_append(id, resect_string_to_c(postfix));

        resect_string_free(postfix);
        resect_string_free(parent_id);
        resect_location_free(loc);
    }
}

static void append_cursor_full_name(resect_string id, CXCursor cursor) {
    resect_string full_name = resect_format_cursor_full_name(cursor);
    if (resect_string_length(full_name) == 0) {
        goto done;
    }

    resect_string cursor_kind =
            resect_string_from_clang(clang_getCursorKindSpelling(clang_getCursorKind(cursor)));
    resect_string decl_id = resect_string_format("claw_did$%s$%s",
                                                 resect_string_to_c(cursor_kind),
                                                 resect_string_to_c(full_name));
    resect_string_append(id, resect_string_to_c(decl_id));

    resect_string_free(decl_id);
    resect_string_free(cursor_kind);

    done:
    resect_string_free(full_name);
}


resect_string resect_extract_decl_id(CXCursor cursor) {
    resect_string id = resect_string_from_clang(clang_getCursorUSR(cursor));

    if (resect_string_length(id) > 0) {
        return id;
    }

    switch (clang_getCursorKind(cursor)) {
        case CXCursor_ParmDecl:
            append_anonymous_decl_id(id, "parm", cursor);
            return id;
        case CXCursor_FieldDecl:
            append_anonymous_decl_id(id, "field", cursor);
            return id;
        default:
        {
            append_cursor_full_name(id, cursor);
            if (resect_string_length(id) > 0) {
                return id;
            }
        }
    }


    
# 626 "util.c" 3 4
   ((void) sizeof ((
# 626 "util.c"
   !"Declaration identifier must not be empty"
# 626 "util.c" 3 4
   ) ? 1 : 0), __extension__ ({ if (
# 626 "util.c"
   !"Declaration identifier must not be empty"
# 626 "util.c" 3 4
   ) ; else __assert_fail (
# 626 "util.c"
   "!\"Declaration identifier must not be empty\""
# 626 "util.c" 3 4
   , "util.c", 626, __extension__ __PRETTY_FUNCTION__); }))
# 626 "util.c"
                                                      ;
    return id;
}




unsigned long resect_hash(const char *str) {
    unsigned long hash = 0;
    int c;

    while ((c = (unsigned char)*str++)) {
        hash = c + (hash << 6) + (hash << 16) - hash;
    }

    return hash;
}

resect_error_code check_file_exists(const char *filename) {
  struct stat file_st;
  if (stat(filename, &file_st) == -1) {

    fprintf(
# 648 "util.c" 3 4
           stderr
# 648 "util.c"
                 , "Error! Required file doesn't exist. %s \n", filename);
    return RESECT_ERR_FILE_NOT_FOUND;
  }
  return RESECT_OK;
}

resect_error_code ensure_directory_exists(const char *dirname) {
  struct stat st;

  if (stat(dirname, &st) == -1) {

    mkdir(dirname, 0777);
    if (stat(dirname, &st) == -1) {
      fprintf(
# 661 "util.c" 3 4
             stderr
# 661 "util.c"
                   , "Error! Required directory doesn't exist and couldn't be created. %s \n", dirname);
      return RESECT_ERR_DIR_NOT_FOUND;
    }
  } else {

    printf("The directory '%s' already exists.\n", dirname);
  }
  return RESECT_OK;
}
