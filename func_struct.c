#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <stdbool.h>
#include <unistd.h>

#define DEBUG
#define NUM_FUNCS 200 // number of functions possible
#define NUM_AVAIL 20  // number of functions implemented by customer

/* thread function declarations */ 
void *func0() { printf("func0\n"); }
void *func1() { printf("func1\n"); }
void *func2() { printf("func2\n"); }
void *func3() { printf("func3\n"); }
void *func4() { printf("func4\n"); }
void *func5() { printf("func5\n"); }
void *func6() { printf("func6\n"); }
void *func7() { printf("func7\n"); }
void *func8() { printf("func8\n"); }
void *func9() { printf("func9\n"); }

void *func10() { printf("func10\n"); }
void *func11() { printf("func11\n"); }
void *func12() { printf("func12\n"); }
void *func13() { printf("func13\n"); }
void *func14() { printf("func14\n"); }
void *func15() { printf("func15\n"); }
void *func16() { printf("func16\n"); }
void *func17() { printf("func17\n"); }
void *func18() { printf("func18\n"); }
void *func19() { printf("func19\n"); }

void *func20() { printf("func20\n"); }
void *func21() { printf("func21\n"); }
void *func22() { printf("func22\n"); }
void *func23() { printf("func23\n"); }
void *func24() { printf("func24\n"); }
void *func25() { printf("func25\n"); }
void *func26() { printf("func26\n"); }
void *func27() { printf("func27\n"); }
void *func28() { printf("func28\n"); }
void *func29() { printf("func29\n"); }

void *func30() { printf("func30\n"); }
void *func31() { printf("func31\n"); }
void *func32() { printf("func32\n"); }
void *func33() { printf("func33\n"); }
void *func34() { printf("func34\n"); }
void *func35() { printf("func35\n"); }
void *func36() { printf("func36\n"); }
void *func37() { printf("func37\n"); }
void *func38() { printf("func38\n"); }
void *func39() { printf("func39\n"); }

void *func40() { printf("func40\n"); }
void *func41() { printf("func41\n"); }
void *func42() { printf("func42\n"); }
void *func43() { printf("func43\n"); }
void *func44() { printf("func44\n"); }
void *func45() { printf("func45\n"); }
void *func46() { printf("func46\n"); }
void *func47() { printf("func47\n"); }
void *func48() { printf("func48\n"); }
void *func49() { printf("func49\n"); }

void *func50() { printf("func50\n"); }
void *func51() { printf("func51\n"); }
void *func52() { printf("func52\n"); }
void *func53() { printf("func53\n"); }
void *func54() { printf("func54\n"); }
void *func55() { printf("func55\n"); }
void *func56() { printf("func56\n"); }
void *func57() { printf("func57\n"); }
void *func58() { printf("func58\n"); }
void *func59() { printf("func59\n"); }

void *func60() { printf("func60\n"); }
void *func61() { printf("func61\n"); }
void *func62() { printf("func62\n"); }
void *func63() { printf("func63\n"); }
void *func64() { printf("func64\n"); }
void *func65() { printf("func65\n"); }
void *func66() { printf("func66\n"); }
void *func67() { printf("func67\n"); }
void *func68() { printf("func68\n"); }
void *func69() { printf("func69\n"); }

void *func70() { printf("func70\n"); }
void *func71() { printf("func71\n"); }
void *func72() { printf("func72\n"); }
void *func73() { printf("func73\n"); }
void *func74() { printf("func74\n"); }
void *func75() { printf("func75\n"); }
void *func76() { printf("func76\n"); }
void *func77() { printf("func77\n"); }
void *func78() { printf("func78\n"); }
void *func79() { printf("func79\n"); }

void *func80() { printf("func80\n"); }
void *func81() { printf("func81\n"); }
void *func82() { printf("func82\n"); }
void *func83() { printf("func83\n"); }
void *func84() { printf("func84\n"); }
void *func85() { printf("func85\n"); }
void *func86() { printf("func86\n"); }
void *func87() { printf("func87\n"); }
void *func88() { printf("func88\n"); }
void *func89() { printf("func89\n"); }

void *func90() { printf("func90\n"); }
void *func91() { printf("func91\n"); }
void *func92() { printf("func92\n"); }
void *func93() { printf("func93\n"); }
void *func94() { printf("func94\n"); }
void *func95() { printf("func95\n"); }
void *func96() { printf("func96\n"); }
void *func97() { printf("func97\n"); }
void *func98() { printf("func98\n"); }
void *func99() { printf("func99\n"); }

void *func100() { printf("func100\n"); }
void *func101() { printf("func101\n"); }
void *func102() { printf("func102\n"); }
void *func103() { printf("func103\n"); }
void *func104() { printf("func104\n"); }
void *func105() { printf("func105\n"); }
void *func106() { printf("func106\n"); }
void *func107() { printf("func107\n"); }
void *func108() { printf("func108\n"); }
void *func109() { printf("func109\n"); }

void *func110() { printf("func110\n"); }
void *func111() { printf("func111\n"); }
void *func112() { printf("func112\n"); }
void *func113() { printf("func113\n"); }
void *func114() { printf("func114\n"); }
void *func115() { printf("func115\n"); }
void *func116() { printf("func116\n"); }
void *func117() { printf("func117\n"); }
void *func118() { printf("func118\n"); }
void *func119() { printf("func119\n"); }

void *func120() { printf("func120\n"); }
void *func121() { printf("func121\n"); }
void *func122() { printf("func122\n"); }
void *func123() { printf("func123\n"); }
void *func124() { printf("func124\n"); }
void *func125() { printf("func125\n"); }
void *func126() { printf("func126\n"); }
void *func127() { printf("func127\n"); }
void *func128() { printf("func128\n"); }
void *func129() { printf("func129\n"); }

void *func130() { printf("func130\n"); }
void *func131() { printf("func131\n"); }
void *func132() { printf("func132\n"); }
void *func133() { printf("func133\n"); }
void *func134() { printf("func134\n"); }
void *func135() { printf("func135\n"); }
void *func136() { printf("func136\n"); }
void *func137() { printf("func137\n"); }
void *func138() { printf("func138\n"); }
void *func139() { printf("func139\n"); }
 
void *func140() { printf("func140\n"); }
void *func141() { printf("func141\n"); }
void *func142() { printf("func142\n"); }
void *func143() { printf("func143\n"); }
void *func144() { printf("func144\n"); }
void *func145() { printf("func145\n"); }
void *func146() { printf("func146\n"); }
void *func147() { printf("func147\n"); }
void *func148() { printf("func148\n"); }
void *func149() { printf("func149\n"); }

void *func150() { printf("func150\n"); }
void *func151() { printf("func151\n"); }
void *func152() { printf("func152\n"); }
void *func153() { printf("func153\n"); }
void *func154() { printf("func154\n"); }
void *func155() { printf("func155\n"); }
void *func156() { printf("func156\n"); }
void *func157() { printf("func157\n"); }
void *func158() { printf("func158\n"); }
void *func159() { printf("func159\n"); }

void *func160() { printf("func160\n"); }
void *func161() { printf("func161\n"); }
void *func162() { printf("func162\n"); }
void *func163() { printf("func163\n"); }
void *func164() { printf("func164\n"); }
void *func165() { printf("func165\n"); }
void *func166() { printf("func166\n"); }
void *func167() { printf("func167\n"); }
void *func168() { printf("func168\n"); }
void *func169() { printf("func169\n"); }

void *func170() { printf("func170\n"); }
void *func171() { printf("func171\n"); }
void *func172() { printf("func172\n"); }
void *func173() { printf("func173\n"); }
void *func174() { printf("func174\n"); }
void *func175() { printf("func175\n"); }
void *func176() { printf("func176\n"); }
void *func177() { printf("func177\n"); }
void *func178() { printf("func178\n"); }
void *func179() { printf("func179\n"); }
 
void *func180() { printf("func180\n"); }
void *func181() { printf("func181\n"); }
void *func182() { printf("func182\n"); }
void *func183() { printf("func183\n"); }
void *func184() { printf("func184\n"); }
void *func185() { printf("func185\n"); }
void *func186() { printf("func186\n"); }
void *func187() { printf("func187\n"); }
void *func188() { printf("func188\n"); }
void *func189() { printf("func189\n"); }

void *func190() { printf("func190\n"); }
void *func191() { printf("func191\n"); }
void *func192() { printf("func192\n"); }
void *func193() { printf("func193\n"); }
void *func194() { printf("func194\n"); }
void *func195() { printf("func195\n"); }
void *func196() { printf("func196\n"); }
void *func197() { printf("func197\n"); }
void *func198() { printf("func198\n"); }
void *func199() { printf("func199\n"); }

/* type definitions  */
// function pointer arrays have messy syntax
// this typedef helps to make things cleaner
typedef int (*Func_ptr_t)();

// the function map is a mapping of threads
// to the functions that they run
typedef struct _func_map {
    int ptid[NUM_FUNCS];
    pthread_t threads[NUM_FUNCS];
    Func_ptr_t funcs[NUM_FUNCS];
} Func_map;

/* global variables  */
int COMMAND_SET[NUM_AVAIL] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 
                       10, 11, 12, 13, 14, 15, 16,
                       17, 18, 19 };

/* helper functions  */
void init_func_map(Func_map *map)
{
    for (int i = 0; i < NUM_FUNCS; ++i) 
    {
        map->ptid[i] = i;
        // initialize other pointers to functions
    }
}

/* processing  */
// Main initializes 20 threads by incrementing
// over the command set, which are the functions
// chosen to be implemented by the customer.
int main() 
{
    // local variables
    Func_map *function_map_ptr = (Func_map*) malloc(sizeof(Func_map));
    Func_ptr_t *function_ptr = (Func_ptr_t*) malloc(sizeof(Func_ptr_t) * NUM_FUNCS);
    int rc;
 
    // initialize function map!!
    init_func_map(function_map_ptr);    

    // loop over the command set, and create pthreads to run 
    // for each enabled function.
    for (int i = 0; i < NUM_AVAIL; ++i) 
    {
#ifndef DEBUG
        sleep(1);
#endif
        if ((rc =  pthread_create(&function_map_ptr->threads[COMMAND_SET[i]], NULL, func1, NULL)))
        {
            fprintf(stderr, "error creating thread # %d\n", function_map_ptr->ptid[COMMAND_SET[i]]);
            return EXIT_FAILURE;
        } 
    }

    for (int i = 0; i < NUM_AVAIL; ++i)
    {
        pthread_join(function_map_ptr->threads[COMMAND_SET[i]], NULL);
    }
 
    return EXIT_SUCCESS;
}
