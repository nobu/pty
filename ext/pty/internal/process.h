#ifndef RUBY_PTY_INTERNAL_PROCESS_H
#define RUBY_PTY_INTERNAL_PROCESS_H 1

struct rb_execarg;

RUBY_EXTERN int rb_exec_async_signal_safe(const struct rb_execarg *e, char *errmsg, size_t errmsg_buflen);
RUBY_EXTERN rb_pid_t rb_fork_async_signal_safe(int *status, int (*chfunc)(void*, char *, size_t), void *charg, VALUE fds, char *errmsg, size_t errmsg_buflen);
RUBY_EXTERN VALUE rb_execarg_new(int argc, const VALUE *argv, int accept_shell, int allow_exc_opt);
RUBY_EXTERN struct rb_execarg *rb_execarg_get(VALUE execarg_obj); /* dangerous.  needs GC guard. */
RUBY_EXTERN int rb_execarg_addopt(VALUE execarg_obj, VALUE key, VALUE val);
RUBY_EXTERN void rb_execarg_parent_start(VALUE execarg_obj);
RUBY_EXTERN void rb_execarg_parent_end(VALUE execarg_obj);
RUBY_EXTERN int rb_execarg_run_options(const struct rb_execarg *e, struct rb_execarg *s, char* errmsg, size_t errmsg_buflen);
RUBY_EXTERN VALUE rb_execarg_extract_options(VALUE execarg_obj, VALUE opthash);
RUBY_EXTERN void rb_execarg_setenv(VALUE execarg_obj, VALUE env);

#endif /* RUBY_PTY_INTERNAL_PROCESS_H */
