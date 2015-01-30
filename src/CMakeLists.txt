ADD_LIBRARY(s_linked_list-static s_linked_list.h s_linked_list.c)
ADD_LIBRARY(s_linked_list SHARED s_linked_list.h s_linked_list.c)

SET_TARGET_PROPERTIES(s_linked_list PROPERTIES
                      VERSION ${LIBRARY_VERSION}
                      SOVERSION ${LIBRARY_SOVERSION}) 
