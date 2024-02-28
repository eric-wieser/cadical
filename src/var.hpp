#ifndef _var_hpp_INCLUDED
#define _var_hpp_INCLUDED

namespace CaDiCaL {

struct Clause;

// This structure captures data associated with an assigned variable.

struct Var {

  // Note that none of these members is valid unless the variable is
  // assigned.  During unassigning a variable we do not reset it.

  int level;      // decision level
  int trail;      // trail height at assignment
  Clause *reason; // implication graph edge during search
  Clause *missed_implication; // missed lower-level reason
  int missed_level; // level of the missed implication
  bool dirty = false; // do we need to repropagate the literal with strong chrono
};

} // namespace CaDiCaL

#endif
