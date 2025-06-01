#include <debug.h>
#include <reg.h>
#include <stdlib.h>
#include <openssl/evp.h>
#include <dev/fbcon.h>
#include <kernel/thread.h>
#include <display_menu.h>
#include <menu_keys_detect.h>
#include <boot_verifier.h>
#include <string.h>
#include <platform.h>
#include <smem.h>
#include <target.h>
#include <sys/types.h>
#include <../../../app/aboot/devinfo.h>
#include <../../../app/aboot/recovery.h>
#include <../../../app/aboot/lk2nd-device.h>
extern int common_factor;
void display_syk_menu(void)
{
//白色，小号
    set_message_factor();
	msg_lock_init();//不可以注释
    fbcon_clear();
	display_fbcon_menu_message("\n\nrrrrr\n\n", FBCON_COMMON_MSG, common_factor);
}