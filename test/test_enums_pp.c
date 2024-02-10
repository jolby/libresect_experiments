# 0 "test_enums.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "test_enums.c"
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

# 2 "test_enums.c" 2
# 1 "../third-party/Unity/src/unity.h" 1
# 21 "../third-party/Unity/src/unity.h"
# 1 "../third-party/Unity/src/unity_internals.h" 1
# 15 "../third-party/Unity/src/unity_internals.h"
# 1 "/usr/include/setjmp.h" 1 3 4
# 27 "/usr/include/setjmp.h" 3 4


# 1 "/usr/include/bits/setjmp.h" 1 3 4
# 26 "/usr/include/bits/setjmp.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 27 "/usr/include/bits/setjmp.h" 2 3 4




typedef long int __jmp_buf[8];
# 30 "/usr/include/setjmp.h" 2 3 4
# 1 "/usr/include/bits/types/struct___jmp_buf_tag.h" 1 3 4
# 26 "/usr/include/bits/types/struct___jmp_buf_tag.h" 3 4
struct __jmp_buf_tag
  {




    __jmp_buf __jmpbuf;
    int __mask_was_saved;
    __sigset_t __saved_mask;
  };
# 31 "/usr/include/setjmp.h" 2 3 4

typedef struct __jmp_buf_tag jmp_buf[1];



extern int setjmp (jmp_buf __env) __attribute__ ((__nothrow__));




extern int __sigsetjmp (struct __jmp_buf_tag __env[1], int __savemask) __attribute__ ((__nothrow__));



extern int _setjmp (struct __jmp_buf_tag __env[1]) __attribute__ ((__nothrow__));
# 54 "/usr/include/setjmp.h" 3 4
extern void longjmp (struct __jmp_buf_tag __env[1], int __val)
     __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));





extern void _longjmp (struct __jmp_buf_tag __env[1], int __val)
     __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));







typedef struct __jmp_buf_tag sigjmp_buf[1];
# 80 "/usr/include/setjmp.h" 3 4
extern void siglongjmp (sigjmp_buf __env, int __val)
     __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));
# 90 "/usr/include/setjmp.h" 3 4

# 16 "../third-party/Unity/src/unity_internals.h" 2



# 1 "/usr/include/math.h" 1 3 4
# 27 "/usr/include/math.h" 3 4
# 1 "/usr/include/bits/libc-header-start.h" 1 3 4
# 28 "/usr/include/math.h" 2 3 4












# 1 "/usr/include/bits/math-vector.h" 1 3 4
# 25 "/usr/include/bits/math-vector.h" 3 4
# 1 "/usr/include/bits/libm-simd-decl-stubs.h" 1 3 4
# 26 "/usr/include/bits/math-vector.h" 2 3 4
# 41 "/usr/include/math.h" 2 3 4
# 152 "/usr/include/math.h" 3 4
# 1 "/usr/include/bits/flt-eval-method.h" 1 3 4
# 153 "/usr/include/math.h" 2 3 4
# 163 "/usr/include/math.h" 3 4
typedef float float_t;
typedef double double_t;
# 204 "/usr/include/math.h" 3 4
# 1 "/usr/include/bits/fp-logb.h" 1 3 4
# 205 "/usr/include/math.h" 2 3 4
# 247 "/usr/include/math.h" 3 4
# 1 "/usr/include/bits/fp-fast.h" 1 3 4
# 248 "/usr/include/math.h" 2 3 4
# 312 "/usr/include/math.h" 3 4
# 1 "/usr/include/bits/mathcalls-helper-functions.h" 1 3 4
# 20 "/usr/include/bits/mathcalls-helper-functions.h" 3 4
extern int __fpclassify (double __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));


extern int __signbit (double __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));



extern int __isinf (double __value) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__const__));


extern int __finite (double __value) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__const__));


extern int __isnan (double __value) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__const__));


extern int __iseqsig (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));


extern int __issignaling (double __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));
# 313 "/usr/include/math.h" 2 3 4
# 1 "/usr/include/bits/mathcalls.h" 1 3 4
# 53 "/usr/include/bits/mathcalls.h" 3 4
 extern double acos (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __acos (double __x) __attribute__ ((__nothrow__ , __leaf__));

 extern double asin (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __asin (double __x) __attribute__ ((__nothrow__ , __leaf__));

 extern double atan (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __atan (double __x) __attribute__ ((__nothrow__ , __leaf__));

 extern double atan2 (double __y, double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __atan2 (double __y, double __x) __attribute__ ((__nothrow__ , __leaf__));


 extern double cos (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __cos (double __x) __attribute__ ((__nothrow__ , __leaf__));

 extern double sin (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __sin (double __x) __attribute__ ((__nothrow__ , __leaf__));

 extern double tan (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __tan (double __x) __attribute__ ((__nothrow__ , __leaf__));




 extern double cosh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __cosh (double __x) __attribute__ ((__nothrow__ , __leaf__));

 extern double sinh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __sinh (double __x) __attribute__ ((__nothrow__ , __leaf__));

 extern double tanh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __tanh (double __x) __attribute__ ((__nothrow__ , __leaf__));
# 85 "/usr/include/bits/mathcalls.h" 3 4
 extern double acosh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __acosh (double __x) __attribute__ ((__nothrow__ , __leaf__));

 extern double asinh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __asinh (double __x) __attribute__ ((__nothrow__ , __leaf__));

 extern double atanh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __atanh (double __x) __attribute__ ((__nothrow__ , __leaf__));





 extern double exp (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __exp (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double frexp (double __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__)); extern double __frexp (double __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__));


extern double ldexp (double __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__)); extern double __ldexp (double __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__));


 extern double log (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __log (double __x) __attribute__ ((__nothrow__ , __leaf__));


 extern double log10 (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __log10 (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double modf (double __x, double *__iptr) __attribute__ ((__nothrow__ , __leaf__)); extern double __modf (double __x, double *__iptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
# 119 "/usr/include/bits/mathcalls.h" 3 4
 extern double expm1 (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __expm1 (double __x) __attribute__ ((__nothrow__ , __leaf__));


 extern double log1p (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __log1p (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double logb (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __logb (double __x) __attribute__ ((__nothrow__ , __leaf__));




 extern double exp2 (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __exp2 (double __x) __attribute__ ((__nothrow__ , __leaf__));


 extern double log2 (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __log2 (double __x) __attribute__ ((__nothrow__ , __leaf__));






 extern double pow (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __pow (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));


extern double sqrt (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __sqrt (double __x) __attribute__ ((__nothrow__ , __leaf__));



 extern double hypot (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __hypot (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));




 extern double cbrt (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __cbrt (double __x) __attribute__ ((__nothrow__ , __leaf__));






extern double ceil (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __ceil (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double fabs (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __fabs (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double floor (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __floor (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double fmod (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __fmod (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));
# 177 "/usr/include/bits/mathcalls.h" 3 4
extern int isinf (double __value) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__const__));




extern int finite (double __value) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__const__));


extern double drem (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __drem (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));



extern double significand (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __significand (double __x) __attribute__ ((__nothrow__ , __leaf__));






extern double copysign (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __copysign (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern double nan (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)); extern double __nan (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__));
# 213 "/usr/include/bits/mathcalls.h" 3 4
extern int isnan (double __value) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__const__));





extern double j0 (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __j0 (double) __attribute__ ((__nothrow__ , __leaf__));
extern double j1 (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __j1 (double) __attribute__ ((__nothrow__ , __leaf__));
extern double jn (int, double) __attribute__ ((__nothrow__ , __leaf__)); extern double __jn (int, double) __attribute__ ((__nothrow__ , __leaf__));
extern double y0 (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __y0 (double) __attribute__ ((__nothrow__ , __leaf__));
extern double y1 (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __y1 (double) __attribute__ ((__nothrow__ , __leaf__));
extern double yn (int, double) __attribute__ ((__nothrow__ , __leaf__)); extern double __yn (int, double) __attribute__ ((__nothrow__ , __leaf__));





 extern double erf (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __erf (double) __attribute__ ((__nothrow__ , __leaf__));
 extern double erfc (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __erfc (double) __attribute__ ((__nothrow__ , __leaf__));
extern double lgamma (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __lgamma (double) __attribute__ ((__nothrow__ , __leaf__));




extern double tgamma (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __tgamma (double) __attribute__ ((__nothrow__ , __leaf__));





extern double gamma (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __gamma (double) __attribute__ ((__nothrow__ , __leaf__));







extern double lgamma_r (double, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__)); extern double __lgamma_r (double, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__));






extern double rint (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __rint (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double nextafter (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __nextafter (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));

extern double nexttoward (double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __nexttoward (double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));
# 275 "/usr/include/bits/mathcalls.h" 3 4
extern double remainder (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __remainder (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));



extern double scalbn (double __x, int __n) __attribute__ ((__nothrow__ , __leaf__)); extern double __scalbn (double __x, int __n) __attribute__ ((__nothrow__ , __leaf__));



extern int ilogb (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern int __ilogb (double __x) __attribute__ ((__nothrow__ , __leaf__));
# 293 "/usr/include/bits/mathcalls.h" 3 4
extern double scalbln (double __x, long int __n) __attribute__ ((__nothrow__ , __leaf__)); extern double __scalbln (double __x, long int __n) __attribute__ ((__nothrow__ , __leaf__));



extern double nearbyint (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __nearbyint (double __x) __attribute__ ((__nothrow__ , __leaf__));



extern double round (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __round (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern double trunc (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __trunc (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern double remquo (double __x, double __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__)); extern double __remquo (double __x, double __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__));






extern long int lrint (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lrint (double __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llrint (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llrint (double __x) __attribute__ ((__nothrow__ , __leaf__));



extern long int lround (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lround (double __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llround (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llround (double __x) __attribute__ ((__nothrow__ , __leaf__));



extern double fdim (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __fdim (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));



extern double fmax (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __fmax (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double fmin (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __fmin (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern double fma (double __x, double __y, double __z) __attribute__ ((__nothrow__ , __leaf__)); extern double __fma (double __x, double __y, double __z) __attribute__ ((__nothrow__ , __leaf__));
# 435 "/usr/include/bits/mathcalls.h" 3 4
extern double scalb (double __x, double __n) __attribute__ ((__nothrow__ , __leaf__)); extern double __scalb (double __x, double __n) __attribute__ ((__nothrow__ , __leaf__));
# 314 "/usr/include/math.h" 2 3 4
# 329 "/usr/include/math.h" 3 4
# 1 "/usr/include/bits/mathcalls-helper-functions.h" 1 3 4
# 20 "/usr/include/bits/mathcalls-helper-functions.h" 3 4
extern int __fpclassifyf (float __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));


extern int __signbitf (float __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));



extern int __isinff (float __value) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__const__));


extern int __finitef (float __value) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__const__));


extern int __isnanf (float __value) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__const__));


extern int __iseqsigf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));


extern int __issignalingf (float __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));
# 330 "/usr/include/math.h" 2 3 4
# 1 "/usr/include/bits/mathcalls.h" 1 3 4
# 53 "/usr/include/bits/mathcalls.h" 3 4
 extern float acosf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __acosf (float __x) __attribute__ ((__nothrow__ , __leaf__));

 extern float asinf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __asinf (float __x) __attribute__ ((__nothrow__ , __leaf__));

 extern float atanf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __atanf (float __x) __attribute__ ((__nothrow__ , __leaf__));

 extern float atan2f (float __y, float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __atan2f (float __y, float __x) __attribute__ ((__nothrow__ , __leaf__));


 extern float cosf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __cosf (float __x) __attribute__ ((__nothrow__ , __leaf__));

 extern float sinf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __sinf (float __x) __attribute__ ((__nothrow__ , __leaf__));

 extern float tanf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __tanf (float __x) __attribute__ ((__nothrow__ , __leaf__));




 extern float coshf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __coshf (float __x) __attribute__ ((__nothrow__ , __leaf__));

 extern float sinhf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __sinhf (float __x) __attribute__ ((__nothrow__ , __leaf__));

 extern float tanhf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __tanhf (float __x) __attribute__ ((__nothrow__ , __leaf__));
# 85 "/usr/include/bits/mathcalls.h" 3 4
 extern float acoshf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __acoshf (float __x) __attribute__ ((__nothrow__ , __leaf__));

 extern float asinhf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __asinhf (float __x) __attribute__ ((__nothrow__ , __leaf__));

 extern float atanhf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __atanhf (float __x) __attribute__ ((__nothrow__ , __leaf__));





 extern float expf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __expf (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float frexpf (float __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__)); extern float __frexpf (float __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__));


extern float ldexpf (float __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__)); extern float __ldexpf (float __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__));


 extern float logf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __logf (float __x) __attribute__ ((__nothrow__ , __leaf__));


 extern float log10f (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __log10f (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float modff (float __x, float *__iptr) __attribute__ ((__nothrow__ , __leaf__)); extern float __modff (float __x, float *__iptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
# 119 "/usr/include/bits/mathcalls.h" 3 4
 extern float expm1f (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __expm1f (float __x) __attribute__ ((__nothrow__ , __leaf__));


 extern float log1pf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __log1pf (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float logbf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __logbf (float __x) __attribute__ ((__nothrow__ , __leaf__));




 extern float exp2f (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __exp2f (float __x) __attribute__ ((__nothrow__ , __leaf__));


 extern float log2f (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __log2f (float __x) __attribute__ ((__nothrow__ , __leaf__));






 extern float powf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __powf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));


extern float sqrtf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __sqrtf (float __x) __attribute__ ((__nothrow__ , __leaf__));



 extern float hypotf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __hypotf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));




 extern float cbrtf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __cbrtf (float __x) __attribute__ ((__nothrow__ , __leaf__));






extern float ceilf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __ceilf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float fabsf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __fabsf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float floorf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __floorf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float fmodf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __fmodf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));
# 177 "/usr/include/bits/mathcalls.h" 3 4
extern int isinff (float __value) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__const__));




extern int finitef (float __value) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__const__));


extern float dremf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __dremf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));



extern float significandf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __significandf (float __x) __attribute__ ((__nothrow__ , __leaf__));






extern float copysignf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __copysignf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern float nanf (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)); extern float __nanf (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__));
# 213 "/usr/include/bits/mathcalls.h" 3 4
extern int isnanf (float __value) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__const__));





extern float j0f (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __j0f (float) __attribute__ ((__nothrow__ , __leaf__));
extern float j1f (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __j1f (float) __attribute__ ((__nothrow__ , __leaf__));
extern float jnf (int, float) __attribute__ ((__nothrow__ , __leaf__)); extern float __jnf (int, float) __attribute__ ((__nothrow__ , __leaf__));
extern float y0f (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __y0f (float) __attribute__ ((__nothrow__ , __leaf__));
extern float y1f (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __y1f (float) __attribute__ ((__nothrow__ , __leaf__));
extern float ynf (int, float) __attribute__ ((__nothrow__ , __leaf__)); extern float __ynf (int, float) __attribute__ ((__nothrow__ , __leaf__));





 extern float erff (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __erff (float) __attribute__ ((__nothrow__ , __leaf__));
 extern float erfcf (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __erfcf (float) __attribute__ ((__nothrow__ , __leaf__));
extern float lgammaf (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __lgammaf (float) __attribute__ ((__nothrow__ , __leaf__));




extern float tgammaf (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __tgammaf (float) __attribute__ ((__nothrow__ , __leaf__));





extern float gammaf (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __gammaf (float) __attribute__ ((__nothrow__ , __leaf__));







extern float lgammaf_r (float, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__)); extern float __lgammaf_r (float, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__));






extern float rintf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __rintf (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float nextafterf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __nextafterf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));

extern float nexttowardf (float __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __nexttowardf (float __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));
# 275 "/usr/include/bits/mathcalls.h" 3 4
extern float remainderf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __remainderf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));



extern float scalbnf (float __x, int __n) __attribute__ ((__nothrow__ , __leaf__)); extern float __scalbnf (float __x, int __n) __attribute__ ((__nothrow__ , __leaf__));



extern int ilogbf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern int __ilogbf (float __x) __attribute__ ((__nothrow__ , __leaf__));
# 293 "/usr/include/bits/mathcalls.h" 3 4
extern float scalblnf (float __x, long int __n) __attribute__ ((__nothrow__ , __leaf__)); extern float __scalblnf (float __x, long int __n) __attribute__ ((__nothrow__ , __leaf__));



extern float nearbyintf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __nearbyintf (float __x) __attribute__ ((__nothrow__ , __leaf__));



extern float roundf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __roundf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern float truncf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __truncf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern float remquof (float __x, float __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__)); extern float __remquof (float __x, float __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__));






extern long int lrintf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lrintf (float __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llrintf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llrintf (float __x) __attribute__ ((__nothrow__ , __leaf__));



extern long int lroundf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lroundf (float __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llroundf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llroundf (float __x) __attribute__ ((__nothrow__ , __leaf__));



extern float fdimf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __fdimf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));



extern float fmaxf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __fmaxf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float fminf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __fminf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern float fmaf (float __x, float __y, float __z) __attribute__ ((__nothrow__ , __leaf__)); extern float __fmaf (float __x, float __y, float __z) __attribute__ ((__nothrow__ , __leaf__));
# 435 "/usr/include/bits/mathcalls.h" 3 4
extern float scalbf (float __x, float __n) __attribute__ ((__nothrow__ , __leaf__)); extern float __scalbf (float __x, float __n) __attribute__ ((__nothrow__ , __leaf__));
# 331 "/usr/include/math.h" 2 3 4
# 398 "/usr/include/math.h" 3 4
# 1 "/usr/include/bits/mathcalls-helper-functions.h" 1 3 4
# 20 "/usr/include/bits/mathcalls-helper-functions.h" 3 4
extern int __fpclassifyl (long double __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));


extern int __signbitl (long double __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));



extern int __isinfl (long double __value) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__const__));


extern int __finitel (long double __value) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__const__));


extern int __isnanl (long double __value) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__const__));


extern int __iseqsigl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));


extern int __issignalingl (long double __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));
# 399 "/usr/include/math.h" 2 3 4
# 1 "/usr/include/bits/mathcalls.h" 1 3 4
# 53 "/usr/include/bits/mathcalls.h" 3 4
 extern long double acosl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __acosl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

 extern long double asinl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __asinl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

 extern long double atanl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __atanl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

 extern long double atan2l (long double __y, long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __atan2l (long double __y, long double __x) __attribute__ ((__nothrow__ , __leaf__));


 extern long double cosl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __cosl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

 extern long double sinl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __sinl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

 extern long double tanl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __tanl (long double __x) __attribute__ ((__nothrow__ , __leaf__));




 extern long double coshl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __coshl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

 extern long double sinhl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __sinhl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

 extern long double tanhl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __tanhl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
# 85 "/usr/include/bits/mathcalls.h" 3 4
 extern long double acoshl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __acoshl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

 extern long double asinhl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __asinhl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

 extern long double atanhl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __atanhl (long double __x) __attribute__ ((__nothrow__ , __leaf__));





 extern long double expl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __expl (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double frexpl (long double __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__)); extern long double __frexpl (long double __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__));


extern long double ldexpl (long double __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__)); extern long double __ldexpl (long double __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__));


 extern long double logl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __logl (long double __x) __attribute__ ((__nothrow__ , __leaf__));


 extern long double log10l (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __log10l (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double modfl (long double __x, long double *__iptr) __attribute__ ((__nothrow__ , __leaf__)); extern long double __modfl (long double __x, long double *__iptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
# 119 "/usr/include/bits/mathcalls.h" 3 4
 extern long double expm1l (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __expm1l (long double __x) __attribute__ ((__nothrow__ , __leaf__));


 extern long double log1pl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __log1pl (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double logbl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __logbl (long double __x) __attribute__ ((__nothrow__ , __leaf__));




 extern long double exp2l (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __exp2l (long double __x) __attribute__ ((__nothrow__ , __leaf__));


 extern long double log2l (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __log2l (long double __x) __attribute__ ((__nothrow__ , __leaf__));






 extern long double powl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __powl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));


extern long double sqrtl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __sqrtl (long double __x) __attribute__ ((__nothrow__ , __leaf__));



 extern long double hypotl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __hypotl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));




 extern long double cbrtl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __cbrtl (long double __x) __attribute__ ((__nothrow__ , __leaf__));






extern long double ceill (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __ceill (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double fabsl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __fabsl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double floorl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __floorl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double fmodl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __fmodl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));
# 177 "/usr/include/bits/mathcalls.h" 3 4
extern int isinfl (long double __value) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__const__));




extern int finitel (long double __value) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__const__));


extern long double dreml (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __dreml (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));



extern long double significandl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __significandl (long double __x) __attribute__ ((__nothrow__ , __leaf__));






extern long double copysignl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __copysignl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern long double nanl (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)); extern long double __nanl (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__));
# 213 "/usr/include/bits/mathcalls.h" 3 4
extern int isnanl (long double __value) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__const__));





extern long double j0l (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __j0l (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double j1l (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __j1l (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double jnl (int, long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __jnl (int, long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double y0l (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __y0l (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double y1l (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __y1l (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double ynl (int, long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __ynl (int, long double) __attribute__ ((__nothrow__ , __leaf__));





 extern long double erfl (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __erfl (long double) __attribute__ ((__nothrow__ , __leaf__));
 extern long double erfcl (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __erfcl (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double lgammal (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __lgammal (long double) __attribute__ ((__nothrow__ , __leaf__));




extern long double tgammal (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __tgammal (long double) __attribute__ ((__nothrow__ , __leaf__));





extern long double gammal (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __gammal (long double) __attribute__ ((__nothrow__ , __leaf__));







extern long double lgammal_r (long double, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__)); extern long double __lgammal_r (long double, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__));






extern long double rintl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __rintl (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double nextafterl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __nextafterl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));

extern long double nexttowardl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __nexttowardl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));
# 275 "/usr/include/bits/mathcalls.h" 3 4
extern long double remainderl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __remainderl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));



extern long double scalbnl (long double __x, int __n) __attribute__ ((__nothrow__ , __leaf__)); extern long double __scalbnl (long double __x, int __n) __attribute__ ((__nothrow__ , __leaf__));



extern int ilogbl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern int __ilogbl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
# 293 "/usr/include/bits/mathcalls.h" 3 4
extern long double scalblnl (long double __x, long int __n) __attribute__ ((__nothrow__ , __leaf__)); extern long double __scalblnl (long double __x, long int __n) __attribute__ ((__nothrow__ , __leaf__));



extern long double nearbyintl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __nearbyintl (long double __x) __attribute__ ((__nothrow__ , __leaf__));



extern long double roundl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __roundl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern long double truncl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __truncl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern long double remquol (long double __x, long double __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__)); extern long double __remquol (long double __x, long double __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__));






extern long int lrintl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lrintl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llrintl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llrintl (long double __x) __attribute__ ((__nothrow__ , __leaf__));



extern long int lroundl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lroundl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llroundl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llroundl (long double __x) __attribute__ ((__nothrow__ , __leaf__));



extern long double fdiml (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __fdiml (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));



extern long double fmaxl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __fmaxl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double fminl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __fminl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern long double fmal (long double __x, long double __y, long double __z) __attribute__ ((__nothrow__ , __leaf__)); extern long double __fmal (long double __x, long double __y, long double __z) __attribute__ ((__nothrow__ , __leaf__));
# 435 "/usr/include/bits/mathcalls.h" 3 4
extern long double scalbl (long double __x, long double __n) __attribute__ ((__nothrow__ , __leaf__)); extern long double __scalbl (long double __x, long double __n) __attribute__ ((__nothrow__ , __leaf__));
# 400 "/usr/include/math.h" 2 3 4
# 481 "/usr/include/math.h" 3 4
# 1 "/usr/include/bits/mathcalls-helper-functions.h" 1 3 4
# 20 "/usr/include/bits/mathcalls-helper-functions.h" 3 4
extern int __fpclassifyf128 (_Float128 __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));


extern int __signbitf128 (_Float128 __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));



extern int __isinff128 (_Float128 __value) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__const__));


extern int __finitef128 (_Float128 __value) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__const__));


extern int __isnanf128 (_Float128 __value) __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__const__));


extern int __iseqsigf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__));


extern int __issignalingf128 (_Float128 __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));
# 482 "/usr/include/math.h" 2 3 4
# 854 "/usr/include/math.h" 3 4
extern int signgam;
# 934 "/usr/include/math.h" 3 4
enum
  {
    FP_NAN =

      0,
    FP_INFINITE =

      1,
    FP_ZERO =

      2,
    FP_SUBNORMAL =

      3,
    FP_NORMAL =

      4
  };
# 1472 "/usr/include/math.h" 3 4

# 20 "../third-party/Unity/src/unity_internals.h" 2



# 1 "/usr/lib64/gcc/x86_64-suse-linux/13/include/stddef.h" 1 3 4
# 145 "/usr/lib64/gcc/x86_64-suse-linux/13/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 425 "/usr/lib64/gcc/x86_64-suse-linux/13/include/stddef.h" 3 4
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
# 436 "/usr/lib64/gcc/x86_64-suse-linux/13/include/stddef.h" 3 4
} max_align_t;
# 24 "../third-party/Unity/src/unity_internals.h" 2
# 36 "../third-party/Unity/src/unity_internals.h"
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
# 37 "../third-party/Unity/src/unity_internals.h" 2



# 1 "/usr/lib64/gcc/x86_64-suse-linux/13/include/limits.h" 1 3 4
# 34 "/usr/lib64/gcc/x86_64-suse-linux/13/include/limits.h" 3 4
# 1 "/usr/lib64/gcc/x86_64-suse-linux/13/include/syslimits.h" 1 3 4






# 1 "/usr/lib64/gcc/x86_64-suse-linux/13/include/limits.h" 1 3 4
# 205 "/usr/lib64/gcc/x86_64-suse-linux/13/include/limits.h" 3 4
# 1 "/usr/include/limits.h" 1 3 4
# 26 "/usr/include/limits.h" 3 4
# 1 "/usr/include/bits/libc-header-start.h" 1 3 4
# 27 "/usr/include/limits.h" 2 3 4
# 195 "/usr/include/limits.h" 3 4
# 1 "/usr/include/bits/posix1_lim.h" 1 3 4
# 27 "/usr/include/bits/posix1_lim.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 28 "/usr/include/bits/posix1_lim.h" 2 3 4
# 161 "/usr/include/bits/posix1_lim.h" 3 4
# 1 "/usr/include/bits/local_lim.h" 1 3 4
# 38 "/usr/include/bits/local_lim.h" 3 4
# 1 "/usr/include/linux/limits.h" 1 3 4
# 39 "/usr/include/bits/local_lim.h" 2 3 4
# 81 "/usr/include/bits/local_lim.h" 3 4
# 1 "/usr/include/bits/pthread_stack_min-dynamic.h" 1 3 4
# 29 "/usr/include/bits/pthread_stack_min-dynamic.h" 3 4
# 1 "/usr/include/bits/pthread_stack_min.h" 1 3 4
# 30 "/usr/include/bits/pthread_stack_min-dynamic.h" 2 3 4
# 82 "/usr/include/bits/local_lim.h" 2 3 4
# 162 "/usr/include/bits/posix1_lim.h" 2 3 4
# 196 "/usr/include/limits.h" 2 3 4



# 1 "/usr/include/bits/posix2_lim.h" 1 3 4
# 200 "/usr/include/limits.h" 2 3 4
# 206 "/usr/lib64/gcc/x86_64-suse-linux/13/include/limits.h" 2 3 4
# 8 "/usr/lib64/gcc/x86_64-suse-linux/13/include/syslimits.h" 2 3 4
# 35 "/usr/lib64/gcc/x86_64-suse-linux/13/include/limits.h" 2 3 4
# 41 "../third-party/Unity/src/unity_internals.h" 2
# 74 "../third-party/Unity/src/unity_internals.h"
# 1 "/usr/lib64/gcc/x86_64-suse-linux/13/include/stdnoreturn.h" 1 3 4
# 75 "../third-party/Unity/src/unity_internals.h" 2
# 142 "../third-party/Unity/src/unity_internals.h"
    
# 142 "../third-party/Unity/src/unity_internals.h"
   typedef unsigned char UNITY_UINT8;
    typedef unsigned short UNITY_UINT16;
    typedef unsigned int UNITY_UINT32;
    typedef signed char UNITY_INT8;
    typedef signed short UNITY_INT16;
    typedef signed int UNITY_INT32;
# 182 "../third-party/Unity/src/unity_internals.h"
    typedef unsigned long UNITY_UINT64;
    typedef signed long UNITY_INT64;



    typedef UNITY_UINT64 UNITY_UINT;
    typedef UNITY_INT64 UNITY_INT;
# 242 "../third-party/Unity/src/unity_internals.h"
typedef float UNITY_FLOAT;
# 285 "../third-party/Unity/src/unity_internals.h"
  typedef UNITY_FLOAT UNITY_DOUBLE;
# 308 "../third-party/Unity/src/unity_internals.h"
# 1 "/usr/include/stdio.h" 1 3 4
# 27 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/bits/libc-header-start.h" 1 3 4
# 28 "/usr/include/stdio.h" 2 3 4





# 1 "/usr/lib64/gcc/x86_64-suse-linux/13/include/stddef.h" 1 3 4
# 34 "/usr/include/stdio.h" 2 3 4


# 1 "/usr/lib64/gcc/x86_64-suse-linux/13/include/stdarg.h" 1 3 4
# 40 "/usr/lib64/gcc/x86_64-suse-linux/13/include/stdarg.h" 3 4

# 40 "/usr/lib64/gcc/x86_64-suse-linux/13/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 37 "/usr/include/stdio.h" 2 3 4


# 1 "/usr/include/bits/types/__fpos_t.h" 1 3 4




# 1 "/usr/include/bits/types/__mbstate_t.h" 1 3 4
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





typedef __gnuc_va_list va_list;
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

# 309 "../third-party/Unity/src/unity_internals.h" 2
# 430 "../third-party/Unity/src/unity_internals.h"

# 430 "../third-party/Unity/src/unity_internals.h"
typedef void (*UnityTestFunction)(void);






typedef enum
{
    UNITY_DISPLAY_STYLE_INT = ((32) / 8) + (0x10),
    UNITY_DISPLAY_STYLE_INT8 = 1 + (0x10),
    UNITY_DISPLAY_STYLE_INT16 = 2 + (0x10),
    UNITY_DISPLAY_STYLE_INT32 = 4 + (0x10),

    UNITY_DISPLAY_STYLE_INT64 = 8 + (0x10),


    UNITY_DISPLAY_STYLE_UINT = ((32) / 8) + (0x20),
    UNITY_DISPLAY_STYLE_UINT8 = 1 + (0x20),
    UNITY_DISPLAY_STYLE_UINT16 = 2 + (0x20),
    UNITY_DISPLAY_STYLE_UINT32 = 4 + (0x20),

    UNITY_DISPLAY_STYLE_UINT64 = 8 + (0x20),


    UNITY_DISPLAY_STYLE_HEX8 = 1 + (0x40),
    UNITY_DISPLAY_STYLE_HEX16 = 2 + (0x40),
    UNITY_DISPLAY_STYLE_HEX32 = 4 + (0x40),

    UNITY_DISPLAY_STYLE_HEX64 = 8 + (0x40),


    UNITY_DISPLAY_STYLE_CHAR = 1 + (0x80) + (0x10),

    UNITY_DISPLAY_STYLE_UNKNOWN
} UNITY_DISPLAY_STYLE_T;

typedef enum
{
    UNITY_WITHIN = 0x0,
    UNITY_EQUAL_TO = 0x1,
    UNITY_GREATER_THAN = 0x2,
    UNITY_GREATER_OR_EQUAL = 0x2 + UNITY_EQUAL_TO,
    UNITY_SMALLER_THAN = 0x4,
    UNITY_SMALLER_OR_EQUAL = 0x4 + UNITY_EQUAL_TO,
    UNITY_NOT_EQUAL = 0x0,
    UNITY_UNKNOWN
} UNITY_COMPARISON_T;


typedef enum UNITY_FLOAT_TRAIT
{
    UNITY_FLOAT_IS_NOT_INF = 0,
    UNITY_FLOAT_IS_INF,
    UNITY_FLOAT_IS_NOT_NEG_INF,
    UNITY_FLOAT_IS_NEG_INF,
    UNITY_FLOAT_IS_NOT_NAN,
    UNITY_FLOAT_IS_NAN,
    UNITY_FLOAT_IS_NOT_DET,
    UNITY_FLOAT_IS_DET,
    UNITY_FLOAT_INVALID_TRAIT
} UNITY_FLOAT_TRAIT_T;


typedef enum
{
    UNITY_ARRAY_TO_VAL = 0,
    UNITY_ARRAY_TO_ARRAY,
    UNITY_ARRAY_UNKNOWN
} UNITY_FLAGS_T;

struct UNITY_STORAGE_T
{
    const char* TestFile;
    const char* CurrentTestName;

    const char* CurrentDetail1;
    const char* CurrentDetail2;

    UNITY_UINT CurrentTestLineNumber;
    UNITY_UINT NumberOfTests;
    UNITY_UINT TestFailures;
    UNITY_UINT TestIgnores;
    UNITY_UINT CurrentTestFailed;
    UNITY_UINT CurrentTestIgnored;





    jmp_buf AbortFrame;

};

extern struct UNITY_STORAGE_T Unity;





void UnityBegin(const char* filename);
int UnityEnd(void);
void UnitySetTestFile(const char* filename);
void UnityConcludeTest(void);


void UnityDefaultTestRun(UnityTestFunction Func, const char* FuncName, const int FuncLineNum);
# 571 "../third-party/Unity/src/unity_internals.h"
void UnityPrint(const char* string);





void UnityPrintLen(const char* string, const UNITY_UINT32 length);
void UnityPrintMask(const UNITY_UINT mask, const UNITY_UINT number);
void UnityPrintNumberByStyle(const UNITY_INT number, const UNITY_DISPLAY_STYLE_T style);
void UnityPrintNumber(const UNITY_INT number_to_print);
void UnityPrintNumberUnsigned(const UNITY_UINT number);
void UnityPrintNumberHex(const UNITY_UINT number, const char nibbles_to_print);


void UnityPrintFloat(const UNITY_DOUBLE input_number);
# 596 "../third-party/Unity/src/unity_internals.h"
void UnityAssertEqualNumber(const UNITY_INT expected,
                            const UNITY_INT actual,
                            const char* msg,
                            const UNITY_UINT lineNumber,
                            const UNITY_DISPLAY_STYLE_T style);

void UnityAssertGreaterOrLessOrEqualNumber(const UNITY_INT threshold,
                                           const UNITY_INT actual,
                                           const UNITY_COMPARISON_T compare,
                                           const char *msg,
                                           const UNITY_UINT lineNumber,
                                           const UNITY_DISPLAY_STYLE_T style);

void UnityAssertEqualIntArray( const void* expected,
                              const void* actual,
                              const UNITY_UINT32 num_elements,
                              const char* msg,
                              const UNITY_UINT lineNumber,
                              const UNITY_DISPLAY_STYLE_T style,
                              const UNITY_FLAGS_T flags);

void UnityAssertBits(const UNITY_INT mask,
                     const UNITY_INT expected,
                     const UNITY_INT actual,
                     const char* msg,
                     const UNITY_UINT lineNumber);

void UnityAssertEqualString(const char* expected,
                            const char* actual,
                            const char* msg,
                            const UNITY_UINT lineNumber);

void UnityAssertEqualStringLen(const char* expected,
                            const char* actual,
                            const UNITY_UINT32 length,
                            const char* msg,
                            const UNITY_UINT lineNumber);

void UnityAssertEqualStringArray( const void* expected,
                                  const char** actual,
                                  const UNITY_UINT32 num_elements,
                                  const char* msg,
                                  const UNITY_UINT lineNumber,
                                  const UNITY_FLAGS_T flags);

void UnityAssertEqualMemory( const void* expected,
                             const void* actual,
                             const UNITY_UINT32 length,
                             const UNITY_UINT32 num_elements,
                             const char* msg,
                             const UNITY_UINT lineNumber,
                             const UNITY_FLAGS_T flags);

void UnityAssertNumbersWithin(const UNITY_UINT delta,
                              const UNITY_INT expected,
                              const UNITY_INT actual,
                              const char* msg,
                              const UNITY_UINT lineNumber,
                              const UNITY_DISPLAY_STYLE_T style);

void UnityAssertNumbersArrayWithin(const UNITY_UINT delta,
                                   const void* expected,
                                   const void* actual,
                                   const UNITY_UINT32 num_elements,
                                   const char* msg,
                                   const UNITY_UINT lineNumber,
                                   const UNITY_DISPLAY_STYLE_T style,
                                   const UNITY_FLAGS_T flags);



# 666 "../third-party/Unity/src/unity_internals.h" 3 4
_Noreturn 
# 666 "../third-party/Unity/src/unity_internals.h"
              void UnityFail(const char* message, const UNITY_UINT line);

# 667 "../third-party/Unity/src/unity_internals.h" 3 4
_Noreturn 
# 667 "../third-party/Unity/src/unity_internals.h"
              void UnityIgnore(const char* message, const UNITY_UINT line);





void UnityMessage(const char* message, const UNITY_UINT line);


void UnityAssertFloatsWithin(const UNITY_FLOAT delta,
                             const UNITY_FLOAT expected,
                             const UNITY_FLOAT actual,
                             const char* msg,
                             const UNITY_UINT lineNumber);

void UnityAssertFloatsNotWithin(const UNITY_FLOAT delta,
                                const UNITY_FLOAT expected,
                                const UNITY_FLOAT actual,
                                const char* msg,
                                const UNITY_UINT lineNumber);

void UnityAssertGreaterOrLessFloat(const UNITY_FLOAT threshold,
                                   const UNITY_FLOAT actual,
                                   const UNITY_COMPARISON_T compare,
                                   const char* msg,
                                   const UNITY_UINT linenumber);

void UnityAssertWithinFloatArray(const UNITY_FLOAT delta,
                                 const UNITY_FLOAT* expected,
                                 const UNITY_FLOAT* actual,
                                 const UNITY_UINT32 num_elements,
                                 const char* msg,
                                 const UNITY_UINT lineNumber,
                                 const UNITY_FLAGS_T flags);

void UnityAssertFloatSpecial(const UNITY_FLOAT actual,
                             const char* msg,
                             const UNITY_UINT lineNumber,
                             const UNITY_FLOAT_TRAIT_T style);
# 745 "../third-party/Unity/src/unity_internals.h"
 const void* UnityNumToPtr(const UNITY_INT num, const UNITY_UINT8 size);

 const void* UnityFloatToPtr(const float num);
# 757 "../third-party/Unity/src/unity_internals.h"
extern const char UnityStrOk[];
extern const char UnityStrPass[];
extern const char UnityStrFail[];
extern const char UnityStrIgnore[];

extern const char UnityStrErrFloat[];
extern const char UnityStrErrDouble[];
extern const char UnityStrErr64[];
extern const char UnityStrErrShorthand[];
# 22 "../third-party/Unity/src/unity.h" 2
# 31 "../third-party/Unity/src/unity.h"
void setUp(void);
void tearDown(void);







void suiteSetUp(void);
int suiteTearDown(int num_failures);
# 52 "../third-party/Unity/src/unity.h"
void resetTest(void);
void verifyTest(void);
# 3 "test_enums.c" 2

# 1 "../resect.h" 1
# 24 "../resect.h"
typedef int resect_bool;

typedef struct P_resect_string *resect_string;

typedef struct {
    int code;
    const char *name;
}enum_val_string_map;
# 94 "../resect.h"
typedef enum { RESECT_OK , RESECT_ERR_NULL_POINTER , RESECT_ERR_OUT_OF_MEMORY , RESECT_ERR_INVALID_ARGUMENT , RESECT_ERR_MAX_RECUSION_DEPTH , RESECT_ERR_FILE_NOT_FOUND , RESECT_ERR_DIR_NOT_FOUND , RESECT_ERR_MISSING_DECL_ID , RESECT_ERR_SQLITE_ERROR , RESECT_ERR_SQLITE_DB_OPEN_ERROR , RESECT_ERR_SQLITE_DDL_ERROR , RESECT_ERR_SQLITE_PREPARE_ERROR , RESECT_ERR_SQLITE_BIND_ERROR , RESECT_ERR_SQLITE_STEP_ERROR , RESECT_ERR_SQLITE_INSERT_ERROR , CLANG_ERR_INVALID_ARGUMENT , CLANG_ERR_AST_READ_ERROR , } resect_error_code; extern size_t resect_error_code_count(); extern int resect_error_code_min(); extern int resect_error_code_max(); extern resect_bool is_resect_error_code_p(resect_error_code val); extern const char* resect_error_code_to_string(resect_error_code val); extern resect_string resect_error_code_to_resect_string(resect_error_code val); extern int string_to_resect_error_code(const char* str); extern void dumpresect_error_code();
# 116 "../resect.h"
typedef enum { RESECT_DECL_KIND_UNKNOWN , RESECT_DECL_KIND_STRUCT , RESECT_DECL_KIND_UNION , RESECT_DECL_KIND_CLASS , RESECT_DECL_KIND_ENUM , RESECT_DECL_KIND_FIELD , RESECT_DECL_KIND_FUNCTION , RESECT_DECL_KIND_VARIABLE , RESECT_DECL_KIND_PARAMETER , RESECT_DECL_KIND_TYPEDEF , RESECT_DECL_KIND_METHOD , RESECT_DECL_KIND_ENUM_CONSTANT , RESECT_DECL_KIND_MACRO , RESECT_DECL_KIND_TEMPLATE_PARAMETER , RESECT_DECL_KIND_UNDECLARED , } resect_decl_kind; extern size_t resect_decl_kind_count(); extern int resect_decl_kind_min(); extern int resect_decl_kind_max(); extern resect_bool is_resect_decl_kind_p(resect_decl_kind val); extern const char* resect_decl_kind_to_string(resect_decl_kind val); extern resect_string resect_decl_kind_to_resect_string(resect_decl_kind val); extern int string_to_resect_decl_kind(const char* str); extern void dumpresect_decl_kind();
# 126 "../resect.h"
typedef enum { RESECT_ACCESS_SPECIFIER_UNKNOWN , RESECT_ACCESS_SPECIFIER_PUBLIC , RESECT_ACCESS_SPECIFIER_PROTECTED , RESECT_ACCESS_SPECIFIER_PRIVATE , } resect_access_specifier; extern size_t resect_access_specifier_count(); extern int resect_access_specifier_min(); extern int resect_access_specifier_max(); extern resect_bool is_resect_access_specifier_p(resect_access_specifier val); extern const char* resect_access_specifier_to_string(resect_access_specifier val); extern resect_string resect_access_specifier_to_resect_string(resect_access_specifier val); extern int string_to_resect_access_specifier(const char* str); extern void dumpresect_access_specifier();
# 181 "../resect.h"
typedef enum { RESECT_TYPE_KIND_UNKNOWN = 0 , RESECT_TYPE_KIND_VOID = 2 , RESECT_TYPE_KIND_BOOL = 3 , RESECT_TYPE_KIND_CHAR_U = 4 , RESECT_TYPE_KIND_UCHAR = 5 , RESECT_TYPE_KIND_CHAR16 = 6 , RESECT_TYPE_KIND_CHAR32 = 7 , RESECT_TYPE_KIND_USHORT = 8 , RESECT_TYPE_KIND_UINT = 9 , RESECT_TYPE_KIND_ULONG = 10 , RESECT_TYPE_KIND_ULONGLONG = 11 , RESECT_TYPE_KIND_UINT128 = 12 , RESECT_TYPE_KIND_CHAR_S = 13 , RESECT_TYPE_KIND_SCHAR = 14 , RESECT_TYPE_KIND_WCHAR = 15 , RESECT_TYPE_KIND_SHORT = 16 , RESECT_TYPE_KIND_INT = 17 , RESECT_TYPE_KIND_LONG = 18 , RESECT_TYPE_KIND_LONGLONG = 19 , RESECT_TYPE_KIND_INT128 = 20 , RESECT_TYPE_KIND_FLOAT = 21 , RESECT_TYPE_KIND_DOUBLE = 22 , RESECT_TYPE_KIND_LONGDOUBLE = 23 , RESECT_TYPE_KIND_NULLPTR = 24 , RESECT_TYPE_KIND_OVERLOAD = 25 , RESECT_TYPE_KIND_DEPENDENT = 26 , RESECT_TYPE_KIND_FLOAT128 = 30 , RESECT_TYPE_KIND_HALF = 31 , RESECT_TYPE_KIND_FLOAT16 = 32 , RESECT_TYPE_KIND_COMPLEX = 100 , RESECT_TYPE_KIND_POINTER = 101 , RESECT_TYPE_KIND_BLOCKPOINTER = 102 , RESECT_TYPE_KIND_LVALUEREFERENCE = 103 , RESECT_TYPE_KIND_RVALUEREFERENCE = 104 , RESECT_TYPE_KIND_RECORD = 105 , RESECT_TYPE_KIND_ENUM = 106 , RESECT_TYPE_KIND_TYPEDEF = 107 , RESECT_TYPE_KIND_FUNCTIONNOPROTO = 110 , RESECT_TYPE_KIND_FUNCTIONPROTO = 111 , RESECT_TYPE_KIND_CONSTANTARRAY = 112 , RESECT_TYPE_KIND_VECTOR = 113 , RESECT_TYPE_KIND_INCOMPLETEARRAY = 114 , RESECT_TYPE_KIND_VARIABLEARRAY = 115 , RESECT_TYPE_KIND_DEPENDENTSIZEDARRAY = 116 , RESECT_TYPE_KIND_MEMBERPOINTER = 117 , RESECT_TYPE_KIND_AUTO = 118 , RESECT_TYPE_KIND_ATOMIC = 177 , RESECT_TYPE_KIND_EXTVECTOR = 178 , RESECT_TYPE_KIND_TEMPLATE_PARAMETER = 10000 , } resect_type_kind; extern size_t resect_type_kind_count(); extern int resect_type_kind_min(); extern int resect_type_kind_max(); extern resect_bool is_resect_type_kind_p(resect_type_kind val); extern const char* resect_type_kind_to_string(resect_type_kind val); extern resect_string resect_type_kind_to_resect_string(resect_type_kind val); extern int string_to_resect_type_kind(const char* str); extern void dumpresect_type_kind();
# 194 "../resect.h"
typedef enum { RESECT_TYPE_CATEGORY_UNKNOWN , RESECT_TYPE_CATEGORY_ARITHMETIC , RESECT_TYPE_CATEGORY_POINTER , RESECT_TYPE_CATEGORY_REFERENCE , RESECT_TYPE_CATEGORY_ARRAY , RESECT_TYPE_CATEGORY_UNIQUE , RESECT_TYPE_CATEGORY_AUX , } resect_type_category; extern size_t resect_type_category_count(); extern int resect_type_category_min(); extern int resect_type_category_max(); extern resect_bool is_resect_type_category_p(resect_type_category val); extern const char* resect_type_category_to_string(resect_type_category val); extern resect_string resect_type_category_to_resect_string(resect_type_category val); extern int string_to_resect_type_category(const char* str); extern void dumpresect_type_category();
# 218 "../resect.h"
typedef enum { RESECT_FUNCTION_CALLING_CONVENTION_UNKNOWN , RESECT_FUNCTION_CALLING_CONVENTION_DEFAULT , RESECT_FUNCTION_CALLING_CONVENTION_C , RESECT_FUNCTION_CALLING_CONVENTION_X86_STDCALL , RESECT_FUNCTION_CALLING_CONVENTION_X86_FASTCALL , RESECT_FUNCTION_CALLING_CONVENTION_X86_THISCALL , RESECT_FUNCTION_CALLING_CONVENTION_X86_REGCALL , RESECT_FUNCTION_CALLING_CONVENTION_X86_VECTORCALL , RESECT_FUNCTION_CALLING_CONVENTION_X86_PASCAL , RESECT_FUNCTION_CALLING_CONVENTION_X86_64_WIN64 , RESECT_FUNCTION_CALLING_CONVENTION_X86_64_SYSV , RESECT_FUNCTION_CALLING_CONVENTION_AARCH64_VECTORCALL , RESECT_FUNCTION_CALLING_CONVENTION_AAPCS , RESECT_FUNCTION_CALLING_CONVENTION_AAPCS_VFP , RESECT_FUNCTION_CALLING_CONVENTION_INTEL_OCL_BICC , RESECT_FUNCTION_CALLING_CONVENTION_SWIFT , RESECT_FUNCTION_CALLING_CONVENTION_PRESERVE_MOST , RESECT_FUNCTION_CALLING_CONVENTION_PRESERVE_ALL , } resect_function_calling_convention; extern size_t resect_function_calling_convention_count(); extern int resect_function_calling_convention_min(); extern int resect_function_calling_convention_max(); extern resect_bool is_resect_function_calling_convention_p(resect_function_calling_convention val); extern const char* resect_function_calling_convention_to_string(resect_function_calling_convention val); extern resect_string resect_function_calling_convention_to_resect_string(resect_function_calling_convention val); extern int string_to_resect_function_calling_convention(const char* str); extern void dumpresect_function_calling_convention();
# 232 "../resect.h"
typedef enum { RESECT_STORAGE_CLASS_UNKNOWN , RESECT_STORAGE_CLASS_NONE , RESECT_STORAGE_CLASS_EXTERN , RESECT_STORAGE_CLASS_STATIC , RESECT_STORAGE_CLASS_PRIVATE_EXTERN , RESECT_STORAGE_CLASS_OPENCL_WORKGROUP_LOCAL , RESECT_STORAGE_CLASS_AUTO , RESECT_STORAGE_CLASS_REGISTER , } resect_storage_class; extern size_t resect_storage_class_count(); extern int resect_storage_class_min(); extern int resect_storage_class_max(); extern resect_bool is_resect_storage_class_p(resect_storage_class val); extern const char* resect_storage_class_to_string(resect_storage_class val); extern resect_string resect_storage_class_to_resect_string(resect_storage_class val); extern int string_to_resect_storage_class(const char* str); extern void dumpresect_storage_class();
# 243 "../resect.h"
typedef enum { RESECT_VARIABLE_TYPE_UNKNOWN , RESECT_VARIABLE_TYPE_INT , RESECT_VARIABLE_TYPE_FLOAT , RESECT_VARIABLE_TYPE_STRING , RESECT_VARIABLE_TYPE_OTHER , } resect_variable_kind; extern size_t resect_variable_kind_count(); extern int resect_variable_kind_min(); extern int resect_variable_kind_max(); extern resect_bool is_resect_variable_kind_p(resect_variable_kind val); extern const char* resect_variable_kind_to_string(resect_variable_kind val); extern resect_string resect_variable_kind_to_resect_string(resect_variable_kind val); extern int string_to_resect_variable_kind(const char* str); extern void dumpresect_variable_kind();
# 254 "../resect.h"
typedef enum { RESECT_LANGUAGE_UNKNOWN = 0 , RESECT_LANGUAGE_C = 1 , RESECT_LANGUAGE_CXX = 2 , RESECT_LANGUAGE_OBJC = 3 , RESECT_LANGUAGE__LAST = RESECT_LANGUAGE_OBJC , } resect_language; extern size_t resect_language_count(); extern int resect_language_min(); extern int resect_language_max(); extern resect_bool is_resect_language_p(resect_language val); extern const char* resect_language_to_string(resect_language val); extern resect_string resect_language_to_resect_string(resect_language val); extern int string_to_resect_language(const char* str); extern void dumpresect_language();
# 264 "../resect.h"
typedef enum { RESECT_TEMPLATE_PARAMETER_KIND_UNKNOWN , RESECT_TEMPLATE_PARAMETER_KIND_TEMPLATE , RESECT_TEMPLATE_PARAMETER_KIND_TYPE , RESECT_TEMPLATE_PARAMETER_KIND_NON_TYPE , } resect_template_parameter_kind; extern size_t resect_template_parameter_kind_count(); extern int resect_template_parameter_kind_min(); extern int resect_template_parameter_kind_max(); extern resect_bool is_resect_template_parameter_kind_p(resect_template_parameter_kind val); extern const char* resect_template_parameter_kind_to_string(resect_template_parameter_kind val); extern resect_string resect_template_parameter_kind_to_resect_string(resect_template_parameter_kind val); extern int string_to_resect_template_parameter_kind(const char* str); extern void dumpresect_template_parameter_kind();
# 280 "../resect.h"
typedef enum { RESECT_TEMPLATE_ARGUMENT_KIND_UNKNOWN , RESECT_TEMPLATE_ARGUMENT_KIND_NULL , RESECT_TEMPLATE_ARGUMENT_KIND_TYPE , RESECT_TEMPLATE_ARGUMENT_KIND_DECLARATION , RESECT_TEMPLATE_ARGUMENT_KIND_NULL_PTR , RESECT_TEMPLATE_ARGUMENT_KIND_INTEGRAL , RESECT_TEMPLATE_ARGUMENT_KIND_TEMPLATE , RESECT_TEMPLATE_ARGUMENT_KIND_TEMPLATE_EXPANSION , RESECT_TEMPLATE_ARGUMENT_KIND_EXPRESSION , RESECT_TEMPLATE_ARGUMENT_KIND_PACK , } resect_template_argument_kind; extern size_t resect_template_argument_kind_count(); extern int resect_template_argument_kind_min(); extern int resect_template_argument_kind_max(); extern resect_bool is_resect_template_argument_kind_p(resect_template_argument_kind val); extern const char* resect_template_argument_kind_to_string(resect_template_argument_kind val); extern resect_string resect_template_argument_kind_to_resect_string(resect_template_argument_kind val); extern int string_to_resect_template_argument_kind(const char* str); extern void dumpresect_template_argument_kind();
# 291 "../resect.h"
typedef enum { RESECT_LINKAGE_KIND_UNKNOWN , RESECT_LINKAGE_KIND_NO_LINKAGE , RESECT_LINKAGE_KIND_INTERNAL , RESECT_LINKAGE_KIND_UNIQUE_EXTERNAL , RESECT_LINKAGE_KIND_EXTERNAL , } resect_linkage_kind; extern size_t resect_linkage_kind_count(); extern int resect_linkage_kind_min(); extern int resect_linkage_kind_max(); extern resect_bool is_resect_linkage_kind_p(resect_linkage_kind val); extern const char* resect_linkage_kind_to_string(resect_linkage_kind val); extern resect_string resect_linkage_kind_to_resect_string(resect_linkage_kind val); extern int string_to_resect_linkage_kind(const char* str); extern void dumpresect_linkage_kind();
# 306 "../resect.h"
typedef enum { RESECT_OPTION_INTRINSICS_UNKNOWN , RESECT_OPTION_INTRINSICS_SSE , RESECT_OPTION_INTRINSICS_SSE2 , RESECT_OPTION_INTRINSICS_SSE3 , RESECT_OPTION_INTRINSICS_SSE41 , RESECT_OPTION_INTRINSICS_SSE42 , RESECT_OPTION_INTRINSICS_AVX , RESECT_OPTION_INTRINSICS_AVX2 , RESECT_OPTION_INTRINSICS_NEON , } resect_option_intrinsic; extern size_t resect_option_intrinsic_count(); extern int resect_option_intrinsic_min(); extern int resect_option_intrinsic_max(); extern resect_bool is_resect_option_intrinsic_p(resect_option_intrinsic val); extern const char* resect_option_intrinsic_to_string(resect_option_intrinsic val); extern resect_string resect_option_intrinsic_to_resect_string(resect_option_intrinsic val); extern int string_to_resect_option_intrinsic(const char* str); extern void dumpresect_option_intrinsic();
# 317 "../resect.h"
typedef enum { RESECT_INCLUSION_STATUS_EXCLUDED , RESECT_INCLUSION_STATUS_WEAKLY_EXCLUDED , RESECT_INCLUSION_STATUS_WEAKLY_INCLUDED , RESECT_INCLUSION_STATUS_WEAKLY_ENFORCED , RESECT_INCLUSION_STATUS_INCLUDED , } resect_inclusion_status; extern size_t resect_inclusion_status_count(); extern int resect_inclusion_status_min(); extern int resect_inclusion_status_max(); extern resect_bool is_resect_inclusion_status_p(resect_inclusion_status val); extern const char* resect_inclusion_status_to_string(resect_inclusion_status val); extern resect_string resect_inclusion_status_to_resect_string(resect_inclusion_status val); extern int string_to_resect_inclusion_status(const char* str); extern void dumpresect_inclusion_status();





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
# 5 "test_enums.c" 2

void setUp(void) {

}

void tearDown(void) {

}

void test_function_is_going_to_fail(void) {

}

void test_function_is_also_going_to_fail(void) {

}
# 32 "test_enums.c"
void test_resect_error_code_enum(void) {
  size_t count = resect_error_code_count(); int min = resect_error_code_min(); int max = resect_error_code_max(); UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((min)), (
# 33 "test_enums.c" 3 4
 ((void *)0)
# 33 "test_enums.c"
 ), (UNITY_UINT)(33), UNITY_DISPLAY_STYLE_INT); UnityAssertEqualNumber((UNITY_INT)((count - 1)), (UNITY_INT)((max)), (
# 33 "test_enums.c" 3 4
 ((void *)0)
# 33 "test_enums.c"
 ), (UNITY_UINT)(33), UNITY_DISPLAY_STYLE_INT); UnityAssertEqualNumber((UNITY_INT)(((0))), (UNITY_INT)((is_resect_error_code_p(min - 1))), (
# 33 "test_enums.c" 3 4
 ((void *)0)
# 33 "test_enums.c"
 ), (UNITY_UINT)(33), UNITY_DISPLAY_STYLE_INT); UnityAssertEqualNumber((UNITY_INT)(((0))), (UNITY_INT)((is_resect_error_code_p(max + 1))), (
# 33 "test_enums.c" 3 4
 ((void *)0)
# 33 "test_enums.c"
 ), (UNITY_UINT)(33), UNITY_DISPLAY_STYLE_INT); resect_error_code_dump();;
}
void test_resect_decl_kind_enum(void) {
  size_t count = resect_decl_kind_count(); int min = resect_decl_kind_min(); int max = resect_decl_kind_max(); UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((min)), (
# 36 "test_enums.c" 3 4
 ((void *)0)
# 36 "test_enums.c"
 ), (UNITY_UINT)(36), UNITY_DISPLAY_STYLE_INT); UnityAssertEqualNumber((UNITY_INT)((count - 1)), (UNITY_INT)((max)), (
# 36 "test_enums.c" 3 4
 ((void *)0)
# 36 "test_enums.c"
 ), (UNITY_UINT)(36), UNITY_DISPLAY_STYLE_INT); UnityAssertEqualNumber((UNITY_INT)(((0))), (UNITY_INT)((is_resect_decl_kind_p(min - 1))), (
# 36 "test_enums.c" 3 4
 ((void *)0)
# 36 "test_enums.c"
 ), (UNITY_UINT)(36), UNITY_DISPLAY_STYLE_INT); UnityAssertEqualNumber((UNITY_INT)(((0))), (UNITY_INT)((is_resect_decl_kind_p(max + 1))), (
# 36 "test_enums.c" 3 4
 ((void *)0)
# 36 "test_enums.c"
 ), (UNITY_UINT)(36), UNITY_DISPLAY_STYLE_INT); resect_decl_kind_dump();;
}
void test_resect_access_specifier_enum(void) {
  size_t count = resect_access_specifier_count(); int min = resect_access_specifier_min(); int max = resect_access_specifier_max(); UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((min)), (
# 39 "test_enums.c" 3 4
 ((void *)0)
# 39 "test_enums.c"
 ), (UNITY_UINT)(39), UNITY_DISPLAY_STYLE_INT); UnityAssertEqualNumber((UNITY_INT)((count - 1)), (UNITY_INT)((max)), (
# 39 "test_enums.c" 3 4
 ((void *)0)
# 39 "test_enums.c"
 ), (UNITY_UINT)(39), UNITY_DISPLAY_STYLE_INT); UnityAssertEqualNumber((UNITY_INT)(((0))), (UNITY_INT)((is_resect_access_specifier_p(min - 1))), (
# 39 "test_enums.c" 3 4
 ((void *)0)
# 39 "test_enums.c"
 ), (UNITY_UINT)(39), UNITY_DISPLAY_STYLE_INT); UnityAssertEqualNumber((UNITY_INT)(((0))), (UNITY_INT)((is_resect_access_specifier_p(max + 1))), (
# 39 "test_enums.c" 3 4
 ((void *)0)
# 39 "test_enums.c"
 ), (UNITY_UINT)(39), UNITY_DISPLAY_STYLE_INT); resect_access_specifier_dump();;
}
void test_resect_type_kind_enum(void) {
  size_t count = resect_type_kind_count(); int min = resect_type_kind_min(); int max = resect_type_kind_max(); UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((min)), (
# 42 "test_enums.c" 3 4
 ((void *)0)
# 42 "test_enums.c"
 ), (UNITY_UINT)(42), UNITY_DISPLAY_STYLE_INT); UnityAssertEqualNumber((UNITY_INT)((count - 1)), (UNITY_INT)((max)), (
# 42 "test_enums.c" 3 4
 ((void *)0)
# 42 "test_enums.c"
 ), (UNITY_UINT)(42), UNITY_DISPLAY_STYLE_INT); UnityAssertEqualNumber((UNITY_INT)(((0))), (UNITY_INT)((is_resect_type_kind_p(min - 1))), (
# 42 "test_enums.c" 3 4
 ((void *)0)
# 42 "test_enums.c"
 ), (UNITY_UINT)(42), UNITY_DISPLAY_STYLE_INT); UnityAssertEqualNumber((UNITY_INT)(((0))), (UNITY_INT)((is_resect_type_kind_p(max + 1))), (
# 42 "test_enums.c" 3 4
 ((void *)0)
# 42 "test_enums.c"
 ), (UNITY_UINT)(42), UNITY_DISPLAY_STYLE_INT); resect_type_kind_dump();;
}
void test_resect_type_category_enum(void) {
  size_t count = resect_type_category_count(); int min = resect_type_category_min(); int max = resect_type_category_max(); UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((min)), (
# 45 "test_enums.c" 3 4
 ((void *)0)
# 45 "test_enums.c"
 ), (UNITY_UINT)(45), UNITY_DISPLAY_STYLE_INT); UnityAssertEqualNumber((UNITY_INT)((count - 1)), (UNITY_INT)((max)), (
# 45 "test_enums.c" 3 4
 ((void *)0)
# 45 "test_enums.c"
 ), (UNITY_UINT)(45), UNITY_DISPLAY_STYLE_INT); UnityAssertEqualNumber((UNITY_INT)(((0))), (UNITY_INT)((is_resect_type_category_p(min - 1))), (
# 45 "test_enums.c" 3 4
 ((void *)0)
# 45 "test_enums.c"
 ), (UNITY_UINT)(45), UNITY_DISPLAY_STYLE_INT); UnityAssertEqualNumber((UNITY_INT)(((0))), (UNITY_INT)((is_resect_type_category_p(max + 1))), (
# 45 "test_enums.c" 3 4
 ((void *)0)
# 45 "test_enums.c"
 ), (UNITY_UINT)(45), UNITY_DISPLAY_STYLE_INT); resect_type_category_dump();;
}
void test_resect_function_calling_convention_enum(void) {
  size_t count = resect_function_calling_convention_count(); int min = resect_function_calling_convention_min(); int max = resect_function_calling_convention_max(); UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((min)), (
# 48 "test_enums.c" 3 4
 ((void *)0)
# 48 "test_enums.c"
 ), (UNITY_UINT)(48), UNITY_DISPLAY_STYLE_INT); UnityAssertEqualNumber((UNITY_INT)((count - 1)), (UNITY_INT)((max)), (
# 48 "test_enums.c" 3 4
 ((void *)0)
# 48 "test_enums.c"
 ), (UNITY_UINT)(48), UNITY_DISPLAY_STYLE_INT); UnityAssertEqualNumber((UNITY_INT)(((0))), (UNITY_INT)((is_resect_function_calling_convention_p(min - 1))), (
# 48 "test_enums.c" 3 4
 ((void *)0)
# 48 "test_enums.c"
 ), (UNITY_UINT)(48), UNITY_DISPLAY_STYLE_INT); UnityAssertEqualNumber((UNITY_INT)(((0))), (UNITY_INT)((is_resect_function_calling_convention_p(max + 1))), (
# 48 "test_enums.c" 3 4
 ((void *)0)
# 48 "test_enums.c"
 ), (UNITY_UINT)(48), UNITY_DISPLAY_STYLE_INT); resect_function_calling_convention_dump();;
}
void test_resect_storage_class_enum(void) {
  size_t count = resect_storage_class_count(); int min = resect_storage_class_min(); int max = resect_storage_class_max(); UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((min)), (
# 51 "test_enums.c" 3 4
 ((void *)0)
# 51 "test_enums.c"
 ), (UNITY_UINT)(51), UNITY_DISPLAY_STYLE_INT); UnityAssertEqualNumber((UNITY_INT)((count - 1)), (UNITY_INT)((max)), (
# 51 "test_enums.c" 3 4
 ((void *)0)
# 51 "test_enums.c"
 ), (UNITY_UINT)(51), UNITY_DISPLAY_STYLE_INT); UnityAssertEqualNumber((UNITY_INT)(((0))), (UNITY_INT)((is_resect_storage_class_p(min - 1))), (
# 51 "test_enums.c" 3 4
 ((void *)0)
# 51 "test_enums.c"
 ), (UNITY_UINT)(51), UNITY_DISPLAY_STYLE_INT); UnityAssertEqualNumber((UNITY_INT)(((0))), (UNITY_INT)((is_resect_storage_class_p(max + 1))), (
# 51 "test_enums.c" 3 4
 ((void *)0)
# 51 "test_enums.c"
 ), (UNITY_UINT)(51), UNITY_DISPLAY_STYLE_INT); resect_storage_class_dump();;
}
void test_resect_variable_kind_enum(void) {
  size_t count = resect_variable_kind_count(); int min = resect_variable_kind_min(); int max = resect_variable_kind_max(); UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((min)), (
# 54 "test_enums.c" 3 4
 ((void *)0)
# 54 "test_enums.c"
 ), (UNITY_UINT)(54), UNITY_DISPLAY_STYLE_INT); UnityAssertEqualNumber((UNITY_INT)((count - 1)), (UNITY_INT)((max)), (
# 54 "test_enums.c" 3 4
 ((void *)0)
# 54 "test_enums.c"
 ), (UNITY_UINT)(54), UNITY_DISPLAY_STYLE_INT); UnityAssertEqualNumber((UNITY_INT)(((0))), (UNITY_INT)((is_resect_variable_kind_p(min - 1))), (
# 54 "test_enums.c" 3 4
 ((void *)0)
# 54 "test_enums.c"
 ), (UNITY_UINT)(54), UNITY_DISPLAY_STYLE_INT); UnityAssertEqualNumber((UNITY_INT)(((0))), (UNITY_INT)((is_resect_variable_kind_p(max + 1))), (
# 54 "test_enums.c" 3 4
 ((void *)0)
# 54 "test_enums.c"
 ), (UNITY_UINT)(54), UNITY_DISPLAY_STYLE_INT); resect_variable_kind_dump();;
}
void test_resect_language_enum(void) {
  size_t count = resect_language_count(); int min = resect_language_min(); int max = resect_language_max(); UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((min)), (
# 57 "test_enums.c" 3 4
 ((void *)0)
# 57 "test_enums.c"
 ), (UNITY_UINT)(57), UNITY_DISPLAY_STYLE_INT); UnityAssertEqualNumber((UNITY_INT)((count - 1)), (UNITY_INT)((max)), (
# 57 "test_enums.c" 3 4
 ((void *)0)
# 57 "test_enums.c"
 ), (UNITY_UINT)(57), UNITY_DISPLAY_STYLE_INT); UnityAssertEqualNumber((UNITY_INT)(((0))), (UNITY_INT)((is_resect_language_p(min - 1))), (
# 57 "test_enums.c" 3 4
 ((void *)0)
# 57 "test_enums.c"
 ), (UNITY_UINT)(57), UNITY_DISPLAY_STYLE_INT); UnityAssertEqualNumber((UNITY_INT)(((0))), (UNITY_INT)((is_resect_language_p(max + 1))), (
# 57 "test_enums.c" 3 4
 ((void *)0)
# 57 "test_enums.c"
 ), (UNITY_UINT)(57), UNITY_DISPLAY_STYLE_INT); resect_language_dump();;
}
void test_resect_template_parameter_kind_enum(void) {
  size_t count = resect_template_parameter_kind_count(); int min = resect_template_parameter_kind_min(); int max = resect_template_parameter_kind_max(); UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((min)), (
# 60 "test_enums.c" 3 4
 ((void *)0)
# 60 "test_enums.c"
 ), (UNITY_UINT)(60), UNITY_DISPLAY_STYLE_INT); UnityAssertEqualNumber((UNITY_INT)((count - 1)), (UNITY_INT)((max)), (
# 60 "test_enums.c" 3 4
 ((void *)0)
# 60 "test_enums.c"
 ), (UNITY_UINT)(60), UNITY_DISPLAY_STYLE_INT); UnityAssertEqualNumber((UNITY_INT)(((0))), (UNITY_INT)((is_resect_template_parameter_kind_p(min - 1))), (
# 60 "test_enums.c" 3 4
 ((void *)0)
# 60 "test_enums.c"
 ), (UNITY_UINT)(60), UNITY_DISPLAY_STYLE_INT); UnityAssertEqualNumber((UNITY_INT)(((0))), (UNITY_INT)((is_resect_template_parameter_kind_p(max + 1))), (
# 60 "test_enums.c" 3 4
 ((void *)0)
# 60 "test_enums.c"
 ), (UNITY_UINT)(60), UNITY_DISPLAY_STYLE_INT); resect_template_parameter_kind_dump();;
}
void test_resect_template_argument_kind_enum(void) {
  size_t count = resect_template_argument_kind_count(); int min = resect_template_argument_kind_min(); int max = resect_template_argument_kind_max(); UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((min)), (
# 63 "test_enums.c" 3 4
 ((void *)0)
# 63 "test_enums.c"
 ), (UNITY_UINT)(63), UNITY_DISPLAY_STYLE_INT); UnityAssertEqualNumber((UNITY_INT)((count - 1)), (UNITY_INT)((max)), (
# 63 "test_enums.c" 3 4
 ((void *)0)
# 63 "test_enums.c"
 ), (UNITY_UINT)(63), UNITY_DISPLAY_STYLE_INT); UnityAssertEqualNumber((UNITY_INT)(((0))), (UNITY_INT)((is_resect_template_argument_kind_p(min - 1))), (
# 63 "test_enums.c" 3 4
 ((void *)0)
# 63 "test_enums.c"
 ), (UNITY_UINT)(63), UNITY_DISPLAY_STYLE_INT); UnityAssertEqualNumber((UNITY_INT)(((0))), (UNITY_INT)((is_resect_template_argument_kind_p(max + 1))), (
# 63 "test_enums.c" 3 4
 ((void *)0)
# 63 "test_enums.c"
 ), (UNITY_UINT)(63), UNITY_DISPLAY_STYLE_INT); resect_template_argument_kind_dump();;
}
void test_resect_linkage_kind_enum(void) {
  size_t count = resect_linkage_kind_count(); int min = resect_linkage_kind_min(); int max = resect_linkage_kind_max(); UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((min)), (
# 66 "test_enums.c" 3 4
 ((void *)0)
# 66 "test_enums.c"
 ), (UNITY_UINT)(66), UNITY_DISPLAY_STYLE_INT); UnityAssertEqualNumber((UNITY_INT)((count - 1)), (UNITY_INT)((max)), (
# 66 "test_enums.c" 3 4
 ((void *)0)
# 66 "test_enums.c"
 ), (UNITY_UINT)(66), UNITY_DISPLAY_STYLE_INT); UnityAssertEqualNumber((UNITY_INT)(((0))), (UNITY_INT)((is_resect_linkage_kind_p(min - 1))), (
# 66 "test_enums.c" 3 4
 ((void *)0)
# 66 "test_enums.c"
 ), (UNITY_UINT)(66), UNITY_DISPLAY_STYLE_INT); UnityAssertEqualNumber((UNITY_INT)(((0))), (UNITY_INT)((is_resect_linkage_kind_p(max + 1))), (
# 66 "test_enums.c" 3 4
 ((void *)0)
# 66 "test_enums.c"
 ), (UNITY_UINT)(66), UNITY_DISPLAY_STYLE_INT); resect_linkage_kind_dump();;
}
void test_resect_option_intrinsic_enum(void) {
  size_t count = resect_option_intrinsic_count(); int min = resect_option_intrinsic_min(); int max = resect_option_intrinsic_max(); UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((min)), (
# 69 "test_enums.c" 3 4
 ((void *)0)
# 69 "test_enums.c"
 ), (UNITY_UINT)(69), UNITY_DISPLAY_STYLE_INT); UnityAssertEqualNumber((UNITY_INT)((count - 1)), (UNITY_INT)((max)), (
# 69 "test_enums.c" 3 4
 ((void *)0)
# 69 "test_enums.c"
 ), (UNITY_UINT)(69), UNITY_DISPLAY_STYLE_INT); UnityAssertEqualNumber((UNITY_INT)(((0))), (UNITY_INT)((is_resect_option_intrinsic_p(min - 1))), (
# 69 "test_enums.c" 3 4
 ((void *)0)
# 69 "test_enums.c"
 ), (UNITY_UINT)(69), UNITY_DISPLAY_STYLE_INT); UnityAssertEqualNumber((UNITY_INT)(((0))), (UNITY_INT)((is_resect_option_intrinsic_p(max + 1))), (
# 69 "test_enums.c" 3 4
 ((void *)0)
# 69 "test_enums.c"
 ), (UNITY_UINT)(69), UNITY_DISPLAY_STYLE_INT); resect_option_intrinsic_dump();;
}
void test_resect_inclusion_status_enum(void) {
  size_t count = resect_inclusion_status_count(); int min = resect_inclusion_status_min(); int max = resect_inclusion_status_max(); UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((min)), (
# 72 "test_enums.c" 3 4
 ((void *)0)
# 72 "test_enums.c"
 ), (UNITY_UINT)(72), UNITY_DISPLAY_STYLE_INT); UnityAssertEqualNumber((UNITY_INT)((count - 1)), (UNITY_INT)((max)), (
# 72 "test_enums.c" 3 4
 ((void *)0)
# 72 "test_enums.c"
 ), (UNITY_UINT)(72), UNITY_DISPLAY_STYLE_INT); UnityAssertEqualNumber((UNITY_INT)(((0))), (UNITY_INT)((is_resect_inclusion_status_p(min - 1))), (
# 72 "test_enums.c" 3 4
 ((void *)0)
# 72 "test_enums.c"
 ), (UNITY_UINT)(72), UNITY_DISPLAY_STYLE_INT); UnityAssertEqualNumber((UNITY_INT)(((0))), (UNITY_INT)((is_resect_inclusion_status_p(max + 1))), (
# 72 "test_enums.c" 3 4
 ((void *)0)
# 72 "test_enums.c"
 ), (UNITY_UINT)(72), UNITY_DISPLAY_STYLE_INT); resect_inclusion_status_dump();;
}

int main(void) {
    UnityBegin("test_enums.c");
    UnityDefaultTestRun(test_function_is_going_to_fail, "test_function_is_going_to_fail", 77);
    UnityDefaultTestRun(test_function_is_also_going_to_fail, "test_function_is_also_going_to_fail", 78);
    UnityDefaultTestRun(test_resect_error_code_enum, "test_resect_error_code_enum", 79);
    UnityDefaultTestRun(test_resect_decl_kind_enum, "test_resect_decl_kind_enum", 80);
    UnityDefaultTestRun(test_resect_access_specifier_enum, "test_resect_access_specifier_enum", 81);
    UnityDefaultTestRun(test_resect_type_kind_enum, "test_resect_type_kind_enum", 82);
    UnityDefaultTestRun(test_resect_type_category_enum, "test_resect_type_category_enum", 83);
    UnityDefaultTestRun(test_resect_function_calling_convention_enum, "test_resect_function_calling_convention_enum", 84);
    UnityDefaultTestRun(test_resect_storage_class_enum, "test_resect_storage_class_enum", 85);
    UnityDefaultTestRun(test_resect_variable_kind_enum, "test_resect_variable_kind_enum", 86);
    UnityDefaultTestRun(test_resect_language_enum, "test_resect_language_enum", 87);
    UnityDefaultTestRun(test_resect_template_parameter_kind_enum, "test_resect_template_parameter_kind_enum", 88);
    UnityDefaultTestRun(test_resect_template_argument_kind_enum, "test_resect_template_argument_kind_enum", 89);
    UnityDefaultTestRun(test_resect_linkage_kind_enum, "test_resect_linkage_kind_enum", 90);
    UnityDefaultTestRun(test_resect_option_intrinsic_enum, "test_resect_option_intrinsic_enum", 91);
    UnityDefaultTestRun(test_resect_inclusion_status_enum, "test_resect_inclusion_status_enum", 92);

    return UnityEnd();
}
