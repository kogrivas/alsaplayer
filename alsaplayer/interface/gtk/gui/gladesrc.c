/*
 * DO NOT EDIT THIS FILE - it is generated by Glade.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>

#include <gdk/gdkkeysyms.h>
#include <gtk/gtk.h>


#include "gladesrc.h"
#include "support.h"

GtkWidget*
create_main_window (void)
{
  GtkWidget *main_window;
  GtkWidget *main_box;
  GtkWidget *info_box;
  GtkWidget *pos_box;
  GtkWidget *pos_scale;
  GtkWidget *button_scale_box;
  GtkWidget *control_box;
  GtkWidget *button_box;
  GtkWidget *cd_button;
  GtkWidget *prev_button;
  GtkWidget *play_button;
  GtkWidget *stop_button;
  GtkWidget *next_button;
  GtkWidget *playlist_button;
  GtkWidget *audio_control_box;
  GtkWidget *hbox34;
  GtkWidget *hbox36;
  GtkWidget *reverse_button;
  GtkWidget *pause_button;
  GtkWidget *forward_button;
  GtkWidget *pitch_scale;
  GtkWidget *bal_vol_box;
  GtkWidget *hbox37;
  GtkWidget *balance_pic_frame;
  GtkWidget *bal_scale;
  GtkWidget *volume_box;
  GtkWidget *volume_frame;
  GtkWidget *volume_pix_frame;
  GtkWidget *vol_scale;

  main_window = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_object_set_data (GTK_OBJECT (main_window), "main_window", main_window);
  gtk_widget_set_usize (main_window, 408, 98);
  gtk_container_set_border_width (GTK_CONTAINER (main_window), 4);
  gtk_window_set_title (GTK_WINDOW (main_window), "AlsaPlayer");
  gtk_window_set_policy (GTK_WINDOW (main_window), TRUE, TRUE, FALSE);

  main_box = gtk_vbox_new (FALSE, 0);
  gtk_widget_ref (main_box);
  gtk_object_set_data_full (GTK_OBJECT (main_window), "main_box", main_box,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (main_box);
  gtk_container_add (GTK_CONTAINER (main_window), main_box);

  info_box = gtk_hbox_new (FALSE, 0);
  gtk_widget_ref (info_box);
  gtk_object_set_data_full (GTK_OBJECT (main_window), "info_box", info_box,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (info_box);
  gtk_box_pack_start (GTK_BOX (main_box), info_box, TRUE, TRUE, 0);

  pos_box = gtk_vbox_new (FALSE, 0);
  gtk_widget_ref (pos_box);
  gtk_object_set_data_full (GTK_OBJECT (main_window), "pos_box", pos_box,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (pos_box);
  gtk_box_pack_start (GTK_BOX (main_box), pos_box, FALSE, FALSE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (pos_box), 2);

  pos_scale = gtk_hscale_new (GTK_ADJUSTMENT (gtk_adjustment_new (0, 0, 0, 0, 0, 0)));
  gtk_widget_ref (pos_scale);
  gtk_object_set_data_full (GTK_OBJECT (main_window), "pos_scale", pos_scale,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (pos_scale);
  gtk_box_pack_start (GTK_BOX (pos_box), pos_scale, TRUE, TRUE, 0);
  gtk_scale_set_draw_value (GTK_SCALE (pos_scale), FALSE);

  button_scale_box = gtk_hbox_new (FALSE, 0);
  gtk_widget_ref (button_scale_box);
  gtk_object_set_data_full (GTK_OBJECT (main_window), "button_scale_box", button_scale_box,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (button_scale_box);
  gtk_box_pack_start (GTK_BOX (main_box), button_scale_box, FALSE, FALSE, 0);

  control_box = gtk_hbox_new (FALSE, 0);
  gtk_widget_ref (control_box);
  gtk_object_set_data_full (GTK_OBJECT (main_window), "control_box", control_box,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (control_box);
  gtk_box_pack_start (GTK_BOX (button_scale_box), control_box, FALSE, FALSE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (control_box), 2);

  button_box = gtk_hbox_new (FALSE, 0);
  gtk_widget_ref (button_box);
  gtk_object_set_data_full (GTK_OBJECT (main_window), "button_box", button_box,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (button_box);
  gtk_box_pack_start (GTK_BOX (control_box), button_box, FALSE, TRUE, 0);

  cd_button = gtk_button_new ();
  gtk_widget_ref (cd_button);
  gtk_object_set_data_full (GTK_OBJECT (main_window), "cd_button", cd_button,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (cd_button);
  gtk_box_pack_start (GTK_BOX (button_box), cd_button, FALSE, TRUE, 0);
  gtk_widget_set_usize (cd_button, 26, 24);

  prev_button = gtk_button_new ();
  gtk_widget_ref (prev_button);
  gtk_object_set_data_full (GTK_OBJECT (main_window), "prev_button", prev_button,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (prev_button);
  gtk_box_pack_start (GTK_BOX (button_box), prev_button, FALSE, TRUE, 0);
  gtk_widget_set_usize (prev_button, 26, 24);

  play_button = gtk_button_new ();
  gtk_widget_ref (play_button);
  gtk_object_set_data_full (GTK_OBJECT (main_window), "play_button", play_button,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (play_button);
  gtk_box_pack_start (GTK_BOX (button_box), play_button, FALSE, TRUE, 0);
  gtk_widget_set_usize (play_button, 26, 24);

  stop_button = gtk_button_new ();
  gtk_widget_ref (stop_button);
  gtk_object_set_data_full (GTK_OBJECT (main_window), "stop_button", stop_button,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (stop_button);
  gtk_box_pack_start (GTK_BOX (button_box), stop_button, FALSE, TRUE, 0);
  gtk_widget_set_usize (stop_button, 26, 24);

  next_button = gtk_button_new ();
  gtk_widget_ref (next_button);
  gtk_object_set_data_full (GTK_OBJECT (main_window), "next_button", next_button,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (next_button);
  gtk_box_pack_start (GTK_BOX (button_box), next_button, FALSE, TRUE, 0);
  gtk_widget_set_usize (next_button, 26, 24);

  playlist_button = gtk_button_new ();
  gtk_widget_ref (playlist_button);
  gtk_object_set_data_full (GTK_OBJECT (main_window), "playlist_button", playlist_button,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (playlist_button);
  gtk_box_pack_start (GTK_BOX (button_box), playlist_button, FALSE, TRUE, 0);
  gtk_widget_set_usize (playlist_button, 26, 24);

  audio_control_box = gtk_vbox_new (FALSE, 0);
  gtk_widget_ref (audio_control_box);
  gtk_object_set_data_full (GTK_OBJECT (main_window), "audio_control_box", audio_control_box,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (audio_control_box);
  gtk_box_pack_start (GTK_BOX (button_scale_box), audio_control_box, TRUE, TRUE, 0);

  hbox34 = gtk_hbox_new (FALSE, 0);
  gtk_widget_ref (hbox34);
  gtk_object_set_data_full (GTK_OBJECT (main_window), "hbox34", hbox34,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (hbox34);
  gtk_box_pack_start (GTK_BOX (audio_control_box), hbox34, FALSE, FALSE, 0);

  hbox36 = gtk_hbox_new (FALSE, 0);
  gtk_widget_ref (hbox36);
  gtk_object_set_data_full (GTK_OBJECT (main_window), "hbox36", hbox36,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (hbox36);
  gtk_box_pack_start (GTK_BOX (hbox34), hbox36, FALSE, FALSE, 0);

  reverse_button = gtk_button_new ();
  gtk_widget_ref (reverse_button);
  gtk_object_set_data_full (GTK_OBJECT (main_window), "reverse_button", reverse_button,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (reverse_button);
  gtk_box_pack_start (GTK_BOX (hbox36), reverse_button, TRUE, TRUE, 0);
  gtk_widget_set_usize (reverse_button, 22, 20);

  pause_button = gtk_button_new ();
  gtk_widget_ref (pause_button);
  gtk_object_set_data_full (GTK_OBJECT (main_window), "pause_button", pause_button,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (pause_button);
  gtk_box_pack_start (GTK_BOX (hbox36), pause_button, TRUE, TRUE, 0);
  gtk_widget_set_usize (pause_button, 22, 20);

  forward_button = gtk_button_new ();
  gtk_widget_ref (forward_button);
  gtk_object_set_data_full (GTK_OBJECT (main_window), "forward_button", forward_button,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (forward_button);
  gtk_box_pack_start (GTK_BOX (hbox36), forward_button, TRUE, TRUE, 0);
  gtk_widget_set_usize (forward_button, 22, 20);

  pitch_scale = gtk_hscale_new (GTK_ADJUSTMENT (gtk_adjustment_new (0, -333, 334, 1, 1, 1)));
  gtk_widget_ref (pitch_scale);
  gtk_object_set_data_full (GTK_OBJECT (main_window), "pitch_scale", pitch_scale,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (pitch_scale);
  gtk_box_pack_start (GTK_BOX (hbox34), pitch_scale, TRUE, TRUE, 0);
  gtk_scale_set_draw_value (GTK_SCALE (pitch_scale), FALSE);

  bal_vol_box = gtk_hbox_new (FALSE, 0);
  gtk_widget_ref (bal_vol_box);
  gtk_object_set_data_full (GTK_OBJECT (main_window), "bal_vol_box", bal_vol_box,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (bal_vol_box);
  gtk_box_pack_start (GTK_BOX (audio_control_box), bal_vol_box, TRUE, FALSE, 0);

  hbox37 = gtk_hbox_new (FALSE, 0);
  gtk_widget_ref (hbox37);
  gtk_object_set_data_full (GTK_OBJECT (main_window), "hbox37", hbox37,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (hbox37);
  gtk_box_pack_start (GTK_BOX (bal_vol_box), hbox37, TRUE, TRUE, 0);

  balance_pic_frame = gtk_vbox_new (FALSE, 0);
  gtk_widget_ref (balance_pic_frame);
  gtk_object_set_data_full (GTK_OBJECT (main_window), "balance_pic_frame", balance_pic_frame,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (balance_pic_frame);
  gtk_box_pack_start (GTK_BOX (hbox37), balance_pic_frame, FALSE, TRUE, 0);
  gtk_widget_set_usize (balance_pic_frame, 30, -2);

  bal_scale = gtk_hscale_new (GTK_ADJUSTMENT (gtk_adjustment_new (100, 0, 201, 1, 1, 1)));
  gtk_widget_ref (bal_scale);
  gtk_object_set_data_full (GTK_OBJECT (main_window), "bal_scale", bal_scale,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (bal_scale);
  gtk_box_pack_start (GTK_BOX (hbox37), bal_scale, TRUE, TRUE, 0);
  gtk_scale_set_draw_value (GTK_SCALE (bal_scale), FALSE);

  volume_box = gtk_hbox_new (FALSE, 0);
  gtk_widget_ref (volume_box);
  gtk_object_set_data_full (GTK_OBJECT (main_window), "volume_box", volume_box,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (volume_box);
  gtk_box_pack_start (GTK_BOX (bal_vol_box), volume_box, TRUE, TRUE, 0);

  volume_frame = gtk_hbox_new (FALSE, 0);
  gtk_widget_ref (volume_frame);
  gtk_object_set_data_full (GTK_OBJECT (main_window), "volume_frame", volume_frame,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (volume_frame);
  gtk_box_pack_start (GTK_BOX (volume_box), volume_frame, TRUE, TRUE, 0);

  volume_pix_frame = gtk_vbox_new (FALSE, 0);
  gtk_widget_ref (volume_pix_frame);
  gtk_object_set_data_full (GTK_OBJECT (main_window), "volume_pix_frame", volume_pix_frame,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (volume_pix_frame);
  gtk_box_pack_start (GTK_BOX (volume_frame), volume_pix_frame, FALSE, TRUE, 0);
  gtk_widget_set_usize (volume_pix_frame, 18, -2);

  vol_scale = gtk_hscale_new (GTK_ADJUSTMENT (gtk_adjustment_new (14, 0, 14, 1, 1, 1)));
  gtk_widget_ref (vol_scale);
  gtk_object_set_data_full (GTK_OBJECT (main_window), "vol_scale", vol_scale,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (vol_scale);
  gtk_box_pack_start (GTK_BOX (volume_frame), vol_scale, TRUE, TRUE, 0);
  gtk_scale_set_draw_value (GTK_SCALE (vol_scale), FALSE);

  return main_window;
}

GtkWidget*
create_playlist_window (void)
{
  GtkWidget *playlist_window;
  GtkWidget *vbox5;
  GtkWidget *hbox16;
  GtkWidget *scrolledwindow1;
  GtkWidget *viewport1;
  GtkWidget *playlist;
  GtkWidget *label2;
  GtkWidget *label3;
  GtkWidget *vbox6;
  GtkWidget *add_button;
  GtkWidget *load_button;
  GtkWidget *save_button;
  GtkWidget *close_button;
  GtkWidget *shuffle_button;
  GtkWidget *vbox24;
  GtkWidget *del_button;
  GtkWidget *clear_button;
  GtkWidget *playlist_status;

  playlist_window = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_object_set_data (GTK_OBJECT (playlist_window), "playlist_window", playlist_window);
  gtk_widget_set_usize (playlist_window, 480, 270);
  gtk_window_set_title (GTK_WINDOW (playlist_window), "Queue");

  vbox5 = gtk_vbox_new (FALSE, 0);
  gtk_widget_ref (vbox5);
  gtk_object_set_data_full (GTK_OBJECT (playlist_window), "vbox5", vbox5,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (vbox5);
  gtk_container_add (GTK_CONTAINER (playlist_window), vbox5);

  hbox16 = gtk_hbox_new (FALSE, 0);
  gtk_widget_ref (hbox16);
  gtk_object_set_data_full (GTK_OBJECT (playlist_window), "hbox16", hbox16,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (hbox16);
  gtk_box_pack_start (GTK_BOX (vbox5), hbox16, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (hbox16), 8);

  scrolledwindow1 = gtk_scrolled_window_new (NULL, NULL);
  gtk_widget_ref (scrolledwindow1);
  gtk_object_set_data_full (GTK_OBJECT (playlist_window), "scrolledwindow1", scrolledwindow1,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (scrolledwindow1);
  gtk_box_pack_start (GTK_BOX (hbox16), scrolledwindow1, TRUE, TRUE, 0);
  gtk_scrolled_window_set_policy (GTK_SCROLLED_WINDOW (scrolledwindow1), GTK_POLICY_AUTOMATIC, GTK_POLICY_AUTOMATIC);

  viewport1 = gtk_viewport_new (NULL, NULL);
  gtk_widget_ref (viewport1);
  gtk_object_set_data_full (GTK_OBJECT (playlist_window), "viewport1", viewport1,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (viewport1);
  gtk_container_add (GTK_CONTAINER (scrolledwindow1), viewport1);
  gtk_viewport_set_shadow_type (GTK_VIEWPORT (viewport1), GTK_SHADOW_NONE);

  playlist = gtk_clist_new (2);
  gtk_widget_ref (playlist);
  gtk_object_set_data_full (GTK_OBJECT (playlist_window), "playlist", playlist,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (playlist);
  gtk_container_add (GTK_CONTAINER (viewport1), playlist);
  gtk_clist_set_column_width (GTK_CLIST (playlist), 0, 80);
  gtk_clist_set_column_width (GTK_CLIST (playlist), 1, 80);
  gtk_clist_column_titles_hide (GTK_CLIST (playlist));

  label2 = gtk_label_new ("label2");
  gtk_widget_ref (label2);
  gtk_object_set_data_full (GTK_OBJECT (playlist_window), "label2", label2,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (label2);
  gtk_clist_set_column_widget (GTK_CLIST (playlist), 0, label2);

  label3 = gtk_label_new ("label3");
  gtk_widget_ref (label3);
  gtk_object_set_data_full (GTK_OBJECT (playlist_window), "label3", label3,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (label3);
  gtk_clist_set_column_widget (GTK_CLIST (playlist), 1, label3);

  vbox6 = gtk_vbox_new (FALSE, 6);
  gtk_widget_ref (vbox6);
  gtk_object_set_data_full (GTK_OBJECT (playlist_window), "vbox6", vbox6,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (vbox6);
  gtk_box_pack_start (GTK_BOX (hbox16), vbox6, FALSE, TRUE, 6);

  add_button = gtk_button_new_with_label ("Add...");
  gtk_widget_ref (add_button);
  gtk_object_set_data_full (GTK_OBJECT (playlist_window), "add_button", add_button,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (add_button);
  gtk_box_pack_start (GTK_BOX (vbox6), add_button, FALSE, TRUE, 0);
  gtk_widget_set_usize (add_button, 70, 22);

  load_button = gtk_button_new_with_label ("Load...");
  gtk_widget_ref (load_button);
  gtk_object_set_data_full (GTK_OBJECT (playlist_window), "load_button", load_button,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (load_button);
  gtk_box_pack_start (GTK_BOX (vbox6), load_button, FALSE, TRUE, 0);
  gtk_widget_set_usize (load_button, 70, -2);

  save_button = gtk_button_new_with_label ("Save...");
  gtk_widget_ref (save_button);
  gtk_object_set_data_full (GTK_OBJECT (playlist_window), "save_button", save_button,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (save_button);
  gtk_box_pack_start (GTK_BOX (vbox6), save_button, FALSE, TRUE, 0);
  gtk_widget_set_usize (save_button, 70, -2);

  close_button = gtk_button_new_with_label ("close");
  gtk_widget_ref (close_button);
  gtk_object_set_data_full (GTK_OBJECT (playlist_window), "close_button", close_button,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (close_button);
  gtk_box_pack_end (GTK_BOX (vbox6), close_button, FALSE, TRUE, 0);

  shuffle_button = gtk_button_new_with_label ("shuffle");
  gtk_widget_ref (shuffle_button);
  gtk_object_set_data_full (GTK_OBJECT (playlist_window), "shuffle_button", shuffle_button,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (shuffle_button);
  gtk_box_pack_start (GTK_BOX (vbox6), shuffle_button, FALSE, FALSE, 0);

  vbox24 = gtk_vbox_new (FALSE, 0);
  gtk_widget_ref (vbox24);
  gtk_object_set_data_full (GTK_OBJECT (playlist_window), "vbox24", vbox24,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (vbox24);
  gtk_box_pack_start (GTK_BOX (vbox6), vbox24, FALSE, TRUE, 18);

  del_button = gtk_button_new_with_label ("remove");
  gtk_widget_ref (del_button);
  gtk_object_set_data_full (GTK_OBJECT (playlist_window), "del_button", del_button,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (del_button);
  gtk_box_pack_start (GTK_BOX (vbox24), del_button, FALSE, FALSE, 0);

  clear_button = gtk_button_new_with_label ("clear");
  gtk_widget_ref (clear_button);
  gtk_object_set_data_full (GTK_OBJECT (playlist_window), "clear_button", clear_button,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (clear_button);
  gtk_box_pack_start (GTK_BOX (vbox24), clear_button, FALSE, FALSE, 6);

  playlist_status = gtk_vbox_new (FALSE, 0);
  gtk_widget_ref (playlist_status);
  gtk_object_set_data_full (GTK_OBJECT (playlist_window), "playlist_status", playlist_status,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (playlist_status);
  gtk_box_pack_start (GTK_BOX (vbox5), playlist_status, FALSE, TRUE, 4);

  return playlist_window;
}

GtkWidget*
create_playlist_load (void)
{
  GtkWidget *playlist_load;
  GtkWidget *ok_button1;
  GtkWidget *cancel_button1;

  playlist_load = gtk_file_selection_new ("Load Playlist");
  gtk_object_set_data (GTK_OBJECT (playlist_load), "playlist_load", playlist_load);
  gtk_container_set_border_width (GTK_CONTAINER (playlist_load), 10);

  ok_button1 = GTK_FILE_SELECTION (playlist_load)->ok_button;
  gtk_object_set_data (GTK_OBJECT (playlist_load), "ok_button1", ok_button1);
  gtk_widget_show (ok_button1);
  GTK_WIDGET_SET_FLAGS (ok_button1, GTK_CAN_DEFAULT);

  cancel_button1 = GTK_FILE_SELECTION (playlist_load)->cancel_button;
  gtk_object_set_data (GTK_OBJECT (playlist_load), "cancel_button1", cancel_button1);
  gtk_widget_show (cancel_button1);
  GTK_WIDGET_SET_FLAGS (cancel_button1, GTK_CAN_DEFAULT);

  return playlist_load;
}

GtkWidget*
create_playlist_save (void)
{
  GtkWidget *playlist_save;
  GtkWidget *ok_button2;
  GtkWidget *cancel_button2;

  playlist_save = gtk_file_selection_new ("Save Playlist");
  gtk_object_set_data (GTK_OBJECT (playlist_save), "playlist_save", playlist_save);
  gtk_container_set_border_width (GTK_CONTAINER (playlist_save), 10);

  ok_button2 = GTK_FILE_SELECTION (playlist_save)->ok_button;
  gtk_object_set_data (GTK_OBJECT (playlist_save), "ok_button2", ok_button2);
  gtk_widget_show (ok_button2);
  GTK_WIDGET_SET_FLAGS (ok_button2, GTK_CAN_DEFAULT);

  cancel_button2 = GTK_FILE_SELECTION (playlist_save)->cancel_button;
  gtk_object_set_data (GTK_OBJECT (playlist_save), "cancel_button2", cancel_button2);
  gtk_widget_show (cancel_button2);
  GTK_WIDGET_SET_FLAGS (cancel_button2, GTK_CAN_DEFAULT);

  return playlist_save;
}

GtkWidget*
create_effects_window (void)
{
  GtkWidget *effects_window;
  GtkWidget *vbox23;
  GtkWidget *hbox31;
  GtkWidget *plugin_list_box;
  GtkWidget *effects_list;
  GtkWidget *label16;
  GtkWidget *label17;
  GtkWidget *parameter_box;
  GtkWidget *button_box;
  GtkWidget *ok_button;

  effects_window = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_object_set_data (GTK_OBJECT (effects_window), "effects_window", effects_window);
  gtk_widget_set_usize (effects_window, 500, 300);
  gtk_window_set_title (GTK_WINDOW (effects_window), "Effects");

  vbox23 = gtk_vbox_new (FALSE, 0);
  gtk_widget_ref (vbox23);
  gtk_object_set_data_full (GTK_OBJECT (effects_window), "vbox23", vbox23,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (vbox23);
  gtk_container_add (GTK_CONTAINER (effects_window), vbox23);

  hbox31 = gtk_hbox_new (FALSE, 0);
  gtk_widget_ref (hbox31);
  gtk_object_set_data_full (GTK_OBJECT (effects_window), "hbox31", hbox31,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (hbox31);
  gtk_box_pack_start (GTK_BOX (vbox23), hbox31, TRUE, TRUE, 0);

  plugin_list_box = gtk_vbox_new (FALSE, 0);
  gtk_widget_ref (plugin_list_box);
  gtk_object_set_data_full (GTK_OBJECT (effects_window), "plugin_list_box", plugin_list_box,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (plugin_list_box);
  gtk_box_pack_start (GTK_BOX (hbox31), plugin_list_box, FALSE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (plugin_list_box), 8);

  effects_list = gtk_ctree_new (2, 0);
  gtk_widget_ref (effects_list);
  gtk_object_set_data_full (GTK_OBJECT (effects_window), "effects_list", effects_list,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (effects_list);
  gtk_box_pack_start (GTK_BOX (plugin_list_box), effects_list, TRUE, TRUE, 0);
  gtk_clist_set_column_width (GTK_CLIST (effects_list), 0, 80);
  gtk_clist_set_column_width (GTK_CLIST (effects_list), 1, 80);
  gtk_clist_column_titles_hide (GTK_CLIST (effects_list));

  label16 = gtk_label_new ("label16");
  gtk_widget_ref (label16);
  gtk_object_set_data_full (GTK_OBJECT (effects_window), "label16", label16,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (label16);
  gtk_clist_set_column_widget (GTK_CLIST (effects_list), 0, label16);

  label17 = gtk_label_new ("label17");
  gtk_widget_ref (label17);
  gtk_object_set_data_full (GTK_OBJECT (effects_window), "label17", label17,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (label17);
  gtk_clist_set_column_widget (GTK_CLIST (effects_list), 1, label17);

  parameter_box = gtk_vbox_new (FALSE, 0);
  gtk_widget_ref (parameter_box);
  gtk_object_set_data_full (GTK_OBJECT (effects_window), "parameter_box", parameter_box,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (parameter_box);
  gtk_box_pack_start (GTK_BOX (hbox31), parameter_box, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (parameter_box), 8);

  button_box = gtk_hbox_new (FALSE, 0);
  gtk_widget_ref (button_box);
  gtk_object_set_data_full (GTK_OBJECT (effects_window), "button_box", button_box,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (button_box);
  gtk_box_pack_start (GTK_BOX (vbox23), button_box, FALSE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (button_box), 8);

  ok_button = gtk_button_new_with_label ("OK");
  gtk_widget_ref (ok_button);
  gtk_object_set_data_full (GTK_OBJECT (effects_window), "ok_button", ok_button,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (ok_button);
  gtk_box_pack_end (GTK_BOX (button_box), ok_button, FALSE, TRUE, 0);
  gtk_widget_set_usize (ok_button, 80, -2);

  return effects_window;
}

GtkWidget*
create_scopes_window (void)
{
  GtkWidget *scopes_window;
  GtkWidget *vbox22;
  GtkWidget *hbox38;
  GtkWidget *label18;
  GtkWidget *scopes_list_box;
  GtkWidget *scopes_list;
  GtkWidget *label14;
  GtkWidget *label15;
  GtkWidget *hbox32;
  GtkWidget *ok_button;

  scopes_window = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_object_set_data (GTK_OBJECT (scopes_window), "scopes_window", scopes_window);
  gtk_window_set_title (GTK_WINDOW (scopes_window), "Scopes");

  vbox22 = gtk_vbox_new (FALSE, 0);
  gtk_widget_ref (vbox22);
  gtk_object_set_data_full (GTK_OBJECT (scopes_window), "vbox22", vbox22,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (vbox22);
  gtk_container_add (GTK_CONTAINER (scopes_window), vbox22);

  hbox38 = gtk_hbox_new (FALSE, 0);
  gtk_widget_ref (hbox38);
  gtk_object_set_data_full (GTK_OBJECT (scopes_window), "hbox38", hbox38,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (hbox38);
  gtk_box_pack_start (GTK_BOX (vbox22), hbox38, FALSE, TRUE, 5);

  label18 = gtk_label_new ("Double click to activate");
  gtk_widget_ref (label18);
  gtk_object_set_data_full (GTK_OBJECT (scopes_window), "label18", label18,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (label18);
  gtk_box_pack_start (GTK_BOX (hbox38), label18, FALSE, FALSE, 10);

  scopes_list_box = gtk_hbox_new (FALSE, 0);
  gtk_widget_ref (scopes_list_box);
  gtk_object_set_data_full (GTK_OBJECT (scopes_window), "scopes_list_box", scopes_list_box,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (scopes_list_box);
  gtk_box_pack_start (GTK_BOX (vbox22), scopes_list_box, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (scopes_list_box), 8);

  scopes_list = gtk_clist_new (2);
  gtk_widget_ref (scopes_list);
  gtk_object_set_data_full (GTK_OBJECT (scopes_window), "scopes_list", scopes_list,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (scopes_list);
  gtk_box_pack_start (GTK_BOX (scopes_list_box), scopes_list, TRUE, TRUE, 0);
  gtk_widget_set_usize (scopes_list, 150, 180);
  gtk_clist_set_column_width (GTK_CLIST (scopes_list), 0, 49);
  gtk_clist_set_column_width (GTK_CLIST (scopes_list), 1, 80);
  gtk_clist_column_titles_hide (GTK_CLIST (scopes_list));

  label14 = gtk_label_new ("label14");
  gtk_widget_ref (label14);
  gtk_object_set_data_full (GTK_OBJECT (scopes_window), "label14", label14,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (label14);
  gtk_clist_set_column_widget (GTK_CLIST (scopes_list), 0, label14);

  label15 = gtk_label_new ("label15");
  gtk_widget_ref (label15);
  gtk_object_set_data_full (GTK_OBJECT (scopes_window), "label15", label15,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (label15);
  gtk_clist_set_column_widget (GTK_CLIST (scopes_list), 1, label15);

  hbox32 = gtk_hbox_new (FALSE, 0);
  gtk_widget_ref (hbox32);
  gtk_object_set_data_full (GTK_OBJECT (scopes_window), "hbox32", hbox32,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (hbox32);
  gtk_box_pack_start (GTK_BOX (vbox22), hbox32, FALSE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (hbox32), 8);

  ok_button = gtk_button_new_with_label ("Close");
  gtk_widget_ref (ok_button);
  gtk_object_set_data_full (GTK_OBJECT (scopes_window), "ok_button", ok_button,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (ok_button);
  gtk_box_pack_end (GTK_BOX (hbox32), ok_button, FALSE, TRUE, 0);
  gtk_widget_set_usize (ok_button, 80, -2);

  return scopes_window;
}

GtkWidget*
create_fileselection1 (void)
{
  GtkWidget *fileselection1;
  GtkWidget *ok_button3;
  GtkWidget *cancel_button3;

  fileselection1 = gtk_file_selection_new ("Select File");
  gtk_object_set_data (GTK_OBJECT (fileselection1), "fileselection1", fileselection1);
  gtk_container_set_border_width (GTK_CONTAINER (fileselection1), 10);

  ok_button3 = GTK_FILE_SELECTION (fileselection1)->ok_button;
  gtk_object_set_data (GTK_OBJECT (fileselection1), "ok_button3", ok_button3);
  gtk_widget_show (ok_button3);
  GTK_WIDGET_SET_FLAGS (ok_button3, GTK_CAN_DEFAULT);

  cancel_button3 = GTK_FILE_SELECTION (fileselection1)->cancel_button;
  gtk_object_set_data (GTK_OBJECT (fileselection1), "cancel_button3", cancel_button3);
  gtk_widget_show (cancel_button3);
  GTK_WIDGET_SET_FLAGS (cancel_button3, GTK_CAN_DEFAULT);

  return fileselection1;
}

