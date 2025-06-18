// SPDX-License-Identifier: GPL-2.0+
// Copyright (c) 2025 Cosmas Eric

#include <media/rc-map.h>
#include <linux/module.h>

/*
 * Keymap for the Polytron audio RC
 */

static struct rc_map_table polytron_audio[] = {
	{ 0x9117, KEY_POWER },
	{ 0x9115, KEY_MUTE },

	{ 0x9151, KEY_VOLUMEDOWN },
	{ 0x9150, KEY_VOLUMEUP },

	{ 0x910c, KEY_UP },
	{ 0x910f, KEY_LEFT },
	{ 0x910e, KEY_RIGHT },
	{ 0x910d, KEY_DOWN },

	{ 0x9167, KEY_HOME },
	{ 0x910b, KEY_MENU },
	{ 0x9110, KEY_BACK },

	{ 0x9101, KEY_1 },
	{ 0x9102, KEY_2 },
	{ 0x9103, KEY_3 },

	{ 0x9104, KEY_4 },
	{ 0x9105, KEY_5 },
	{ 0x9106, KEY_6 },

	{ 0x9107, KEY_7 },
	{ 0x9108, KEY_8 },
	{ 0x9109, KEY_9 },
	{ 0x9100, KEY_0 },

    { 0x9119, KEY_REWIND },
    { 0x9118, KEY_FORWARD },
    { 0x911a, KEY_NEXTSONG },
    { 0x911b, KEY_PREVIOUSSONG},
    { 0x9113, KEY_PLAYPAUSE },

    { 0x910a, KEY_MODE },
    { 0x9158, KEY_BLUETOOTH },
    { 0x911e, KEY_MEDIA_REPEAT },
};

static struct rc_map_list polytron_audio_map = {
	.map = {
		.scan     = polytron_audio,
		.size     = ARRAY_SIZE(polytron_audio),
		.rc_proto = RC_PROTO_NEC,
		.name     = "rc-polytron-audio",
	}
};

static int __init init_rc_map_polytron_audio(void)
{
	return rc_map_register(&polytron_audio_map);
}

static void __exit exit_rc_map_polytron_audio(void)
{
	rc_map_unregister(&polytron_audio_map);
}

module_init(init_rc_map_polytron_audio)
module_exit(exit_rc_map_polytron_audio)

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Cosmas Eric Septian <cosmas.es08@gmail.com>");
