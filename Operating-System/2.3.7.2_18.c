#include <stdio.h>
#include <stdlib.h>

/*
 * 题目：
 * 假设一个录像厅有 1、2、3 三种不同的录像片可由观众选择放映，
 * 录像厅的放映规则为：
 * (1) 任一时刻最多只能放映一种录像片，正在放映的录像片是自动循环放映的，最后一个观众主动离开时结束当前录像片的放映；
 * (2) 选择当前正在放映的录像片的观众可立即进入，允许同时有多位选择同一种录像片的观众同时观看，同时观看的观众数量不受限制；
 * (3) 等待观看其他录像片的观众按到达顺序排队，当一种新的录像片开始放映时，所有等待观看该录像片的观众可以次序进入录像厅同时观看。
 * 用一个进程代表一个观众，要求：用信号量方法 PV 操作实现，并给出信号量定义和初始值。
*/

typedef int semaphore ;

void P(semaphore s);
void V(semaphore s);

semaphore m1 = 0;                   // 记录当前播放的是否是录像片 1
semaphore m2 = 0;                   // 记录当前播放的是否是录像片 2
semaphore m3 = 0;                   // 记录当前播放的是否是录像片 3

int numOfWatcher = 0;               // 记录当前正在观看的观众人数
semaphore mutex = 1;                // 修改 numOfWatcher 临界区互斥量

semaphore play = 1;                 // 录像厅是否可以播放新的录像片

void Watcher1(){                    // 观看录像片 1 的观众进程
    while(1){
        P(m1);
        P(mutex);
        numOfWatcher++;
        V(m1);
        V(mutex);
        // watch movie
        P(mutex);
        numOfWatcher--;
        if( numOfWatcher == 0 && m1 == 1 ){     // 如果是最后一位观众
            P(m1);
            V(play);                // 录像厅可以播放新的录像片
        }
        V(mutex);
    }
}

// Watcher2、Watcher3 与 Watcher1 类似。

void Player(){                      // 录像厅进程
    while(1){
        P(play);
        int random = rand() % 3;    // 产生随机数
        if( random == 0 ){
            V(m1);                  // 播放录像片 1
        }
        else if( random == 1 ){
            V(m2);                  // 播放录像片 2
        }
        else if( random == 2 ){
            V(m3);                  // 播放录像片 3
        }
    }
}