
#include <linux/init.h>
#include <linux/module.h>
#include <linux/i2c.h>

int myprobe(struct i2c_client *, const struct i2c_device_id *);
{
return 0;
}
int myremove(struct i2c_client *);
{
return 0;
}

struct i2c_driver   a={
	.probe=myprobe,
	.remove=myremove,
	.driver.name ="sbyrp",
	.table[]={
		{"s56818 " , 10 }.
		{"sbyrp " , 250 }.
	},


};




static int __init myinit(void)
{
	i2c_add_driver(&a);
	

return 0;
}

static void __exit myexit(void)
{

	i2c_del_driver(driver);

}
module_init(myinit);
module_exit(myexit);
MODULE_LICENSE("GPL");
