/* ------------------------------------------------------------------------
 *
 * utils.h
 *		prototypes of various support functions
 *
 * Copyright (c) 2016, Postgres Professional
 *
 * ------------------------------------------------------------------------
 */
#ifndef UTILS_H
#define UTILS_H

#include "postgres.h"
#include "utils/rel.h"
#include "nodes/relation.h"
#include "nodes/nodeFuncs.h"
#include "pathman.h"


bool clause_contains_params(Node *clause);

List * build_index_tlist(PlannerInfo *root,
						 IndexOptInfo *index,
						 Relation heapRelation);

bool check_rinfo_for_partitioned_attr(List *rinfo,
									  Index varno,
									  AttrNumber varattno);

TriggerDesc * append_trigger_descs(TriggerDesc *src,
								   TriggerDesc *more,
								   bool *grown_up);

void fill_type_cmp_fmgr_info(FmgrInfo *finfo,
							 Oid type1,
							 Oid type2);

List * list_reverse(List *l);

#endif
