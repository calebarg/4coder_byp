function void
custom_api_fill_vtable(API_VTable_custom *vtable){
	vtable->global_set_setting = global_set_setting;
	vtable->global_get_screen_rectangle = global_get_screen_rectangle;
	vtable->get_thread_context = get_thread_context;
	vtable->create_child_process = create_child_process;
	vtable->child_process_set_target_buffer = child_process_set_target_buffer;
	vtable->buffer_get_attached_child_process = buffer_get_attached_child_process;
	vtable->child_process_get_attached_buffer = child_process_get_attached_buffer;
	vtable->child_process_get_state = child_process_get_state;
	vtable->enqueue_virtual_event = enqueue_virtual_event;
	vtable->get_buffer_count = get_buffer_count;
	vtable->get_buffer_next = get_buffer_next;
	vtable->get_buffer_by_name = get_buffer_by_name;
	vtable->get_buffer_by_file_name = get_buffer_by_file_name;
	vtable->buffer_read_range = buffer_read_range;
	vtable->buffer_replace_range = buffer_replace_range;
	vtable->buffer_batch_edit = buffer_batch_edit;
	vtable->buffer_seek_string = buffer_seek_string;
	vtable->buffer_seek_character_class = buffer_seek_character_class;
	vtable->buffer_line_y_difference = buffer_line_y_difference;
	vtable->buffer_line_shift_y = buffer_line_shift_y;
	vtable->buffer_pos_at_relative_xy = buffer_pos_at_relative_xy;
	vtable->buffer_relative_box_of_pos = buffer_relative_box_of_pos;
	vtable->buffer_padded_box_of_pos = buffer_padded_box_of_pos;
	vtable->buffer_relative_character_from_pos = buffer_relative_character_from_pos;
	vtable->buffer_pos_from_relative_character = buffer_pos_from_relative_character;
	vtable->view_line_y_difference = view_line_y_difference;
	vtable->view_line_shift_y = view_line_shift_y;
	vtable->view_pos_at_relative_xy = view_pos_at_relative_xy;
	vtable->view_relative_box_of_pos = view_relative_box_of_pos;
	vtable->view_padded_box_of_pos = view_padded_box_of_pos;
	vtable->view_relative_character_from_pos = view_relative_character_from_pos;
	vtable->view_pos_from_relative_character = view_pos_from_relative_character;
	vtable->buffer_exists = buffer_exists;
	vtable->buffer_get_access_flags = buffer_get_access_flags;
	vtable->buffer_get_size = buffer_get_size;
	vtable->buffer_get_line_count = buffer_get_line_count;
	vtable->push_buffer_base_name = push_buffer_base_name;
	vtable->push_buffer_unique_name = push_buffer_unique_name;
	vtable->push_buffer_file_name = push_buffer_file_name;
	vtable->buffer_get_dirty_state = buffer_get_dirty_state;
	vtable->buffer_set_dirty_state = buffer_set_dirty_state;
	vtable->buffer_set_layout = buffer_set_layout;
	vtable->buffer_clear_layout_cache = buffer_clear_layout_cache;
	vtable->buffer_get_layout = buffer_get_layout;
	vtable->buffer_get_setting = buffer_get_setting;
	vtable->buffer_set_setting = buffer_set_setting;
	vtable->buffer_get_managed_scope = buffer_get_managed_scope;
	vtable->buffer_send_end_signal = buffer_send_end_signal;
	vtable->create_buffer = create_buffer;
	vtable->buffer_save = buffer_save;
	vtable->buffer_kill = buffer_kill;
	vtable->buffer_reopen = buffer_reopen;
	vtable->buffer_get_file_attributes = buffer_get_file_attributes;
	vtable->get_view_next = get_view_next;
	vtable->get_view_prev = get_view_prev;
	vtable->get_this_ctx_view = get_this_ctx_view;
	vtable->get_active_view = get_active_view;
	vtable->view_exists = view_exists;
	vtable->view_get_buffer = view_get_buffer;
	vtable->view_get_cursor_pos = view_get_cursor_pos;
	vtable->view_get_mark_pos = view_get_mark_pos;
	vtable->view_get_preferred_x = view_get_preferred_x;
	vtable->view_set_preferred_x = view_set_preferred_x;
	vtable->view_get_screen_rect = view_get_screen_rect;
	vtable->view_get_panel = view_get_panel;
	vtable->panel_get_view = panel_get_view;
	vtable->panel_is_split = panel_is_split;
	vtable->panel_is_leaf = panel_is_leaf;
	vtable->panel_split = panel_split;
	vtable->panel_set_split = panel_set_split;
	vtable->panel_swap_children = panel_swap_children;
	vtable->panel_get_root = panel_get_root;
	vtable->panel_get_parent = panel_get_parent;
	vtable->panel_get_child = panel_get_child;
	vtable->view_close = view_close;
	vtable->view_get_buffer_region = view_get_buffer_region;
	vtable->view_get_buffer_scroll = view_get_buffer_scroll;
	vtable->view_set_active = view_set_active;
	vtable->view_enqueue_command_function = view_enqueue_command_function;
	vtable->view_get_setting = view_get_setting;
	vtable->view_set_setting = view_set_setting;
	vtable->view_get_managed_scope = view_get_managed_scope;
	vtable->buffer_compute_cursor = buffer_compute_cursor;
	vtable->view_compute_cursor = view_compute_cursor;
	vtable->view_set_camera_bounds = view_set_camera_bounds;
	vtable->view_get_camera_bounds = view_get_camera_bounds;
	vtable->view_set_cursor = view_set_cursor;
	vtable->view_set_buffer_scroll = view_set_buffer_scroll;
	vtable->view_set_mark = view_set_mark;
	vtable->view_quit_ui = view_quit_ui;
	vtable->view_set_buffer = view_set_buffer;
	vtable->view_push_context = view_push_context;
	vtable->view_pop_context = view_pop_context;
	vtable->view_alter_context = view_alter_context;
	vtable->view_current_context = view_current_context;
	vtable->view_current_context_hook_memory = view_current_context_hook_memory;
	vtable->create_user_managed_scope = create_user_managed_scope;
	vtable->destroy_user_managed_scope = destroy_user_managed_scope;
	vtable->get_global_managed_scope = get_global_managed_scope;
	vtable->get_managed_scope_with_multiple_dependencies = get_managed_scope_with_multiple_dependencies;
	vtable->managed_scope_clear_contents = managed_scope_clear_contents;
	vtable->managed_scope_clear_self_all_dependent_scopes = managed_scope_clear_self_all_dependent_scopes;
	vtable->managed_scope_allocator = managed_scope_allocator;
	vtable->managed_id_group_highest_id = managed_id_group_highest_id;
	vtable->managed_id_declare = managed_id_declare;
	vtable->managed_id_get = managed_id_get;
	vtable->managed_scope_get_attachment = managed_scope_get_attachment;
	vtable->managed_scope_attachment_erase = managed_scope_attachment_erase;
	vtable->alloc_managed_memory_in_scope = alloc_managed_memory_in_scope;
	vtable->alloc_buffer_markers_on_buffer = alloc_buffer_markers_on_buffer;
	vtable->managed_object_get_item_size = managed_object_get_item_size;
	vtable->managed_object_get_item_count = managed_object_get_item_count;
	vtable->managed_object_get_pointer = managed_object_get_pointer;
	vtable->managed_object_get_type = managed_object_get_type;
	vtable->managed_object_get_containing_scope = managed_object_get_containing_scope;
	vtable->managed_object_free = managed_object_free;
	vtable->managed_object_store_data = managed_object_store_data;
	vtable->managed_object_load_data = managed_object_load_data;
	vtable->get_next_input_raw = get_next_input_raw;
	vtable->get_current_input_sequence_number = get_current_input_sequence_number;
	vtable->get_current_input = get_current_input;
	vtable->set_current_input = set_current_input;
	vtable->leave_current_input_unhandled = leave_current_input_unhandled;
	vtable->set_custom_hook = set_custom_hook;
	vtable->get_custom_hook = get_custom_hook;
	vtable->set_custom_hook_memory_size = set_custom_hook_memory_size;
	vtable->get_mouse_state = get_mouse_state;
	vtable->get_active_query_bars = get_active_query_bars;
	vtable->start_query_bar = start_query_bar;
	vtable->end_query_bar = end_query_bar;
	vtable->clear_all_query_bars = clear_all_query_bars;
	vtable->print_message = print_message;
	vtable->log_string = log_string;
	vtable->get_largest_face_id = get_largest_face_id;
	vtable->set_global_face = set_global_face;
	vtable->buffer_history_get_max_record_index = buffer_history_get_max_record_index;
	vtable->buffer_history_get_record_info = buffer_history_get_record_info;
	vtable->buffer_history_get_group_sub_record = buffer_history_get_group_sub_record;
	vtable->buffer_history_get_current_state_index = buffer_history_get_current_state_index;
	vtable->buffer_history_set_current_state_index = buffer_history_set_current_state_index;
	vtable->buffer_history_merge_record_range = buffer_history_merge_record_range;
	vtable->buffer_history_clear_after_current_state = buffer_history_clear_after_current_state;
	vtable->global_history_edit_group_begin = global_history_edit_group_begin;
	vtable->global_history_edit_group_end = global_history_edit_group_end;
	vtable->buffer_set_face = buffer_set_face;
	vtable->get_face_description = get_face_description;
	vtable->get_face_metrics = get_face_metrics;
	vtable->get_face_advance_map = get_face_advance_map;
	vtable->get_face_id = get_face_id;
	vtable->try_create_new_face = try_create_new_face;
	vtable->try_modify_face = try_modify_face;
	vtable->try_release_face = try_release_face;
	vtable->push_hot_directory = push_hot_directory;
	vtable->set_hot_directory = set_hot_directory;
	vtable->send_exit_signal = send_exit_signal;
	vtable->hard_exit = hard_exit;
	vtable->set_window_title = set_window_title;
	vtable->acquire_global_frame_mutex = acquire_global_frame_mutex;
	vtable->release_global_frame_mutex = release_global_frame_mutex;
	vtable->draw_string_oriented = draw_string_oriented;
	vtable->get_string_advance = get_string_advance;
	vtable->draw_rectangle = draw_rectangle;
	vtable->draw_rectangle_outline = draw_rectangle_outline;
	vtable->draw_set_clip = draw_set_clip;
	vtable->text_layout_create = text_layout_create;
	vtable->text_layout_region = text_layout_region;
	vtable->text_layout_get_buffer = text_layout_get_buffer;
	vtable->text_layout_get_visible_range = text_layout_get_visible_range;
	vtable->text_layout_line_on_screen = text_layout_line_on_screen;
	vtable->text_layout_character_on_screen = text_layout_character_on_screen;
	vtable->paint_text_color = paint_text_color;
	vtable->paint_text_color_blend = paint_text_color_blend;
	vtable->text_layout_free = text_layout_free;
	vtable->draw_text_layout = draw_text_layout;
	vtable->open_color_picker = open_color_picker;
	vtable->animate_in_n_milliseconds = animate_in_n_milliseconds;
	vtable->buffer_find_all_matches = buffer_find_all_matches;
	vtable->get_core_profile_list = get_core_profile_list;
	vtable->get_custom_layer_boundary_docs = get_custom_layer_boundary_docs;
}
#if defined(DYNAMIC_LINK_API)
function void
custom_api_read_vtable(API_VTable_custom *vtable){
	global_set_setting = vtable->global_set_setting;
	global_get_screen_rectangle = vtable->global_get_screen_rectangle;
	get_thread_context = vtable->get_thread_context;
	create_child_process = vtable->create_child_process;
	child_process_set_target_buffer = vtable->child_process_set_target_buffer;
	buffer_get_attached_child_process = vtable->buffer_get_attached_child_process;
	child_process_get_attached_buffer = vtable->child_process_get_attached_buffer;
	child_process_get_state = vtable->child_process_get_state;
	enqueue_virtual_event = vtable->enqueue_virtual_event;
	get_buffer_count = vtable->get_buffer_count;
	get_buffer_next = vtable->get_buffer_next;
	get_buffer_by_name = vtable->get_buffer_by_name;
	get_buffer_by_file_name = vtable->get_buffer_by_file_name;
	buffer_read_range = vtable->buffer_read_range;
	buffer_replace_range = vtable->buffer_replace_range;
	buffer_batch_edit = vtable->buffer_batch_edit;
	buffer_seek_string = vtable->buffer_seek_string;
	buffer_seek_character_class = vtable->buffer_seek_character_class;
	buffer_line_y_difference = vtable->buffer_line_y_difference;
	buffer_line_shift_y = vtable->buffer_line_shift_y;
	buffer_pos_at_relative_xy = vtable->buffer_pos_at_relative_xy;
	buffer_relative_box_of_pos = vtable->buffer_relative_box_of_pos;
	buffer_padded_box_of_pos = vtable->buffer_padded_box_of_pos;
	buffer_relative_character_from_pos = vtable->buffer_relative_character_from_pos;
	buffer_pos_from_relative_character = vtable->buffer_pos_from_relative_character;
	view_line_y_difference = vtable->view_line_y_difference;
	view_line_shift_y = vtable->view_line_shift_y;
	view_pos_at_relative_xy = vtable->view_pos_at_relative_xy;
	view_relative_box_of_pos = vtable->view_relative_box_of_pos;
	view_padded_box_of_pos = vtable->view_padded_box_of_pos;
	view_relative_character_from_pos = vtable->view_relative_character_from_pos;
	view_pos_from_relative_character = vtable->view_pos_from_relative_character;
	buffer_exists = vtable->buffer_exists;
	buffer_get_access_flags = vtable->buffer_get_access_flags;
	buffer_get_size = vtable->buffer_get_size;
	buffer_get_line_count = vtable->buffer_get_line_count;
	push_buffer_base_name = vtable->push_buffer_base_name;
	push_buffer_unique_name = vtable->push_buffer_unique_name;
	push_buffer_file_name = vtable->push_buffer_file_name;
	buffer_get_dirty_state = vtable->buffer_get_dirty_state;
	buffer_set_dirty_state = vtable->buffer_set_dirty_state;
	buffer_set_layout = vtable->buffer_set_layout;
	buffer_clear_layout_cache = vtable->buffer_clear_layout_cache;
	buffer_get_layout = vtable->buffer_get_layout;
	buffer_get_setting = vtable->buffer_get_setting;
	buffer_set_setting = vtable->buffer_set_setting;
	buffer_get_managed_scope = vtable->buffer_get_managed_scope;
	buffer_send_end_signal = vtable->buffer_send_end_signal;
	create_buffer = vtable->create_buffer;
	buffer_save = vtable->buffer_save;
	buffer_kill = vtable->buffer_kill;
	buffer_reopen = vtable->buffer_reopen;
	buffer_get_file_attributes = vtable->buffer_get_file_attributes;
	get_view_next = vtable->get_view_next;
	get_view_prev = vtable->get_view_prev;
	get_this_ctx_view = vtable->get_this_ctx_view;
	get_active_view = vtable->get_active_view;
	view_exists = vtable->view_exists;
	view_get_buffer = vtable->view_get_buffer;
	view_get_cursor_pos = vtable->view_get_cursor_pos;
	view_get_mark_pos = vtable->view_get_mark_pos;
	view_get_preferred_x = vtable->view_get_preferred_x;
	view_set_preferred_x = vtable->view_set_preferred_x;
	view_get_screen_rect = vtable->view_get_screen_rect;
	view_get_panel = vtable->view_get_panel;
	panel_get_view = vtable->panel_get_view;
	panel_is_split = vtable->panel_is_split;
	panel_is_leaf = vtable->panel_is_leaf;
	panel_split = vtable->panel_split;
	panel_set_split = vtable->panel_set_split;
	panel_swap_children = vtable->panel_swap_children;
	panel_get_root = vtable->panel_get_root;
	panel_get_parent = vtable->panel_get_parent;
	panel_get_child = vtable->panel_get_child;
	view_close = vtable->view_close;
	view_get_buffer_region = vtable->view_get_buffer_region;
	view_get_buffer_scroll = vtable->view_get_buffer_scroll;
	view_set_active = vtable->view_set_active;
	view_enqueue_command_function = vtable->view_enqueue_command_function;
	view_get_setting = vtable->view_get_setting;
	view_set_setting = vtable->view_set_setting;
	view_get_managed_scope = vtable->view_get_managed_scope;
	buffer_compute_cursor = vtable->buffer_compute_cursor;
	view_compute_cursor = vtable->view_compute_cursor;
	view_set_camera_bounds = vtable->view_set_camera_bounds;
	view_get_camera_bounds = vtable->view_get_camera_bounds;
	view_set_cursor = vtable->view_set_cursor;
	view_set_buffer_scroll = vtable->view_set_buffer_scroll;
	view_set_mark = vtable->view_set_mark;
	view_quit_ui = vtable->view_quit_ui;
	view_set_buffer = vtable->view_set_buffer;
	view_push_context = vtable->view_push_context;
	view_pop_context = vtable->view_pop_context;
	view_alter_context = vtable->view_alter_context;
	view_current_context = vtable->view_current_context;
	view_current_context_hook_memory = vtable->view_current_context_hook_memory;
	create_user_managed_scope = vtable->create_user_managed_scope;
	destroy_user_managed_scope = vtable->destroy_user_managed_scope;
	get_global_managed_scope = vtable->get_global_managed_scope;
	get_managed_scope_with_multiple_dependencies = vtable->get_managed_scope_with_multiple_dependencies;
	managed_scope_clear_contents = vtable->managed_scope_clear_contents;
	managed_scope_clear_self_all_dependent_scopes = vtable->managed_scope_clear_self_all_dependent_scopes;
	managed_scope_allocator = vtable->managed_scope_allocator;
	managed_id_group_highest_id = vtable->managed_id_group_highest_id;
	managed_id_declare = vtable->managed_id_declare;
	managed_id_get = vtable->managed_id_get;
	managed_scope_get_attachment = vtable->managed_scope_get_attachment;
	managed_scope_attachment_erase = vtable->managed_scope_attachment_erase;
	alloc_managed_memory_in_scope = vtable->alloc_managed_memory_in_scope;
	alloc_buffer_markers_on_buffer = vtable->alloc_buffer_markers_on_buffer;
	managed_object_get_item_size = vtable->managed_object_get_item_size;
	managed_object_get_item_count = vtable->managed_object_get_item_count;
	managed_object_get_pointer = vtable->managed_object_get_pointer;
	managed_object_get_type = vtable->managed_object_get_type;
	managed_object_get_containing_scope = vtable->managed_object_get_containing_scope;
	managed_object_free = vtable->managed_object_free;
	managed_object_store_data = vtable->managed_object_store_data;
	managed_object_load_data = vtable->managed_object_load_data;
	get_next_input_raw = vtable->get_next_input_raw;
	get_current_input_sequence_number = vtable->get_current_input_sequence_number;
	get_current_input = vtable->get_current_input;
	set_current_input = vtable->set_current_input;
	leave_current_input_unhandled = vtable->leave_current_input_unhandled;
	set_custom_hook = vtable->set_custom_hook;
	get_custom_hook = vtable->get_custom_hook;
	set_custom_hook_memory_size = vtable->set_custom_hook_memory_size;
	get_mouse_state = vtable->get_mouse_state;
	get_active_query_bars = vtable->get_active_query_bars;
	start_query_bar = vtable->start_query_bar;
	end_query_bar = vtable->end_query_bar;
	clear_all_query_bars = vtable->clear_all_query_bars;
	print_message = vtable->print_message;
	log_string = vtable->log_string;
	get_largest_face_id = vtable->get_largest_face_id;
	set_global_face = vtable->set_global_face;
	buffer_history_get_max_record_index = vtable->buffer_history_get_max_record_index;
	buffer_history_get_record_info = vtable->buffer_history_get_record_info;
	buffer_history_get_group_sub_record = vtable->buffer_history_get_group_sub_record;
	buffer_history_get_current_state_index = vtable->buffer_history_get_current_state_index;
	buffer_history_set_current_state_index = vtable->buffer_history_set_current_state_index;
	buffer_history_merge_record_range = vtable->buffer_history_merge_record_range;
	buffer_history_clear_after_current_state = vtable->buffer_history_clear_after_current_state;
	global_history_edit_group_begin = vtable->global_history_edit_group_begin;
	global_history_edit_group_end = vtable->global_history_edit_group_end;
	buffer_set_face = vtable->buffer_set_face;
	get_face_description = vtable->get_face_description;
	get_face_metrics = vtable->get_face_metrics;
	get_face_advance_map = vtable->get_face_advance_map;
	get_face_id = vtable->get_face_id;
	try_create_new_face = vtable->try_create_new_face;
	try_modify_face = vtable->try_modify_face;
	try_release_face = vtable->try_release_face;
	push_hot_directory = vtable->push_hot_directory;
	set_hot_directory = vtable->set_hot_directory;
	send_exit_signal = vtable->send_exit_signal;
	hard_exit = vtable->hard_exit;
	set_window_title = vtable->set_window_title;
	acquire_global_frame_mutex = vtable->acquire_global_frame_mutex;
	release_global_frame_mutex = vtable->release_global_frame_mutex;
	draw_string_oriented = vtable->draw_string_oriented;
	get_string_advance = vtable->get_string_advance;
	draw_rectangle = vtable->draw_rectangle;
	draw_rectangle_outline = vtable->draw_rectangle_outline;
	draw_set_clip = vtable->draw_set_clip;
	text_layout_create = vtable->text_layout_create;
	text_layout_region = vtable->text_layout_region;
	text_layout_get_buffer = vtable->text_layout_get_buffer;
	text_layout_get_visible_range = vtable->text_layout_get_visible_range;
	text_layout_line_on_screen = vtable->text_layout_line_on_screen;
	text_layout_character_on_screen = vtable->text_layout_character_on_screen;
	paint_text_color = vtable->paint_text_color;
	paint_text_color_blend = vtable->paint_text_color_blend;
	text_layout_free = vtable->text_layout_free;
	draw_text_layout = vtable->draw_text_layout;
	open_color_picker = vtable->open_color_picker;
	animate_in_n_milliseconds = vtable->animate_in_n_milliseconds;
	buffer_find_all_matches = vtable->buffer_find_all_matches;
	get_core_profile_list = vtable->get_core_profile_list;
	get_custom_layer_boundary_docs = vtable->get_custom_layer_boundary_docs;
}
#undef DYNAMIC_LINK_API
#endif
