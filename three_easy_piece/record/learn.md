# 书本总结
## 第25章 关于并发的对话
- 并发可以理解为许多人去拿桌子上的若干桃子的问题 
    - 人是一个线程，桃子是一个内存节点
    - 多线程访问内存需要os的协调
    - os本身也是一个多线程应用
    - 我们可以使用锁和条件变量去控制线程的冲突
## 第26章 并发：介绍
- 线程之前共享内存地址空间
- 线程的执行顺序和过程不可控
- 竞态条件：多个线程访问共享变量(临界区)导致的错误
- 我们希望线程在执行临界区代码时是互斥的
- 使用硬件同步原语和os保证可控和同步
- 另外还要考虑：线程之间的依赖，一个线程的操作需要等地啊另一个线程的执行
## 第27章 插叙：线程API
1. create:
    - rc = pthread(&p,NULL,mythread,&args);
    - pthreaad_t *  thread 
    - const pthread_attr_t *    attr
    - void *    (*start_routine)(void *)
    - void *    arg
2. finish:
    - Pthread_join(p,NULL);
    - pthread_t    thread
    - void **   （&m） 
3. lock：
    - int pthread_mutex_lock(pthread_mutex_t *mutex);
    - int pthread_mutex_unlock(pthread_mutex_t *mutex);
    - init:
        - pthread_mutex_t lock = PTHREAD_MUTEX_INITINALIZER;
        - int rc = pthread_mutex_init(&lock,NULL);
4. contidion variable:
    - int pthread_cond_wait(pthread_cond_t *cond, pthread_mutex_t *mutex);
    - int pthread_cond_signal(pthread_cond_t *cond);
    - Init: pthread_cond_t cond = PTHREAD_COND_INITIALIZER 
5. complie & run:
    
    gcc -o main main.c -Wall -pthread