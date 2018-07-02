/*
 * Generated by 'source/tools/utils/blender_theme_as_c.py'
 *
 * Do not hand edit this file!
 */

#include "DNA_userdef_types.h"

#include "BLO_readfile.h"

#ifdef __LITTLE_ENDIAN__
#  define RGBA(c) {((c) >> 24) & 0xff, ((c) >> 16) & 0xff, ((c) >> 8) & 0xff, (c) & 0xff}
#  define RGB(c)  {((c) >> 16) & 0xff, ((c) >> 8) & 0xff, (c) & 0xff}
#else
#  define RGBA(c) {(c) & 0xff, ((c) >> 8) & 0xff, ((c) >> 16) & 0xff, ((c) >> 24) & 0xff}
#  define RGB(c)  {(c) & 0xff, ((c) >> 8) & 0xff, ((c) >> 16) & 0xff}
#endif

const bTheme U_theme_default = {
	.name = "Default",
	.tui = {
		.wcol_regular = {
			.outline = RGBA(0x3e3e3eff),
			.inner = RGBA(0x585858ff),
			.inner_sel = RGBA(0x80858aff),
			.item = RGBA(0x3e3e3eff),
			.text = RGBA(0xebebebff),
			.text_sel = RGBA(0xffffffff),
			.shadedown = -5,
			.roundness = 0.2f,
		},
		.wcol_tool = {
			.outline = RGBA(0x343434ff),
			.inner = RGBA(0x585858ff),
			.inner_sel = RGBA(0x343434ff),
			.item = RGBA(0xffffffff),
			.text = RGBA(0xf2f2f2ff),
			.text_sel = RGBA(0xffffffff),
			.shadedown = -5,
			.roundness = 0.2f,
		},
		.wcol_toolbar_item = {
			.outline = RGBA(0x191919ff),
			.inner = RGBA(0x585858ff),
			.inner_sel = RGBA(0x333333ff),
			.item = RGBA(0x191919ff),
			.text = RGBA(0xffffffff),
			.text_sel = RGBA(0xffffffff),
			.roundness = 0.25f,
		},
		.wcol_text = {
			.outline = RGBA(0x4d4d4dff),
			.inner = RGBA(0x333333ff),
			.inner_sel = RGBA(0x808080ff),
			.item = RGBA(0xb3b3b3ff),
			.text = RGBA(0xeeeeeeff),
			.text_sel = RGBA(0xffffffff),
			.shaded = 1,
			.shadetop = -3,
			.roundness = 0.2f,
		},
		.wcol_radio = {
			.outline = RGBA(0x525252ff),
			.inner = RGBA(0x585858ff),
			.inner_sel = RGBA(0x333333ff),
			.item = RGBA(0xffffffff),
			.text = RGBA(0xeeeeeeff),
			.text_sel = RGBA(0xffffffff),
			.shadetop = 5,
			.shadedown = -5,
			.roundness = 0.2f,
		},
		.wcol_option = {
			.outline = RGBA(0x525252ff),
			.inner = RGBA(0x666666cc),
			.inner_sel = RGBA(0x7c7c7cff),
			.item = RGBA(0xffffffff),
			.text = RGBA(0xeeeeeeff),
			.text_sel = RGBA(0xffffffff),
			.shadedown = -15,
			.roundness = 0.25f,
		},
		.wcol_toggle = {
			.outline = RGBA(0x4d4d4dff),
			.inner = RGBA(0x666666ff),
			.inner_sel = RGBA(0x808080ff),
			.item = RGBA(0x191919ff),
			.text = RGBA(0xeeeeeeff),
			.text_sel = RGBA(0xffffffff),
			.roundness = 0.25f,
		},
		.wcol_num = {
			.outline = RGBA(0x4d4d4dff),
			.inner = RGBA(0x585858ff),
			.inner_sel = RGBA(0x808080ff),
			.item = RGBA(0x4d4d4dff),
			.text = RGBA(0xeeeeeeff),
			.text_sel = RGBA(0xffffffff),
			.shaded = 1,
			.roundness = 0.3f,
		},
		.wcol_numslider = {
			.outline = RGBA(0x4d4d4dff),
			.inner = RGBA(0x474747ff),
			.inner_sel = RGBA(0x808080ff),
			.item = RGBA(0x585858ff),
			.text = RGBA(0xeeeeeeff),
			.text_sel = RGBA(0xffffffff),
			.shaded = 1,
			.shadetop = -4,
			.roundness = 0.4f,
		},
		.wcol_tab = {
			.outline = RGBA(0x2d2d2dff),
			.inner = RGBA(0x323232ff),
			.inner_sel = RGBA(0x4b4b4bff),
			.item = RGBA(0x2d2d2dff),
			.text = RGBA(0xbebebeff),
			.text_sel = RGBA(0xffffffff),
			.roundness = 0.15f,
		},
		.wcol_menu = {
			.outline = RGBA(0x4d4d4dff),
			.inner = RGBA(0x2e2e2eff),
			.inner_sel = RGBA(0x585858ff),
			.item = RGBA(0xe6e6e6ff),
			.text = RGBA(0xeeeeeeff),
			.text_sel = RGBA(0xccccccff),
			.shadetop = 10,
			.shadedown = -10,
			.roundness = 0.2f,
		},
		.wcol_pulldown = {
			.outline = RGBA(0x4d4d4dff),
			.inner = RGBA(0x2e2e2e99),
			.inner_sel = RGBA(0x585858ff),
			.item = RGBA(0x727272ff),
			.text = RGBA(0xeeeeeeff),
			.text_sel = RGBA(0xffffffff),
			.shadetop = 25,
			.shadedown = -20,
			.roundness = 0.2f,
		},
		.wcol_menu_back = {
			.outline = RGBA(0x2e2e2eff),
			.inner = RGBA(0x1f1f1fef),
			.inner_sel = RGBA(0x585858ff),
			.item = RGBA(0x727272ff),
			.text = RGBA(0xb3b3b3ff),
			.text_sel = RGBA(0xffffffff),
			.shadetop = 25,
			.shadedown = -20,
			.roundness = 0.25f,
		},
		.wcol_menu_item = {
			.inner_sel = RGBA(0x585858ff),
			.item = RGBA(0xacacac80),
			.text = RGBA(0xeeeeeeff),
			.text_sel = RGBA(0xffffffff),
			.shadetop = 38,
			.roundness = 0.25f,
		},
		.wcol_tooltip = {
			.outline = RGBA(0x353535ff),
			.inner = RGBA(0x19191aef),
			.inner_sel = RGBA(0x19191aef),
			.item = RGBA(0x19191aef),
			.text = RGBA(0xeeeeeeff),
			.text_sel = RGBA(0xffffffff),
			.shadetop = 25,
			.shadedown = -20,
			.roundness = 0.25f,
		},
		.wcol_box = {
			.outline = RGBA(0x333333ff),
			.inner = RGBA(0x4d4d4dff),
			.inner_sel = RGBA(0x808080ff),
			.item = RGBA(0x191919ff),
			.text = RGBA(0xeeeeeeff),
			.text_sel = RGBA(0xffffffff),
			.roundness = 0.2f,
		},
		.wcol_scroll = {
			.outline = RGBA(0x353535ff),
			.inner = RGBA(0x67676700),
			.inner_sel = RGBA(0xb3b3b3ff),
			.item = RGBA(0x676767ff),
			.text = RGBA(0xffffffff),
			.text_sel = RGBA(0xffffffff),
			.shadetop = 5,
			.shadedown = -5,
			.roundness = 0.5f,
		},
		.wcol_progress = {
			.outline = RGBA(0xb3b3b3ff),
			.inner = RGBA(0xccccccff),
			.inner_sel = RGBA(0x646464b4),
			.item = RGBA(0xb3b3b3ff),
			.text = RGBA(0xeeeeeeff),
			.text_sel = RGBA(0xffffffff),
			.roundness = 0.25f,
		},
		.wcol_list_item = {
			.outline = RGBA(0x2d2d2dff),
			.inner = RGBA(0x2d2d2d00),
			.inner_sel = RGBA(0x6f6f6fff),
			.item = RGBA(0xb3b3b3ff),
			.text = RGBA(0xeeeeeeff),
			.text_sel = RGBA(0xffffffff),
			.roundness = 0.2f,
		},
		.wcol_pie_menu = {
			.outline = RGBA(0x2e2e2eff),
			.inner = RGBA(0x2e2e2eff),
			.inner_sel = RGBA(0x585858ff),
			.item = RGBA(0x727272ff),
			.text = RGBA(0xeeeeeeff),
			.text_sel = RGBA(0xffffffff),
			.shadetop = 10,
			.shadedown = -10,
			.roundness = 0.5f,
		},
		.wcol_state = {
			.inner_anim = RGBA(0x73be4cff),
			.inner_anim_sel = RGBA(0x5aa633ff),
			.inner_key = RGBA(0xf0eb64ff),
			.inner_key_sel = RGBA(0xd7d34bff),
			.inner_driven = RGBA(0xb400ffff),
			.inner_driven_sel = RGBA(0x9900e6ff),
			.blend = 0.5f,
		},
		.widget_emboss = RGBA(0x00000005),
		.menu_shadow_fac = 0.3f,
		.menu_shadow_width = 4,
		.editor_outline = RGBA(0x202020ff),
		.icon_alpha = 1.0f,
		.icon_saturation = 0.4f,
		.xaxis = RGBA(0xff3352ff),
		.yaxis = RGBA(0x8bdc00ff),
		.zaxis = RGBA(0x2890ffff),
		.manipulator_hi = RGBA(0xffffffff),
		.manipulator_primary = RGBA(0xf5f14dff),
		.manipulator_secondary = RGBA(0x63ffffff),
		.manipulator_a = RGBA(0x4da84dff),
		.manipulator_b = RGBA(0xa33535ff),
	},
	.tbuts = {
		.back = RGBA(0x42424200),
		.title = RGBA(0xeeeeeeff),
		.text = RGBA(0xffffffff),
		.text_hi = RGBA(0xffffffff),
		.header = RGBA(0x424242ff),
		.header_text = RGBA(0xeeeeeeff),
		.header_text_hi = RGBA(0xffffffff),
		.tab_active = RGBA(0x4b4b4bff),
		.tab_inactive = RGBA(0x323232ff),
		.tab_back = RGBA(0x232323ff),
		.tab_outline = RGBA(0x2d2d2dff),
		.button = RGBA(0x35353599),
		.button_title = RGBA(0xffffffff),
		.button_text = RGBA(0xffffffff),
		.button_text_hi = RGBA(0xffffffff),
		.panelcolors = {
			.header = RGBA(0x424242cc),
			.back = RGBA(0x333333b3),
			.sub_back = RGBA(0x0000003e),
			.show_header = 1,
			.show_back = 1,
		},
		.vertex_size = 3,
		.outline_width = 1,
		.facedot_size = 4,
	},
	.tv3d = {
		.title = RGBA(0xeeeeeeff),
		.text = RGBA(0xffffffff),
		.text_hi = RGBA(0xffffffff),
		.header = RGBA(0x42424200),
		.header_text = RGBA(0xeeeeeeff),
		.header_text_hi = RGBA(0xffffffff),
		.tab_active = RGBA(0x4b4b4bff),
		.tab_inactive = RGBA(0x323232ff),
		.tab_back = RGBA(0x232323ff),
		.tab_outline = RGBA(0x2d2d2dff),
		.button = RGBA(0x35353500),
		.button_title = RGBA(0xffffffff),
		.button_text = RGBA(0xffffffff),
		.button_text_hi = RGBA(0xffffffff),
		.panelcolors = {
			.header = RGBA(0x424242cc),
			.back = RGBA(0x333333b3),
			.sub_back = RGBA(0x0000003e),
			.show_header = 1,
			.show_back = 1,
		},
		.gradients = {
			.gradient = RGBA(0x39393900),
			.high_gradient = RGBA(0x393939ff),
		},
		.grid = RGBA(0x232323ff),
		.wire = RGBA(0x000000ff),
		.wire_edit = RGBA(0x111111ff),
		.select = RGBA(0xed5700ff),
		.lamp = RGBA(0x000000ff),
		.speaker = RGBA(0x000000ff),
		.empty = RGBA(0x000000ff),
		.camera = RGBA(0x000000ff),
		.active = RGBA(0xffa028ff),
		.transform = RGBA(0xffffffff),
		.vertex = RGBA(0x000000ff),
		.vertex_select = RGBA(0xff8500ff),
		.vertex_bevel = RGBA(0x00a5ffff),
		.edge = RGBA(0x000000ff),
		.edge_select = RGBA(0xffa000ff),
		.edge_seam = RGBA(0xdb2512ff),
		.edge_sharp = RGBA(0x00ffffff),
		.edge_facesel = RGBA(0x4b4b4bff),
		.edge_crease = RGBA(0xcc0099ff),
		.edge_bevel = RGBA(0x00a5ffff),
		.face = RGBA(0x00000012),
		.face_select = RGBA(0xff85004d),
		.face_dot = RGBA(0xff8500ff),
		.extra_edge_len = RGBA(0x150806ff),
		.extra_edge_angle = RGBA(0x4d4d00ff),
		.extra_face_angle = RGBA(0x0000ccff),
		.extra_face_area = RGBA(0x004d00ff),
		.normal = RGBA(0x22ddddff),
		.vertex_normal = RGBA(0x2361ddff),
		.loop_normal = RGBA(0xdd23ddff),
		.bone_solid = RGBA(0xc8c8c8ff),
		.bone_pose = RGBA(0x50c8ff50),
		.bone_pose_active = RGBA(0x8cffff50),
		.cframe = RGBA(0x60c040ff),
		.time_keyframe = RGBA(0xddd700ff),
		.time_gp_keyframe = RGBA(0xb5e61dff),
		.freestyle_edge_mark = RGBA(0x7fff7fff),
		.freestyle_face_mark = RGBA(0x7fff7f33),
		.nurb_uline = RGBA(0x909000ff),
		.nurb_vline = RGBA(0x803060ff),
		.act_spline = RGBA(0xdb2512ff),
		.nurb_sel_uline = RGBA(0xf0ff40ff),
		.nurb_sel_vline = RGBA(0xf090a0ff),
		.lastsel_point = RGBA(0xffffffff),
		.handle_free = RGBA(0x000000ff),
		.handle_auto = RGBA(0x909000ff),
		.handle_vect = RGBA(0x409030ff),
		.handle_align = RGBA(0x803060ff),
		.handle_sel_free = RGBA(0x000000ff),
		.handle_sel_auto = RGBA(0xf0ff40ff),
		.handle_sel_vect = RGBA(0x40c030ff),
		.handle_sel_align = RGBA(0xf090a0ff),
		.vertex_size = 3,
		.outline_width = 1,
		.facedot_size = 3,
		.editmesh_active = RGBA(0xffffff80),
		.clipping_border_3d = RGBA(0x313131ff),
		.bundle_solid = RGBA(0xc8c8c8ff),
		.camera_path = RGBA(0x000000ff),
		.gp_vertex_size = 3,
		.gp_vertex = RGBA(0x000000ff),
		.gp_vertex_select = RGBA(0xff8500ff),
		.skin_root = RGBA(0xb44d4dff),
		.paint_curve_pivot = RGBA(0xff7f7f7f),
		.paint_curve_handle = RGBA(0x7fff7f7f),
	},
	.tfile = {
		.back = RGBA(0x35353500),
		.title = RGBA(0xffffffff),
		.text = RGBA(0xffffffff),
		.text_hi = RGBA(0xffffffff),
		.header = RGBA(0x2e2e2eff),
		.header_text = RGBA(0xeeeeeeff),
		.header_text_hi = RGBA(0xffffffff),
		.tab_active = RGBA(0x4b4b4bff),
		.tab_inactive = RGBA(0x323232ff),
		.tab_back = RGBA(0x232323ff),
		.tab_outline = RGBA(0x2d2d2dff),
		.button = RGBA(0x35353599),
		.button_title = RGBA(0xffffffff),
		.button_text = RGBA(0xffffffff),
		.button_text_hi = RGBA(0xffffffff),
		.panelcolors = {
			.header = RGBA(0x424242cc),
			.back = RGBA(0x333333b3),
			.sub_back = RGBA(0x0000003e),
			.show_header = 1,
			.show_back = 1,
		},
		.hilite = RGBA(0x5b8199ff),
		.vertex_size = 3,
		.outline_width = 1,
		.facedot_size = 4,
	},
	.tipo = {
		.back = RGBA(0x35353500),
		.title = RGBA(0xffffffff),
		.text = RGBA(0xffffffff),
		.text_hi = RGBA(0xffffffff),
		.header = RGBA(0x2e2e2eff),
		.header_text = RGBA(0xeeeeeeff),
		.header_text_hi = RGBA(0xffffffff),
		.tab_active = RGBA(0x4b4b4bff),
		.tab_inactive = RGBA(0x323232ff),
		.tab_back = RGBA(0x232323ff),
		.tab_outline = RGBA(0x2d2d2dff),
		.button = RGBA(0x35353599),
		.button_title = RGBA(0xffffffff),
		.button_text = RGBA(0xffffffff),
		.button_text_hi = RGBA(0xffffffff),
		.list = RGBA(0x2e2e2eff),
		.list_title = RGBA(0xffffffff),
		.list_text = RGBA(0xccccccff),
		.list_text_hi = RGBA(0xffffffff),
		.panelcolors = {
			.header = RGBA(0x424242cc),
			.back = RGBA(0x333333b3),
			.sub_back = RGBA(0x0000003e),
			.show_header = 1,
			.show_back = 1,
		},
		.shade1 = RGBA(0x96969600),
		.shade2 = RGBA(0x2e2e2e64),
		.grid = RGBA(0x1a1a1aff),
		.group = RGBA(0x247f0dff),
		.group_active = RGBA(0x46a431ff),
		.vertex_select = RGBA(0xff8500ff),
		.cframe = RGBA(0x308837ff),
		.lastsel_point = RGBA(0xffffffff),
		.handle_auto = RGBA(0x909000ff),
		.handle_vect = RGBA(0x409030ff),
		.handle_align = RGBA(0x803060ff),
		.handle_auto_clamped = RGBA(0x994030ff),
		.handle_sel_auto = RGBA(0xf0ff40ff),
		.handle_sel_vect = RGBA(0x40c030ff),
		.handle_sel_align = RGBA(0xf090a0ff),
		.handle_sel_auto_clamped = RGBA(0xf0af90ff),
		.ds_channel = RGBA(0x26537fff),
		.ds_subchannel = RGBA(0x6a90b2ff),
		.vertex_size = 6,
		.outline_width = 1,
		.facedot_size = 4,
		.handle_vertex_select = RGBA(0xff8500ff),
		.handle_vertex_size = 5,
	},
	.tinfo = {
		.back = RGBA(0x42424200),
		.title = RGBA(0xeeeeeeff),
		.text = RGBA(0xffffffff),
		.text_hi = RGBA(0xffffffff),
		.header = RGBA(0x424242ff),
		.header_text = RGBA(0xeeeeeeff),
		.header_text_hi = RGBA(0xffffffff),
		.tab_active = RGBA(0x4b4b4bff),
		.tab_inactive = RGBA(0x323232ff),
		.tab_back = RGBA(0x232323ff),
		.tab_outline = RGBA(0x2d2d2dff),
		.button = RGBA(0x35353599),
		.button_title = RGBA(0xffffffff),
		.button_text = RGBA(0xffffffff),
		.button_text_hi = RGBA(0xffffffff),
		.panelcolors = {
			.header = RGBA(0x424242cc),
			.back = RGBA(0x333333b3),
			.sub_back = RGBA(0x0000003e),
			.show_header = 1,
			.show_back = 1,
		},
		.vertex_size = 3,
		.outline_width = 1,
		.facedot_size = 4,
		.info_selected = RGBA(0x6080ffff),
		.info_selected_text = RGBA(0xffffffff),
		.info_error = RGBA(0x990000ff),
		.info_error_text = RGBA(0xffffffff),
		.info_warning = RGBA(0xb36a00ff),
		.info_warning_text = RGBA(0xffffffff),
		.info_info = RGBA(0x668000ff),
		.info_info_text = RGBA(0xffffffff),
		.info_debug = RGBA(0xd3d3d3ff),
	},
	.tact = {
		.back = RGBA(0x42424200),
		.title = RGBA(0xeeeeeeff),
		.text = RGBA(0xffffffff),
		.text_hi = RGBA(0xffffffff),
		.header = RGBA(0x424242ff),
		.header_text = RGBA(0xeeeeeeff),
		.header_text_hi = RGBA(0xffffffff),
		.tab_active = RGBA(0x4b4b4bff),
		.tab_inactive = RGBA(0x323232ff),
		.tab_back = RGBA(0x232323ff),
		.tab_outline = RGBA(0x2d2d2dff),
		.button = RGBA(0x35353599),
		.button_title = RGBA(0xffffffff),
		.button_text = RGBA(0xffffffff),
		.button_text_hi = RGBA(0xffffffff),
		.list = RGBA(0x2e2e2eff),
		.list_title = RGBA(0xd8d8d8ff),
		.list_text = RGBA(0xffffffff),
		.list_text_hi = RGBA(0xffffffff),
		.panelcolors = {
			.header = RGBA(0x424242cc),
			.back = RGBA(0x333333b3),
			.sub_back = RGBA(0x0000003e),
			.show_header = 1,
			.show_back = 1,
		},
		.shade1 = RGBA(0xc0c0c000),
		.shade2 = RGBA(0x70707064),
		.hilite = RGBA(0x60c040ff),
		.grid = RGBA(0x1a1a1aff),
		.group = RGBA(0x278c0eff),
		.group_active = RGBA(0x4eb335ff),
		.strip = RGBA(0x1a151580),
		.strip_select = RGBA(0xff8c00ff),
		.cframe = RGBA(0x308837ff),
		.ds_channel = RGBA(0x2e6399ff),
		.ds_subchannel = RGBA(0x5a7996ff),
		.keytype_keyframe = RGBA(0xe8e8e8ff),
		.keytype_extreme = RGBA(0xe8b3ccff),
		.keytype_breakdown = RGBA(0xb3dbe8ff),
		.keytype_jitter = RGBA(0x94e575ff),
		.keytype_keyframe_select = RGBA(0xffbe33ff),
		.keytype_extreme_select = RGBA(0xf28080ff),
		.keytype_breakdown_select = RGBA(0x54bfedff),
		.keytype_jitter_select = RGBA(0x61c042ff),
		.keyborder = RGBA(0x000000ff),
		.keyborder_select = RGBA(0x000000ff),
		.vertex_size = 3,
		.outline_width = 1,
		.facedot_size = 4,
		.keyframe_scale_fac = 1.0f,
		.handle_vertex_size = 4,
		.anim_active = RGBA(0x66310066),
	},
	.tnla = {
		.back = RGBA(0x35353500),
		.title = RGBA(0xffffffff),
		.text = RGBA(0xffffffff),
		.text_hi = RGBA(0xffffffff),
		.header = RGBA(0x212121ff),
		.header_text = RGBA(0xeeeeeeff),
		.header_text_hi = RGBA(0xffffffff),
		.tab_active = RGBA(0x4b4b4bff),
		.tab_inactive = RGBA(0x323232ff),
		.tab_back = RGBA(0x232323ff),
		.tab_outline = RGBA(0x2d2d2dff),
		.button = RGBA(0x35353599),
		.button_title = RGBA(0xffffffff),
		.button_text = RGBA(0xffffffff),
		.button_text_hi = RGBA(0xffffffff),
		.list = RGBA(0x2e2e2eff),
		.list_title = RGBA(0xffffffff),
		.list_text = RGBA(0xccccccff),
		.list_text_hi = RGBA(0xccccccff),
		.panelcolors = {
			.header = RGBA(0x424242cc),
			.back = RGBA(0x333333b3),
			.sub_back = RGBA(0x0000003e),
			.show_header = 1,
			.show_back = 1,
		},
		.shade1 = RGBA(0x96969600),
		.grid = RGBA(0x5e5e5eff),
		.strip = RGBA(0x0c0a0a80),
		.strip_select = RGBA(0xff8c00ff),
		.cframe = RGBA(0x308837ff),
		.keyborder = RGBA(0x000000ff),
		.keyborder_select = RGBA(0x000000ff),
		.vertex_size = 3,
		.outline_width = 1,
		.facedot_size = 4,
		.handle_vertex_size = 4,
		.anim_active = RGBA(0xcc701a66),
		.anim_non_active = RGBA(0x9987614d),
		.nla_tweaking = RGBA(0x4df31a4d),
		.nla_tweakdupli = RGBA(0xd90000ff),
		.nla_transition = RGBA(0x1c2630ff),
		.nla_transition_sel = RGBA(0x2e75dbff),
		.nla_meta = RGBA(0x332642ff),
		.nla_meta_sel = RGBA(0x692196ff),
		.nla_sound = RGBA(0x2b3d3dff),
		.nla_sound_sel = RGBA(0x1f7a7aff),
	},
	.tseq = {
		.back = RGBA(0x42424200),
		.title = RGBA(0xeeeeeeff),
		.text = RGBA(0xffffffff),
		.text_hi = RGBA(0xffffffff),
		.header = RGBA(0x424242ff),
		.header_text = RGBA(0xeeeeeeff),
		.header_text_hi = RGBA(0xffffffff),
		.tab_active = RGBA(0x4b4b4bff),
		.tab_inactive = RGBA(0x323232ff),
		.tab_back = RGBA(0x232323ff),
		.tab_outline = RGBA(0x2d2d2dff),
		.button = RGBA(0x35353599),
		.button_title = RGBA(0xffffffff),
		.button_text = RGBA(0xffffffff),
		.button_text_hi = RGBA(0xffffffff),
		.panelcolors = {
			.header = RGBA(0x424242cc),
			.back = RGBA(0x333333b3),
			.sub_back = RGBA(0x0000003e),
			.show_header = 1,
			.show_back = 1,
		},
		.shade1 = RGBA(0xa0a0a000),
		.grid = RGBA(0x404040ff),
		.vertex_select = RGBA(0xff8500ff),
		.bone_pose = RGBA(0x50c8ff50),
		.cframe = RGBA(0x308837ff),
		.vertex_size = 3,
		.outline_width = 1,
		.facedot_size = 4,
		.movie = RGBA(0x516987ff),
		.movieclip = RGBA(0x20208fff),
		.image = RGBA(0x6d5881ff),
		.scene = RGBA(0x4e983eff),
		.audio = RGBA(0x2e8f8fff),
		.effect = RGBA(0xa9547cff),
		.transition = RGBA(0xa25f6fff),
		.meta = RGBA(0x6d9183ff),
		.text_strip = RGBA(0xa29700ff),
		.gp_vertex_size = 3,
		.gp_vertex_select = RGBA(0xff8500ff),
		.metadatatext = RGBA(0xffffffff),
	},
	.tima = {
		.back = RGBA(0x44444400),
		.title = RGBA(0xeeeeeeff),
		.text = RGBA(0xffffffff),
		.text_hi = RGBA(0xffffffff),
		.header = RGBA(0x424242ff),
		.header_text = RGBA(0xeeeeeeff),
		.header_text_hi = RGBA(0xffffffff),
		.tab_active = RGBA(0x4b4b4bff),
		.tab_inactive = RGBA(0x323232ff),
		.tab_back = RGBA(0x232323ff),
		.tab_outline = RGBA(0x2d2d2dff),
		.button = RGBA(0x35353599),
		.button_title = RGBA(0xffffffff),
		.button_text = RGBA(0xffffffff),
		.button_text_hi = RGBA(0xffffffff),
		.panelcolors = {
			.header = RGBA(0x424242cc),
			.back = RGBA(0x333333b3),
			.sub_back = RGBA(0x0000003e),
			.show_header = 1,
			.show_back = 1,
		},
		.wire_edit = RGBA(0xc0c0c0ff),
		.vertex_select = RGBA(0xff8500ff),
		.edge_select = RGBA(0xff8500ff),
		.face = RGBA(0xffffff0a),
		.face_select = RGBA(0xff85003c),
		.face_dot = RGBA(0xff8500ff),
		.cframe = RGBA(0x60c040ff),
		.freestyle_face_mark = RGBA(0x7fff7f33),
		.handle_auto = RGBA(0x909000ff),
		.handle_align = RGBA(0x803060ff),
		.handle_sel_auto = RGBA(0xf0ff40ff),
		.handle_sel_align = RGBA(0xf090a0ff),
		.vertex_size = 3,
		.outline_width = 1,
		.facedot_size = 3,
		.editmesh_active = RGBA(0xffffff80),
		.handle_vertex_select = RGBA(0xffff00ff),
		.handle_vertex_size = 5,
		.gp_vertex_size = 3,
		.gp_vertex_select = RGBA(0xff8500ff),
		.preview_back = RGBA(0x727272ff),
		.preview_stitch_face = RGBA(0x7f7f0033),
		.preview_stitch_edge = RGBA(0xff00ff33),
		.preview_stitch_vert = RGBA(0x0000ff33),
		.preview_stitch_stitchable = RGBA(0x00ff00ff),
		.preview_stitch_unstitchable = RGBA(0xff0000ff),
		.preview_stitch_active = RGBA(0xe1d2c323),
		.uv_shadow = RGBA(0x707070ff),
		.uv_others = RGBA(0x606060ff),
		.paint_curve_pivot = RGBA(0xff7f7f7f),
		.paint_curve_handle = RGBA(0x7fff7f7f),
		.metadatatext = RGBA(0xffffffff),
	},
	.text = {
		.back = RGBA(0x27272700),
		.title = RGBA(0xeeeeeeff),
		.text = RGBA(0xffffffff),
		.text_hi = RGBA(0xffffffff),
		.header = RGBA(0x424242ff),
		.header_text = RGBA(0xeeeeeeff),
		.header_text_hi = RGBA(0xffffffff),
		.tab_active = RGBA(0x4b4b4bff),
		.tab_inactive = RGBA(0x323232ff),
		.tab_back = RGBA(0x232323ff),
		.tab_outline = RGBA(0x2d2d2dff),
		.button = RGBA(0x35353599),
		.button_title = RGBA(0xffffffff),
		.button_text = RGBA(0xffffffff),
		.button_text_hi = RGBA(0xffffffff),
		.panelcolors = {
			.header = RGBA(0x424242cc),
			.back = RGBA(0x333333b3),
			.sub_back = RGBA(0x0000003e),
			.show_header = 1,
			.show_back = 1,
		},
		.shade2 = RGBA(0x19191aff),
		.hilite = RGBA(0xff0000ff),
		.grid = RGBA(0x313133ff),
		.vertex_size = 3,
		.outline_width = 1,
		.facedot_size = 4,
		.syntaxl = RGBA(0xf6e162ff),
		.syntaxs = RGBA(0xff734dff),
		.syntaxb = RGBA(0xff1961ff),
		.syntaxn = RGBA(0x50dbffff),
		.syntaxv = RGBA(0x95d600ff),
		.syntaxc = RGBA(0x939393ff),
		.syntaxd = RGBA(0xad80ffff),
		.syntaxr = RGBA(0xc4753bff),
	},
	.toops = {
		.back = RGBA(0x42424200),
		.title = RGBA(0xffffffff),
		.text = RGBA(0xdededeff),
		.text_hi = RGBA(0xffffffff),
		.header = RGBA(0x454545ff),
		.header_text = RGBA(0xeeeeeeff),
		.header_text_hi = RGBA(0xffffffff),
		.tab_active = RGBA(0x4b4b4bff),
		.tab_inactive = RGBA(0x323232ff),
		.tab_back = RGBA(0x232323ff),
		.tab_outline = RGBA(0x2d2d2dff),
		.button = RGBA(0x35353599),
		.button_title = RGBA(0xffffffff),
		.button_text = RGBA(0xffffffff),
		.button_text_hi = RGBA(0xffffffff),
		.panelcolors = {
			.header = RGBA(0x424242cc),
			.back = RGBA(0x333333b3),
			.sub_back = RGBA(0x0000003e),
			.show_header = 1,
			.show_back = 1,
		},
		.vertex_size = 3,
		.outline_width = 1,
		.facedot_size = 4,
		.match = RGBA(0x337f334c),
		.selected_highlight = RGBA(0x747a834c),
	},
	.ttime = {
		.vertex_size = 3,
		.outline_width = 1,
		.facedot_size = 4,
	},
	.tnode = {
		.back = RGBA(0x32323200),
		.title = RGBA(0xeeeeeeff),
		.text = RGBA(0xffffffff),
		.text_hi = RGBA(0xffffffff),
		.header = RGBA(0x424242ff),
		.header_text = RGBA(0xeeeeeeff),
		.header_text_hi = RGBA(0xffffffff),
		.tab_active = RGBA(0x4b4b4bff),
		.tab_inactive = RGBA(0x323232ff),
		.tab_back = RGBA(0x232323ff),
		.tab_outline = RGBA(0x2d2d2dff),
		.button = RGBA(0x35353599),
		.button_title = RGBA(0xffffffff),
		.button_text = RGBA(0xffffffff),
		.button_text_hi = RGBA(0xffffffff),
		.list = RGBA(0x2e2e2eff),
		.list_title = RGBA(0xffffffff),
		.list_text = RGBA(0xccccccff),
		.list_text_hi = RGBA(0xffffffff),
		.panelcolors = {
			.header = RGBA(0x424242cc),
			.back = RGBA(0x333333b3),
			.sub_back = RGBA(0x0000003e),
			.show_header = 1,
			.show_back = 1,
		},
		.shade2 = RGBA(0x7f707064),
		.wire = RGBA(0x808080ff),
		.select = RGBA(0x099be6ff),
		.active = RGBA(0xffffffff),
		.edge_select = RGBA(0xffffffff),
		.console_output = RGBA(0xdfc300ff),
		.vertex_size = 3,
		.outline_width = 1,
		.facedot_size = 4,
		.syntaxl = RGBA(0x666666ff),
		.syntaxs = RGBA(0x977474ff),
		.syntaxb = RGBA(0xffcb4dff),
		.syntaxn = RGBA(0xff6675ff),
		.syntaxv = RGBA(0x66c4ffff),
		.syntaxc = RGBA(0x59b36aff),
		.syntaxd = RGBA(0x749797ff),
		.syntaxr = RGBA(0x808080ff),
		.nodeclass_output = RGBA(0xff6675ff),
		.nodeclass_filter = RGBA(0x6c696fff),
		.nodeclass_vector = RGBA(0x9999ffff),
		.nodeclass_texture = RGBA(0xffc399ff),
		.nodeclass_shader = RGBA(0xa7ff99ff),
		.nodeclass_script = RGBA(0x6c696fff),
		.nodeclass_pattern = RGBA(0x6c696fff),
		.nodeclass_layout = RGBA(0x6c696fff),
		.movie = RGBA(0x9b9b9ba0),
		.gp_vertex_size = 3,
		.gp_vertex_select = RGBA(0xff8500ff),
	},
	.tuserpref = {
		.back = RGBA(0x42424200),
		.title = RGBA(0xeeeeeeff),
		.text = RGBA(0xffffffff),
		.text_hi = RGBA(0xffffffff),
		.header = RGBA(0x424242ff),
		.header_text = RGBA(0xeeeeeeff),
		.header_text_hi = RGBA(0xffffffff),
		.tab_active = RGBA(0x4b4b4bff),
		.tab_inactive = RGBA(0x323232ff),
		.tab_back = RGBA(0x232323ff),
		.tab_outline = RGBA(0x2d2d2dff),
		.button = RGBA(0x35353599),
		.button_title = RGBA(0xffffffff),
		.button_text = RGBA(0xffffffff),
		.button_text_hi = RGBA(0xffffffff),
		.panelcolors = {
			.header = RGBA(0x424242cc),
			.back = RGBA(0x333333b3),
			.sub_back = RGBA(0x0000003e),
			.show_header = 1,
			.show_back = 1,
		},
		.vertex_size = 3,
		.outline_width = 1,
		.facedot_size = 4,
	},
	.tconsole = {
		.back = RGBA(0x27272700),
		.title = RGBA(0xeeeeeeff),
		.text = RGBA(0xffffffff),
		.text_hi = RGBA(0xffffffff),
		.header = RGBA(0x424242ff),
		.header_text = RGBA(0xeeeeeeff),
		.header_text_hi = RGBA(0xffffffff),
		.tab_active = RGBA(0x4b4b4bff),
		.tab_inactive = RGBA(0x323232ff),
		.tab_back = RGBA(0x232323ff),
		.tab_outline = RGBA(0x2d2d2dff),
		.button = RGBA(0x35353599),
		.button_title = RGBA(0xffffffff),
		.button_text = RGBA(0xffffffff),
		.button_text_hi = RGBA(0xffffffff),
		.panelcolors = {
			.header = RGBA(0x424242cc),
			.back = RGBA(0x333333b3),
			.sub_back = RGBA(0x0000003e),
			.show_header = 1,
			.show_back = 1,
		},
		.console_output = RGBA(0xb3c2ffff),
		.console_input = RGBA(0xffffffff),
		.console_info = RGBA(0x47b347ff),
		.console_error = RGBA(0xde6f6fff),
		.console_cursor = RGBA(0xde5959ff),
		.console_select = RGBA(0xffffff30),
		.vertex_size = 3,
		.outline_width = 1,
		.facedot_size = 4,
	},
	.tclip = {
		.back = RGBA(0x42424200),
		.title = RGBA(0xeeeeeeff),
		.text = RGBA(0xffffffff),
		.text_hi = RGBA(0xffffffff),
		.header = RGBA(0x424242ff),
		.header_text = RGBA(0xeeeeeeff),
		.header_text_hi = RGBA(0xffffffff),
		.tab_active = RGBA(0x4b4b4bff),
		.tab_inactive = RGBA(0x323232ff),
		.tab_back = RGBA(0x232323ff),
		.tab_outline = RGBA(0x2d2d2dff),
		.button = RGBA(0x35353599),
		.button_title = RGBA(0xffffffff),
		.button_text = RGBA(0xffffffff),
		.button_text_hi = RGBA(0xffffffff),
		.list = RGBA(0x666666ff),
		.list_text_hi = RGBA(0xffffffff),
		.panelcolors = {
			.header = RGBA(0x424242cc),
			.back = RGBA(0x333333b3),
			.sub_back = RGBA(0x0000003e),
			.show_header = 1,
			.show_back = 1,
		},
		.strip = RGBA(0x0c0a0a80),
		.strip_select = RGBA(0xff8c00ff),
		.cframe = RGBA(0x308837ff),
		.handle_auto = RGBA(0x909000ff),
		.handle_align = RGBA(0x803060ff),
		.handle_sel_auto = RGBA(0xf0ff40ff),
		.handle_sel_align = RGBA(0xf090a0ff),
		.vertex_size = 3,
		.outline_width = 1,
		.facedot_size = 4,
		.handle_vertex_select = RGBA(0xffff00ff),
		.handle_vertex_size = 5,
		.marker = RGBA(0x7f7f00ff),
		.act_marker = RGBA(0xffffffff),
		.sel_marker = RGBA(0xffff00ff),
		.dis_marker = RGBA(0x7f0000ff),
		.lock_marker = RGBA(0x7f7f7fff),
		.path_before = RGBA(0xff0000ff),
		.path_after = RGBA(0x0000ffff),
		.gp_vertex_size = 1,
	},
	.ttopbar = {
		.back = RGBA(0x4b4b4b00),
		.title = RGBA(0xffffffff),
		.text = RGBA(0xffffffff),
		.text_hi = RGBA(0xffffffff),
		.header = RGBA(0x232323ff),
		.header_text = RGBA(0xeeeeeeff),
		.header_text_hi = RGBA(0xffffffff),
		.tab_active = RGBA(0x4b4b4bff),
		.tab_inactive = RGBA(0x323232ff),
		.tab_back = RGBA(0x232323ff),
		.tab_outline = RGBA(0x2d2d2dff),
		.button = RGBA(0x35353599),
		.button_title = RGBA(0xffffffff),
		.button_text = RGBA(0xffffffff),
		.button_text_hi = RGBA(0xffffffff),
		.panelcolors = {
			.header = RGBA(0x424242cc),
			.back = RGBA(0x333333b3),
			.sub_back = RGBA(0x0000003e),
			.show_header = 1,
			.show_back = 1,
		},
		.vertex_size = 3,
		.outline_width = 1,
		.facedot_size = 4,
		.gp_vertex_size = 3,
	},
	.tstatusbar = {
		.back = RGBA(0x2e2e2e00),
		.title = RGBA(0xffffffff),
		.text = RGBA(0x838383ff),
		.text_hi = RGBA(0xffffffff),
		.header = RGBA(0x232323ff),
		.header_text = RGBA(0xaaaaaaff),
		.header_text_hi = RGBA(0xffffffff),
		.tab_active = RGBA(0x4b4b4bff),
		.tab_inactive = RGBA(0x323232ff),
		.tab_back = RGBA(0x232323ff),
		.tab_outline = RGBA(0x2d2d2dff),
		.button = RGBA(0x353535ff),
		.button_text_hi = RGBA(0xffffffff),
		.panelcolors = {
			.header = RGBA(0x424242cc),
			.back = RGBA(0x333333b3),
			.sub_back = RGBA(0x0000003e),
			.show_header = 1,
			.show_back = 1,
		},
		.vertex_size = 3,
		.outline_width = 1,
		.facedot_size = 4,
		.gp_vertex_size = 3,
	},
	.tarm = {
		{
			.solid = RGBA(0x9a0000ff),
			.select = RGBA(0xbd1111ff),
			.active = RGBA(0xf70a0aff),
		},
		{
			.solid = RGBA(0xf74018ff),
			.select = RGBA(0xf66913ff),
			.active = RGBA(0xfa9900ff),
		},
		{
			.solid = RGBA(0x1e9109ff),
			.select = RGBA(0x59b70bff),
			.active = RGBA(0x83ef1dff),
		},
		{
			.solid = RGBA(0x0a3694ff),
			.select = RGBA(0x3667dfff),
			.active = RGBA(0x5ec1efff),
		},
		{
			.solid = RGBA(0xa9294eff),
			.select = RGBA(0xc1416aff),
			.active = RGBA(0xf05d91ff),
		},
		{
			.solid = RGBA(0x430c78ff),
			.select = RGBA(0x543aa3ff),
			.active = RGBA(0x8764d5ff),
		},
		{
			.solid = RGBA(0x24785aff),
			.select = RGBA(0x3c9579ff),
			.active = RGBA(0x6fb6abff),
		},
		{
			.solid = RGBA(0x4b707cff),
			.select = RGBA(0x6a8691ff),
			.active = RGBA(0x9bc2cdff),
		},
		{
			.solid = RGBA(0xf4c90cff),
			.select = RGBA(0xeec236ff),
			.active = RGBA(0xf3ff00ff),
		},
		{
			.solid = RGBA(0x1e2024ff),
			.select = RGBA(0x484c56ff),
			.active = RGBA(0xffffffff),
		},
		{
			.solid = RGBA(0x6f2f6aff),
			.select = RGBA(0x9845beff),
			.active = RGBA(0xd330d6ff),
		},
		{
			.solid = RGBA(0x6c8e22ff),
			.select = RGBA(0x7fb022ff),
			.active = RGBA(0xbbef5bff),
		},
		{
			.solid = RGBA(0x8d8d8dff),
			.select = RGBA(0xb0b0b0ff),
			.active = RGBA(0xdededeff),
		},
		{
			.solid = RGBA(0x834326ff),
			.select = RGBA(0x8b5811ff),
			.active = RGBA(0xbd6a11ff),
		},
		{
			.solid = RGBA(0x08310eff),
			.select = RGBA(0x1c430bff),
			.active = RGBA(0x34622bff),
		},
		{
			.solid = RGBA(0x000000ff),
			.select = RGBA(0x000000ff),
			.active = RGBA(0x000000ff),
		},
		{
			.solid = RGBA(0x000000ff),
			.select = RGBA(0x000000ff),
			.active = RGBA(0x000000ff),
		},
		{
			.solid = RGBA(0x000000ff),
			.select = RGBA(0x000000ff),
			.active = RGBA(0x000000ff),
		},
		{
			.solid = RGBA(0x000000ff),
			.select = RGBA(0x000000ff),
			.active = RGBA(0x000000ff),
		},
		{
			.solid = RGBA(0x000000ff),
			.select = RGBA(0x000000ff),
			.active = RGBA(0x000000ff),
		},
	},
};
