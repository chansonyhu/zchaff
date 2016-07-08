###./SAT.h  

###./debug/zchaff_cpp_wrapper.cpp  
- wrapper function  
- SAT_Manager is actually the wrapper to class *CSolver*  
- The declaration and definition of class *CSolver* are in the files of zchaff_solver.h and zchaff_solver.cpp respectively.  
- class *CSolver* inherit from class *CDatabase*.  
- The declaration and definition of class *CDatabase* are in the files of zchaff_dbase.h and zchaff_dbase.cpp respectively.  

###./zchaff_solver(.h and .cpp)
- **class CSolver:public CDatabase**

###./zchaff_dbase(.h and .cpp)
- **class CDatabase**  
- *_clauses* is vector of *CClause* type, accessed by function clause().  
- Accordingly, *_variables* is vector of *CVariable* type, accessed by function variable().  

###./zchaff_base(.h and .cpp)  
- **class CClause** & **class CLitPoolElement** & **class CVariable**  
- Member access functions of class CVariable(score(), two_lits_count(), dlevel(), antecedent(), etc.)  

###./zchaff_clsgen.h  
- **class CClause_Gen**  
- Implements of several static functions such as and2(), andn(), etc.  
- These functions are maintained to add clauses to an existing solver(CSolver type) of different logical operators.  

###./zchaff_header.h  
- Some type definitions.  

###./zchaff_version.h  
- 

###./zchaff_utils.cpp
- fatal(), warning(), get_cpu_time().  

###./sat_solver.cpp, ./cnf_stats.cpp[status of the very CNF], ./zverify_df.cpp, /zminimal.cpp  
- The command *make all* can generate 4 executable files *zchaff*, *cnf_stats*, *zverify_df* and *zminimal* respectively.
- However, if you only want to pay attention to the main function of zChaff, you just use *make* command and the program *zchaff* will be generated solely.


*In a word, the core parts of this tool are zchaff_solver, zchaff_dbase and zchaff_base.*

*Qianshan Yu*
*2016. 07. 08*
