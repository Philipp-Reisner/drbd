#include <linux/interrupt.h>

void callback(struct tasklet_struct *t)
{
}

void foo(void)
{
	struct tasklet_struct t;

	tasklet_setup(&t, callback);
}
